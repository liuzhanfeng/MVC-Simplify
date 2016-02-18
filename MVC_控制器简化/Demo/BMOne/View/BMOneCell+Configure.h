//
//  BMOneCell+Configure.h
//  MVC_控制器简化
//
//  Created by Daredos on 16/2/5.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import "BMOneCell.h"

@class BMOneModel;

@interface BMOneCell (Configure)

/**
 *  BMOneCell 对 BMOneViewController的cell配置分类
 *
 *  @param model model
 */
- (void)configureForPhoto:(BMOneModel *)model;

@end
