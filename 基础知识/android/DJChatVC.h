//
//  DJChatVC.h
//  ADemo
//
//  Created by uz on 17/12/4.
//  Copyright © 2017年 Rooney. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WilddogVideoBase/WDGLocalStreamOptions.h>

@interface DJChatVC : UIViewController
@property (nonatomic, strong) NSString *roomId;
@property (nonatomic, strong) NSString *uid;

@property (nonatomic, assign) int frame;
@property (nonatomic, assign) int fps;
@property (nonatomic, assign) WDGVideoDimensions  dimension;
@end
