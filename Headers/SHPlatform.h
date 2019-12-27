//
//  SHPlatform.h
//  ShareInstallShareLoginSDK
//
//  Created by 樊康鹏 on 2019/12/6.
//  Copyright © 2019 iOS Team. All rights reserved.
//


typedef enum : NSUInteger {
    /**新浪*/
    SHPlatformTypeType_Sina           = 0,
    /**微信聊天*/
    SHPlatformType_WechatSession      = 1,
    /**微信朋友圈*/
    SHPlatformType_WechatTimeLine     = 2,
    /**微信收藏*/
    SHPlatformType_WechatFavorite     = 3,
    /**QQ聊天页面*/
    SHPlatformType_QQ                 = 4,
    /**qq空间*/
    SHPlatformType_Qzone              = 5,
} SHPlatformType;


typedef enum : NSUInteger {
    SHErrorCode_1001            =  -1001,   //缺少appid或secret
    SHErrorCode_1002            =  -1002,   //未安装对应应用
    SHErrorCode_0               =  0,       //无error
} SHErrorCode;

typedef enum : NSUInteger {
    SHShareTypeTxt,
    SHShareTypeVideo,
    SHShareTypeMusic,
} SHShareType;
