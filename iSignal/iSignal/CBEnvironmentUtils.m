//
//  CBEnvironmentUtils.m
//  iSignal
//
//  Created by Patrick Deng on 11-8-22.
//  Copyright 2011 CodeBeaver. All rights reserved.
//

#import "CBEnvironmentUtils.h"

@implementation CBEnvironmentUtils

// Manual Codes Begin

+(BOOL) isBackgroundRunningEnabled
{
    UIDevice* device = [UIDevice currentDevice];  
    BOOL backgroundSupported = NO;  
    if ([device respondsToSelector:@selector(isMultitaskingSupported)])  
    {
        backgroundSupported = device.multitaskingSupported;        
    }
    return backgroundSupported;
}

+(NSURL*) applicationDocumentsDirectory
{
    return [[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject];
}

+(NSString*) applicationVersion
{
    NSString *version = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];    
    
    return version;
}

// Manual Codes End

@end
