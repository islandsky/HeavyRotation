//
//  AppDelegate.h
//  HeavyRotation
//
//  Created by Ravi Tewari on 12/5/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) IBOutlet UIWindow *window;

- (void)orientationChanged:(NSNotification *)note;

@end
