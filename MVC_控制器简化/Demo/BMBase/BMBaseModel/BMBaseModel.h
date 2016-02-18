//
//  BMBaseModel.h
//  BMDeliverySpecialists
//
//  Created by Daredos on 16/1/28.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  base模型
 */
@interface BMBaseModel : NSObject

/**
 *  通过字典数组来创建一个模型数组
 *
 *  @param keyValuesArray 原始数据数组 @[NSDictionary或者NSData或者NSString]
 *
 *  @return 模型数组
 *
 *  如果有特殊需求可以重写此方法 eg: 需要从后台的 int -> emun
 *  重写时查考此base的实现
 */
+ (NSMutableArray <BMBaseModel *>*)modelArrayWithKeyValuesArray:(id)keyValuesArray;

/**
 *  通过字典来创建一个模型
 *
 *  @param keyValues @{可以是NSDictionary、NSData、NSString}
 *
 *  @return 新建的模型
 *
 *  如果有特殊需求可以重写此方法 eg: 需要从后台的 int -> emun
 *  重写时查考此base的实现
 */
+ (instancetype)modelWithKeyValues:(id)keyValues;

@end

NS_ASSUME_NONNULL_END
