//
//  MajesticViewController.h
//  Majestic
//
//  Created by Betsy O'Brien on 3/17/13.
//  Copyright (c) 2013 Owen Scott & Greg VanAlstyne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MajesticViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *myWebView;
@property (strong, nonatomic) NSArray *arrayName;
- (IBAction)newSongButton:(id)sender;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *nextButton;

@end
