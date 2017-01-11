//
//  NSString+DDObjcSugar.h
//  DDObcj—Sugar
//
//  Created by autobot on 17/1/5.
//  Copyright © 2017年 autobot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (DDPath)

/// 拼接了`文档目录`的全路径
@property (nullable, nonatomic, readonly) NSString *dd_documentDirectory;
/// 拼接了`缓存目录`的全路径
@property (nullable, nonatomic, readonly) NSString *dd_cacheDirecotry;
/// 拼接了临时目录的全路径
@property (nullable, nonatomic, readonly) NSString *dd_tmpDirectory;

@end

@interface NSString (DDBase64)

/// BASE 64 编码的字符串内容
@property(nullable, nonatomic, readonly) NSString *dd_base64encode;
/// BASE 64 解码的字符串内容
@property(nullable, nonatomic, readonly) NSString *dd_base64decode;

@end
