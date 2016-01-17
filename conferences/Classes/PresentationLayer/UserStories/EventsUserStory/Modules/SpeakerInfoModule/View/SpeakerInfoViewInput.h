//
//  SpeakerInfoViewInput.h
//  Conferences
//
//  Created by Karpushin Artem on 16/01/16.
//  Copyright 2016 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SpeakerPlainObject;

@protocol SpeakerInfoViewInput <NSObject>

/**
 @author Artem Karpushin
 
 Method is used to setup view with Speaker object
 
 @param speaker SpeakerPlainObject object
 */
- (void)setupViewWithSpeaker:(SpeakerPlainObject *)speaker;

@end

