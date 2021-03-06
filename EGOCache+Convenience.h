//
//  EGOCache+Convenience.h
//
//  Created by Tom Adriaenssen on 25/01/11.
//

#import <Foundation/Foundation.h>
#import "EGOCache.h"

@interface EGOCache (Convenience) {

}

- (NSArray*)arrayForKey:(NSString*)key;
- (void)setArray:(NSArray*)anArray forKey:(NSString*)key;
- (void)setArray:(NSArray*)anArray forKey:(NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

- (NSDictionary*)dictionaryForKey:(NSString*)key;
- (void)setDictionary:(NSDictionary*)aDictionary forKey:(NSString*)key;
- (void)setDictionary:(NSDictionary*)aDictionary forKey:(NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

@end
