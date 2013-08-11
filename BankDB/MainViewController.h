//
//  MainViewController.h
//  BankDB
//
//  Created by Yogesh Kumbhare on 8/11/13.
//  Copyright (c) 2013 Yogesh Kumbhare. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
