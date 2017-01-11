//
//  UIScreen+DDObjcSugar.m
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import "UIScreen+DDObjcSugar.h"

@implementation UIScreen (DDObjcSugar)
//返回屏幕高度
+ (CGFloat)dd_screenHeight{
    return [UIScreen mainScreen].bounds.size.height;
}
//返回屏幕宽度
+ (CGFloat)dd_screenWidth{
    return [UIScreen mainScreen].bounds.size.width;
}
//分辨率
+ (CGFloat)dd_scale{
    return [UIScreen mainScreen].scale;
}

@end
