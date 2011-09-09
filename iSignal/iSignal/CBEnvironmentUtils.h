//
//  CBEnvironmentUtils.h
//  iSignal
//
//  Created by Patrick Deng on 11-8-22.
//  Copyright 2011 CodeBeaver. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <TargetConditionals.h>

#import "iSignalAppDelegate.h"

#define SIMULATOR 0
#define IPHONE 1

#if TARGET_IPHONE_SIMULATOR
    #define DEVICE SIMULATOR
#elif TARGET_OS_IPHONE
    #define DEVICE IPHONE
#endif

@interface CBEnvironmentUtils : NSObject

// Sample for singleton in Objective-C, unnecessary to use.
+(CBEnvironmentUtils *)singletonInstance;

+(BOOL) isBackgroundRunningEnabled;

-(NSURL*) applicationDocumentsDirectory;

@end
