//
//  FlipsideViewController.h
//  BankDB
//
//  Created by Yogesh Kumbhare on 8/11/13.
//  Copyright (c) 2013 Yogesh Kumbhare. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
