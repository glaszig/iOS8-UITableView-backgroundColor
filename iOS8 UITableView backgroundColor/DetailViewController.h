//
//  DetailViewController.h
//  iOS8 UITableView backgroundColor
//
//  Created by glaszig on 19.09.14.
//  Copyright (c) 2014 glaszig. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

