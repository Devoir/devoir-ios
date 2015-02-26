//
//  Course.h
//  ios-devoir
//
//  Created by Brent on 1/24/15.
//  Copyright (c) 2015 Brent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Course : NSObject

//required
@property int ID;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* color;
@property int userID;
@property (nonatomic, strong) NSDate* lastUpdated;
@property BOOL visible;

//optional
@property (nonatomic, strong) NSString* iCalFeed;
@property (nonatomic, strong) NSString* iCalID;

-(id) initWithID:(int)ID Name:(NSString*)name Color:(NSString*)color UserID:(int)userID
     LastUpdated:(NSDate*)lastUpdated Visible:(BOOL)visible ICalFeed:(NSString*)iCalFeed ICalID:(NSString*)iCalID;

@end