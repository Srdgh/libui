// 6 january 2015
#define MAC_OS_X_VERSION_MIN_REQUIRED MAC_OS_X_VERSION_10_7
#define MAC_OS_X_VERSION_MAX_ALLOWED MAC_OS_X_VERSION_10_7
#import <Cocoa/Cocoa.h>
#import "uipriv.h"

#define toNSString(str) [NSString stringWithUTF8String:(str)]

// alloc_darwin.m
extern void *uiAlloc(size_t);
extern void *uiRealloc(void *, size_t);
extern void uiFree(void *);
