//
//  LCCoolHUD.h
//  LCCoolHUDDemo
//
//  Created by Leo on 15/11/17.
//  Copyright © 2015年 Leo. All rights reserved.
//

#import <UIKit/UIkit.h>

@class JGProgressHUD;

@interface LCCoolHUD : NSObject



#pragma mark - HUD 添加到 KeyWindow

/**
 *  显示 成功 HUD 到 KeyWindow 上
 */
+ (void)showSuccess:(NSString *)text zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 失败 HUD 到 KeyWindow 上
 */
+ (void)showFailure:(NSString *)text zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 成功 HUD 到 KeyWindow 上 (长方形底)
 */
+ (void)showSuccessOblong:(NSString *)text zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 失败 HUD 到 KeyWindow 上 (长方形底)
 */
+ (void)showFailureOblong:(NSString *)text zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 HUD 到 KeyWindow 上
 */
+ (void)showLoading:(NSString *)text;

/**
 *  隐藏添加到 KeyWindow 上的 HUD
 */
+ (void)hideInKeyWindow;



#pragma mark - HUD 添加到 View

/**
 *  显示 成功 HUD 到 View 上
 */
+ (void)showSuccess:(NSString *)text inView:(UIView *)view zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 失败 HUD 到 View 上
 */
+ (void)showFailure:(NSString *)text inView:(UIView *)view zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 成功 HUD 到 View 上 (长方形底)
 */
+ (void)showSuccessOblong:(NSString *)text inView:(UIView *)view zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 成功 HUD 到 View 上 (长方形底)
 */
+ (void)showFailureOblong:(NSString *)text inView:(UIView *)view zoom:(BOOL)zoom shadow:(BOOL)shadow;

/**
 *  显示 HUD 到 View 上
 */
+ (void)showLoading:(NSString *)text inView:(UIView *)view;

/**
 *  隐藏添加到 View 上的 HUD
 */
+ (void)hideInView:(UIView *)view;



@end