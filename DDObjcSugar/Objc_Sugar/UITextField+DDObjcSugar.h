//
//  UITextField+DDObjcSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (DDObjcSugar)
/// 实例化 UITextField
///
/// @param placeHolder     占位文本
///
/// @return UITextField
+ (nonnull instancetype)dd_textFieldWithPlaceHolder:(nonnull NSString *)placeHolder;

@end
