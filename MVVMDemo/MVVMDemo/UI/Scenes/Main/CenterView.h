//
// Created by Nguyen Thanh Hai on 11/7/16.
// Copyright (c) 2016 LCL. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CenterView <NSObject>

- (void)showNavigations:(void(^)())completionHandler;

@end