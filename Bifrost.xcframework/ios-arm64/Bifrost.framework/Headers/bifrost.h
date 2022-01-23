#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BifrostFragmentCallingCode, BifrostCallingCode, BifrostApollo_apiApolloResponse<D>, BifrostBaseService, BifrostResponseType, BifrostKotlinEnumCompanion, BifrostKotlinEnum<E>, BifrostKotlinArray<T>, BifrostApollo_apiCompiledField, BifrostApollo_apiCustomScalarAdapters, BifrostCallingCodesQueryCompanion, BifrostCallingCodesQueryData1, BifrostCallingCodesQueryCalling_codes, BifrostCallingCodesQueryData, BifrostCallingCodesQuery_ResponseAdapter, BifrostCallingCodesQuery_ResponseAdapterCalling_codes, BifrostCallingCodesQuery_ResponseAdapterData, BifrostCallingCodesQuery_ResponseAdapterData1, BifrostCallingCode_Companion, BifrostApollo_apiObjectType, BifrostCallingCodePaginatorCompanion, BifrostQueryCompanion, BifrostCallingCodesQuerySelections, BifrostApollo_apiCompiledSelection, BifrostFragmentCallingCodeImpl_ResponseAdapter, BifrostFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode, BifrostfragmentCallingCodeSelections, BifrostApollo_apiApolloResponseBuilder<D>, BifrostApollo_apiError, BifrostUuidUuid, BifrostKotlinThrowable, BifrostKotlinException, BifrostApollo_apiExecutableVariables, BifrostApollo_apiCompiledFieldBuilder, BifrostApollo_apiCompiledArgument, BifrostApollo_apiCompiledCondition, BifrostApollo_apiCompiledType, BifrostApollo_apiJsonNumber, BifrostApollo_apiCustomScalarAdaptersKey, BifrostApollo_apiCustomScalarAdaptersBuilder, BifrostApollo_apiCustomScalarType, BifrostKotlinNothing, BifrostApollo_apiJsonReaderToken, BifrostApollo_apiCompiledNamedType, BifrostApollo_apiInterfaceType, BifrostApollo_apiErrorLocation, BifrostKotlinByteArray, BifrostKotlinByteIterator, BifrostOkioByteString, BifrostOkioBuffer, BifrostOkioTimeout, BifrostApollo_apiCustomTypeValue<T>, BifrostOkioByteStringCompanion, BifrostOkioBufferUnsafeCursor, BifrostOkioTimeoutCompanion, BifrostApollo_apiCustomTypeValueCompanion;

@protocol BifrostApollo_apiQueryData, BifrostKotlinComparable, BifrostApollo_apiAdapter, BifrostApollo_apiJsonWriter, BifrostApollo_apiExecutable, BifrostApollo_apiOperation, BifrostApollo_apiQuery, BifrostApollo_apiExecutableData, BifrostApollo_apiOperationData, BifrostApollo_apiJsonReader, BifrostApollo_apiFragmentData, BifrostApollo_apiExecutionContext, BifrostKotlinIterator, BifrostApollo_apiUpload, BifrostOkioCloseable, BifrostApollo_apiExecutionContextKey, BifrostApollo_apiExecutionContextElement, BifrostOkioBufferedSink, BifrostApollo_apiCustomTypeAdapter, BifrostOkioSource, BifrostOkioSink, BifrostOkioBufferedSource;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BifrostBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface BifrostBase (BifrostBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface BifrostMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BifrostMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorBifrostKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface BifrostNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface BifrostByte : BifrostNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface BifrostUByte : BifrostNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface BifrostShort : BifrostNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface BifrostUShort : BifrostNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface BifrostInt : BifrostNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface BifrostUInt : BifrostNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface BifrostLong : BifrostNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface BifrostULong : BifrostNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface BifrostFloat : BifrostNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface BifrostDouble : BifrostNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface BifrostBoolean : BifrostNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode")))
@interface BifrostCallingCode : BifrostBase
- (instancetype)initWithData:(BifrostFragmentCallingCode * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("init(id:countryCode:countryName:flag:value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (BifrostCallingCode *)doCopyId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("doCopy(id:countryCode:countryName:flag:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *countryCode __attribute__((swift_name("countryCode")));
@property NSString *countryName __attribute__((swift_name("countryName")));
@property NSString *flag __attribute__((swift_name("flag")));
@property int32_t id __attribute__((swift_name("id")));
@property NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("BaseService")))
@interface BifrostBaseService : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)checkResponseResponse:(BifrostApollo_apiApolloResponse<id<BifrostApollo_apiQueryData>> *)response __attribute__((swift_name("checkResponse(response:)")));
@end;

__attribute__((swift_name("GraphQLNetwork")))
@interface BifrostGraphQLNetwork : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiscService")))
@interface BifrostMiscService : BifrostBaseService
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCallingCodesCompletion:(void (^)(BifrostResponseType *, NSArray<BifrostCallingCode *> *))completion __attribute__((swift_name("getCallingCodes(completion:)")));
- (void)test __attribute__((swift_name("test()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol BifrostKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface BifrostKotlinEnum<E> : BifrostBase <BifrostKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseType")))
@interface BifrostResponseType : BifrostKotlinEnum<BifrostResponseType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostResponseType *success __attribute__((swift_name("success")));
@property (class, readonly) BifrostResponseType *error __attribute__((swift_name("error")));
+ (BifrostKotlinArray<BifrostResponseType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Apollo_apiExecutable")))
@protocol BifrostApollo_apiExecutable
@required
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((swift_name("Apollo_apiOperation")))
@protocol BifrostApollo_apiOperation <BifrostApollo_apiExecutable>
@required
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
@end;

__attribute__((swift_name("Apollo_apiQuery")))
@protocol BifrostApollo_apiQuery <BifrostApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery")))
@interface BifrostCallingCodesQuery : BifrostBase <BifrostApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostCallingCodesQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Calling_codes")))
@interface BifrostCallingCodesQueryCalling_codes : BifrostBase
- (instancetype)initWithData:(NSArray<BifrostCallingCodesQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<BifrostCallingCodesQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (BifrostCallingCodesQueryCalling_codes *)doCopyData:(NSArray<BifrostCallingCodesQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BifrostCallingCodesQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Companion")))
@interface BifrostCallingCodesQueryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodesQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol BifrostApollo_apiExecutableData
@required
@end;

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol BifrostApollo_apiOperationData <BifrostApollo_apiExecutableData>
@required
@end;

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol BifrostApollo_apiQueryData <BifrostApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data")))
@interface BifrostCallingCodesQueryData : BifrostBase <BifrostApollo_apiQueryData>
- (instancetype)initWithCalling_codes:(BifrostCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("init(calling_codes:)"))) __attribute__((objc_designated_initializer));
- (BifrostCallingCodesQueryCalling_codes * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostCallingCodesQueryData *)doCopyCalling_codes:(BifrostCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("doCopy(calling_codes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostCallingCodesQueryCalling_codes * _Nullable calling_codes __attribute__((swift_name("calling_codes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data1")))
@interface BifrostCallingCodesQueryData1 : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentCallingCode:(BifrostFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("init(__typename:fragmentCallingCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentCallingCode *)component2 __attribute__((swift_name("component2()")));
- (BifrostCallingCodesQueryData1 *)doCopy__typename:(NSString *)__typename fragmentCallingCode:(BifrostFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("doCopy(__typename:fragmentCallingCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentCallingCode *fragmentCallingCode __attribute__((swift_name("fragmentCallingCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter")))
@interface BifrostCallingCodesQuery_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodesQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Apollo_apiAdapter")))
@protocol BifrostApollo_apiAdapter
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(id _Nullable)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Calling_codes")))
@interface BifrostCallingCodesQuery_ResponseAdapterCalling_codes : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)calling_codes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodesQuery_ResponseAdapterCalling_codes *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCallingCodesQueryCalling_codes * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCallingCodesQueryCalling_codes *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data")))
@interface BifrostCallingCodesQuery_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodesQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCallingCodesQueryData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCallingCodesQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data1")))
@interface BifrostCallingCodesQuery_ResponseAdapterData1 : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodesQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCallingCodesQueryData1 * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCallingCodesQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_")))
@interface BifrostCallingCode_ : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostCallingCode_Companion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_.Companion")))
@interface BifrostCallingCode_Companion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCode_Companion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator")))
@interface BifrostCallingCodePaginator : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostCallingCodePaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator.Companion")))
@interface BifrostCallingCodePaginatorCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodePaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface BifrostQuery : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostQueryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query.Companion")))
@interface BifrostQueryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuerySelections")))
@interface BifrostCallingCodesQuerySelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCallingCodesQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol BifrostApollo_apiFragmentData <BifrostApollo_apiExecutableData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCode")))
@interface BifrostFragmentCallingCode : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("init(id:value:description:key:flag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (BifrostFragmentCallingCode *)doCopyId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("doCopy(id:value:description:key:flag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable flag __attribute__((swift_name("flag")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCodeImpl_ResponseAdapter")))
@interface BifrostFragmentCallingCodeImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentCallingCodeImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCodeImpl_ResponseAdapter.FragmentCallingCode")))
@interface BifrostFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentCallingCode * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentCallingCode *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentCallingCodeSelections")))
@interface BifrostfragmentCallingCodeSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentCallingCodeSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponse")))
@interface BifrostApollo_apiApolloResponse<D> : BifrostBase
- (BOOL)hasErrors __attribute__((swift_name("hasErrors()")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) D _Nullable data __attribute__((swift_name("data")));
@property (readonly) D dataAssertNoErrors __attribute__((swift_name("dataAssertNoErrors")));
@property (readonly) NSArray<BifrostApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) id<BifrostApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) id<BifrostApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) BifrostUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BifrostKotlinEnumCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BifrostKotlinArray<T> : BifrostBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BifrostInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BifrostKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface BifrostKotlinThrowable : BifrostBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (BifrostKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface BifrostKotlinException : BifrostKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("OkioIOException")))
@interface BifrostOkioIOException : BifrostKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Apollo_apiCompiledSelection")))
@interface BifrostApollo_apiCompiledSelection : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface BifrostApollo_apiCompiledField : BifrostApollo_apiCompiledSelection
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)nameWithArgumentsVariables:(BifrostApollo_apiExecutableVariables *)variables __attribute__((swift_name("nameWithArguments(variables:)")));
- (BifrostApollo_apiCompiledFieldBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(BifrostApollo_apiExecutableVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<BifrostApollo_apiCompiledArgument *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) NSArray<BifrostApollo_apiCompiledCondition *> *condition __attribute__((swift_name("condition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *selections __attribute__((swift_name("selections")));
@property (readonly) BifrostApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("OkioCloseable")))
@protocol BifrostOkioCloseable
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Apollo_apiJsonWriter")))
@protocol BifrostApollo_apiJsonWriter <BifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)nameName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("name(name:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)nullValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nullValue()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(id<BifrostApollo_apiUpload>)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(BifrostApollo_apiJsonNumber *)value error_:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(BOOL)value error__:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value__:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(double)value error___:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value___:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(int32_t)value error____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(int64_t)value error_____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonWriter> _Nullable)valueValue:(NSString *)value error______:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value______:)")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol BifrostApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<BifrostApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<BifrostApollo_apiExecutionContextElement> _Nullable)getKey:(id<BifrostApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<BifrostApollo_apiExecutionContext>)minusKeyKey:(id<BifrostApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<BifrostApollo_apiExecutionContext>)plusContext:(id<BifrostApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol BifrostApollo_apiExecutionContextElement <BifrostApollo_apiExecutionContext>
@required
@property (readonly) id<BifrostApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters")))
@interface BifrostApollo_apiCustomScalarAdapters : BifrostBase <BifrostApollo_apiExecutionContextElement>
@property (class, readonly, getter=companion) BifrostApollo_apiCustomScalarAdaptersKey *companion __attribute__((swift_name("companion")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id<BifrostApollo_apiAdapter>)responseAdapterForCustomScalar:(BifrostApollo_apiCustomScalarType *)customScalar __attribute__((swift_name("responseAdapterFor(customScalar:)")));
@property (readonly) id<BifrostApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Apollo_apiJsonReader")))
@protocol BifrostApollo_apiJsonReader <BifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonReader> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonReader> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonReader> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<BifrostApollo_apiJsonReader> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)hasNextAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("hasNext()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)nextBooleanAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextBoolean()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (double)nextDoubleAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextDouble()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)nextIntAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextInt()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)nextLongAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextLong()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextNameAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextName()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostKotlinNothing * _Nullable)nextNullAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNull()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostApollo_apiJsonNumber * _Nullable)nextNumberAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNumber()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextStringAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextString()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostApollo_apiJsonReaderToken * _Nullable)peekAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("peek()")));
- (void)rewind __attribute__((swift_name("rewind()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)selectNameNames:(NSArray<NSString *> *)names error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("selectName(names:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)skipValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("skipValue()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledType")))
@interface BifrostApollo_apiCompiledType : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BifrostApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface BifrostApollo_apiCompiledNamedType : BifrostApollo_apiCompiledType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (BifrostApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface BifrostApollo_apiObjectType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<BifrostApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<BifrostApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface BifrostApollo_apiApolloResponseBuilder<D> : BifrostBase
- (instancetype)initWithOperation:(id<BifrostApollo_apiOperation>)operation requestUuid:(BifrostUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer));
- (BifrostApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<BifrostApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (BifrostApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<BifrostApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)requestUuidRequestUuid:(BifrostUuidUuid *)requestUuid __attribute__((swift_name("requestUuid(requestUuid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError")))
@interface BifrostApollo_apiError : BifrostBase
- (instancetype)initWithMessage:(NSString *)message locations:(NSArray<BifrostApollo_apiErrorLocation *> * _Nullable)locations path:(NSArray<id> * _Nullable)path extensions:(NSDictionary<NSString *, id> * _Nullable)extensions nonStandardFields:(NSDictionary<NSString *, id> * _Nullable)nonStandardFields __attribute__((swift_name("init(message:locations:path:extensions:nonStandardFields:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes"))) __attribute__((unavailable("Used for backward compatibility with 2.x")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<BifrostApollo_apiErrorLocation *> * _Nullable locations __attribute__((swift_name("locations")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable nonStandardFields __attribute__((swift_name("nonStandardFields")));
@property (readonly) NSArray<id> * _Nullable path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidUuid")))
@interface BifrostUuidUuid : BifrostBase <BifrostKotlinComparable>
- (instancetype)initWithMsb:(int64_t)msb lsb:(int64_t)lsb __attribute__((swift_name("init(msb:lsb:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuidBytes:(BifrostKotlinByteArray *)uuidBytes __attribute__((swift_name("init(uuidBytes:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use `uuidOf` instead.")));
- (int32_t)compareToOther:(BifrostUuidUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t leastSignificantBits __attribute__((swift_name("leastSignificantBits")));
@property (readonly) int64_t mostSignificantBits __attribute__((swift_name("mostSignificantBits")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol BifrostKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiExecutableVariables")))
@interface BifrostApollo_apiExecutableVariables : BifrostBase
- (instancetype)initWithValueMap:(NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("init(valueMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *valueMap __attribute__((swift_name("valueMap")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField.Builder")))
@interface BifrostApollo_apiCompiledFieldBuilder : BifrostBase
- (instancetype)initWithCompiledField:(BifrostApollo_apiCompiledField *)compiledField __attribute__((swift_name("init(compiledField:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name type:(BifrostApollo_apiCompiledType *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (BifrostApollo_apiCompiledFieldBuilder *)aliasAlias:(NSString * _Nullable)alias __attribute__((swift_name("alias(alias:)")));
- (BifrostApollo_apiCompiledFieldBuilder *)argumentsArguments:(NSArray<BifrostApollo_apiCompiledArgument *> *)arguments __attribute__((swift_name("arguments(arguments:)")));
- (BifrostApollo_apiCompiledField *)build __attribute__((swift_name("build()")));
- (BifrostApollo_apiCompiledFieldBuilder *)conditionCondition:(NSArray<BifrostApollo_apiCompiledCondition *> *)condition __attribute__((swift_name("condition(condition:)")));
- (BifrostApollo_apiCompiledFieldBuilder *)selectionsSelections:(NSArray<BifrostApollo_apiCompiledSelection *> *)selections __attribute__((swift_name("selections(selections:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BifrostApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgument")))
@interface BifrostApollo_apiCompiledArgument : BifrostBase
- (instancetype)initWithName:(NSString *)name value:(id _Nullable)value isKey:(BOOL)isKey __attribute__((swift_name("init(name:value:isKey:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledCondition")))
@interface BifrostApollo_apiCompiledCondition : BifrostBase
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("init(name:inverted:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BifrostApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("doCopy(name:inverted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL inverted __attribute__((swift_name("inverted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Apollo_apiUpload")))
@protocol BifrostApollo_apiUpload
@required
- (void)writeToSink:(id<BifrostOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonNumber")))
@interface BifrostApollo_apiJsonNumber : BifrostBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol BifrostApollo_apiExecutionContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Key")))
@interface BifrostApollo_apiCustomScalarAdaptersKey : BifrostBase <BifrostApollo_apiExecutionContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostApollo_apiCustomScalarAdaptersKey *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarAdapters *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Builder")))
@interface BifrostApollo_apiCustomScalarAdaptersBuilder : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(BifrostApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<BifrostApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(BifrostApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<BifrostApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (BifrostApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface BifrostApollo_apiCustomScalarType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *className __attribute__((swift_name("className")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BifrostKotlinNothing : BifrostBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonReaderToken")))
@interface BifrostApollo_apiJsonReaderToken : BifrostKotlinEnum<BifrostApollo_apiJsonReaderToken *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *beginArray __attribute__((swift_name("beginArray")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *endArray __attribute__((swift_name("endArray")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *beginObject __attribute__((swift_name("beginObject")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *endObject __attribute__((swift_name("endObject")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *name __attribute__((swift_name("name")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *string __attribute__((swift_name("string")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *number __attribute__((swift_name("number")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *long_ __attribute__((swift_name("long_")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *null __attribute__((swift_name("null")));
@property (class, readonly) BifrostApollo_apiJsonReaderToken *endDocument __attribute__((swift_name("endDocument")));
+ (BifrostKotlinArray<BifrostApollo_apiJsonReaderToken *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface BifrostApollo_apiInterfaceType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<BifrostApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<BifrostApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError.Location")))
@interface BifrostApollo_apiErrorLocation : BifrostBase
- (instancetype)initWithLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BifrostKotlinByteArray : BifrostBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BifrostByte *(^)(BifrostInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BifrostKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSink")))
@protocol BifrostOkioSink <BifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (BifrostOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(BifrostOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end;

__attribute__((swift_name("OkioBufferedSink")))
@protocol BifrostOkioBufferedSink <BifrostOkioSink>
@required
- (id<BifrostOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<BifrostOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<BifrostOkioBufferedSink>)writeSource:(BifrostKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<BifrostOkioBufferedSink>)writeSource:(BifrostKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<BifrostOkioBufferedSink>)writeByteString:(BifrostOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<BifrostOkioBufferedSink>)writeByteString:(BifrostOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (id<BifrostOkioBufferedSink>)writeSource:(id<BifrostOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<BifrostOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<BifrostOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<BifrostOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<BifrostOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<BifrostOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<BifrostOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<BifrostOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<BifrostOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<BifrostOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<BifrostOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<BifrostOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<BifrostOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<BifrostOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) BifrostOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol BifrostApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(BifrostApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (BifrostApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface BifrostKotlinByteIterator : BifrostBase <BifrostKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BifrostByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("OkioByteString")))
@interface BifrostOkioByteString : BifrostBase <BifrostKotlinComparable>
@property (class, readonly, getter=companion) BifrostOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(BifrostOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(BifrostKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(BifrostKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(BifrostOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (BifrostOkioByteString *)hmacSha1Key:(BifrostOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (BifrostOkioByteString *)hmacSha256Key:(BifrostOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (BifrostOkioByteString *)hmacSha512Key:(BifrostOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(BifrostKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(BifrostOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(BifrostKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(BifrostOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (BifrostOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(BifrostKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(BifrostOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (BifrostOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (BifrostOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (BifrostOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(BifrostKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(BifrostOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (BifrostOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (BifrostOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (BifrostOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (BifrostKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSource")))
@protocol BifrostOkioSource <BifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(BifrostOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (BifrostOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end;

__attribute__((swift_name("OkioBufferedSource")))
@protocol BifrostOkioBufferedSource <BifrostOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(BifrostOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(BifrostOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(BifrostOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(BifrostOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<BifrostOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(BifrostOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(BifrostOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(BifrostKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(BifrostKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<BifrostOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (BifrostKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (BifrostKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (BifrostOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (BifrostOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(BifrostKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(BifrostOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<BifrostOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) BifrostOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface BifrostOkioBuffer : BifrostBase <BifrostOkioBufferedSource, BifrostOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (BifrostOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (BifrostOkioBuffer *)doCopyToOut:(BifrostOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (BifrostOkioBuffer *)doCopyToOut:(BifrostOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (BifrostOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (BifrostOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BifrostOkioByteString *)hmacSha1Key:(BifrostOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (BifrostOkioByteString *)hmacSha256Key:(BifrostOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (BifrostOkioByteString *)hmacSha512Key:(BifrostOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(BifrostOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(BifrostOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(BifrostOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(BifrostOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (BifrostOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<BifrostOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(BifrostOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(BifrostOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(BifrostKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(BifrostKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(BifrostOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int64_t)readAllSink:(id<BifrostOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (BifrostOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(BifrostOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (BifrostKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (BifrostKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (BifrostOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (BifrostOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(BifrostKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(BifrostOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (BifrostOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(BifrostOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<BifrostOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (BifrostOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (BifrostOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (BifrostOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (BifrostOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (BifrostOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (BifrostOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BifrostOkioBuffer *)writeSource:(BifrostKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (BifrostOkioBuffer *)writeSource:(BifrostKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(BifrostOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (BifrostOkioBuffer *)writeByteString:(BifrostOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (BifrostOkioBuffer *)writeByteString:(BifrostOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (BifrostOkioBuffer *)writeSource:(id<BifrostOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<BifrostOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (BifrostOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (BifrostOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (BifrostOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (BifrostOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (BifrostOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (BifrostOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (BifrostOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (BifrostOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (BifrostOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (BifrostOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (BifrostOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (BifrostOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) BifrostOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioTimeout")))
@interface BifrostOkioTimeout : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface BifrostApollo_apiCustomTypeValue<T> : BifrostBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Used for backward compatibility with 2.x, use Adapter instead")));
@property (class, readonly, getter=companion) BifrostApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface BifrostOkioByteStringCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (BifrostOkioByteString *)ofData:(BifrostKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (BifrostOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (BifrostOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (BifrostOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (BifrostOkioByteString *)toByteString:(BifrostKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) BifrostOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface BifrostOkioBufferUnsafeCursor : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@property BifrostOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property BifrostKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface BifrostOkioTimeoutCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostOkioTimeout *NONE __attribute__((swift_name("NONE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomTypeValueCompanion")))
@interface BifrostApollo_apiCustomTypeValueCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostApollo_apiCustomTypeValueCompanion *shared __attribute__((swift_name("shared")));
- (BifrostApollo_apiCustomTypeValue<id> *)fromRawValueValue:(id _Nullable)value __attribute__((swift_name("fromRawValue(value:)")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
