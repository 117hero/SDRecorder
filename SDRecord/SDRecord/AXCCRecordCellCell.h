//
//  AXCCRecordCellTableViewCell.h
//  CQJT
//
//  Created by 钟亮 on 2017/12/22.
//  Copyright © 2017年 YZH. All rights reserved.
//

#import <UIKit/UIKit.h>

///录音点击回调
typedef void(^tapeSelectBlock)(BOOL);

@interface AXCCRecordCellCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *dateLab;
@property (strong, nonatomic) IBOutlet UILabel *timeLab;

@property (strong, nonatomic) IBOutlet UIButton *selectedBtn;

///录音点击回调
@property (copy, nonatomic) tapeSelectBlock tapeSelectBlock;

@end
