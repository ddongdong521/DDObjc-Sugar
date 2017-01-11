//
//  UINavigationController+DDObjcSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (DDObjcSugar)
@property (nonatomic, strong, readonly) UIPanGestureRecognizer *dd_popGestureRecognizer;

@end
