//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface GetRegStyleRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasClientSeqId:1;
    unsigned int hasRandomEncryKey:1;
    BaseRequest *baseRequest;
    NSString *clientSeqId;
    SKBuiltinBuffer_t *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetClientSeqId:) NSString *clientSeqId; // @synthesize clientSeqId;
@property(readonly, nonatomic) BOOL hasClientSeqId; // @synthesize hasClientSeqId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

