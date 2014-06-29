//
//  XYZDetailViewController.h
//  Mash
//
//  Created by Kyle on 6/29/14.
//  Copyright (c) 2014 Mash. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
