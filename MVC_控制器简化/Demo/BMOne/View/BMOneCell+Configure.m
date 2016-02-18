
//
//  BMOneCell+Configure.m
//  MVC_控制器简化
//
//  Created by Daredos on 16/2/5.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import "BMOneCell+Configure.h"
#import "BMOneModel.h"

@implementation BMOneCell (Configure)

- (void)configureForPhoto:(BMOneModel *)model
{
    self.model = model;
    self.descLabel.text  = model.desc;
}

@end
