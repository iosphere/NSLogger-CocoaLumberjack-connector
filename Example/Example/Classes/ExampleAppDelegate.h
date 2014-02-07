//
//  ExampleAppDelegate.h
//  NSLogger-CocoaLumberjack-connector Example
//
//  Created by Peter Steinberger on 26.11.10.
//

#import <UIKit/UIKit.h>

@class ExampleViewController;

@interface ExampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@end

