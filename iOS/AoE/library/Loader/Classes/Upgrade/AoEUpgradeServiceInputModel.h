//
//  AoEUpgradeServiceInputModel.h
//  AoE
//
//  Created by dingchao on 2019/9/10.
//

#import <Foundation/Foundation.h>

@interface AoEUpgradeServiceInputModel : NSObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *alias;

@property (nonatomic, copy) NSString *version;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *storagePath;

@property (nonatomic, copy) NSString *checkUpgradeModel;

@property (nonatomic, assign) BOOL needDownloadImmediately;

+ (instancetype)initWithName:(NSString *)name version:(NSString *)version url:(NSString *)url storagePath:(NSString *)path;

@end
