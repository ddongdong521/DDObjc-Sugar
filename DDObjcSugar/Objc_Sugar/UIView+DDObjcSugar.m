//
//  UIView+DDObjceSugar.m
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import "UIView+DDObjcSugar.h"

@implementation UIView (DDObjcSugar)
#pragma mark - Frame
- (CGPoint)dd_viewOrigin {
    return self.frame.origin;
}

- (void)setDd_viewOrigin:(CGPoint)dd_viewOrigin {
    CGRect newFrame = self.frame;
    newFrame.origin = dd_viewOrigin;
    self.frame = newFrame;
}

- (CGSize)dd_viewSize {
    return self.frame.size;
}

- (void)setDd_viewSize:(CGSize)dd_viewSize {
    CGRect newFrame = self.frame;
    newFrame.size = dd_viewSize;
    self.frame = newFrame;
}

#pragma mark - Frame Origin
- (CGFloat)dd_x {
    return self.frame.origin.x;
}

- (void)setDd_x:(CGFloat)dd_x {
    CGRect newFrame = self.frame;
    newFrame.origin.x = dd_x;
    self.frame = newFrame;
}

- (CGFloat)dd_y {
    return self.frame.origin.y;
}

- (void)setDd_y:(CGFloat)dd_y {
    CGRect newFrame = self.frame;
    newFrame.origin.y = dd_y;
    self.frame = newFrame;
}

#pragma mark - Frame Size
- (CGFloat)dd_width {
    return self.frame.size.width;
}

- (void)setDd_width:(CGFloat)dd_width {
    CGRect newFrame = self.frame;
    newFrame.size.width = dd_width;
    self.frame = newFrame;
}

- (CGFloat)dd_height {
    return self.frame.size.height;
}

- (void)setDd_height:(CGFloat)dd_height {
    CGRect newFrame = self.frame;
    newFrame.size.height = dd_height;
    self.frame = newFrame;
}

#pragma mark - 截屏
- (UIImage *)dd_capturedImage {
    
    UIGraphicsBeginImageContextWithOptions(self.bounds.size, YES, 0);
    
    UIImage *result = nil;
    if ([self drawViewHierarchyInRect:self.bounds afterScreenUpdates:YES]) {
        result = UIGraphicsGetImageFromCurrentImageContext();
    }
    
    UIGraphicsEndImageContext();
    
    return result;
}

@end
