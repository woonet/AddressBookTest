//
//  DetailViewController.h
//  AddressBookTest
//
//  Created by 禹相植 on 2014/05/17.
//  Copyright (c) 2014年 woonet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
