//
//  SDiOSVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DeviceVersion){
    UnknownDevice         = 0,
    Simulator             = 1,

    iPhone4               = 101,
    iPhone4S              = 102,
    iPhone5               = 103,
    iPhone5C              = 104,
    iPhone5S              = 105,
    iPhone6               = 106,
    iPhone6Plus           = 107,
    iPhone6S              = 108,
    iPhone6SPlus          = 109,
    iPhone7               = 110,
    iPhone7Plus           = 111,
    iPhone8               = 112,
    iPhone8Plus           = 113,
    iPhoneX               = 114,
    iPhoneSE              = 115,
    iPhoneXS              = 116,
    iPhoneXR              = 117,
    iPhoneXSMax           = 118,

    iPad1                 = 201,
    iPad2                 = 202,
    iPadMini              = 203,
    iPad3                 = 204,
    iPad4                 = 205,
    iPadAir               = 206,
    iPadMini2             = 207,
    iPadAir2              = 208,
    iPadMini3             = 209,
    iPadMini4             = 210,
    iPadPro12Dot9Inch     = 211,
    iPadPro9Dot7Inch      = 212,
    iPad5                 = 213,
    iPadPro12Dot9Inch2Gen = 214,
    iPadPro10Dot5Inch     = 215,
    iPad6                 = 216,
    iPadPro11Inch         = 217,
    iPadPro12Dot9Inch3Gen = 218,
    iPadMini5             = 219,
    iPadAir3              = 220,

    iPodTouch1Gen         = 301,
    iPodTouch2Gen         = 302,
    iPodTouch3Gen         = 303,
    iPodTouch4Gen         = 304,
    iPodTouch5Gen         = 305,
    iPodTouch6Gen         = 306,
    iPodTouch7Gen         = 307
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4,
    Screen5Dot8inch = 5,
    Screen6Dot1inch = 6,
    Screen6Dot5inch = 7
};


#pragma mark - iPhone without home button

#define IS_IPHONE_X ([SDiOSVersion deviceSize] == Screen5Dot8inch || [SDiOSVersion deviceSize] == Screen6Dot1inch || [SDiOSVersion deviceSize] == Screen6Dot5inch)


@interface SDiOSVersion : NSObject

+ (DeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(DeviceVersion)deviceVersion;
+ (DeviceSize)resolutionSize;
+ (DeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(DeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (BOOL)isZoomed;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end
