

/**
 *******************************************************
 对 MVC 的一些优化，简化ViewController中的代码 在已不需要在控制器里面各种代理回调了
 
   参考:https://www.objc.io/issues/1-view-controllers/lighter-view-controllers/
 
  低级的见解 或者可以交流 asiosldh@163.com 或者 QQ 872304636
 *******************************************************
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BMBaseModel,BMBaseCell;

// 由 model 设置cell 的回调
typedef void (^TableViewCellConfigureBlock)(BMBaseCell *cell, BMBaseModel *model);

/**
 数据源管理类
 */
@interface BMTableViewDataSource : NSObject <UITableViewDataSource>

/**
 *  创建数据源管理
 *
 *  @param anItems             数据源
 *  @param cellClass           cell 类
 *  @param aConfigureCellBlock 设置cell的回调
 */
- (instancetype)initWithItems:(NSArray *)anItems
                    cellClass:(Class)cellClass
           configureCellBlock:(TableViewCellConfigureBlock)aConfigureCellBlock;

/**
 *  获取 model
 *
 *  @param indexPath index
 */
- (BMBaseCell *)modelAtIndexPath:(NSIndexPath *)indexPath;

@end
