//
//  NSBundle+DDObjecSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

@import UIKit;

@interface NSBundle (DDObjcSugar)
/// 当前版本号字符串
+ (nullable NSString *)dd_currentVersion;

/// 与当前屏幕尺寸匹配的启动图像
+ (nullable UIImage *)dd_launchImage;

@end
