//
//  AddCustomCommodityViewController.h
//  GouKuSeller
//
//  Created by 窦建斌 on 2018/5/30.
//  Copyright © 2018年 窦建斌. All rights reserved.
//

#import "BaseViewController.h"
#import "SupplierCommodityEndity.h"

typedef void(^addCustomCommodityComplete)(SupplierCommodityEndity *entity);
@interface AddCustomCommodityViewController : BaseViewController

@property (nonatomic ,strong)NSString    *barcode;

@property (nonatomic ,copy)addCustomCommodityComplete      addCustomCommodityComplete;

@end
