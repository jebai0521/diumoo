//
//  DMDoubanAuthHelper.h
//  diumoo
//
//  Created by Shanzi on 12-6-9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//
#define kAuthAttributeUsername @"alias"
#define kAuthAttributePassword @"form_password"
#define kAuthAttributeCaptchaSolution @"captcha_solution"
#define kAuthAttributeCaptchaCode @"capcha_code"

#import <Foundation/Foundation.h>

@interface DMDoubanAuthHelper : NSObject
//{

@property(copy) NSString* username;
@property(copy) NSString* userId;
@property(copy) NSString* userUrl;
@property(copy) NSString* iconUrl;
@property(retain) NSImage* icon;

@property NSInteger playedSongsCount;
@property NSInteger likedSongsCount;
@property NSInteger bannedSongsCount;

//}

+(NSString*) stringEncodedForAuth:(NSDictionary*) dict;

-(void) authWithDictionary:(NSDictionary*) dict asynchronousRequest:(BOOL)asyn;
-(void) logoutAndCleanData;

@end
