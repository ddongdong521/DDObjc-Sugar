//
//  UIImage+DDObjcSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (DDObjcSugar)
// 生成指定颜色的一个`点`的图像
//
// @param color 颜色
//
// @return 1 * 1 图像
+ (nonnull UIImage *)dd_singleDotImageWithColor:(nonnull UIColor *)color;


/**
 异步绘制圆角图片

 @param size       要生成图片的size
 @param fillColor  背景色
 @param completion 完成回调
 */
/// 根据当前图像，和指定的尺寸，生成圆角图像并且返回
- (void)dd_cornerImageWithSize:(CGSize)size fillColor:(UIColor *)fillColor completion:(void (^)(UIImage * image))completion;
@end
