
//
//  BMTableViewDataSource.m
//  MVC_控制器简化
//
//  Created by Daredos on 16/2/5.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import "BMTableViewDataSource.h"
#import "BMBaseCell.h"

@interface BMTableViewDataSource ()

@property (copy, nonatomic) TableViewCellConfigureBlock configureCellBlock;
@property (strong, nonatomic) Class cellClass;
@property (nonatomic, strong) NSArray *mdoelArray;

@end

@implementation BMTableViewDataSource

- (instancetype)init
{
    self = [super init];
    if (self) {
    }
    return self;
}

- (instancetype)initWithItems:(NSArray *)anItems
                    cellClass:(Class)cellClass
           configureCellBlock:(TableViewCellConfigureBlock)aConfigureCellBlock
{
    self = [super init];
    if (self) {
        self.mdoelArray = anItems;
        self.configureCellBlock = [aConfigureCellBlock copy];
        self.cellClass = cellClass;
    }
    return self;
}

- (BMBaseCell *)modelAtIndexPath:(NSIndexPath *)indexPath
{
    return self.mdoelArray[(NSUInteger) indexPath.row];
}

#pragma mark UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.mdoelArray.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    BMBaseCell *cell = [[self.cellClass class] cellLoadXibWithTableView:tableView];
    id item = [self modelAtIndexPath:indexPath];
    self.configureCellBlock(cell, item);
    return cell;
}
@end
