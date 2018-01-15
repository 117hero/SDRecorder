//
//  Record.m
//  CQJT
//
//  Created by Stephen on 2017/12/25.
//  Copyright © 2017年 YZH. All rights reserved.
//

#import "Record.h"

@implementation Record

- (id)copyWithZone:(NSZone *)zone{
    Record *record = [[Record allocWithZone:zone]init];
    
    record.name = self.name;
    record.path = self.path;
    record.duration = self.duration;
    
    return record;
}

@end
