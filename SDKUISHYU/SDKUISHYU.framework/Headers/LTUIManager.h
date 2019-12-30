//
//  LTUIManager.h
//  SDKUISHYU
//
//  Created by ZBF on 2019/11/28.
//  Copyright © 201 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class LTUser;
NS_ASSUME_NONNULL_BEGIN

typedef void (^loginUIUserBlock)(LTUser *loginUser);
@interface LTUIManager : NSObject

+ (instancetype)sharedInstance;

/// 设置隐私和用户协议地址
/// @param userAgreement 用户协议地址
/// @param privacy 隐私条款地址
-(void)linkOfUserAgreement:(NSString *)userAgreement andPrivacyLine:(NSString *)privacy;

/// 弹出登录界面
/// @param uc 展示父界面
/// @param block 回调
-(void)showLoginUI:(UIViewController *)uc withBlock:(loginUIUserBlock)block;

/// 弹出登录框
/// @param uc 父界面
/// @param block 回调
/// @param isShow 是否显示游客按钮
-(void)showLoginUI:(UIViewController *)uc withBlock:(loginUIUserBlock)block isShowTouristButton:(BOOL)isShow;

/// 切换账号弹出框
/// @param uc 父界面
/// @param block 回调
-(void)userLogoutWithUI:(UIViewController *)uc withBlock:(loginUIUserBlock)block;

/// 切换账号弹出框
/// @param uc 父界面
/// @param block 回调
/// @param isShow 是否显示游客按钮
-(void)userLogoutWithUI:(UIViewController *)uc withBlock:(loginUIUserBlock)block isShowTouristButton:(BOOL)isShow;
@end

NS_ASSUME_NONNULL_END
