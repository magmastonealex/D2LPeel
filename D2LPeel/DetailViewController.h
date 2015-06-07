//
//  DetailViewController.h
//  D2LC
//
//  Created by Alex Roth on 2014-11-09.
//  Copyright (c) 2014 MagmaStone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

