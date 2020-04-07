//
//  SIColor.h
//
//  Created by Ye Tao on 2017/3/3.
//
//

#import <UIKit/UIKit.h>

@interface SIColor : UIColor

/*!
 *  @brief 转化16进制值[0x1234ab]->UIColor
 *  @param hexValue 如: 0x1234ab
 *  @return 16进制值对应的颜色
 *  @code
    [SIColor colorWithHex:0x1234ab];
 */
+ (UIColor *)colorWithHex:(unsigned long)hexValue;

/*!
 *  @brief 转化16进制值[0x1234ab]->UIColor
 *  @param hexValue 如: 0x1234ab
 *  @param alpha 如: 0.4
 *  @return 16进制值以及alpha对应的颜色
 *  @code
    [SIColor colorWithHex:0x1234ab alpha:0.3];
 */
+ (UIColor *)colorWithHex:(unsigned long)hexValue alpha:(CGFloat)alpha;

@end

@interface SIColor (Theme)

/*!
 *  @brief 主题色 ->UIColor
 */
@property (class, nonatomic, readonly) UIColor *primaryColor;

/*!
 *  @brief 主题色调的16进制值[0x926DEA]
 */
@property (class, nonatomic, readonly) unsigned long primaryColorHex;

@property (class, nonatomic, readonly) UIColor *goldenColor;

@end
