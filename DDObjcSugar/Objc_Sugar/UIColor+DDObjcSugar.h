//
//  UIColor+DDObjcSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (DDObjcSugar)
#pragma mark - 颜色函数
/// 使用十六进制数字生成颜色
///
/// @param hex hex，格式 0xFFEEDD
///
/// @return UIColor
+ (nonnull instancetype)dd_colorWithHex:(u_int32_t)hex;

/// 使用指定的 r / g / b 数值生成颜色
///
/// @param red   red
/// @param green green
/// @param blue  blue
///
/// @return UIColor
+ (nonnull instancetype)dd_colorWithRed:(u_int8_t)red green:(u_int8_t)green blue:(u_int8_t)blue;

/// 生成随机颜色
///
/// @return UIColor
+ (nonnull instancetype)dd_randomColor;

#pragma mark - 颜色值
/// 返回当前颜色的 red 的 0～255 值
- (u_int8_t)dd_redValue;
/// 返回当前颜色的 green 的 0～255 值
- (u_int8_t)dd_greenValue;
/// 返回当前颜色的 blue 的 0～255 值
- (u_int8_t)dd_blueValue;
/// 返回当前颜色的 alpha 值
- (CGFloat)dd_alphaValue;

@end
