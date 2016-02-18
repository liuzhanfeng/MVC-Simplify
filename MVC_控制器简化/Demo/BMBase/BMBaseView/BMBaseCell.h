//
//  BMBaseCell.h
//  BMDeliverySpecialists
//
//  Created by Daredos on 16/2/4.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  base cell
 */
@interface BMBaseCell : UITableViewCell

/**
 *  使用 alloc 创建cell
 *
 *  @param tableView 表格控件
 *
 *  @return 创建的 cell
 *
 *  内已做复用处理
 *  如果有特殊要求 可以重写此方法
 */
+ (instancetype)cellAllocWithTableView:(UITableView *)tableView;

/**
 *  加载xib 创建cell
 *
 *  @param tableView 表格控件
 *
 *  @return 创建的 cell
 *
 *  内已做复用处理：（使用cell xib需在 对应的xib的Identifier 设置为cell 名字 不然无法实现复用）
 *  如果有特殊要求 可以重写此方法
 */
+ (instancetype)cellLoadXibWithTableView:(UITableView *)tableView;

@end
