//
//  ISLocationDelegate.h
//  iSignal
//
//  Created by Patrick Deng on 11-8-30.
//  Copyright 2011年 CodeAnimal. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <CoreLocation/CoreLocation.h>

#import "CBModule.h"

#define EVENT_AVAILABLE_TIME_DIFFERENCE 15.0

#define REGION_RADIUS_DEFAULT 100.0

@interface ISLocationDelegate : NSObject <CLLocationManagerDelegate, CBModule>
{
    CLLocationManager *locationManager;
    CLLocation *lastLocation;
    CLLocation *currentLocation;
    CLLocationDegrees regionRadius;
}

@property (nonatomic, retain) CLLocationManager *locationManager;

@property (nonatomic, retain) CLLocation *lastLocation;
@property (nonatomic, retain) CLLocation *currentLocation;
@property (nonatomic) CLLocationDegrees regionRadius;

+(BOOL) isLocationServiceEnabled;

+(BOOL) isRegionMonitoringAvailable;
+(BOOL) isRegionMonitoringEnabled;

-(void) setDistanceFilter:(CLLocationDistance) distance;
-(void) setAccuracy:(CLLocationAccuracy) accuracy;

-(void) initLocationManagerIfNecessary;
-(void) initLocationManagerIfNecessary:(CLLocationAccuracy) accuracy andDistance:(CLLocationDistance) distance;

-(void) startStandardUpdate;
-(void) startSignificantChangeUpdates;

-(BOOL)registerRegionWithCurrentLocationAndCircularOverlay:(NSString*)identifier;

@end
