//
//  BMOneCell.h
//  MVC_控制器简化
//
//  Created by Daredos on 16/2/5.
//  Copyright © 2016年 BlueMoon. All rights reserved.
//

#import "BMBaseCell.h"

@class BMOneModel;

@interface BMOneCell : BMBaseCell

@property (strong, nonatomic) BMOneModel *model;

@property (weak, nonatomic) IBOutlet UIButton *selectButton;
@property (weak, nonatomic) IBOutlet UILabel *descLabel;


@end
