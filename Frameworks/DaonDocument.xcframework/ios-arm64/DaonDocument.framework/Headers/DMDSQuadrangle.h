
#import <UIKit/UIKit.h>

/*!
 Represents a quadrangle (arbitrary geometric object with 4 different corner points).
 */
@interface DMDSQuadrangle : NSObject

// MARK: - Properties

/*!
 Upper left point
 */
@property (nonatomic, assign) CGPoint upperLeft;

/*!
 Upper right point
 */
@property (nonatomic, assign) CGPoint upperRight;

/*!
 Lower left point
 */
@property (nonatomic, assign) CGPoint lowerLeft;

/*!
 Lower right point
 */
@property (nonatomic, assign) CGPoint lowerRight;

// MARK: - Debug

/*!
 @abstract Return the description of the relevant properties of this object at runtime for debugging purposes.
 */
- (NSString*) description;

// MARK: - Utilities

/*!
 Whether or not a quadrangle is nil or has all zero points.
 */
+ (BOOL) isZero:(DMDSQuadrangle*)quadrangle;

@end
