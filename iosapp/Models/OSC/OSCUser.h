//
//  OSCUser.h
//  iosapp
//
//  Created by chenhaoxiangs on 11/5/14.
//  Copyright (c) 2014 oschina. All rights reserved.
//

#import "OSCBaseObject.h"

@interface OSCUser : OSCBaseObject

@property (nonatomic, readwrite, assign) int64_t userID;
@property (nonatomic, readonly, copy) NSString *location;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readonly, assign) int followersCount;
@property (nonatomic, readonly, assign) int fansCount;
@property (nonatomic, readonly, assign) int score;
@property (nonatomic, readonly, assign) int favoriteCount;
@property (nonatomic, assign)           int relationship;
@property (nonatomic, readwrite, strong) NSURL *portraitURL;
@property (nonatomic, readonly, copy) NSString *gender;
@property (nonatomic, readonly, copy) NSString *developPlatform;
@property (nonatomic, readonly, copy) NSString *expertise;
@property (nonatomic, readonly, copy) NSString *joinTime;
@property (nonatomic, readonly, copy) NSString *latestOnlineTime;
@property (nonatomic, readwrite, copy) NSString *pinyin; //拼音
@property (nonatomic, readwrite, copy) NSString *pinyinFirst; //拼音首字母

@end
