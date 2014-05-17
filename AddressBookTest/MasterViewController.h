//
//  MasterViewController.h
//  AddressBookTest
//
//  Created by 禹相植 on 2014/05/17.
//  Copyright (c) 2014年 woonet. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
