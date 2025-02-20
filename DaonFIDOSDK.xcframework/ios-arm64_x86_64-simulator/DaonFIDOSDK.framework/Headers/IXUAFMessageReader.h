/*!
 @header IXUAFMessageReader
 Utility class for decoding FIDO messages.
 @copyright Daon. All rights reserved.
 @updated 2018-05-20
 */

#import <Foundation/Foundation.h>
#import <DaonFIDOSDK/IXUAFTransaction.h>
#import <DaonFIDOSDK/IXUAFVersion.h>

@interface IXUAFMessageReader : NSObject

/*!
 @brief Get Reader with message
 */
+ (IXUAFMessageReader*_Nonnull) readerWithMessage:(NSString*_Nonnull)message;

/*!
@brief Get Reader with message
@param validate If true, check if the message is a valid FIDO message.
*/
+ (IXUAFMessageReader*_Nonnull) readerWithMessage:(NSString*_Nonnull)message validate:(BOOL)validate;

/*!
 @brief Get Reader with dictionary
 */
+ (IXUAFMessageReader*_Nonnull) readerWithDictionary:(NSDictionary*_Nonnull)message;

/*!
 @brief Create Reader with message
 @param validate If true, check if the message is a valid FIDO message.
 */
- (id _Nonnull ) initWithMessage:(NSString*_Nonnull)message validate:(BOOL)validate;

/*!
 @brief Create Reader with dictionary
 */
- (id _Nonnull) initWithDictionary:(NSDictionary*_Nonnull)message;

/*!
 @brief Returns true if the message requires transaction confirmation
 */
- (BOOL) requiresTransactionConfirmation;

/*!
 @brief Get transaction confirmation object
 */
- (IXUAFTransaction*_Nullable) transaction;

/*!
 @brief true if this is a registration message
 */
- (BOOL) isRegistration;

/*!
 @brief true if this is an authentication message
 */
- (BOOL) isAuthentication;

/*!
 @brief true if this is a de-registration message
 */
- (BOOL) isDeregistration;

/*!
 @brief Get Application ID if available
 */
- (NSString*_Nullable) application;

/*!
 @brief Get version
 */
- (IXUAFVersion*_Nonnull) version;

/*!
 @brief Get header extensions
 */
- (NSDictionary*_Nonnull) extensions;

/*!
 @brief Get final challenge, eg. fcparam
 */
- (NSDictionary<NSString*,id>*_Nullable) fcParams;

- (NSArray<NSArray<NSString*>*> *_Nonnull) accepted;

/*!
 @brief Get assertion extensions. A dictionary mapping AAIDs to extensions.
 */
- (NSDictionary*_Nonnull) assertionExtensions;

/*!
 @brief Get OTP (if enabled on the policy)
 */
- (NSString*_Nullable) otp;

/*!
 @brief Get assertions
 @discussion Parse registration and authentication assertions.
 Array of NSNumber -> NSData (see FIDO spec for tag ids)
 */
- (NSArray<NSDictionary<NSNumber*, NSData*>*>*_Nonnull) assertions;

/*!
 @brief Check trusted facets.
 @discussion This method will potentially make a network call.
 */
- (void) checkTrustedFacetsWithCompletion:(void (^_Nonnull)(BOOL trusted))completionHandler;

@end
