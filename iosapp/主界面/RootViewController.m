//
//  RootViewController.m
//  iosapp
//
//  Created by AeternChan on 7/15/15.
//  Copyright (c) 2015 oschina. All rights reserved.
//

#import "RootViewController.h"

@interface RootViewController ()

@end

@implementation RootViewController

- (void)awakeFromNib
{
    self.parallaxEnabled = NO;
    self.scaleContentView = YES;
    self.contentViewScaleValue = 0.95;
    self.scaleMenuView = NO;
    self.contentViewShadowEnabled = YES;
    self.contentViewShadowRadius = 4.5;
    // 在这里设置控制器
    self.contentViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"contentViewController"];
    self.leftMenuViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"leftMenuViewController"];
}
- (void)testVC{
    self.contentViewController = [self.storyboard instantiateViewControllerWithIdentifier:@""];
    self.leftMenuViewController =[self.storyboard instantiateViewControllerWithIdentifier:@""];
}
- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end
