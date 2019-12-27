//
//  SHShareManager.h
//  SHShareLoginSDK
//
//  Created by 樊康鹏 on 2019/12/4.
//  Copyright © 2019 iOS Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SHPlatform.h"
NS_ASSUME_NONNULL_BEGIN

@interface SHShareManager : NSObject

/**图文分享
 @param platform 平台
 @param title 标题
 @param descript 描述
 @param link 链接
 @param thumbImg 缩略图图片
 @param fileImage 图片(jpg/png/gif)
 @param complter 分享后的回调
 */
+ (void)shareWithPlatform:(SHPlatformType)platform
                    title:(NSString * __nullable)title
                 descript:(NSString * __nullable)descript
                     link:(NSString * __nullable)link
                 thumbImg:(UIImage * __nullable)thumbImg
                fileImage:(UIImage * __nullable)fileImage
                 complter:(void(^)(id __nullable rep,NSError * __nullable error))complter;


/**视频分享
 @param platform 平台
 @param title 标题
 @param descript 描述
 @param video 视频链接
 @param thumbImg 缩略图图片
 @param complter 分享后的回调
 */
+ (void)shareWithPlatform:(SHPlatformType)platform
                    title:(NSString * __nullable)title
                 descript:(NSString * __nullable)descript
                    video:(NSString * __nullable)video
                 thumbImg:(UIImage * __nullable)thumbImg
                 complter:(void(^)(id  __nullable rep,NSError * __nullable error))complter;

/**音乐分享
 @param platform 平台
 @param title 标题
 @param descript 描述
 @param music 音乐链接
 @param thumbImg 缩略图图片
 @param complter 分享后的回调
 */
+ (void)shareWithPlatform:(SHPlatformType)platform
                    title:(NSString * __nullable)title
                 descript:(NSString * __nullable)descript
                    music:(NSString * __nullable)music
                 thumbImg:(UIImage * __nullable)thumbImg
                 complter:(void(^)(id __nullable rep,NSError * __nullable error))complter;


@end

NS_ASSUME_NONNULL_END
