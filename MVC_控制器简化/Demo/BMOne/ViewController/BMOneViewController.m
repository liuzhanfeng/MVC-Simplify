
//
//  BMOneViewController.m
//  MVC_控制器简化
//
//  Created by Daredos on 16/2/5.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import "BMOneViewController.h"
#import "BMTableViewDataSource.h"
#import "BMOneModel.h"
#import "BMOneCell.h"
#import "BMOneCell+Configure.h"

@interface BMOneViewController ()

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) BMTableViewDataSource *tableViewDataSource;
@property (strong, nonatomic) NSMutableArray *ontArray;

@end

@implementation BMOneViewController


- (void)viewDidLoad {
    [super viewDidLoad];

    self.ontArray = [NSMutableArray array];
    for (int i=0; i<20; i++) {
        BMOneModel *model = [[BMOneModel alloc] init];
        model.desc = [NSString stringWithFormat:@"name - %d",i];
        [self.ontArray addObject:model];
    }
    
    TableViewCellConfigureBlock tableViewCellConfigureBlock = ^(BMBaseCell *cell, BMBaseModel *model) {
        BMOneCell *cel = (BMOneCell *)cell;
        [cel configureForPhoto:(BMOneModel *)model];
    };
    
    // 配置tableview  数据源  标记
    self.tableViewDataSource = [[BMTableViewDataSource alloc]  initWithItems:self.ontArray
                                                                 cellClass:[BMOneCell class]
                                                        configureCellBlock:tableViewCellConfigureBlock];

    // 设置数据源代理
    self.tableView.dataSource = self.tableViewDataSource;
}

@end
