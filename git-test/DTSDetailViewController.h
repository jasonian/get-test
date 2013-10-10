//
//  DTSDetailViewController.h
//  git-test
//
//  Created by Jason Anthony Guy on 10/10/13.
//  Copyright (c) 2013 Jason Anthony Guy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DTSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
