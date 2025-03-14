/*!
 @header IXUAFAuthenticator
 FIDO Authenticator
 @copyright Daon. All rights reserved.
 @updated 2018-05-20
 */

#import <Foundation/Foundation.h>
#import <DaonFIDOSDK/IXUAFAssertion.h>


typedef NS_ENUM (NSInteger, IXUAFAuthenticatorLockState)
{
    IXUAFAuthenticatorLockStateUnlocked   = 0,
    IXUAFAuthenticatorLockStateTemporary  = 1,
    IXUAFAuthenticatorLockStatePermanent  = 2,
};

static NSString * const kIXUAFAAIDPasscode          = @"D409#2301";
static NSString * const kIXUAFAAIDADOSPasscode      = @"D409#9301";
static NSString * const kIXUAFAAIDADOSSRPPasscode   = @"D409#9302";
static NSString * const kIXUAFAAIDFaceV3            = @"D409#2203";
static NSString * const kIXUAFAAIDFace              = @"D409#2205";
static NSString * const kIXUAFAAIDADOSFace          = @"D409#9201";
static NSString * const kIXUAFAAIDTouchID           = @"D409#2101";
static NSString * const kIXUAFAAIDFaceID            = @"D409#2204";
static NSString * const kIXUAFAAIDOOTP              = @"D409#2801";
static NSString * const kIXUAFAAIDPalm              = @"D409#2901";
static NSString * const kIXUAFAAIDSilent            = @"D409#2601";
static NSString * const kIXUAFAAIDVoice             = @"D409#2401";
static NSString * const kIXUAFAAIDADOSVoice         = @"D409#9401";


static NSInteger const kIXUAFTypeFinger     = 1;
static NSInteger const kIXUAFTypeFace       = 2;
static NSInteger const kIXUAFTypePasscode   = 3;
static NSInteger const kIXUAFTypeVoice      = 4;
static NSInteger const kIXUAFTypePattern    = 5;
static NSInteger const kIXUAFTypeSilent     = 6;
static NSInteger const kIXUAFTypeEye        = 7;
static NSInteger const kIXUAFTypeOOTP       = 8;
static NSInteger const kIXUAFTypePalm       = 9;



static NSString * const kIXUAFInfoAttempts      = @"globalAttempt";
static NSString * const kIXUAFInfoAccount       = @"account";
static NSString * const kIXUAFInfoLockStatus    = @"lockStatus";
static NSString * const kIXUAFInfoErrorCode     = @"errorCode";
static NSString * const kIXUAFInfoScore         = @"score";
static NSString * const kIXUAFInfoFactor        = @"factor";
static NSString * const kIXUAFInfoAttempt       = @"Attempt";
static NSString * const kIXUAFInfoAuthenticator = @"authenticator";
static NSString * const kIXUAFInfoApplication   = @"application";
static NSString * const kIXUAFInfoFIDOMessage   = @"fidoMessage";
static NSString * const kIXUAFInfoKeyID         = @"userAuthKeyId";
static NSString * const kIXUAFConfirmationOTP   = @"otp";
static NSString * const kIXUAFOOTP              = @"otp";
static NSString * const kIXUAFOOTPExpiration    = @"expiration";
static NSString * const kIXUAFOOTPData          = @"data";
static NSString * const kIXUAFOOTPUsername      = @"username";

static NSString * const kIXUAFInfoAttemptsUser          = @"user.attempts.count";
static NSString * const kIXUAFInfoAttemptsUserMax       = @"user.attempts.max";
static NSString * const kIXUAFInfoAttemptsUserRemaining = @"user.attempts.remaining";

@interface IXUAFAuthenticator : NSObject

@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *aaid;
@property (nonatomic, strong, readonly) NSString *assertionScheme;
@property (nonatomic, assign, readonly) NSInteger authenticationAlgorithm;
@property (nonatomic, assign, readonly) NSInteger publicKeyAlgAndEncoding;
@property (nonatomic, strong, readonly) NSArray<NSNumber *> *attestationTypes;
@property (nonatomic, assign, readonly) NSInteger userVerification;
@property (nonatomic, assign, readonly) NSInteger keyProtection;
@property (nonatomic, assign, readonly) NSInteger matcherProtection;
@property (nonatomic, assign, readonly) NSInteger attachmentHint;
@property (nonatomic, assign, readonly) BOOL secondFactorOnly;
@property (nonatomic, assign, readonly) NSInteger tcDisplay;
@property (nonatomic, strong, readonly) NSString *tcDisplayContentType;
@property (nonatomic, strong, readonly) NSArray<NSDictionary*> *tcDisplayPNGCharacteristics;
@property (nonatomic, strong, readonly) NSString *icon;
@property (nonatomic, strong, readonly) NSArray* supportedExtensionIds;
@property (nonatomic, assign, readonly) BOOL registered;
@property (nonatomic, assign, readonly) BOOL locked;
@property (nonatomic, assign, readonly) BOOL ados;
@property (nonatomic, assign, readonly) BOOL silent;
@property (nonatomic, assign, readonly) NSInteger factor;
@property (nonatomic, strong, readonly) id internal;

- (id) initWithFactor:(NSInteger)factor;

/*!
 @brief Get authenticator as dictionary
 */
- (NSDictionary*) dictionary;

/*!
 @brief Check if the authenticator is registered for a user
 @param username The username
 @param appId The FIDO application ID
 */
- (BOOL) registeredWithUsername:(NSString*)username appId:(NSString*)appId;

/*!
 @brief Check if this authenticator has valid keys
 */
- (BOOL) hasValidKeys;

/*!
 @brief If locked, get the locked until time
 @return Time in milliseconds since epoc
 */
- (long long) lockedUntil;

/*!
 @brief Get lock status
 */
- (IXUAFAuthenticatorLockState) lockStatus;

/*!
 @brief Check if supported
 */
- (BOOL) isSupported;

- (id<IXUAFAssertion>) assertionWithChallenge:(NSString*)challenge
                                     username:(NSString*)username
                                          key:(NSString*)key;

- (id<IXUAFAssertion>) assertionWithChallenge:(NSString*)challenge
                                      content:(NSData*)content
                                     username:(NSString*)username
                                          key:(NSString*)key;

@end
