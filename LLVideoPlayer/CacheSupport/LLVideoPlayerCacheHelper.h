//
//  LLVideoPlayerCacheHelper.h
//  Pods
//
//  Created by mario on 2017/6/28.
//
//

#import <Foundation/Foundation.h>

@interface LLVideoPlayerCacheHelper : NSObject

+ (void)clearAllCache;

+ (void)preloadWithURL:(NSURL *)url;

+ (void)preloadWithURL:(NSURL *)url bytes:(NSUInteger)bytes;

+ (void)cancelWithURL:(NSURL *)url;

+ (void)cancelAllPreloads;

@end

@interface LLVideoPlayerCacheHelper (CacheDirectory)

+ (NSString *)cacheDirectory;

+ (NSString *)preloadCacheDirectory;

@end
