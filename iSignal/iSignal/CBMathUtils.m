//
//  CBMathUtils.m
//  iSignal
//
//  Created by Patrick Deng on 11-8-23.
//  Copyright 2011 CodeBeaver. All rights reserved.
//

#import "CBMathUtils.h"

@implementation CBMathUtils

// Manual Codes Begin

+(NSInteger) generateRandomNSInteger:(NSInteger) min andMax:(NSInteger) max;
{
    // if scope deifition(min & max) is illegal, then just generate a random number without scope
    if(min >= max)
    {
        return arc4random();
    }
    // generate a random number between min and max: min + rand()% (max - min + 1)    
    if (max < 0)
    {
        min = -min;
        max = -max;
        
        NSInteger tmp = max;
        max = min;
        min = tmp;
        
        NSInteger tmp2 = (min + arc4random() % (max - min + 1));
        tmp2 = -tmp2;
        
        return tmp2;
    }
    else
    {
        return min + arc4random() % (max - min + 1);
    }
}

// Manual Codes End

@end
