#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8 (swiftlang-5.8.0.124.2 clang-1403.0.22.11.100)
#ifndef PUSHLY_SWIFT_H
#define PUSHLY_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
@import WebKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Pushly",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_CLASS("_TtC6Pushly15ActionVariation")
@interface ActionVariation : NSObject
@property (nonatomic, copy) NSString * _Nonnull title;
@end




SWIFT_CLASS("_TtC6Pushly31FrequencyCapWithOccurrenceLimit")
@interface FrequencyCapWithOccurrenceLimit : NSObject
@property (nonatomic, readonly) NSInteger occurrences;
@property (nonatomic, readonly) double intervalSeconds;
@end




SWIFT_CLASS("_TtC6Pushly18PNAppFrequencyCaps")
@interface PNAppFrequencyCaps : NSObject
@property (nonatomic, readonly, strong) FrequencyCapWithOccurrenceLimit * _Nullable prompts;
@end


enum PNAppMessageStyle : NSInteger;
@class PNAppMessageConditions;

SWIFT_CLASS("_TtC6Pushly12PNAppMessage")
@interface PNAppMessage : NSObject
@property (nonatomic, readonly) NSInteger id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, readonly) enum PNAppMessageStyle style;
@property (nonatomic, readonly) BOOL isAutoShow;
@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly, strong) PNAppMessageConditions * _Nullable conditions;
@property (nonatomic) BOOL hasDisplayed;
@end



@class PNAppMessageCondition;

@interface PNAppMessage (SWIFT_EXTENSION(Pushly))
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull conditionKeys;
- (BOOL)hasConditionKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (NSArray<PNAppMessageCondition *> * _Nonnull)getConditionsForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL conditionsMet;
- (BOOL)meetsConditions:(NSDictionary<NSString *, NSString *> * _Nonnull)checkConditions SWIFT_WARN_UNUSED_RESULT;
@end

@class RelativeDate;

@interface PNAppMessage (SWIFT_EXTENSION(Pushly))
@property (nonatomic, readonly, copy) NSString * _Nullable templateHTML;
@property (nonatomic, readonly) BOOL isPrePermissionPrompt;
@property (nonatomic, readonly) BOOL isNative;
@property (nonatomic, readonly) BOOL isFullscreen;
@property (nonatomic, readonly) BOOL isModal;
@property (nonatomic, readonly) BOOL isBanner;
@property (nonatomic, readonly) BOOL isTopBanner;
@property (nonatomic, readonly) BOOL isBottomBanner;
@property (nonatomic, readonly) BOOL redisplayEnabled;
@property (nonatomic, readonly, strong) RelativeDate * _Nonnull maxDisplayTime;
@property (nonatomic, readonly) BOOL canDismissOnSlide;
@property (nonatomic, readonly) BOOL canDismissOnTapOutside;
- (BOOL)isEligibleToDisplayWithSkipConditionsEvaluation:(BOOL)skipConditions skipFcapEvaluation:(BOOL)skipFcap SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL hasMetSessionFrequencyCap;
@property (nonatomic, readonly) BOOL hasMetTimeInScopeCondition;
@end


SWIFT_CLASS("_TtC6Pushly21PNAppMessageCondition")
@interface PNAppMessageCondition : NSObject
@property (nonatomic, readonly) NSInteger id;
@property (nonatomic, readonly, copy) NSString * _Nonnull key;
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
@property (nonatomic) BOOL matched;
- (BOOL)checkWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
@end



SWIFT_CLASS("_TtC6Pushly22PNAppMessageConditions")
@interface PNAppMessageConditions : NSObject
@end



@class NSCoder;
@protocol UIViewControllerTransitionCoordinator;
@class UIPanGestureRecognizer;
@class UITapGestureRecognizer;
@class NSBundle;

SWIFT_CLASS("_TtC6Pushly22PNAppMessageController") SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PNAppMessageController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)timeInSessionTimerAdvanced;
- (void)maxDisplayTimeTimerFinished;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)panGestureRecognizerDidMove:(UIPanGestureRecognizer * _Nonnull)sender;
- (void)tapGestureRecognizerDidTap:(UITapGestureRecognizer * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@class WKUserContentController;
@class WKScriptMessage;

SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PNAppMessageController (SWIFT_EXTENSION(Pushly)) <WKScriptMessageHandler>
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end


SWIFT_CLASS("_TtC6Pushly29PNAppMessageDisplayConditions")
@interface PNAppMessageDisplayConditions : NSObject
@end



SWIFT_CLASS("_TtC6Pushly17PNAppMessageGroup")
@interface PNAppMessageGroup : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC6Pushly27PNAppMessageGroupConditions")
@interface PNAppMessageGroupConditions : NSObject
@property (nonatomic, strong) PNAppMessageDisplayConditions * _Nullable display;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable pageUrls;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable excludedPageUrls;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


enum PNPrePermissionResponse : NSInteger;
@class PNAppMessageViewMessage;

SWIFT_PROTOCOL("_TtP6Pushly29PNAppMessageLifecycleDelegate_")
@protocol PNAppMessageLifecycleDelegate
@optional
- (BOOL)pushSDKWillPresentAppMessage:(PNAppMessage * _Nonnull)appMessage SWIFT_WARN_UNUSED_RESULT;
- (void)pushSDKDidReceivePrePermissionResponse:(enum PNPrePermissionResponse)response fromAppMessage:(PNAppMessage * _Nonnull)appMessage;
- (BOOL)pushSDKDidReceiveMessage:(PNAppMessageViewMessage * _Nonnull)message fromAppMessage:(PNAppMessage * _Nonnull)appMessage SWIFT_WARN_UNUSED_RESULT;
- (void)pushSDKDidFailToProcessMessage:(WKScriptMessage * _Nonnull)message fromAppMessage:(PNAppMessage * _Nonnull)appMessage;
@end

typedef SWIFT_ENUM(NSInteger, PNAppMessageStyle, open) {
  PNAppMessageStyleFullscreen = 0,
  PNAppMessageStyleModal = 1,
  PNAppMessageStyleBanner = 2,
  PNAppMessageStyleNative = 3,
};

@class WKWebView;
@class WKNavigation;

SWIFT_CLASS("_TtC6Pushly16PNAppMessageView")
@interface PNAppMessageView : UIView <UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Nonnull)navigation;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6Pushly23PNAppMessageViewMessage")
@interface PNAppMessageViewMessage : NSObject
@property (nonatomic, readonly, strong) NSDictionary * _Nonnull raw;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSDate;
@class PNECommConfig;

SWIFT_CLASS("_TtC6Pushly19PNApplicationConfig")
@interface PNApplicationConfig : NSObject
@property (nonatomic, copy) NSDate * _Nonnull fetchedAt;
@property (nonatomic, copy) NSString * _Nullable originVersion;
@property (nonatomic, readonly) uint32_t appId;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull appKey;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull flags;
@property (nonatomic, readonly) UNAuthorizationOptions authorizationOptions;
@property (nonatomic, readonly, strong) PNAppFrequencyCaps * _Nullable frequencyCaps;
@property (nonatomic, readonly, strong) PNECommConfig * _Nullable ecommConfig;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface PNApplicationConfig (SWIFT_EXTENSION(Pushly))
@property (nonatomic, readonly) BOOL disableBadgeClearing;
@property (nonatomic, readonly) BOOL isStale;
@property (nonatomic, readonly) BOOL shouldDisplayNotificationsInForeground;
@property (nonatomic, readonly) BOOL forceDebugLogsEnabled;
@property (nonatomic, readonly) BOOL debugIdCopyDisabled;
@end

enum PNECommItemType : NSInteger;

SWIFT_CLASS("_TtC6Pushly13PNECommConfig")
@interface PNECommConfig : NSObject
@property (nonatomic, readonly) enum PNECommItemType itemType;
@property (nonatomic, readonly, copy) NSString * _Nonnull itemTypeRawValue;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC6Pushly11PNECommItem")
@interface PNECommItem : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic) NSInteger quantity;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id quantity:(NSInteger)quantity OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


typedef SWIFT_ENUM(NSInteger, PNECommItemType, open) {
  PNECommItemTypeEvent = 0,
  PNECommItemTypeProduct = 1,
  PNECommItemTypeUnknown = 2,
};


SWIFT_CLASS("_TtC6Pushly24PNEventSourceApplication")
@interface PNEventSourceApplication : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PNLogLevel, open) {
  PNLogLevelVerbose = 0,
  PNLogLevelDebug = 1,
  PNLogLevelInfo = 2,
  PNLogLevelWarn = 3,
  PNLogLevelError = 4,
  PNLogLevelCritical = 5,
  PNLogLevelNone = 6,
};


SWIFT_CLASS("_TtC6Pushly8PNLogger")
@interface PNLogger : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) enum PNLogLevel logLevel;
- (void)verbose:(NSString * _Nonnull)message;
- (void)debug:(NSString * _Nonnull)message;
- (void)info:(NSString * _Nonnull)message;
- (void)warn:(NSString * _Nonnull)message;
- (void)error:(NSString * _Nonnull)message;
- (void)critical:(NSString * _Nonnull)message;
- (BOOL)loggingLevelEnabledFor:(enum PNLogLevel)level SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Pushly14PNNotification")
@interface PNNotification : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



enum PNNotificationActionType : NSInteger;

SWIFT_CLASS("_TtC6Pushly20PNNotificationAction")
@interface PNNotificationAction : NSObject
@property (nonatomic, readonly) uint32_t action;
@property (nonatomic, readonly) NSInteger ordinal;
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly) enum PNNotificationActionType type;
@property (nonatomic, readonly, copy) NSString * _Nullable landingURL;
@property (nonatomic, readonly) uint32_t categoryActionId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



typedef SWIFT_ENUM(NSInteger, PNNotificationActionType, open) {
  PNNotificationActionTypeOpenURL = 0,
  PNNotificationActionTypeDismiss = 1,
};


SWIFT_CLASS("_TtC6Pushly25PNNotificationInteraction")
@interface PNNotificationInteraction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_PROTOCOL("_TtP6Pushly31PNNotificationLifecycleDelegate_")
@protocol PNNotificationLifecycleDelegate
@optional
- (void)pushSDKDidReceiveNotification:(PNNotification * _Nonnull)notification;
/// FALSE:   the destination was not handled and is available for processing
/// TRUE:    the client handled the event and it should not be processed
- (BOOL)pushSDKDidReceiveNotificationDestination:(NSString * _Nonnull)destination withInteraction:(PNNotificationInteraction * _Nonnull)interaction SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC6Pushly29PNNotificationOpenedProcessor") SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PNNotificationOpenedProcessor : NSObject
+ (void)processInteraction:(PNNotificationInteraction * _Nonnull)pnInteraction withDestination:(NSString * _Nonnull)destination;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNNotificationRequest;
@class UNNotificationContent;

SWIFT_CLASS("_TtC6Pushly30PNNotificationServiceExtension")
@interface PNNotificationServiceExtension : UNNotificationServiceExtension
- (void)didReceiveNotificationRequest:(UNNotificationRequest * _Nonnull)request withContentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
- (void)serviceExtensionTimeWillExpire;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNMutableNotificationContent;

SWIFT_CLASS("_TtC6Pushly37PNNotificationServiceExtensionHandler")
@interface PNNotificationServiceExtensionHandler : NSObject
+ (void)didReceiveExtensionRequest:(UNNotificationRequest * _Nonnull)request content:(UNMutableNotificationContent * _Nonnull)bestAttemptContent withContentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
+ (void)didRecieveExtensionTimeWillExpire:(UNMutableNotificationContent * _Nonnull)bestAttemptContent withContentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNNotificationSettings;

SWIFT_PROTOCOL("_TtP6Pushly30PNPermissionsLifecycleDelegate_")
@protocol PNPermissionsLifecycleDelegate
@optional
- (void)pushSDKDidReceivePermissionResponse:(BOOL)granted withSettings:(UNNotificationSettings * _Nonnull)settings;
- (void)pushSDKDidReceivePermissionResponse:(BOOL)granted withSettings:(UNNotificationSettings * _Nonnull)settings withError:(NSError * _Nonnull)error;
- (void)pushSDKDidReceivePermissionStatusChange:(UNAuthorizationStatus)status withSettings:(UNNotificationSettings * _Nonnull)settings;
- (void)pushSDKDidRegisterForRemoteNotificationsWithDeviceToken:(NSString * _Nonnull)deviceToken;
- (void)pushSDKDidFailToRegisterForRemoteNotificationsWithError:(NSError * _Nonnull)error;
@end

typedef SWIFT_ENUM(NSInteger, PNPrePermissionResponse, open) {
  PNPrePermissionResponseAccepted = 0,
  PNPrePermissionResponseDismissed = 1,
};

enum PNSubscriberStatus : NSInteger;

SWIFT_PROTOCOL("_TtP6Pushly26PNPushSDKLifecycleDelegate_")
@protocol PNPushSDKLifecycleDelegate
@optional
- (void)pushSDKDidFinishLoading:(PNApplicationConfig * _Nonnull)configuration withNotificationSettings:(UNNotificationSettings * _Nonnull)settings;
- (void)pushSDKDidExitWithSubscriberStatus:(enum PNSubscriberStatus)status withDeletedState:(BOOL)deleted;
@end

typedef SWIFT_ENUM(NSInteger, PNSubscriberStatus, open) {
  PNSubscriberStatusSubscribed = 0,
  PNSubscriberStatusDismissed = 1,
  PNSubscriberStatusDenied = 2,
  PNSubscriberStatusNotDetermined = 3,
};


SWIFT_CLASS("_TtC6Pushly7PushSDK")
@interface PushSDK : UIResponder <UIApplicationDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PushSDK (SWIFT_EXTENSION(Pushly))
@end


SWIFT_CLASS_NAMED("AppMessages")
@interface PushSDKAppMessages : NSObject
/// Attempts to show a specified app message by id.
/// By default the app message conditions and frequency cap will be evaluated.
+ (void)show:(NSInteger)id skipConditionsEvaluation:(BOOL)skipConditions skipFrequencyCapEvaluation:(BOOL)skipFcap;
/// Applies triggered condition to all applicable app messages.
/// If applied trigger completes all conditions in an app message’s scope
/// and the app message is set to auto show it will be displayed.
+ (void)triggerWithCondition:(NSString * _Nonnull)condition withValue:(NSString * _Nonnull)value;
/// Applies triggered conditions to all applicable app messages.
/// If applied triggers complete all conditions in an app message’s scope
/// and the app message is set to auto show it will be displayed.
+ (void)triggerWithConditions:(NSDictionary<NSString *, NSString *> * _Nonnull)conditions;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PushSDK (SWIFT_EXTENSION(Pushly))
@end


SWIFT_CLASS_NAMED("EComm")
@interface PushSDKEComm : NSObject
+ (void)addToCartWithItems:(NSArray<PNECommItem *> * _Nonnull)items;
+ (void)updateCartWithItems:(NSArray<PNECommItem *> * _Nonnull)items;
+ (void)clearCart;
+ (void)trackPurchase;
+ (void)trackPurchaseOf:(NSArray<PNECommItem *> * _Nonnull)items withPurchaseId:(NSString * _Nullable)purchaseId withPriceValue:(NSString * _Nullable)priceValue;
+ (void)withECommConfig:(void (^ _Nonnull)(PNECommConfig * _Nonnull))block caller:(NSString * _Nonnull)caller;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PushSDK (SWIFT_EXTENSION(Pushly))
@end


SWIFT_CLASS_NAMED("UserProfile")
@interface PushSDKUserProfile : NSObject
/// The current user SDK identifier
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull anonymousId;)
+ (NSString * _Nonnull)anonymousId SWIFT_WARN_UNUSED_RESULT;
/// The current APNS device token, if the user is subscribed
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable token;)
+ (NSString * _Nullable)token SWIFT_WARN_UNUSED_RESULT;
/// The current user external id, if it has been set
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable externalId;)
+ (NSString * _Nullable)externalId SWIFT_WARN_UNUSED_RESULT;
+ (void)setExternalId:(NSString * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum PNSubscriberStatus subscriberStatus;)
+ (enum PNSubscriberStatus)subscriberStatus SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isSubscribed;)
+ (BOOL)isSubscribed SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isDeleted;)
+ (BOOL)isDeleted SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isEligibleToPrompt;)
+ (BOOL)isEligibleToPrompt SWIFT_WARN_UNUSED_RESULT;
/// Sends a request to remove the user from eligibility to send
+ (void)requestUserDeletion;
/// Removes a previous request to remove the user from eligibility to send
+ (void)revertUserDeletion;
/// Perform single key/value update the user profile
/// eg: set(true, forKey: “is_paying_subscriber”)
+ (void)set:(id _Nonnull)value forKey:(NSString * _Nonnull)key;
/// Perform bulk key/value update the user profile
/// eg: set([“is_paying_subscriber”: true, “interests”: [“politics”, “news”]])
+ (void)set:(NSDictionary<NSString *, id> * _Nonnull)data;
/// Append values to existing array properties
/// eg: append([“sports”], forKey: “interests”)
+ (void)append:(NSArray * _Nonnull)values to:(NSString * _Nonnull)key;
/// Remove values from existing array properties
/// eg: remove([“fasion”, “news”], forKey: “interests”)
+ (void)remove:(NSArray * _Nonnull)values from:(NSString * _Nonnull)key;
+ (void)trackActivityWithName:(NSString * _Nonnull)name;
+ (void)trackActivityWithName:(NSString * _Nonnull)name withTags:(NSArray<NSString *> * _Nonnull)tags;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface PushSDK (SWIFT_EXTENSION(Pushly))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum PNLogLevel logLevel;)
+ (enum PNLogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
+ (void)setLogLevel:(enum PNLogLevel)newValue;
@end


@class UIApplication;
@class NSData;
@class UNUserNotificationCenter;
@class UNNotification;
@class UNNotificationResponse;

SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PushSDK (SWIFT_EXTENSION(Pushly)) <UNUserNotificationCenterDelegate>
- (void)application:(UIApplication * _Nonnull)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (void)application:(UIApplication * _Nonnull)application didFailToRegisterForRemoteNotificationsWithError:(NSError * _Nonnull)error;
- (void)application:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo fetchCompletionHandler:(void (^ _Nonnull)(UIBackgroundFetchResult))completionHandler;
- (void)application:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center willPresentNotification:(UNNotification * _Nonnull)notification withCompletionHandler:(void (^ _Nonnull)(UNNotificationPresentationOptions))completionHandler;
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler;
@end


SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PushSDK (SWIFT_EXTENSION(Pushly))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull appKey;)
+ (NSString * _Nonnull)appKey SWIFT_WARN_UNUSED_RESULT;
+ (void)getConfiguration:(void (^ _Nonnull)(PNApplicationConfig * _Nullable, NSError * _Nullable))completion;
+ (void)getNotificationPermissionStatus:(void (^ _Nonnull)(BOOL, UNNotificationSettings * _Nonnull))completion;
+ (void)showNativeNotificationPermissionPrompt:(void (^ _Nonnull)(BOOL, UNNotificationSettings * _Nonnull, NSError * _Nullable))completion;
+ (void)showNativeNotificationPermissionPrompt:(void (^ _Nonnull)(BOOL, UNNotificationSettings * _Nonnull, NSError * _Nullable))completion skipConditionsEvaluation:(BOOL)skipConditions skipFrequencyCapEvaluation:(BOOL)skipFcap;
+ (void)setEventSourceApplication:(PNEventSourceApplication * _Nonnull)application;
@end


SWIFT_AVAILABILITY(ios_app_extension,unavailable)
@interface PushSDK (SWIFT_EXTENSION(Pushly))
+ (void)setConfigurationAppKey:(NSString * _Nonnull)appKey withLaunchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
+ (void)setConfigurationWithLaunchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
+ (void)setSDKLifecycleDelegate:(id <PNPushSDKLifecycleDelegate> _Nonnull)delegate;
+ (void)setPermissionsLifecycleDelegate:(id <PNPermissionsLifecycleDelegate> _Nonnull)delegate;
+ (void)setNotificationLifecycleDelegate:(id <PNNotificationLifecycleDelegate> _Nonnull)delegate;
+ (void)setAppMessageLifecycleDelegate:(id <PNAppMessageLifecycleDelegate> _Nonnull)delegate;
- (void)subscriberStateEvaluationTimerDidAdvance;
@end


SWIFT_CLASS("_TtC6Pushly12RelativeDate")
@interface RelativeDate : NSObject
@property (nonatomic, readonly) double intervalSeconds;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
