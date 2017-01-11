//
//  UIScreen+DDObjcSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (DDObjcSugar)
//返回屏幕高度
+ (CGFloat)dd_screenHeight;
//返回屏幕宽度
+ (CGFloat)dd_screenWidth;
//分辨率
+ (CGFloat)dd_scale;
@end
