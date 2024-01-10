//
//  PRCJson.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Adds JSON generation to NSArray
@interface NSArray (NSArray_JSONString)

/// Returns a autorelease string containing the receiver encoded in JSON.
- (NSString *)JSONRepresentation;

@end


/// Adds JSON generation to NSDictionary
@interface NSDictionary (NSDictionary_JSONString)

/// Returns a autorelease string containing the receiver encoded in JSON.
- (NSString *)JSONRepresentation;

@end


/// Adds JSON parsing methods to NSString
@interface NSString (NSString_JSONObject)

/// Returns the autorelease NSDictionary or NSArray represented by the receiver's JSON representation, or nil on error
- (id)JSONValue;

@end


/// Adds JSON parsing methods to NSData
@interface NSData (NSData_JSONObject)

/// Returns the autorelease NSDictionary or NSArray represented by the receiver's JSON representation, or nil on error
- (id)JSONValue;

@end

NS_ASSUME_NONNULL_END
