//
//  LoginViewController.h
//  Delle Medical
//
//  Created by arvind on 1/28/16.
//  Copyright © 2016 arvind. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
@interface LoginViewController : UIViewController<UITextFieldDelegate>
@property(nonatomic,retain) IBOutlet UITextField *userNameText;
@property(nonatomic,retain) IBOutlet UITextField *userPasswordText;
@property(nonatomic,retain) IBOutlet UIImageView *Logoimg;
@property(nonatomic,retain) IBOutlet UIActivityIndicatorView *activityIndicator;
@property(nonatomic,retain) AppDelegate *appDelegate;

@end
