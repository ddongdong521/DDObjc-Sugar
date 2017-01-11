//
//  UIView+DDObjceSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (DDObjcSugar)
#pragma mark - Frame
/// 视图原点
@property (nonatomic) CGPoint dd_viewOrigin;
/// 视图尺寸
@property (nonatomic) CGSize dd_viewSize;

#pragma mark - Frame Origin
/// frame 原点 x 值
@property (nonatomic) CGFloat dd_x;
/// frame 原点 y 值
@property (nonatomic) CGFloat dd_y;

#pragma mark - Frame Size
/// frame 尺寸 width
@property (nonatomic) CGFloat dd_width;
/// frame 尺寸 height
@property (nonatomic) CGFloat dd_height;

#pragma mark - 截屏
/// 当前视图内容生成的图像
@property (nonatomic, readonly, nullable)UIImage *dd_capturedImage;

@end
