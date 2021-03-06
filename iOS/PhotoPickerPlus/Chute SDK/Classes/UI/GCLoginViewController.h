//
//  LoginViewController.h
//
//  Copyright 2011 Chute Corporation. All rights reserved.
//

#import "GCUIBaseViewController.h"

#define SERVICES_ARRAY [NSArray arrayWithObjects:@"facebook", @"evernote", @"chute", @"twitter", @"foursquare", nil]

@interface GCLoginViewController : GCUIBaseViewController <UIWebViewDelegate> {
    IBOutlet UIButton *loginButton;
}

@property (nonatomic, strong) IBOutlet UIView *authView;
@property (nonatomic, strong) IBOutlet UIWebView *authWebView;
@property (nonatomic, strong) IBOutlet UIView *blankBackground;

-(IBAction) login;
-(void) loginWithService:(NSString*)service;

+(void)presentInController:(UIViewController *)controller;
+(void)presentAuthForService:(NSString*)service inController:(UIViewController*)controller;

@end
