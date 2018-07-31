//
//  AppDelegate.h
//  GouKuSupplier
//
//  Created by 窦建斌 on 2018/6/20.
//  Copyright © 2018年 窦建斌. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SupplierTabbarViewController.h"


static NSString *appKey = @"ab5c859e24a9276ecb8bef2a";
static NSString *channel = @"Publish channel";
static BOOL isProduction = FALSE;  // fales 为开发环境  如果上线需改成 true

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic)SupplierTabbarViewController  *supplierTabbarViewController;


@property (strong, nonatomic) UIWindow *window;


@end

