//
//  DTSMasterViewController.h
//  git-test
//
//  Created by Jason Anthony Guy on 10/10/13.
//  Copyright (c) 2013 Jason Anthony Guy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DTSDetailViewController;

@interface DTSMasterViewController : UITableViewController

@property (strong, nonatomic) DTSDetailViewController *detailViewController;

@end
