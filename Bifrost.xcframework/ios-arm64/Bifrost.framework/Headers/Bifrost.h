#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BifrostApollo_apiCompiledField, BifrostApollo_apiCustomScalarAdapters, BifrostAddFeedbackInput, BifrostAddFeedbackMutationCompanion, BifrostAddFeedbackMutation, BifrostAddFeedbackMutationAddFeedback, BifrostAddFeedbackMutationData, BifrostCheckInsuranceQueryCompanion, BifrostCheckInsuranceQuery, BifrostCheckInsuranceQueryKoalay_dealer_info, BifrostCheckInsuranceQueryData, BifrostFragmentInsurance, BifrostKoalayDefineDealerInput, BifrostCreateInsuranceMutationCompanion, BifrostCreateInsuranceMutation, BifrostCreateInsuranceMutationKoalay_define_dealer, BifrostCreateInsuranceMutationData, BifrostForgotPasswordOTPMutationCompanion, BifrostForgotPasswordOTPMutation, BifrostForgotPasswordOTPMutationForgotPasswordOTP, BifrostForgotPasswordOTPMutationData, BifrostLogOutMutationCompanion, BifrostLogOutMutationLogout, BifrostLogOutMutationData, BifrostLoginMutationCompanion, BifrostLoginMutation, BifrostLoginMutationLogin, BifrostLoginMutationData, BifrostFragmentAuth, BifrostSummaryPages, BifrostPageSummaryQueryCompanion, BifrostPageSummaryQuery, BifrostPageSummaryQueryData, BifrostPageSummaryQueryPage_summary, BifrostFragmentSummary, BifrostQueryTrainingsForUserWhereWhereConditions, BifrostQueryTrainingsForUserOrderByOrderByClause, BifrostTrainingsQueryCompanion, BifrostTrainingsQuery, BifrostTrainingsQueryTrainings_for_user, BifrostTrainingsQueryData, BifrostFragmentTraining, BifrostTrainingsQueryData1, BifrostFeedbackType, BifrostApollo_apiOptional<__covariant V>, BifrostAuthPayloadCompanion, BifrostApollo_apiObjectType, BifrostBuyerCompanion, BifrostBuyerDemandCompanion, BifrostDateTimeCompanion, BifrostApollo_apiCustomScalarType, BifrostFeedbackCompanion, BifrostKotlinEnumCompanion, BifrostKotlinEnum<E>, BifrostFeedbackTypeCompanion, BifrostKotlinArray<T>, BifrostApollo_apiEnumType, BifrostForgotPasswordResponseCompanion, BifrostGraphQLBooleanCompanion, BifrostGraphQLFloatCompanion, BifrostGraphQLIDCompanion, BifrostGraphQLIntCompanion, BifrostGraphQLStringCompanion, BifrostKoalayDealerCompanion, BifrostLogoutResponseCompanion, BifrostMixedCompanion, BifrostMutationCompanion, BifrostPageSummaryCompanion, BifrostQueryCompanion, BifrostTrainingColumn, BifrostSortOrder, BifrostSQLOperator, BifrostQueryTrainingsForUserWhereWhereConditionsRelation, BifrostSQLOperatorCompanion, BifrostSortOrderCompanion, BifrostSummariesCompanion, BifrostSummaries, BifrostSummaryCompanion, BifrostSummaryPagesCompanion, BifrostTrainingCompanion, BifrostTrainingColumnCompanion, BifrostTrainingPaginatorCompanion, BifrostUserCompanion, BifrostAddFeedbackInput_InputAdapter, BifrostFeedbackType_ResponseAdapter, BifrostKoalayDefineDealerInput_InputAdapter, BifrostQueryTrainingsForUserOrderByOrderByClause_InputAdapter, BifrostQueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter, BifrostQueryTrainingsForUserWhereWhereConditions_InputAdapter, BifrostSQLOperator_ResponseAdapter, BifrostSortOrder_ResponseAdapter, BifrostSummaries_ResponseAdapter, BifrostSummaryPages_ResponseAdapter, BifrostTrainingColumn_ResponseAdapter, BifrostApollo_apiApolloResponse<D>, BifrostBaseResponseModel<T>, BifrostApollo_apiHttpRequest, BifrostApollo_apiHttpResponse, BifrostGraphQLAuthorizationInterceptorCompanion, BifrostResponseStatus, BifrostFragmentAuthUser, BifrostFragmentUser, BifrostFragmentAuthImpl_ResponseAdapter, BifrostFragmentAuthImpl_ResponseAdapterFragmentAuth, BifrostFragmentAuthImpl_ResponseAdapterUser, BifrostFragmentBuyerDemand, BifrostFragmentBuyer, BifrostFragmentBuyerBuyer, BifrostFragmentBuyerImpl_ResponseAdapter, BifrostFragmentBuyerImpl_ResponseAdapterBuyer, BifrostFragmentBuyerImpl_ResponseAdapterDemand, BifrostFragmentBuyerImpl_ResponseAdapterFragmentBuyer, BifrostFragmentInsuranceImpl_ResponseAdapter, BifrostFragmentInsuranceImpl_ResponseAdapterFragmentInsurance, BifrostFragmentSummarySummary, BifrostFragmentSummaryImpl_ResponseAdapter, BifrostFragmentSummaryImpl_ResponseAdapterFragmentSummary, BifrostFragmentSummaryImpl_ResponseAdapterSummary, BifrostFragmentTrainingImpl_ResponseAdapter, BifrostFragmentTrainingImpl_ResponseAdapterFragmentTraining, BifrostFragmentUserImpl_ResponseAdapter, BifrostFragmentUserImpl_ResponseAdapterFragmentUser, BifrostfragmentAuthSelections, BifrostApollo_apiCompiledSelection, BifrostfragmentBuyerSelections, BifrostfragmentInsuranceSelections, BifrostfragmentSummarySelections, BifrostfragmentTrainingSelections, BifrostfragmentUserSelections, BifrostDateFormatType, BifrostDateHelperCompanion, BifrostAddFeedbackMutationSelections, BifrostCheckInsuranceQuerySelections, BifrostCreateInsuranceMutationSelections, BifrostForgotPasswordOTPMutationSelections, BifrostLogOutMutationSelections, BifrostLoginMutationSelections, BifrostPageSummaryQuerySelections, BifrostTrainingsQuerySelections, BifrostAddFeedbackMutation_ResponseAdapter, BifrostAddFeedbackMutation_ResponseAdapterAddFeedback, BifrostAddFeedbackMutation_ResponseAdapterData, BifrostAddFeedbackMutation_VariablesAdapter, BifrostCheckInsuranceQuery_ResponseAdapter, BifrostCheckInsuranceQuery_ResponseAdapterData, BifrostCheckInsuranceQuery_ResponseAdapterKoalay_dealer_info, BifrostCheckInsuranceQuery_VariablesAdapter, BifrostCreateInsuranceMutation_ResponseAdapter, BifrostCreateInsuranceMutation_ResponseAdapterData, BifrostCreateInsuranceMutation_ResponseAdapterKoalay_define_dealer, BifrostCreateInsuranceMutation_VariablesAdapter, BifrostForgotPasswordOTPMutation_ResponseAdapter, BifrostForgotPasswordOTPMutation_ResponseAdapterData, BifrostForgotPasswordOTPMutation_ResponseAdapterForgotPasswordOTP, BifrostForgotPasswordOTPMutation_VariablesAdapter, BifrostLogOutMutation_ResponseAdapter, BifrostLogOutMutation_ResponseAdapterData, BifrostLogOutMutation_ResponseAdapterLogout, BifrostLoginMutation_ResponseAdapter, BifrostLoginMutation_ResponseAdapterData, BifrostLoginMutation_ResponseAdapterLogin, BifrostLoginMutation_VariablesAdapter, BifrostPageSummaryQuery_ResponseAdapter, BifrostPageSummaryQuery_ResponseAdapterData, BifrostPageSummaryQuery_ResponseAdapterPage_summary, BifrostPageSummaryQuery_VariablesAdapter, BifrostTrainingsQuery_ResponseAdapter, BifrostTrainingsQuery_ResponseAdapterData, BifrostTrainingsQuery_ResponseAdapterData1, BifrostTrainingsQuery_ResponseAdapterTrainings_for_user, BifrostTrainingsQuery_VariablesAdapter, BifrostBaseRepository, BifrostHomePageSummaryResponse, BifrostHomePageSummary, BifrostCheckInsuranceRequest, BifrostInsuranceResponse, BifrostCreateInsuranceUserRequest, BifrostInsurance, BifrostTrainingsTimeType, BifrostGetTrainingListRequest, BifrostInsuranceResponseCompanion, BifrostLogin, BifrostAuth, BifrostUser_, BifrostAddFeedBackRequest, BifrostTrainingResponse, BifrostTrainingListResponse, BifrostAddFeedBackType, BifrostTrainings, BifrostKotlinThrowable, BifrostKotlinException, BifrostApollo_apiExecutableVariables, BifrostApollo_apiCompiledFieldBuilder, BifrostApollo_apiCompiledArgument, BifrostApollo_apiCompiledCondition, BifrostApollo_apiCompiledType, BifrostApollo_apiJsonNumber, BifrostApollo_apiCustomScalarAdaptersKey, BifrostApollo_apiCustomScalarAdaptersBuilder, BifrostApollo_apiAdapterContext, BifrostApollo_apiOptionalCompanion, BifrostApollo_apiCompiledNamedType, BifrostApollo_apiInterfaceType, BifrostKotlinNothing, BifrostApollo_apiJsonReaderToken, BifrostKotlinRuntimeException, BifrostKotlinIllegalStateException, BifrostApollo_apiApolloResponseBuilder<D>, BifrostApollo_apiError, BifrostUuidUuid, BifrostApollo_apiHttpRequestBuilder, BifrostApollo_apiHttpMethod, BifrostApollo_apiHttpHeader, BifrostApollo_apiHttpResponseBuilder, BifrostApollo_apiAdapterContextBuilder, BifrostApollo_apiErrorLocation, BifrostKotlinByteArray, BifrostOkioByteString, BifrostOkioBuffer, BifrostOkioTimeout, BifrostApollo_apiCustomTypeValue<T>, BifrostApollo_apiDeferredFragmentIdentifier, BifrostKotlinByteIterator, BifrostOkioByteStringCompanion, BifrostOkioBufferUnsafeCursor, BifrostOkioTimeoutCompanion, BifrostApollo_apiCustomTypeValueCompanion;

@protocol BifrostApollo_apiAdapter, BifrostApollo_apiJsonWriter, BifrostApollo_apiExecutable, BifrostApollo_apiOperation, BifrostApollo_apiMutation, BifrostApollo_apiExecutableData, BifrostApollo_apiOperationData, BifrostApollo_apiMutationData, BifrostApollo_apiQuery, BifrostApollo_apiQueryData, BifrostKotlinComparable, BifrostApollo_apiJsonReader, BifrostApollo_runtimeHttpInterceptorChain, BifrostApollo_runtimeHttpInterceptor, BifrostApollo_apiFragmentData, BifrostApollo_apiUpload, BifrostOkioCloseable, BifrostApollo_apiExecutionContextKey, BifrostApollo_apiExecutionContextElement, BifrostApollo_apiExecutionContext, BifrostKotlinIterator, BifrostApollo_apiHttpBody, BifrostOkioBufferedSource, BifrostOkioBufferedSink, BifrostApollo_apiCustomTypeAdapter, BifrostOkioSink, BifrostOkioSource;

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
- (NSString *)name __attribute__((swift_name("name()")));
@end;

__attribute__((swift_name("Apollo_apiMutation")))
@protocol BifrostApollo_apiMutation <BifrostApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation")))
@interface BifrostAddFeedbackMutation : BifrostBase <BifrostApollo_apiMutation>
- (instancetype)initWithInput:(BifrostAddFeedbackInput *)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostAddFeedbackMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (BifrostAddFeedbackInput *)component1 __attribute__((swift_name("component1()")));
- (BifrostAddFeedbackMutation *)doCopyInput:(BifrostAddFeedbackInput *)input __attribute__((swift_name("doCopy(input:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostAddFeedbackInput *input __attribute__((swift_name("input")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation.AddFeedback")))
@interface BifrostAddFeedbackMutationAddFeedback : BifrostBase
- (instancetype)initWithNote:(NSString *)note __attribute__((swift_name("init(note:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostAddFeedbackMutationAddFeedback *)doCopyNote:(NSString *)note __attribute__((swift_name("doCopy(note:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation.Companion")))
@interface BifrostAddFeedbackMutationCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackMutationCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((swift_name("Apollo_apiMutationData")))
@protocol BifrostApollo_apiMutationData <BifrostApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation.Data")))
@interface BifrostAddFeedbackMutationData : BifrostBase <BifrostApollo_apiMutationData>
- (instancetype)initWithAddFeedback:(BifrostAddFeedbackMutationAddFeedback * _Nullable)addFeedback __attribute__((swift_name("init(addFeedback:)"))) __attribute__((objc_designated_initializer));
- (BifrostAddFeedbackMutationAddFeedback * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostAddFeedbackMutationData *)doCopyAddFeedback:(BifrostAddFeedbackMutationAddFeedback * _Nullable)addFeedback __attribute__((swift_name("doCopy(addFeedback:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostAddFeedbackMutationAddFeedback * _Nullable addFeedback __attribute__((swift_name("addFeedback")));
@end;

__attribute__((swift_name("Apollo_apiQuery")))
@protocol BifrostApollo_apiQuery <BifrostApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery")))
@interface BifrostCheckInsuranceQuery : BifrostBase <BifrostApollo_apiQuery>
- (instancetype)initWithDealerCode:(NSString *)dealerCode __attribute__((swift_name("init(dealerCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostCheckInsuranceQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostCheckInsuranceQuery *)doCopyDealerCode:(NSString *)dealerCode __attribute__((swift_name("doCopy(dealerCode:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dealerCode __attribute__((swift_name("dealerCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery.Companion")))
@interface BifrostCheckInsuranceQueryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCheckInsuranceQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol BifrostApollo_apiQueryData <BifrostApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery.Data")))
@interface BifrostCheckInsuranceQueryData : BifrostBase <BifrostApollo_apiQueryData>
- (instancetype)initWithKoalay_dealer_info:(BifrostCheckInsuranceQueryKoalay_dealer_info * _Nullable)koalay_dealer_info __attribute__((swift_name("init(koalay_dealer_info:)"))) __attribute__((objc_designated_initializer));
- (BifrostCheckInsuranceQueryKoalay_dealer_info * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostCheckInsuranceQueryData *)doCopyKoalay_dealer_info:(BifrostCheckInsuranceQueryKoalay_dealer_info * _Nullable)koalay_dealer_info __attribute__((swift_name("doCopy(koalay_dealer_info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostCheckInsuranceQueryKoalay_dealer_info * _Nullable koalay_dealer_info __attribute__((swift_name("koalay_dealer_info")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery.Koalay_dealer_info")))
@interface BifrostCheckInsuranceQueryKoalay_dealer_info : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentInsurance:(BifrostFragmentInsurance *)fragmentInsurance __attribute__((swift_name("init(__typename:fragmentInsurance:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentInsurance *)component2 __attribute__((swift_name("component2()")));
- (BifrostCheckInsuranceQueryKoalay_dealer_info *)doCopy__typename:(NSString *)__typename fragmentInsurance:(BifrostFragmentInsurance *)fragmentInsurance __attribute__((swift_name("doCopy(__typename:fragmentInsurance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentInsurance *fragmentInsurance __attribute__((swift_name("fragmentInsurance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation")))
@interface BifrostCreateInsuranceMutation : BifrostBase <BifrostApollo_apiMutation>
- (instancetype)initWithInput:(BifrostKoalayDefineDealerInput *)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostCreateInsuranceMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (BifrostKoalayDefineDealerInput *)component1 __attribute__((swift_name("component1()")));
- (BifrostCreateInsuranceMutation *)doCopyInput:(BifrostKoalayDefineDealerInput *)input __attribute__((swift_name("doCopy(input:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostKoalayDefineDealerInput *input __attribute__((swift_name("input")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation.Companion")))
@interface BifrostCreateInsuranceMutationCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCreateInsuranceMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation.Data")))
@interface BifrostCreateInsuranceMutationData : BifrostBase <BifrostApollo_apiMutationData>
- (instancetype)initWithKoalay_define_dealer:(BifrostCreateInsuranceMutationKoalay_define_dealer * _Nullable)koalay_define_dealer __attribute__((swift_name("init(koalay_define_dealer:)"))) __attribute__((objc_designated_initializer));
- (BifrostCreateInsuranceMutationKoalay_define_dealer * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostCreateInsuranceMutationData *)doCopyKoalay_define_dealer:(BifrostCreateInsuranceMutationKoalay_define_dealer * _Nullable)koalay_define_dealer __attribute__((swift_name("doCopy(koalay_define_dealer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostCreateInsuranceMutationKoalay_define_dealer * _Nullable koalay_define_dealer __attribute__((swift_name("koalay_define_dealer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation.Koalay_define_dealer")))
@interface BifrostCreateInsuranceMutationKoalay_define_dealer : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentInsurance:(BifrostFragmentInsurance *)fragmentInsurance __attribute__((swift_name("init(__typename:fragmentInsurance:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentInsurance *)component2 __attribute__((swift_name("component2()")));
- (BifrostCreateInsuranceMutationKoalay_define_dealer *)doCopy__typename:(NSString *)__typename fragmentInsurance:(BifrostFragmentInsurance *)fragmentInsurance __attribute__((swift_name("doCopy(__typename:fragmentInsurance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentInsurance *fragmentInsurance __attribute__((swift_name("fragmentInsurance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation")))
@interface BifrostForgotPasswordOTPMutation : BifrostBase <BifrostApollo_apiMutation>
- (instancetype)initWithCell_phone:(NSString *)cell_phone __attribute__((swift_name("init(cell_phone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostForgotPasswordOTPMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostForgotPasswordOTPMutation *)doCopyCell_phone:(NSString *)cell_phone __attribute__((swift_name("doCopy(cell_phone:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cell_phone __attribute__((swift_name("cell_phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation.Companion")))
@interface BifrostForgotPasswordOTPMutationCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordOTPMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation.Data")))
@interface BifrostForgotPasswordOTPMutationData : BifrostBase <BifrostApollo_apiMutationData>
- (instancetype)initWithForgotPasswordOTP:(BifrostForgotPasswordOTPMutationForgotPasswordOTP *)forgotPasswordOTP __attribute__((swift_name("init(forgotPasswordOTP:)"))) __attribute__((objc_designated_initializer));
- (BifrostForgotPasswordOTPMutationForgotPasswordOTP *)component1 __attribute__((swift_name("component1()")));
- (BifrostForgotPasswordOTPMutationData *)doCopyForgotPasswordOTP:(BifrostForgotPasswordOTPMutationForgotPasswordOTP *)forgotPasswordOTP __attribute__((swift_name("doCopy(forgotPasswordOTP:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostForgotPasswordOTPMutationForgotPasswordOTP *forgotPasswordOTP __attribute__((swift_name("forgotPasswordOTP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation.ForgotPasswordOTP")))
@interface BifrostForgotPasswordOTPMutationForgotPasswordOTP : BifrostBase
- (instancetype)initWithStatus:(NSString *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostForgotPasswordOTPMutationForgotPasswordOTP *)doCopyStatus:(NSString *)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation")))
@interface BifrostLogOutMutation : BifrostBase <BifrostApollo_apiMutation>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostLogOutMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation.Companion")))
@interface BifrostLogOutMutationCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLogOutMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation.Data")))
@interface BifrostLogOutMutationData : BifrostBase <BifrostApollo_apiMutationData>
- (instancetype)initWithLogout:(BifrostLogOutMutationLogout *)logout __attribute__((swift_name("init(logout:)"))) __attribute__((objc_designated_initializer));
- (BifrostLogOutMutationLogout *)component1 __attribute__((swift_name("component1()")));
- (BifrostLogOutMutationData *)doCopyLogout:(BifrostLogOutMutationLogout *)logout __attribute__((swift_name("doCopy(logout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostLogOutMutationLogout *logout __attribute__((swift_name("logout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation.Logout")))
@interface BifrostLogOutMutationLogout : BifrostBase
- (instancetype)initWithStatus:(NSString *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostLogOutMutationLogout *)doCopyStatus:(NSString *)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation")))
@interface BifrostLoginMutation : BifrostBase <BifrostApollo_apiMutation>
- (instancetype)initWithCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("init(cellPhone:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostLoginMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BifrostLoginMutation *)doCopyCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("doCopy(cellPhone:password:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cellPhone __attribute__((swift_name("cellPhone")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation.Companion")))
@interface BifrostLoginMutationCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLoginMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation.Data")))
@interface BifrostLoginMutationData : BifrostBase <BifrostApollo_apiMutationData>
- (instancetype)initWithLogin:(BifrostLoginMutationLogin *)login __attribute__((swift_name("init(login:)"))) __attribute__((objc_designated_initializer));
- (BifrostLoginMutationLogin *)component1 __attribute__((swift_name("component1()")));
- (BifrostLoginMutationData *)doCopyLogin:(BifrostLoginMutationLogin *)login __attribute__((swift_name("doCopy(login:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostLoginMutationLogin *login __attribute__((swift_name("login")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation.Login")))
@interface BifrostLoginMutationLogin : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentAuth:(BifrostFragmentAuth *)fragmentAuth __attribute__((swift_name("init(__typename:fragmentAuth:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentAuth *)component2 __attribute__((swift_name("component2()")));
- (BifrostLoginMutationLogin *)doCopy__typename:(NSString *)__typename fragmentAuth:(BifrostFragmentAuth *)fragmentAuth __attribute__((swift_name("doCopy(__typename:fragmentAuth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentAuth *fragmentAuth __attribute__((swift_name("fragmentAuth")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery")))
@interface BifrostPageSummaryQuery : BifrostBase <BifrostApollo_apiQuery>
- (instancetype)initWithPage:(BifrostSummaryPages *)page __attribute__((swift_name("init(page:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostPageSummaryQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (BifrostSummaryPages *)component1 __attribute__((swift_name("component1()")));
- (BifrostPageSummaryQuery *)doCopyPage:(BifrostSummaryPages *)page __attribute__((swift_name("doCopy(page:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostSummaryPages *page __attribute__((swift_name("page")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery.Companion")))
@interface BifrostPageSummaryQueryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery.Data")))
@interface BifrostPageSummaryQueryData : BifrostBase <BifrostApollo_apiQueryData>
- (instancetype)initWithPage_summary:(NSArray<id> * _Nullable)page_summary __attribute__((swift_name("init(page_summary:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostPageSummaryQueryData *)doCopyPage_summary:(NSArray<id> * _Nullable)page_summary __attribute__((swift_name("doCopy(page_summary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<BifrostPageSummaryQueryPage_summary *> * _Nullable)page_summaryFilterNotNull __attribute__((swift_name("page_summaryFilterNotNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable page_summary __attribute__((swift_name("page_summary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery.Page_summary")))
@interface BifrostPageSummaryQueryPage_summary : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentSummary:(BifrostFragmentSummary *)fragmentSummary __attribute__((swift_name("init(__typename:fragmentSummary:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentSummary *)component2 __attribute__((swift_name("component2()")));
- (BifrostPageSummaryQueryPage_summary *)doCopy__typename:(NSString *)__typename fragmentSummary:(BifrostFragmentSummary *)fragmentSummary __attribute__((swift_name("doCopy(__typename:fragmentSummary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentSummary *fragmentSummary __attribute__((swift_name("fragmentSummary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery")))
@interface BifrostTrainingsQuery : BifrostBase <BifrostApollo_apiQuery>
- (instancetype)initWithWhere:(BifrostQueryTrainingsForUserWhereWhereConditions *)where orderBy:(NSArray<BifrostQueryTrainingsForUserOrderByOrderByClause *> *)orderBy first:(int32_t)first page:(int32_t)page __attribute__((swift_name("init(where:orderBy:first:page:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostTrainingsQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<BifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (BifrostQueryTrainingsForUserWhereWhereConditions *)component1 __attribute__((swift_name("component1()")));
- (NSArray<BifrostQueryTrainingsForUserOrderByOrderByClause *> *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (BifrostTrainingsQuery *)doCopyWhere:(BifrostQueryTrainingsForUserWhereWhereConditions *)where orderBy:(NSArray<BifrostQueryTrainingsForUserOrderByOrderByClause *> *)orderBy first:(int32_t)first page:(int32_t)page __attribute__((swift_name("doCopy(where:orderBy:first:page:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (BifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) NSArray<BifrostQueryTrainingsForUserOrderByOrderByClause *> *orderBy __attribute__((swift_name("orderBy")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) BifrostQueryTrainingsForUserWhereWhereConditions *where __attribute__((swift_name("where")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Companion")))
@interface BifrostTrainingsQueryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Data")))
@interface BifrostTrainingsQueryData : BifrostBase <BifrostApollo_apiQueryData>
- (instancetype)initWithTrainings_for_user:(BifrostTrainingsQueryTrainings_for_user * _Nullable)trainings_for_user __attribute__((swift_name("init(trainings_for_user:)"))) __attribute__((objc_designated_initializer));
- (BifrostTrainingsQueryTrainings_for_user * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostTrainingsQueryData *)doCopyTrainings_for_user:(BifrostTrainingsQueryTrainings_for_user * _Nullable)trainings_for_user __attribute__((swift_name("doCopy(trainings_for_user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostTrainingsQueryTrainings_for_user * _Nullable trainings_for_user __attribute__((swift_name("trainings_for_user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Data1")))
@interface BifrostTrainingsQueryData1 : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentTraining:(BifrostFragmentTraining *)fragmentTraining __attribute__((swift_name("init(__typename:fragmentTraining:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentTraining *)component2 __attribute__((swift_name("component2()")));
- (BifrostTrainingsQueryData1 *)doCopy__typename:(NSString *)__typename fragmentTraining:(BifrostFragmentTraining *)fragmentTraining __attribute__((swift_name("doCopy(__typename:fragmentTraining:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentTraining *fragmentTraining __attribute__((swift_name("fragmentTraining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Trainings_for_user")))
@interface BifrostTrainingsQueryTrainings_for_user : BifrostBase
- (instancetype)initWithData:(NSArray<BifrostTrainingsQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<BifrostTrainingsQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (BifrostTrainingsQueryTrainings_for_user *)doCopyData:(NSArray<BifrostTrainingsQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BifrostTrainingsQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackInput")))
@interface BifrostAddFeedbackInput : BifrostBase
- (instancetype)initWithNote:(NSString *)note type:(BifrostApollo_apiOptional<BifrostFeedbackType *> *)type __attribute__((swift_name("init(note:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostApollo_apiOptional<BifrostFeedbackType *> *)component2 __attribute__((swift_name("component2()")));
- (BifrostAddFeedbackInput *)doCopyNote:(NSString *)note type:(BifrostApollo_apiOptional<BifrostFeedbackType *> *)type __attribute__((swift_name("doCopy(note:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@property (readonly) BifrostApollo_apiOptional<BifrostFeedbackType *> *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPayload")))
@interface BifrostAuthPayload : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostAuthPayloadCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPayload.Companion")))
@interface BifrostAuthPayloadCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAuthPayloadCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Buyer")))
@interface BifrostBuyer : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostBuyerCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Buyer.Companion")))
@interface BifrostBuyerCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostBuyerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyerDemand")))
@interface BifrostBuyerDemand : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostBuyerDemandCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyerDemand.Companion")))
@interface BifrostBuyerDemandCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostBuyerDemandCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateTime")))
@interface BifrostDateTime : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostDateTimeCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateTime.Companion")))
@interface BifrostDateTimeCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostDateTimeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback")))
@interface BifrostFeedback : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostFeedbackCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback.Companion")))
@interface BifrostFeedbackCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFeedbackCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
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
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackType")))
@interface BifrostFeedbackType : BifrostKotlinEnum<BifrostFeedbackType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BifrostFeedbackTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BifrostFeedbackType *feedback __attribute__((swift_name("feedback")));
@property (class, readonly) BifrostFeedbackType *bug __attribute__((swift_name("bug")));
@property (class, readonly) BifrostFeedbackType *unknown __attribute__((swift_name("unknown")));
+ (BifrostKotlinArray<BifrostFeedbackType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackType.Companion")))
@interface BifrostFeedbackTypeCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFeedbackTypeCompanion *shared __attribute__((swift_name("shared")));
- (BifrostKotlinArray<BifrostFeedbackType *> *)knownValues __attribute__((swift_name("knownValues()")));
- (BifrostFeedbackType *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) BifrostApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordResponse")))
@interface BifrostForgotPasswordResponse : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostForgotPasswordResponseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordResponse.Companion")))
@interface BifrostForgotPasswordResponseCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean")))
@interface BifrostGraphQLBoolean : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostGraphQLBooleanCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean.Companion")))
@interface BifrostGraphQLBooleanCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostGraphQLBooleanCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat")))
@interface BifrostGraphQLFloat : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostGraphQLFloatCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat.Companion")))
@interface BifrostGraphQLFloatCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostGraphQLFloatCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID")))
@interface BifrostGraphQLID : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostGraphQLIDCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID.Companion")))
@interface BifrostGraphQLIDCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostGraphQLIDCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt")))
@interface BifrostGraphQLInt : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostGraphQLIntCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt.Companion")))
@interface BifrostGraphQLIntCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostGraphQLIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString")))
@interface BifrostGraphQLString : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostGraphQLStringCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString.Companion")))
@interface BifrostGraphQLStringCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostGraphQLStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDealer")))
@interface BifrostKoalayDealer : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostKoalayDealerCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDealer.Companion")))
@interface BifrostKoalayDealerCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostKoalayDealerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDefineDealerInput")))
@interface BifrostKoalayDefineDealerInput : BifrostBase
- (instancetype)initWithIdentityNumber:(NSString *)IdentityNumber __attribute__((swift_name("init(IdentityNumber:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostKoalayDefineDealerInput *)doCopyIdentityNumber:(NSString *)IdentityNumber __attribute__((swift_name("doCopy(IdentityNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *IdentityNumber __attribute__((swift_name("IdentityNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutResponse")))
@interface BifrostLogoutResponse : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostLogoutResponseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutResponse.Companion")))
@interface BifrostLogoutResponseCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLogoutResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mixed")))
@interface BifrostMixed : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostMixedCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mixed.Companion")))
@interface BifrostMixedCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostMixedCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutation")))
@interface BifrostMutation : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostMutationCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutation.Companion")))
@interface BifrostMutationCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummary")))
@interface BifrostPageSummary : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostPageSummaryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummary.Companion")))
@interface BifrostPageSummaryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("QueryTrainingsForUserOrderByOrderByClause")))
@interface BifrostQueryTrainingsForUserOrderByOrderByClause : BifrostBase
- (instancetype)initWithColumn:(BifrostTrainingColumn *)column order:(BifrostSortOrder *)order __attribute__((swift_name("init(column:order:)"))) __attribute__((objc_designated_initializer));
- (BifrostTrainingColumn *)component1 __attribute__((swift_name("component1()")));
- (BifrostSortOrder *)component2 __attribute__((swift_name("component2()")));
- (BifrostQueryTrainingsForUserOrderByOrderByClause *)doCopyColumn:(BifrostTrainingColumn *)column order:(BifrostSortOrder *)order __attribute__((swift_name("doCopy(column:order:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostTrainingColumn *column __attribute__((swift_name("column")));
@property (readonly) BifrostSortOrder *order __attribute__((swift_name("order")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditions")))
@interface BifrostQueryTrainingsForUserWhereWhereConditions : BifrostBase
- (instancetype)initWithColumn:(BifrostApollo_apiOptional<BifrostTrainingColumn *> *)column operator:(BifrostApollo_apiOptional<BifrostSQLOperator *> *)operator_ value:(BifrostApollo_apiOptional<id> *)value AND:(BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *)AND OR:(BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *)OR HAS:(BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditionsRelation *> *)HAS __attribute__((swift_name("init(column:operator:value:AND:OR:HAS:)"))) __attribute__((objc_designated_initializer));
- (BifrostApollo_apiOptional<BifrostTrainingColumn *> *)component1 __attribute__((swift_name("component1()")));
- (BifrostApollo_apiOptional<BifrostSQLOperator *> *)component2 __attribute__((swift_name("component2()")));
- (BifrostApollo_apiOptional<id> *)component3 __attribute__((swift_name("component3()")));
- (BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *)component4 __attribute__((swift_name("component4()")));
- (BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *)component5 __attribute__((swift_name("component5()")));
- (BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditionsRelation *> *)component6 __attribute__((swift_name("component6()")));
- (BifrostQueryTrainingsForUserWhereWhereConditions *)doCopyColumn:(BifrostApollo_apiOptional<BifrostTrainingColumn *> *)column operator:(BifrostApollo_apiOptional<BifrostSQLOperator *> *)operator_ value:(BifrostApollo_apiOptional<id> *)value AND:(BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *)AND OR:(BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *)OR HAS:(BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditionsRelation *> *)HAS __attribute__((swift_name("doCopy(column:operator:value:AND:OR:HAS:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *AND __attribute__((swift_name("AND")));
@property (readonly) BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditionsRelation *> *HAS __attribute__((swift_name("HAS")));
@property (readonly) BifrostApollo_apiOptional<NSArray<BifrostQueryTrainingsForUserWhereWhereConditions *> *> *OR __attribute__((swift_name("OR")));
@property (readonly) BifrostApollo_apiOptional<BifrostTrainingColumn *> *column __attribute__((swift_name("column")));
@property (readonly, getter=operator) BifrostApollo_apiOptional<BifrostSQLOperator *> *operator_ __attribute__((swift_name("operator_")));
@property (readonly) BifrostApollo_apiOptional<id> *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditionsRelation")))
@interface BifrostQueryTrainingsForUserWhereWhereConditionsRelation : BifrostBase
- (instancetype)initWithRelation:(NSString *)relation operator:(BifrostApollo_apiOptional<BifrostSQLOperator *> *)operator_ amount:(BifrostApollo_apiOptional<BifrostInt *> *)amount condition:(BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditions *> *)condition __attribute__((swift_name("init(relation:operator:amount:condition:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostApollo_apiOptional<BifrostSQLOperator *> *)component2 __attribute__((swift_name("component2()")));
- (BifrostApollo_apiOptional<BifrostInt *> *)component3 __attribute__((swift_name("component3()")));
- (BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditions *> *)component4 __attribute__((swift_name("component4()")));
- (BifrostQueryTrainingsForUserWhereWhereConditionsRelation *)doCopyRelation:(NSString *)relation operator:(BifrostApollo_apiOptional<BifrostSQLOperator *> *)operator_ amount:(BifrostApollo_apiOptional<BifrostInt *> *)amount condition:(BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditions *> *)condition __attribute__((swift_name("doCopy(relation:operator:amount:condition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostApollo_apiOptional<BifrostInt *> *amount __attribute__((swift_name("amount")));
@property (readonly) BifrostApollo_apiOptional<BifrostQueryTrainingsForUserWhereWhereConditions *> *condition __attribute__((swift_name("condition")));
@property (readonly, getter=operator) BifrostApollo_apiOptional<BifrostSQLOperator *> *operator_ __attribute__((swift_name("operator_")));
@property (readonly) NSString *relation __attribute__((swift_name("relation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOperator")))
@interface BifrostSQLOperator : BifrostKotlinEnum<BifrostSQLOperator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BifrostSQLOperatorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BifrostSQLOperator *eq __attribute__((swift_name("eq")));
@property (class, readonly) BifrostSQLOperator *neq __attribute__((swift_name("neq")));
@property (class, readonly) BifrostSQLOperator *gt __attribute__((swift_name("gt")));
@property (class, readonly) BifrostSQLOperator *gte __attribute__((swift_name("gte")));
@property (class, readonly) BifrostSQLOperator *lt __attribute__((swift_name("lt")));
@property (class, readonly) BifrostSQLOperator *lte __attribute__((swift_name("lte")));
@property (class, readonly) BifrostSQLOperator *like __attribute__((swift_name("like")));
@property (class, readonly) BifrostSQLOperator *notLike __attribute__((swift_name("notLike")));
@property (class, readonly) BifrostSQLOperator *in __attribute__((swift_name("in")));
@property (class, readonly) BifrostSQLOperator *notIn __attribute__((swift_name("notIn")));
@property (class, readonly) BifrostSQLOperator *between __attribute__((swift_name("between")));
@property (class, readonly) BifrostSQLOperator *notBetween __attribute__((swift_name("notBetween")));
@property (class, readonly) BifrostSQLOperator *isNull __attribute__((swift_name("isNull")));
@property (class, readonly) BifrostSQLOperator *isNotNull __attribute__((swift_name("isNotNull")));
@property (class, readonly) BifrostSQLOperator *ilike __attribute__((swift_name("ilike")));
@property (class, readonly) BifrostSQLOperator *notIlike __attribute__((swift_name("notIlike")));
@property (class, readonly) BifrostSQLOperator *unknown __attribute__((swift_name("unknown")));
+ (BifrostKotlinArray<BifrostSQLOperator *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOperator.Companion")))
@interface BifrostSQLOperatorCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSQLOperatorCompanion *shared __attribute__((swift_name("shared")));
- (BifrostKotlinArray<BifrostSQLOperator *> *)knownValues __attribute__((swift_name("knownValues()")));
- (BifrostSQLOperator *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) BifrostApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder")))
@interface BifrostSortOrder : BifrostKotlinEnum<BifrostSortOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BifrostSortOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BifrostSortOrder *asc __attribute__((swift_name("asc")));
@property (class, readonly) BifrostSortOrder *desc __attribute__((swift_name("desc")));
@property (class, readonly) BifrostSortOrder *unknown __attribute__((swift_name("unknown")));
+ (BifrostKotlinArray<BifrostSortOrder *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder.Companion")))
@interface BifrostSortOrderCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSortOrderCompanion *shared __attribute__((swift_name("shared")));
- (BifrostKotlinArray<BifrostSortOrder *> *)knownValues __attribute__((swift_name("knownValues()")));
- (BifrostSortOrder *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) BifrostApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summaries")))
@interface BifrostSummaries : BifrostKotlinEnum<BifrostSummaries *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BifrostSummariesCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BifrostSummaries *theNewMessagesCount __attribute__((swift_name("theNewMessagesCount")));
@property (class, readonly) BifrostSummaries *recentlyPublishedListingsCount __attribute__((swift_name("recentlyPublishedListingsCount")));
@property (class, readonly) BifrostSummaries *tiredListingsCount __attribute__((swift_name("tiredListingsCount")));
@property (class, readonly) BifrostSummaries *freshListingsCount __attribute__((swift_name("freshListingsCount")));
@property (class, readonly) BifrostSummaries *recentlyExpiredListingsCount __attribute__((swift_name("recentlyExpiredListingsCount")));
@property (class, readonly) BifrostSummaries *activeListingsCount __attribute__((swift_name("activeListingsCount")));
@property (class, readonly) BifrostSummaries *expiredListingsCount __attribute__((swift_name("expiredListingsCount")));
@property (class, readonly) BifrostSummaries *transactionsCount __attribute__((swift_name("transactionsCount")));
@property (class, readonly) BifrostSummaries *followedListingsCount __attribute__((swift_name("followedListingsCount")));
@property (class, readonly) BifrostSummaries *notInterestedListingsCount __attribute__((swift_name("notInterestedListingsCount")));
@property (class, readonly) BifrostSummaries *sellerCallsCount __attribute__((swift_name("sellerCallsCount")));
@property (class, readonly) BifrostSummaries *sellerNotesCount __attribute__((swift_name("sellerNotesCount")));
@property (class, readonly) BifrostSummaries *sellerCallbackRemindersCount __attribute__((swift_name("sellerCallbackRemindersCount")));
@property (class, readonly) BifrostSummaries *buyersCallsCount __attribute__((swift_name("buyersCallsCount")));
@property (class, readonly) BifrostSummaries *buyersNotesCount __attribute__((swift_name("buyersNotesCount")));
@property (class, readonly) BifrostSummaries *officeBuyerDemandsCount __attribute__((swift_name("officeBuyerDemandsCount")));
@property (class, readonly) BifrostSummaries *buyersCount __attribute__((swift_name("buyersCount")));
@property (class, readonly) BifrostSummaries *buyersWithListingsCount __attribute__((swift_name("buyersWithListingsCount")));
@property (class, readonly) BifrostSummaries *trashedBuyersCount __attribute__((swift_name("trashedBuyersCount")));
@property (class, readonly) BifrostSummaries *followedBuyersCount __attribute__((swift_name("followedBuyersCount")));
@property (class, readonly) BifrostSummaries *marketTrackingBuyerDemandsCount __attribute__((swift_name("marketTrackingBuyerDemandsCount")));
@property (class, readonly) BifrostSummaries *marketTrackingMessageCount __attribute__((swift_name("marketTrackingMessageCount")));
@property (class, readonly) BifrostSummaries *sellerTrackingMessageCount __attribute__((swift_name("sellerTrackingMessageCount")));
@property (class, readonly) BifrostSummaries *buyerTrackingMessageCount __attribute__((swift_name("buyerTrackingMessageCount")));
@property (class, readonly) BifrostSummaries *ownTransactionsCount __attribute__((swift_name("ownTransactionsCount")));
@property (class, readonly) BifrostSummaries *otherTransactionsCount __attribute__((swift_name("otherTransactionsCount")));
@property (class, readonly) BifrostSummaries *listingsCount __attribute__((swift_name("listingsCount")));
@property (class, readonly) BifrostSummaries *fetchListingsCount __attribute__((swift_name("fetchListingsCount")));
@property (class, readonly) BifrostSummaries *expertiseAreasCount __attribute__((swift_name("expertiseAreasCount")));
@property (class, readonly) BifrostSummaries *archivedListingsCount __attribute__((swift_name("archivedListingsCount")));
@property (class, readonly) BifrostSummaries *valuationsCount __attribute__((swift_name("valuationsCount")));
@property (class, readonly) BifrostSummaries *duplicatedListingsCount __attribute__((swift_name("duplicatedListingsCount")));
@property (class, readonly) BifrostSummaries *totalBuyersCount __attribute__((swift_name("totalBuyersCount")));
@property (class, readonly) BifrostSummaries *unknown __attribute__((swift_name("unknown")));
+ (BifrostKotlinArray<BifrostSummaries *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summaries.Companion")))
@interface BifrostSummariesCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSummariesCompanion *shared __attribute__((swift_name("shared")));
- (BifrostKotlinArray<BifrostSummaries *> *)knownValues __attribute__((swift_name("knownValues()")));
- (BifrostSummaries *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) BifrostApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summary")))
@interface BifrostSummary : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostSummaryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summary.Companion")))
@interface BifrostSummaryCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSummaryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummaryPages")))
@interface BifrostSummaryPages : BifrostKotlinEnum<BifrostSummaryPages *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BifrostSummaryPagesCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BifrostSummaryPages *welcomeScreen __attribute__((swift_name("welcomeScreen")));
@property (class, readonly) BifrostSummaryPages *marketTracking __attribute__((swift_name("marketTracking")));
@property (class, readonly) BifrostSummaryPages *sellerTracking __attribute__((swift_name("sellerTracking")));
@property (class, readonly) BifrostSummaryPages *sellerTrackingListings __attribute__((swift_name("sellerTrackingListings")));
@property (class, readonly) BifrostSummaryPages *buyerTracking __attribute__((swift_name("buyerTracking")));
@property (class, readonly) BifrostSummaryPages *buyerTrackingListings __attribute__((swift_name("buyerTrackingListings")));
@property (class, readonly) BifrostSummaryPages *myPortfolioTracking __attribute__((swift_name("myPortfolioTracking")));
@property (class, readonly) BifrostSummaryPages *myPortfolioTrackingListings __attribute__((swift_name("myPortfolioTrackingListings")));
@property (class, readonly) BifrostSummaryPages *recentlyPublishedListingsTracking __attribute__((swift_name("recentlyPublishedListingsTracking")));
@property (class, readonly) BifrostSummaryPages *tiredListingsTracking __attribute__((swift_name("tiredListingsTracking")));
@property (class, readonly) BifrostSummaryPages *expiredListingsTracking __attribute__((swift_name("expiredListingsTracking")));
@property (class, readonly) BifrostSummaryPages *listingTransactions __attribute__((swift_name("listingTransactions")));
@property (class, readonly) BifrostSummaryPages *taskTracking __attribute__((swift_name("taskTracking")));
@property (class, readonly) BifrostSummaryPages *myProfileTracking __attribute__((swift_name("myProfileTracking")));
@property (class, readonly) BifrostSummaryPages *unknown __attribute__((swift_name("unknown")));
+ (BifrostKotlinArray<BifrostSummaryPages *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummaryPages.Companion")))
@interface BifrostSummaryPagesCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSummaryPagesCompanion *shared __attribute__((swift_name("shared")));
- (BifrostKotlinArray<BifrostSummaryPages *> *)knownValues __attribute__((swift_name("knownValues()")));
- (BifrostSummaryPages *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) BifrostApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Training")))
@interface BifrostTraining : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostTrainingCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Training.Companion")))
@interface BifrostTrainingCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingColumn")))
@interface BifrostTrainingColumn : BifrostKotlinEnum<BifrostTrainingColumn *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BifrostTrainingColumnCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BifrostTrainingColumn *id __attribute__((swift_name("id")));
@property (class, readonly) BifrostTrainingColumn *isPublished __attribute__((swift_name("isPublished")));
@property (class, readonly) BifrostTrainingColumn *startsAt __attribute__((swift_name("startsAt")));
@property (class, readonly) BifrostTrainingColumn *endsAt __attribute__((swift_name("endsAt")));
@property (class, readonly) BifrostTrainingColumn *title __attribute__((swift_name("title")));
@property (class, readonly) BifrostTrainingColumn *officeId __attribute__((swift_name("officeId")));
@property (class, readonly) BifrostTrainingColumn *meetingId __attribute__((swift_name("meetingId")));
@property (class, readonly) BifrostTrainingColumn *meetingPassword __attribute__((swift_name("meetingPassword")));
@property (class, readonly) BifrostTrainingColumn *meetingLink __attribute__((swift_name("meetingLink")));
@property (class, readonly) BifrostTrainingColumn *meetingRecordingLink __attribute__((swift_name("meetingRecordingLink")));
@property (class, readonly) BifrostTrainingColumn *inviteeCount __attribute__((swift_name("inviteeCount")));
@property (class, readonly) BifrostTrainingColumn *participantCount __attribute__((swift_name("participantCount")));
@property (class, readonly) BifrostTrainingColumn *unknown __attribute__((swift_name("unknown")));
+ (BifrostKotlinArray<BifrostTrainingColumn *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingColumn.Companion")))
@interface BifrostTrainingColumnCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingColumnCompanion *shared __attribute__((swift_name("shared")));
- (BifrostKotlinArray<BifrostTrainingColumn *> *)knownValues __attribute__((swift_name("knownValues()")));
- (BifrostTrainingColumn *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) BifrostApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingPaginator")))
@interface BifrostTrainingPaginator : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostTrainingPaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingPaginator.Companion")))
@interface BifrostTrainingPaginatorCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingPaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface BifrostUser : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostUserCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface BifrostUserCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostUserCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
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
__attribute__((swift_name("AddFeedbackInput_InputAdapter")))
@interface BifrostAddFeedbackInput_InputAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostAddFeedbackInput * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostAddFeedbackInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackType_ResponseAdapter")))
@interface BifrostFeedbackType_ResponseAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)feedbackType_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFeedbackType_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFeedbackType * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFeedbackType *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDefineDealerInput_InputAdapter")))
@interface BifrostKoalayDefineDealerInput_InputAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koalayDefineDealerInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostKoalayDefineDealerInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostKoalayDefineDealerInput * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostKoalayDefineDealerInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserOrderByOrderByClause_InputAdapter")))
@interface BifrostQueryTrainingsForUserOrderByOrderByClause_InputAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)queryTrainingsForUserOrderByOrderByClause_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostQueryTrainingsForUserOrderByOrderByClause_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostQueryTrainingsForUserOrderByOrderByClause * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostQueryTrainingsForUserOrderByOrderByClause *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter")))
@interface BifrostQueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)queryTrainingsForUserWhereWhereConditionsRelation_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostQueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostQueryTrainingsForUserWhereWhereConditionsRelation * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostQueryTrainingsForUserWhereWhereConditionsRelation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditions_InputAdapter")))
@interface BifrostQueryTrainingsForUserWhereWhereConditions_InputAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)queryTrainingsForUserWhereWhereConditions_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostQueryTrainingsForUserWhereWhereConditions_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostQueryTrainingsForUserWhereWhereConditions * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostQueryTrainingsForUserWhereWhereConditions *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOperator_ResponseAdapter")))
@interface BifrostSQLOperator_ResponseAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sQLOperator_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSQLOperator_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostSQLOperator * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostSQLOperator *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder_ResponseAdapter")))
@interface BifrostSortOrder_ResponseAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sortOrder_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSortOrder_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostSortOrder * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostSortOrder *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summaries_ResponseAdapter")))
@interface BifrostSummaries_ResponseAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)summaries_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSummaries_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostSummaries * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostSummaries *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummaryPages_ResponseAdapter")))
@interface BifrostSummaryPages_ResponseAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)summaryPages_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostSummaryPages_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostSummaryPages * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostSummaryPages *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingColumn_ResponseAdapter")))
@interface BifrostTrainingColumn_ResponseAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingColumn_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingColumn_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostTrainingColumn * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostTrainingColumn *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((swift_name("BaseRepository")))
@interface BifrostBaseRepository : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeMutationMutation:(id<BifrostApollo_apiMutation>)mutation completionHandler:(void (^)(BifrostApollo_apiApolloResponse<id<BifrostApollo_apiMutationData>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeMutation(mutation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeQueryQuery:(id<BifrostApollo_apiQuery>)query completionHandler:(void (^)(BifrostApollo_apiApolloResponse<id<BifrostApollo_apiQueryData>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeQuery(query:completionHandler:)")));
- (BifrostBaseResponseModel<id> *)onError __attribute__((swift_name("onError()")));
- (BifrostBaseResponseModel<id> *)onSuccess __attribute__((swift_name("onSuccess()")));
- (BifrostBaseResponseModel<id> *)onSuccessData:(id _Nullable)data __attribute__((swift_name("onSuccess(data:)")));
- (BOOL)isFailed:(BifrostApollo_apiApolloResponse<id<BifrostApollo_apiOperationData>> *)receiver __attribute__((swift_name("isFailed(_:)")));
@end;

__attribute__((swift_name("Apollo_runtimeHttpInterceptor")))
@protocol BifrostApollo_runtimeHttpInterceptor
@required
- (void)dispose __attribute__((swift_name("dispose()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)interceptRequest:(BifrostApollo_apiHttpRequest *)request chain:(id<BifrostApollo_runtimeHttpInterceptorChain>)chain completionHandler:(void (^)(BifrostApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("intercept(request:chain:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLAuthorizationInterceptor")))
@interface BifrostGraphQLAuthorizationInterceptor : BifrostBase <BifrostApollo_runtimeHttpInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostGraphQLAuthorizationInterceptorCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)interceptRequest:(BifrostApollo_apiHttpRequest *)request chain:(id<BifrostApollo_runtimeHttpInterceptorChain>)chain completionHandler:(void (^)(BifrostApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("intercept(request:chain:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLAuthorizationInterceptor.Companion")))
@interface BifrostGraphQLAuthorizationInterceptorCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostGraphQLAuthorizationInterceptorCompanion *shared __attribute__((swift_name("shared")));
@property NSString *testToken __attribute__((swift_name("testToken")));
@end;

__attribute__((swift_name("GraphQLNetwork")))
@interface BifrostGraphQLNetwork : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("BasePaginatorModel")))
@interface BifrostBasePaginatorModel : BifrostBase
- (instancetype)initWithPage:(int32_t)page skip:(int32_t)skip __attribute__((swift_name("init(page:skip:)"))) __attribute__((objc_designated_initializer));
@property int32_t page __attribute__((swift_name("page")));
@property int32_t skip __attribute__((swift_name("skip")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseResponseModel")))
@interface BifrostBaseResponseModel<T> : BifrostBase
- (instancetype)initWithStatus:(BifrostResponseStatus *)status data:(T _Nullable)data __attribute__((swift_name("init(status:data:)"))) __attribute__((objc_designated_initializer));
- (BifrostResponseStatus *)component1 __attribute__((swift_name("component1()")));
- (T _Nullable)component2 __attribute__((swift_name("component2()")));
- (BifrostBaseResponseModel<T> *)doCopyStatus:(BifrostResponseStatus *)status data:(T _Nullable)data __attribute__((swift_name("doCopy(status:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) BifrostResponseStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseStatus")))
@interface BifrostResponseStatus : BifrostKotlinEnum<BifrostResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostResponseStatus *success __attribute__((swift_name("success")));
@property (class, readonly) BifrostResponseStatus *error __attribute__((swift_name("error")));
+ (BifrostKotlinArray<BifrostResponseStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol BifrostApollo_apiFragmentData <BifrostApollo_apiExecutableData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuth")))
@interface BifrostFragmentAuth : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithAccess_token:(NSString * _Nullable)access_token refresh_token:(NSString * _Nullable)refresh_token expires_in:(BifrostInt * _Nullable)expires_in user:(BifrostFragmentAuthUser * _Nullable)user __attribute__((swift_name("init(access_token:refresh_token:expires_in:user:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BifrostInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BifrostFragmentAuthUser * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BifrostFragmentAuth *)doCopyAccess_token:(NSString * _Nullable)access_token refresh_token:(NSString * _Nullable)refresh_token expires_in:(BifrostInt * _Nullable)expires_in user:(BifrostFragmentAuthUser * _Nullable)user __attribute__((swift_name("doCopy(access_token:refresh_token:expires_in:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable access_token __attribute__((swift_name("access_token")));
@property (readonly) BifrostInt * _Nullable expires_in __attribute__((swift_name("expires_in")));
@property (readonly) NSString * _Nullable refresh_token __attribute__((swift_name("refresh_token")));
@property (readonly) BifrostFragmentAuthUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuth.User")))
@interface BifrostFragmentAuthUser : BifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentUser:(BifrostFragmentUser *)fragmentUser __attribute__((swift_name("init(__typename:fragmentUser:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentUser *)component2 __attribute__((swift_name("component2()")));
- (BifrostFragmentAuthUser *)doCopy__typename:(NSString *)__typename fragmentUser:(BifrostFragmentUser *)fragmentUser __attribute__((swift_name("doCopy(__typename:fragmentUser:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) BifrostFragmentUser *fragmentUser __attribute__((swift_name("fragmentUser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuthImpl_ResponseAdapter")))
@interface BifrostFragmentAuthImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentAuthImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentAuthImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuthImpl_ResponseAdapter.FragmentAuth")))
@interface BifrostFragmentAuthImpl_ResponseAdapterFragmentAuth : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentAuth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentAuthImpl_ResponseAdapterFragmentAuth *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentAuth * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentAuth *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuthImpl_ResponseAdapter.User")))
@interface BifrostFragmentAuthImpl_ResponseAdapterUser : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)user __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentAuthImpl_ResponseAdapterUser *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentAuthUser * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentAuthUser *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyer")))
@interface BifrostFragmentBuyer : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id deleted_at:(id _Nullable)deleted_at demands:(NSArray<BifrostFragmentBuyerDemand *> *)demands __attribute__((swift_name("init(id:deleted_at:demands:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<BifrostFragmentBuyerDemand *> *)component3 __attribute__((swift_name("component3()")));
- (BifrostFragmentBuyer *)doCopyId:(NSString *)id deleted_at:(id _Nullable)deleted_at demands:(NSArray<BifrostFragmentBuyerDemand *> *)demands __attribute__((swift_name("doCopy(id:deleted_at:demands:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable deleted_at __attribute__((swift_name("deleted_at")));
@property (readonly) NSArray<BifrostFragmentBuyerDemand *> *demands __attribute__((swift_name("demands")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyer.Buyer")))
@interface BifrostFragmentBuyerBuyer : BifrostBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentBuyerBuyer *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyer.Demand")))
@interface BifrostFragmentBuyerDemand : BifrostBase
- (instancetype)initWithId:(NSString *)id buyer:(BifrostFragmentBuyerBuyer * _Nullable)buyer __attribute__((swift_name("init(id:buyer:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentBuyerBuyer * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BifrostFragmentBuyerDemand *)doCopyId:(NSString *)id buyer:(BifrostFragmentBuyerBuyer * _Nullable)buyer __attribute__((swift_name("doCopy(id:buyer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostFragmentBuyerBuyer * _Nullable buyer __attribute__((swift_name("buyer")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter")))
@interface BifrostFragmentBuyerImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentBuyerImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentBuyerImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter.Buyer")))
@interface BifrostFragmentBuyerImpl_ResponseAdapterBuyer : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buyer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentBuyerImpl_ResponseAdapterBuyer *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentBuyerBuyer * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentBuyerBuyer *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter.Demand")))
@interface BifrostFragmentBuyerImpl_ResponseAdapterDemand : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)demand __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentBuyerImpl_ResponseAdapterDemand *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentBuyerDemand * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentBuyerDemand *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter.FragmentBuyer")))
@interface BifrostFragmentBuyerImpl_ResponseAdapterFragmentBuyer : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentBuyer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentBuyerImpl_ResponseAdapterFragmentBuyer *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentBuyer * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentBuyer *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentInsurance")))
@interface BifrostFragmentInsurance : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithUrl_konut:(NSString * _Nullable)url_konut url_dask:(NSString * _Nullable)url_dask __attribute__((swift_name("init(url_konut:url_dask:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BifrostFragmentInsurance *)doCopyUrl_konut:(NSString * _Nullable)url_konut url_dask:(NSString * _Nullable)url_dask __attribute__((swift_name("doCopy(url_konut:url_dask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable url_dask __attribute__((swift_name("url_dask")));
@property (readonly) NSString * _Nullable url_konut __attribute__((swift_name("url_konut")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentInsuranceImpl_ResponseAdapter")))
@interface BifrostFragmentInsuranceImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentInsuranceImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentInsuranceImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentInsuranceImpl_ResponseAdapter.FragmentInsurance")))
@interface BifrostFragmentInsuranceImpl_ResponseAdapterFragmentInsurance : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentInsurance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentInsuranceImpl_ResponseAdapterFragmentInsurance *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentInsurance * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentInsurance *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentSummary")))
@interface BifrostFragmentSummary : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithSummary:(NSArray<id> * _Nullable)summary __attribute__((swift_name("init(summary:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BifrostFragmentSummary *)doCopySummary:(NSArray<id> * _Nullable)summary __attribute__((swift_name("doCopy(summary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable summary __attribute__((swift_name("summary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentSummary.Summary")))
@interface BifrostFragmentSummarySummary : BifrostBase
- (instancetype)initWithKey:(BifrostSummaries * _Nullable)key value:(NSString * _Nullable)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
- (BifrostSummaries * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BifrostFragmentSummarySummary *)doCopyKey:(BifrostSummaries * _Nullable)key value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostSummaries * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentSummaryImpl_ResponseAdapter")))
@interface BifrostFragmentSummaryImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentSummaryImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentSummaryImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentSummaryImpl_ResponseAdapter.FragmentSummary")))
@interface BifrostFragmentSummaryImpl_ResponseAdapterFragmentSummary : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentSummary __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentSummaryImpl_ResponseAdapterFragmentSummary *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentSummary * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentSummary *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentSummaryImpl_ResponseAdapter.Summary")))
@interface BifrostFragmentSummaryImpl_ResponseAdapterSummary : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)summary __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentSummaryImpl_ResponseAdapterSummary *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentSummarySummary * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentSummarySummary *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentTraining")))
@interface BifrostFragmentTraining : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithStarts_at:(id)starts_at ends_at:(id)ends_at title:(NSString * _Nullable)title meeting_id:(NSString * _Nullable)meeting_id meeting_password:(NSString * _Nullable)meeting_password meeting_link:(NSString * _Nullable)meeting_link meeting_recording_link:(NSString * _Nullable)meeting_recording_link __attribute__((swift_name("init(starts_at:ends_at:title:meeting_id:meeting_password:meeting_link:meeting_recording_link:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (BifrostFragmentTraining *)doCopyStarts_at:(id)starts_at ends_at:(id)ends_at title:(NSString * _Nullable)title meeting_id:(NSString * _Nullable)meeting_id meeting_password:(NSString * _Nullable)meeting_password meeting_link:(NSString * _Nullable)meeting_link meeting_recording_link:(NSString * _Nullable)meeting_recording_link __attribute__((swift_name("doCopy(starts_at:ends_at:title:meeting_id:meeting_password:meeting_link:meeting_recording_link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id ends_at __attribute__((swift_name("ends_at")));
@property (readonly) NSString * _Nullable meeting_id __attribute__((swift_name("meeting_id")));
@property (readonly) NSString * _Nullable meeting_link __attribute__((swift_name("meeting_link")));
@property (readonly) NSString * _Nullable meeting_password __attribute__((swift_name("meeting_password")));
@property (readonly) NSString * _Nullable meeting_recording_link __attribute__((swift_name("meeting_recording_link")));
@property (readonly) id starts_at __attribute__((swift_name("starts_at")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentTrainingImpl_ResponseAdapter")))
@interface BifrostFragmentTrainingImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentTrainingImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentTrainingImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentTrainingImpl_ResponseAdapter.FragmentTraining")))
@interface BifrostFragmentTrainingImpl_ResponseAdapterFragmentTraining : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentTraining __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentTrainingImpl_ResponseAdapterFragmentTraining *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentTraining * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentTraining *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentUser")))
@interface BifrostFragmentUser : BifrostBase <BifrostApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id full_name:(NSString * _Nullable)full_name cell_phone:(NSString *)cell_phone country_code:(NSString *)country_code payment_url:(NSString * _Nullable)payment_url avatarThumb:(NSString * _Nullable)avatarThumb email:(NSString * _Nullable)email login_fizbot_agent:(BOOL)login_fizbot_agent __attribute__((swift_name("init(id:full_name:cell_phone:country_code:payment_url:avatarThumb:email:login_fizbot_agent:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BifrostFragmentUser *)doCopyId:(NSString *)id full_name:(NSString * _Nullable)full_name cell_phone:(NSString *)cell_phone country_code:(NSString *)country_code payment_url:(NSString * _Nullable)payment_url avatarThumb:(NSString * _Nullable)avatarThumb email:(NSString * _Nullable)email login_fizbot_agent:(BOOL)login_fizbot_agent __attribute__((swift_name("doCopy(id:full_name:cell_phone:country_code:payment_url:avatarThumb:email:login_fizbot_agent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarThumb __attribute__((swift_name("avatarThumb")));
@property (readonly) NSString *cell_phone __attribute__((swift_name("cell_phone")));
@property (readonly) NSString *country_code __attribute__((swift_name("country_code")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable full_name __attribute__((swift_name("full_name")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL login_fizbot_agent __attribute__((swift_name("login_fizbot_agent")));
@property (readonly) NSString * _Nullable payment_url __attribute__((swift_name("payment_url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentUserImpl_ResponseAdapter")))
@interface BifrostFragmentUserImpl_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentUserImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentUserImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentUserImpl_ResponseAdapter.FragmentUser")))
@interface BifrostFragmentUserImpl_ResponseAdapterFragmentUser : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentUser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostFragmentUserImpl_ResponseAdapterFragmentUser *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostFragmentUser * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostFragmentUser *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentAuthSelections")))
@interface BifrostfragmentAuthSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentAuthSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentAuthSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentBuyerSelections")))
@interface BifrostfragmentBuyerSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentBuyerSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentBuyerSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentInsuranceSelections")))
@interface BifrostfragmentInsuranceSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentInsuranceSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentInsuranceSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentSummarySelections")))
@interface BifrostfragmentSummarySelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentSummarySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentSummarySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentTrainingSelections")))
@interface BifrostfragmentTrainingSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentTrainingSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentTrainingSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentUserSelections")))
@interface BifrostfragmentUserSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentUserSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostfragmentUserSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateFormatType")))
@interface BifrostDateFormatType : BifrostKotlinEnum<BifrostDateFormatType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostDateFormatType *yyyyMmDdHhMmSs __attribute__((swift_name("yyyyMmDdHhMmSs")));
@property (class, readonly) BifrostDateFormatType *ddMmmmYyyy __attribute__((swift_name("ddMmmmYyyy")));
@property (class, readonly) BifrostDateFormatType *ddMmmmYy __attribute__((swift_name("ddMmmmYy")));
@property (class, readonly) BifrostDateFormatType *hhMm __attribute__((swift_name("hhMm")));
@property (class, readonly) BifrostDateFormatType *apiFormat __attribute__((swift_name("apiFormat")));
+ (BifrostKotlinArray<BifrostDateFormatType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateHelper")))
@interface BifrostDateHelper : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BifrostDateHelperCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateHelper.Companion")))
@interface BifrostDateHelperCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostDateHelperCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getCurrentDateFormat:(BifrostDateFormatType *)format __attribute__((swift_name("getCurrentDate(format:)")));
- (NSString *)parseDateDate:(NSString *)date format:(BifrostDateFormatType *)format __attribute__((swift_name("parseDate(date:format:)")));
@property (readonly) NSString *apiDateFormatType __attribute__((swift_name("apiDateFormatType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutationSelections")))
@interface BifrostAddFeedbackMutationSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuerySelections")))
@interface BifrostCheckInsuranceQuerySelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checkInsuranceQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCheckInsuranceQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutationSelections")))
@interface BifrostCreateInsuranceMutationSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createInsuranceMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCreateInsuranceMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutationSelections")))
@interface BifrostForgotPasswordOTPMutationSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTPMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordOTPMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutationSelections")))
@interface BifrostLogOutMutationSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logOutMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLogOutMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutationSelections")))
@interface BifrostLoginMutationSelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLoginMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuerySelections")))
@interface BifrostPageSummaryQuerySelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pageSummaryQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuerySelections")))
@interface BifrostTrainingsQuerySelections : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingsQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<BifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_ResponseAdapter")))
@interface BifrostAddFeedbackMutation_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_ResponseAdapter.AddFeedback")))
@interface BifrostAddFeedbackMutation_ResponseAdapterAddFeedback : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedback __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackMutation_ResponseAdapterAddFeedback *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostAddFeedbackMutationAddFeedback * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostAddFeedbackMutationAddFeedback *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_ResponseAdapter.Data")))
@interface BifrostAddFeedbackMutation_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostAddFeedbackMutationData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostAddFeedbackMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_VariablesAdapter")))
@interface BifrostAddFeedbackMutation_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostAddFeedbackMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostAddFeedbackMutation * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostAddFeedbackMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_ResponseAdapter")))
@interface BifrostCheckInsuranceQuery_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checkInsuranceQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCheckInsuranceQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_ResponseAdapter.Data")))
@interface BifrostCheckInsuranceQuery_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCheckInsuranceQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCheckInsuranceQueryData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCheckInsuranceQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_ResponseAdapter.Koalay_dealer_info")))
@interface BifrostCheckInsuranceQuery_ResponseAdapterKoalay_dealer_info : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koalay_dealer_info __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCheckInsuranceQuery_ResponseAdapterKoalay_dealer_info *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCheckInsuranceQueryKoalay_dealer_info * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCheckInsuranceQueryKoalay_dealer_info *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_VariablesAdapter")))
@interface BifrostCheckInsuranceQuery_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checkInsuranceQuery_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCheckInsuranceQuery_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCheckInsuranceQuery * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCheckInsuranceQuery *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_ResponseAdapter")))
@interface BifrostCreateInsuranceMutation_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createInsuranceMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCreateInsuranceMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_ResponseAdapter.Data")))
@interface BifrostCreateInsuranceMutation_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCreateInsuranceMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCreateInsuranceMutationData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCreateInsuranceMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_ResponseAdapter.Koalay_define_dealer")))
@interface BifrostCreateInsuranceMutation_ResponseAdapterKoalay_define_dealer : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koalay_define_dealer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCreateInsuranceMutation_ResponseAdapterKoalay_define_dealer *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCreateInsuranceMutationKoalay_define_dealer * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCreateInsuranceMutationKoalay_define_dealer *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_VariablesAdapter")))
@interface BifrostCreateInsuranceMutation_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createInsuranceMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostCreateInsuranceMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostCreateInsuranceMutation * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostCreateInsuranceMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_ResponseAdapter")))
@interface BifrostForgotPasswordOTPMutation_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTPMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordOTPMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_ResponseAdapter.Data")))
@interface BifrostForgotPasswordOTPMutation_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordOTPMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostForgotPasswordOTPMutationData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostForgotPasswordOTPMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_ResponseAdapter.ForgotPasswordOTP")))
@interface BifrostForgotPasswordOTPMutation_ResponseAdapterForgotPasswordOTP : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTP __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordOTPMutation_ResponseAdapterForgotPasswordOTP *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostForgotPasswordOTPMutationForgotPasswordOTP * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostForgotPasswordOTPMutationForgotPasswordOTP *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_VariablesAdapter")))
@interface BifrostForgotPasswordOTPMutation_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTPMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostForgotPasswordOTPMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostForgotPasswordOTPMutation * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostForgotPasswordOTPMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation_ResponseAdapter")))
@interface BifrostLogOutMutation_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logOutMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLogOutMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation_ResponseAdapter.Data")))
@interface BifrostLogOutMutation_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLogOutMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostLogOutMutationData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostLogOutMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogOutMutation_ResponseAdapter.Logout")))
@interface BifrostLogOutMutation_ResponseAdapterLogout : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logout __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLogOutMutation_ResponseAdapterLogout *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostLogOutMutationLogout * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostLogOutMutationLogout *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_ResponseAdapter")))
@interface BifrostLoginMutation_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLoginMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_ResponseAdapter.Data")))
@interface BifrostLoginMutation_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLoginMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostLoginMutationData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostLoginMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_ResponseAdapter.Login")))
@interface BifrostLoginMutation_ResponseAdapterLogin : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)login __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLoginMutation_ResponseAdapterLogin *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostLoginMutationLogin * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostLoginMutationLogin *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_VariablesAdapter")))
@interface BifrostLoginMutation_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostLoginMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostLoginMutation * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostLoginMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery_ResponseAdapter")))
@interface BifrostPageSummaryQuery_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pageSummaryQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery_ResponseAdapter.Data")))
@interface BifrostPageSummaryQuery_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostPageSummaryQueryData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostPageSummaryQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery_ResponseAdapter.Page_summary")))
@interface BifrostPageSummaryQuery_ResponseAdapterPage_summary : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)page_summary __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryQuery_ResponseAdapterPage_summary *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostPageSummaryQueryPage_summary * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostPageSummaryQueryPage_summary *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageSummaryQuery_VariablesAdapter")))
@interface BifrostPageSummaryQuery_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pageSummaryQuery_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostPageSummaryQuery_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostPageSummaryQuery * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostPageSummaryQuery *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter")))
@interface BifrostTrainingsQuery_ResponseAdapter : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingsQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter.Data")))
@interface BifrostTrainingsQuery_ResponseAdapterData : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostTrainingsQueryData * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostTrainingsQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter.Data1")))
@interface BifrostTrainingsQuery_ResponseAdapterData1 : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostTrainingsQueryData1 * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostTrainingsQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter.Trainings_for_user")))
@interface BifrostTrainingsQuery_ResponseAdapterTrainings_for_user : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainings_for_user __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQuery_ResponseAdapterTrainings_for_user *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostTrainingsQueryTrainings_for_user * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostTrainingsQueryTrainings_for_user *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_VariablesAdapter")))
@interface BifrostTrainingsQuery_VariablesAdapter : BifrostBase <BifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingsQuery_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostTrainingsQuery_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BifrostTrainingsQuery * _Nullable)fromJsonReader:(id<BifrostApollo_apiJsonReader>)reader customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<BifrostApollo_apiJsonWriter>)writer customScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(BifrostTrainingsQuery *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummaryRepository")))
@interface BifrostSummaryRepository : BifrostBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBuyersCountSummaryWithCompletionHandler:(void (^)(BifrostBaseResponseModel<BifrostHomePageSummaryResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBuyersCountSummary(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNewMessageSummaryWithCompletionHandler:(void (^)(BifrostBaseResponseModel<BifrostHomePageSummaryResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNewMessageSummary(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomePageSummary")))
@interface BifrostHomePageSummary : BifrostBase
- (instancetype)initWithData:(BifrostFragmentSummary * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBuyerCount:(int32_t)buyerCount messageCount:(int32_t)messageCount __attribute__((swift_name("init(buyerCount:messageCount:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BifrostHomePageSummary *)doCopyBuyerCount:(int32_t)buyerCount messageCount:(int32_t)messageCount __attribute__((swift_name("doCopy(buyerCount:messageCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t buyerCount __attribute__((swift_name("buyerCount")));
@property int32_t messageCount __attribute__((swift_name("messageCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomePageSummaryResponse")))
@interface BifrostHomePageSummaryResponse : BifrostBase
- (instancetype)initWithSummary:(BifrostHomePageSummary *)summary __attribute__((swift_name("init(summary:)"))) __attribute__((objc_designated_initializer));
- (BifrostHomePageSummary *)component1 __attribute__((swift_name("component1()")));
- (BifrostHomePageSummaryResponse *)doCopySummary:(BifrostHomePageSummary *)summary __attribute__((swift_name("doCopy(summary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostHomePageSummary *summary __attribute__((swift_name("summary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsuranceRepository")))
@interface BifrostInsuranceRepository : BifrostBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkInsuranceRequest:(BifrostCheckInsuranceRequest *)request completionHandler:(void (^)(BifrostBaseResponseModel<BifrostInsuranceResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkInsurance(request:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createInsuranceUserRequest:(BifrostCreateInsuranceUserRequest *)request completionHandler:(void (^)(BifrostBaseResponseModel<BifrostInsuranceResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createInsuranceUser(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Insurance")))
@interface BifrostInsurance : BifrostBase
- (instancetype)initWithData:(BifrostFragmentInsurance *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrlDask:(NSString *)urlDask urlResidencial:(NSString *)urlResidencial __attribute__((swift_name("init(urlDask:urlResidencial:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BifrostInsurance *)doCopyUrlDask:(NSString *)urlDask urlResidencial:(NSString *)urlResidencial __attribute__((swift_name("doCopy(urlDask:urlResidencial:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *urlDask __attribute__((swift_name("urlDask")));
@property NSString *urlResidencial __attribute__((swift_name("urlResidencial")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceRequest")))
@interface BifrostCheckInsuranceRequest : BifrostBase
- (instancetype)initWithUserId:(NSString *)userId __attribute__((swift_name("init(userId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostCheckInsuranceRequest *)doCopyUserId:(NSString *)userId __attribute__((swift_name("doCopy(userId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceUserRequest")))
@interface BifrostCreateInsuranceUserRequest : BifrostBase
- (instancetype)initWithIdentityNumber:(NSString *)identityNumber __attribute__((swift_name("init(identityNumber:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BifrostCreateInsuranceUserRequest *)doCopyIdentityNumber:(NSString *)identityNumber __attribute__((swift_name("doCopy(identityNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *identityNumber __attribute__((swift_name("identityNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTrainingListRequest")))
@interface BifrostGetTrainingListRequest : BifrostBase
- (instancetype)initWithType:(BifrostTrainingsTimeType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BifrostTrainingsTimeType *)component1 __attribute__((swift_name("component1()")));
- (BifrostGetTrainingListRequest *)doCopyType:(BifrostTrainingsTimeType *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BifrostTrainingsTimeType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsuranceResponse")))
@interface BifrostInsuranceResponse : BifrostBase
- (instancetype)initWithHasAccount:(BOOL)hasAccount insurance:(BifrostInsurance *)insurance __attribute__((swift_name("init(hasAccount:insurance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BifrostInsuranceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL hasAccount __attribute__((swift_name("hasAccount")));
@property (readonly) BifrostInsurance *insurance __attribute__((swift_name("insurance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsuranceResponse.Companion")))
@interface BifrostInsuranceResponseCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostInsuranceResponseCompanion *shared __attribute__((swift_name("shared")));
- (BifrostInsuranceResponse *)hasAccountInsurance:(BifrostInsurance *)insurance __attribute__((swift_name("hasAccount(insurance:)")));
- (BifrostInsuranceResponse *)noAccount __attribute__((swift_name("noAccount()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationService")))
@interface BifrostAuthenticationService : BifrostBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)forgotPasswordOTPInput:(BifrostLogin *)input completionHandler:(void (^)(BifrostBaseResponseModel<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("forgotPasswordOTP(input:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)logOutWithCompletionHandler:(void (^)(BifrostApollo_apiApolloResponse<BifrostLogOutMutationData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logOut(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginInput:(BifrostLogin *)input completionHandler:(void (^)(BifrostBaseResponseModel<BifrostAuth *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(input:completionHandler:)")));
- (void)setUserVariablesToken:(NSString *)token userId:(NSString *)userId __attribute__((swift_name("setUserVariables(token:userId:)")));
- (void)test __attribute__((swift_name("test()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Login")))
@interface BifrostLogin : BifrostBase
- (instancetype)initWithCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("init(cellPhone:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BifrostLogin *)doCopyCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("doCopy(cellPhone:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cellPhone __attribute__((swift_name("cellPhone")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface BifrostAuth : BifrostBase
- (instancetype)initWithData:(BifrostFragmentAuth *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken expiresIn:(int32_t)expiresIn user:(BifrostUser_ *)user __attribute__((swift_name("init(accessToken:refreshToken:expiresIn:user:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (BifrostUser_ *)component4 __attribute__((swift_name("component4()")));
- (BifrostAuth *)doCopyAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken expiresIn:(int32_t)expiresIn user:(BifrostUser_ *)user __attribute__((swift_name("doCopy(accessToken:refreshToken:expiresIn:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *accessToken __attribute__((swift_name("accessToken")));
@property int32_t expiresIn __attribute__((swift_name("expiresIn")));
@property NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property BifrostUser_ *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_")))
@interface BifrostUser_ : BifrostBase
- (instancetype)initWithData:(BifrostFragmentUser *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id fullName:(NSString *)fullName cellPhone:(NSString *)cellPhone countryCode:(NSString *)countryCode avatarThumb:(NSString *)avatarThumb email:(NSString *)email paymentUrl:(NSString *)paymentUrl userPaymentState:(BOOL)userPaymentState __attribute__((swift_name("init(id:fullName:cellPhone:countryCode:avatarThumb:email:paymentUrl:userPaymentState:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (BifrostUser_ *)doCopyId:(int32_t)id fullName:(NSString *)fullName cellPhone:(NSString *)cellPhone countryCode:(NSString *)countryCode avatarThumb:(NSString *)avatarThumb email:(NSString *)email paymentUrl:(NSString *)paymentUrl userPaymentState:(BOOL)userPaymentState __attribute__((swift_name("doCopy(id:fullName:cellPhone:countryCode:avatarThumb:email:paymentUrl:userPaymentState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *avatarThumb __attribute__((swift_name("avatarThumb")));
@property NSString *cellPhone __attribute__((swift_name("cellPhone")));
@property NSString *countryCode __attribute__((swift_name("countryCode")));
@property NSString *email __attribute__((swift_name("email")));
@property NSString *fullName __attribute__((swift_name("fullName")));
@property int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HelpRepository")))
@interface BifrostHelpRepository : BifrostBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFeedbackRequest:(BifrostAddFeedBackRequest *)request completionHandler:(void (^)(BifrostBaseResponseModel<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFeedback(request:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastTrainingWithCompletionHandler:(void (^)(BifrostBaseResponseModel<BifrostTrainingResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLastTraining(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTrainingListRequest:(BifrostGetTrainingListRequest *)request completionHandler:(void (^)(BifrostBaseResponseModel<BifrostTrainingListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTrainingList(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedBackRequest")))
@interface BifrostAddFeedBackRequest : BifrostBase
- (instancetype)initWithType:(BifrostAddFeedBackType *)type note:(NSString *)note __attribute__((swift_name("init(type:note:)"))) __attribute__((objc_designated_initializer));
- (BifrostAddFeedBackType *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BifrostAddFeedBackRequest *)doCopyType:(BifrostAddFeedBackType *)type note:(NSString *)note __attribute__((swift_name("doCopy(type:note:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@property (readonly) BifrostAddFeedBackType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedBackType")))
@interface BifrostAddFeedBackType : BifrostKotlinEnum<BifrostAddFeedBackType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostAddFeedBackType *bug __attribute__((swift_name("bug")));
@property (class, readonly) BifrostAddFeedBackType *feedback __attribute__((swift_name("feedback")));
+ (BifrostKotlinArray<BifrostAddFeedBackType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsTimeType")))
@interface BifrostTrainingsTimeType : BifrostKotlinEnum<BifrostTrainingsTimeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostTrainingsTimeType *previous __attribute__((swift_name("previous")));
@property (class, readonly) BifrostTrainingsTimeType *next __attribute__((swift_name("next")));
+ (BifrostKotlinArray<BifrostTrainingsTimeType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingListResponse")))
@interface BifrostTrainingListResponse : BifrostBase
- (instancetype)initWithTrainings:(NSArray<BifrostTrainings *> *)trainings __attribute__((swift_name("init(trainings:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<BifrostTrainings *> *trainings __attribute__((swift_name("trainings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingResponse")))
@interface BifrostTrainingResponse : BifrostBase
- (instancetype)initWithTraining:(BifrostTrainings *)training __attribute__((swift_name("init(training:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BifrostTrainings *training __attribute__((swift_name("training")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trainings")))
@interface BifrostTrainings : BifrostBase
- (instancetype)initWithData:(BifrostFragmentTraining *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStartsAt:(NSString *)startsAt endAt:(NSString *)endAt title:(NSString *)title meetingId:(NSString *)meetingId meetingPassword:(NSString *)meetingPassword meetingLink:(NSString *)meetingLink recordingLink:(NSString *)recordingLink __attribute__((swift_name("init(startsAt:endAt:title:meetingId:meetingPassword:meetingLink:recordingLink:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (BifrostTrainings *)doCopyStartsAt:(NSString *)startsAt endAt:(NSString *)endAt title:(NSString *)title meetingId:(NSString *)meetingId meetingPassword:(NSString *)meetingPassword meetingLink:(NSString *)meetingLink recordingLink:(NSString *)recordingLink __attribute__((swift_name("doCopy(startsAt:endAt:title:meetingId:meetingPassword:meetingLink:recordingLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *endAt __attribute__((swift_name("endAt")));
@property NSString *meetingId __attribute__((swift_name("meetingId")));
@property NSString *meetingLink __attribute__((swift_name("meetingLink")));
@property NSString *meetingPassword __attribute__((swift_name("meetingPassword")));
@property NSString *recordingLink __attribute__((swift_name("recordingLink")));
@property NSString *startsAt __attribute__((swift_name("startsAt")));
@property NSString *title __attribute__((swift_name("title")));
@end;

@interface BifrostFragmentSummary (Extensions)
- (int32_t)getSummaryCountType:(BifrostSummaries *)type __attribute__((swift_name("getSummaryCount(type:)")));
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface BifrostApollo_apiCompiledField : BifrostApollo_apiCompiledSelection
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
- (NSSet<NSString *> *)variables __attribute__((swift_name("variables()"))) __attribute__((deprecated("Use adapterContext.variables() instead")));
@property (readonly) BifrostApollo_apiAdapterContext *adapterContext __attribute__((swift_name("adapterContext")));
@property (readonly) id<BifrostApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Apollo_apiOptional")))
@interface BifrostApollo_apiOptional<__covariant V> : BifrostBase
@property (class, readonly, getter=companion) BifrostApollo_apiOptionalCompanion *companion __attribute__((swift_name("companion")));
- (V _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (V _Nullable)getOrThrow __attribute__((swift_name("getOrThrow()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledType")))
@interface BifrostApollo_apiCompiledType : BifrostBase
- (BifrostApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface BifrostApollo_apiCompiledNamedType : BifrostApollo_apiCompiledType
- (BifrostApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface BifrostApollo_apiObjectType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<BifrostApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<BifrostApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface BifrostApollo_apiCustomScalarType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *className __attribute__((swift_name("className")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiEnumType")))
@interface BifrostApollo_apiEnumType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
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
- (NSArray<id> *)getPath __attribute__((swift_name("getPath()")));

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

__attribute__((swift_name("KotlinRuntimeException")))
@interface BifrostKotlinRuntimeException : BifrostKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BifrostKotlinIllegalStateException : BifrostKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface BifrostKotlinCancellationException : BifrostKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
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
@property (readonly) BOOL isLast __attribute__((swift_name("isLast")));
@property (readonly) id<BifrostApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) BifrostUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpRequest")))
@interface BifrostApollo_apiHttpRequest : BifrostBase
- (BifrostApollo_apiHttpRequestBuilder *)doNewBuilderMethod:(BifrostApollo_apiHttpMethod *)method url:(NSString *)url __attribute__((swift_name("doNewBuilder(method:url:)")));
@property (readonly) id<BifrostApollo_apiHttpBody> _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSArray<BifrostApollo_apiHttpHeader *> *headers __attribute__((swift_name("headers")));
@property (readonly) BifrostApollo_apiHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Apollo_runtimeHttpInterceptorChain")))
@protocol BifrostApollo_runtimeHttpInterceptorChain
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)proceedRequest:(BifrostApollo_apiHttpRequest *)request completionHandler:(void (^)(BifrostApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("proceed(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpResponse")))
@interface BifrostApollo_apiHttpResponse : BifrostBase
- (BifrostApollo_apiHttpResponseBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) id<BifrostOkioBufferedSource> _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSArray<BifrostApollo_apiHttpHeader *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
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
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)adapterContextAdapterContext:(BifrostApollo_apiAdapterContext *)adapterContext __attribute__((swift_name("adapterContext(adapterContext:)")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(BifrostApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<BifrostApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(BifrostApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<BifrostApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(BifrostApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (BifrostApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BifrostApollo_apiCustomScalarAdaptersBuilder *)variablesVariables:(BifrostApollo_apiExecutableVariables *)variables __attribute__((swift_name("variables(variables:)"))) __attribute__((deprecated("Use AdapterContext.Builder.variables() instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiAdapterContext")))
@interface BifrostApollo_apiAdapterContext : BifrostBase
- (BOOL)hasDeferredFragmentPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("hasDeferredFragment(path:label:)")));
- (BifrostApollo_apiAdapterContextBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (NSSet<NSString *> *)variables __attribute__((swift_name("variables()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiOptionalCompanion")))
@interface BifrostApollo_apiOptionalCompanion : BifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BifrostApollo_apiOptionalCompanion *shared __attribute__((swift_name("shared")));
- (BifrostApollo_apiOptional<id> *)presentIfNotNullValue:(id _Nullable)value __attribute__((swift_name("presentIfNotNull(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface BifrostApollo_apiInterfaceType : BifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<BifrostApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<BifrostApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol BifrostKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
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
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface BifrostApollo_apiApolloResponseBuilder<D> : BifrostBase
- (instancetype)initWithOperation:(id<BifrostApollo_apiOperation>)operation requestUuid:(BifrostUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer));
- (BifrostApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<BifrostApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (BifrostApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<BifrostApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (BifrostApollo_apiApolloResponseBuilder<D> *)isLastIsLast:(BOOL)isLast __attribute__((swift_name("isLast(isLast:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpRequest.Builder")))
@interface BifrostApollo_apiHttpRequestBuilder : BifrostBase
- (instancetype)initWithMethod:(BifrostApollo_apiHttpMethod *)method url:(NSString *)url __attribute__((swift_name("init(method:url:)"))) __attribute__((objc_designated_initializer));
- (BifrostApollo_apiHttpRequestBuilder *)addHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHeader(name:value:)")));
- (BifrostApollo_apiHttpRequestBuilder *)addHeadersHeaders:(NSArray<BifrostApollo_apiHttpHeader *> *)headers __attribute__((swift_name("addHeaders(headers:)")));
- (BifrostApollo_apiHttpRequestBuilder *)bodyBody:(id<BifrostApollo_apiHttpBody>)body __attribute__((swift_name("body(body:)")));
- (BifrostApollo_apiHttpRequest *)build __attribute__((swift_name("build()")));
- (BifrostApollo_apiHttpRequestBuilder *)headersHeaders:(NSArray<BifrostApollo_apiHttpHeader *> *)headers __attribute__((swift_name("headers(headers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpMethod")))
@interface BifrostApollo_apiHttpMethod : BifrostKotlinEnum<BifrostApollo_apiHttpMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BifrostApollo_apiHttpMethod *get __attribute__((swift_name("get")));
@property (class, readonly) BifrostApollo_apiHttpMethod *post __attribute__((swift_name("post")));
+ (BifrostKotlinArray<BifrostApollo_apiHttpMethod *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Apollo_apiHttpBody")))
@protocol BifrostApollo_apiHttpBody
@required
- (void)writeToBufferedSink:(id<BifrostOkioBufferedSink>)bufferedSink __attribute__((swift_name("writeTo(bufferedSink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpHeader")))
@interface BifrostApollo_apiHttpHeader : BifrostBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BifrostApollo_apiHttpHeader *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpResponse.Builder")))
@interface BifrostApollo_apiHttpResponseBuilder : BifrostBase
- (instancetype)initWithStatusCode:(int32_t)statusCode __attribute__((swift_name("init(statusCode:)"))) __attribute__((objc_designated_initializer));
- (BifrostApollo_apiHttpResponseBuilder *)addHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHeader(name:value:)")));
- (BifrostApollo_apiHttpResponseBuilder *)addHeadersHeaders:(NSArray<BifrostApollo_apiHttpHeader *> *)headers __attribute__((swift_name("addHeaders(headers:)")));
- (BifrostApollo_apiHttpResponseBuilder *)bodyBodySource:(id<BifrostOkioBufferedSource>)bodySource __attribute__((swift_name("body(bodySource:)")));
- (BifrostApollo_apiHttpResponseBuilder *)bodyBodyString:(BifrostOkioByteString *)bodyString __attribute__((swift_name("body(bodyString:)")));
- (BifrostApollo_apiHttpResponse *)build __attribute__((swift_name("build()")));
- (BifrostApollo_apiHttpResponseBuilder *)headersHeaders:(NSArray<BifrostApollo_apiHttpHeader *> *)headers __attribute__((swift_name("headers(headers:)")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiAdapterContext.Builder")))
@interface BifrostApollo_apiAdapterContextBuilder : BifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BifrostApollo_apiAdapterContext *)build __attribute__((swift_name("build()")));
- (BifrostApollo_apiAdapterContextBuilder *)mergedDeferredFragmentIdsMergedDeferredFragmentIds:(NSSet<BifrostApollo_apiDeferredFragmentIdentifier *> * _Nullable)mergedDeferredFragmentIds __attribute__((swift_name("mergedDeferredFragmentIds(mergedDeferredFragmentIds:)")));
- (BifrostApollo_apiAdapterContextBuilder *)variablesVariables:(BifrostApollo_apiExecutableVariables * _Nullable)variables __attribute__((swift_name("variables(variables:)")));
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
@property (class, readonly, getter=companion) BifrostApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiDeferredFragmentIdentifier")))
@interface BifrostApollo_apiDeferredFragmentIdentifier : BifrostBase
- (instancetype)initWithPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("init(path:label:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BifrostApollo_apiDeferredFragmentIdentifier *)doCopyPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(path:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSArray<id> *path __attribute__((swift_name("path")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface BifrostKotlinByteIterator : BifrostBase <BifrostKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BifrostByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
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
