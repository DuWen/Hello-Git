//
//  Hello_XcodeAppDelegate.h
//  Hello Xcode
//
//  Created by dw on 12-2-22.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Hello_XcodeViewController;

@interface Hello_XcodeAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Hello_XcodeViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Hello_XcodeViewController *viewController;

@end

