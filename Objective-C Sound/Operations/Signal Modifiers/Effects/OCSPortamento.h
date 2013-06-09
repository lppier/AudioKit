//
//  OCSPortamento.h
//  Objective-C Sound
//
//  Auto-generated from database on 11/14/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSControl.h"
#import "OCSParameter+Operation.h"

/** Applies portamento to a step-valued control signal.
 
 applies portamento to a step-valued control signal. At each new step value, the output is low-pass filtered to move towards that value at a rate determined by halfTime. halfTime is the “half-time” of the function (in seconds), during which the curve will traverse half the distance towards the new value, then half as much again, etc., theoretically never reaching its asymptote.
 */

@interface OCSPortamento : OCSControl

/// Instantiates the portamento
/// @param controlSource The input signal at control-rate.
/// @param halfTime Half-time of the function in seconds.
- (id)initWithControlSource:(OCSControl *)controlSource
                   halfTime:(OCSControl *)halfTime;

-(void)setOptionalFeedbackAmount:(OCSConstant *)feedback;

@end