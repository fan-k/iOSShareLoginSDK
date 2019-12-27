//
//  SHShareLoginSDK.h
//  SHShareLoginSDK
//
//  Created by 樊康鹏 on 2019/12/4.
//  Copyright © 2019 iOS Team. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SHShareLoginSDK : NSObject

/**初始化微信分享登录*/
+ (void)registerWeChatWithAppId:(NSString *)appid secret:(NSString *)secret;

/**初始化QQ分享登录*/
+ (void)registerQQWithAppId:(NSString *)appid secret:(NSString *)secret;

/**初始化微博分享登录*/
+ (void)registerWeiBoWithAppId:(NSString *)appid secret:(NSString *)secret;
@end
