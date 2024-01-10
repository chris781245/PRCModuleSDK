//
//  UIDevice+PRCHardWare.h
//  KashLinker
//
//  Created by shizedong on 2023/12/7.
//

#import <UIKit/UIKit.h>

#define IFPGA_NAMESTRING                @"iFPGA"

#define IPHONE_1G_NAMESTRING            @"iPhone 1G"
#define IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING           @"iPhone 3GS"
#define IPHONE_4_NAMESTRING             @"iPhone 4"
#define IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define IPHONE_5_NAMESTRING             @"iPhone 5"
#define IPHONE_5S_NAMESTRING            @"iPhone 5S"
#define IPHONE_5C_NAMESTRING            @"iPhone 5C"
#define IPHONE_5SE_NAMESTRING           @"iPhone 5SE"
#define IPHONE_6_NAMESTRING             @"iPhone 6"
#define IPHONE_6_PLUS_NAMESTRING        @"iPhone 6 Plus"
#define IPHONE_6S_NAMESTRING            @"iPhone 6S"
#define IPHONE_6S_PLUS_NAMESTRING       @"iPhone 6S Plus"
#define IPHONE_7_NAMESTRING             @"iPhone 7"
#define IPHONE_7_PLUS_NAMESTRING        @"iPhone 7 Plus"
#define IPHONE_8_NAMESTRING             @"iPhone 8"
#define IPHONE_8_PLUS_NAMESTRING        @"iPhone 8 Plus"
#define IPHONE_X_NAMESTRING             @"iPhone X"
#define IPHONE_XS_NAMESTRING            @"iPhone XS"
#define IPHONE_XS_MAX_NAMESTRING        @"iPhone XS Max"
#define IPHONE_XR_NAMESTRING            @"iPhone XR"
#define IPHONE_11_NAMESTRING            @"iPhone 11"
#define IPHONE_11_PRO_NAMESTRING        @"iPhone 11 Pro"
#define IPHONE_11_PRO_MAX_NAMESTRING    @"iPhone 11 Pro Max"
#define IPHONE_5SE2_NAMESTRING          @"iPhone 5SE2"
#define IPHONE_12_Mini_NAMESTRING       @"iPhone 12 Mini"
#define IPHONE_12_NAMESTRING            @"iPhone 12"
#define IPHONE_12_PRO_NAMESTRING        @"iPhone 12 Pro"
#define IPHONE_12_PRO_MAX_NAMESTRING    @"iPhone 12 Pro Max"
#define IPHONE_13_Mini_NAMESTRING       @"iPhone 13 Mini"
#define IPHONE_13_NAMESTRING            @"iPhone 13"
#define IPHONE_13_PRO_NAMESTRING        @"iPhone 13 Pro"
#define IPHONE_13_PRO_MAX_NAMESTRING    @"iPhone 13 Pro Max"
#define IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define IPOD_1G_NAMESTRING              @"iPod touch 1G"
#define IPOD_2G_NAMESTRING              @"iPod touch 2G"
#define IPOD_3G_NAMESTRING              @"iPod touch 3G"
#define IPOD_4G_NAMESTRING              @"iPod touch 4G"
#define IPOD_5G_NAMESTRING              @"iPod touch 5G"
#define IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define IPAD_1G_NAMESTRING              @"iPad 1G"
#define IPAD_2G_NAMESTRING              @"iPad 2G"
#define IPAD_3G_NAMESTRING              @"iPad 3G"
#define IPAD_4G_NAMESTRING              @"iPad 4G"
#define IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define APPLETV_2G_NAMESTRING           @"Apple TV 2G"
#define APPLETV_3G_NAMESTRING           @"Apple TV 3G"
#define APPLETV_4G_NAMESTRING           @"Apple TV 4G"
#define APPLETV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define SIMULATOR_NAMESTRING            @"iPhone Simulator"
#define SIMULATOR_IPHONE_NAMESTRING     @"iPhone Simulator"
#define SIMULATOR_IPAD_NAMESTRING       @"iPad Simulator"
#define SIMULATOR_APPLETV_NAMESTRING    @"Apple TV Simulator" // :)

typedef enum {
    UIDeviceUnknown,
    
    UIDeviceSimulator,
    UIDeviceSimulatoriPhone,
    UIDeviceSimulatoriPad,
    UIDeviceSimulatorAppleTV,
    
    UIDevice1GiPhone,
    UIDevice3GiPhone,
    UIDevice3GSiPhone,
    UIDevice1GiPod,
    UIDevice2GiPod,
    UIDevice3GiPod,
    UIDevice4GiPod,
    UIDevice5GiPod,
    UIDevice4iPhone,
    
    UIDevice1GiPad,
    UIDevice2GiPad,
    
    
    UIDeviceAppleTV2,
    UIDeviceAppleTV3,
    UIDeviceAppleTV4,
    
    UIDevice4SiPhone,
    UIDevice5iPhone,
    UIDevice5SiPhone,
    UIDevice5SEiPhone,
    UIDevice5CiPhone,
    UIDevice6iPhone,
    UIDevice6PlusiPhone,
    UIDevice6SiPhone,
    UIDevice6SPlusiPhone,
    UIDevice7iPhone,
    UIDevice7PlusiPhone,
    UIDevice8iPhone,
    UIDevice8PlusiPhone,
    UIDeviceXiPhone,
    UIDeviceXRiPhone,
    UIDeviceXSiPhone,
    UIDeviceXSMaxiPhone,
    UIDevice11iPhone,
    UIDevice11ProiPhone,
    UIDevice11ProMaxiPhone,
    UIDevice5SE2iPhone,
    UIDevice12Mini,
    UIDevice12iPhone,
    UIDevice12ProiPhone,
    UIDevice12ProMaxiPhone,
    UIDevice13Mini,
    UIDevice13iPhone,
    UIDevice13ProiPhone,
    UIDevice13ProMaxiPhone,
    
    UIDevice3GiPad,
    UIDevice4GiPad,
    
    
    
    UIDeviceUnknowniPhone,
    UIDeviceUnknowniPod,
    UIDeviceUnknowniPad,
    UIDeviceUnknownAppleTV,
    UIDeviceIFPGA,
    
} UIDevicePlatform;
typedef enum
{
    UIDeviceHigh,
    UIDeviceLow,
    UIDeviceMid
}UIDevicePerformance;
typedef enum {
    UIDeviceFamilyiPhone,
    UIDeviceFamilyiPod,
    UIDeviceFamilyiPad,
    UIDeviceFamilyAppleTV,
    UIDeviceFamilyUnknown,
    
} UIDeviceFamily;

@interface UIDevice (PRCHardWare)

- (NSString *)tbcPlatform;
- (NSString *)hwmodel;
- (NSUInteger)tbcPlatformType;
- (NSString *)tbcPlatformString;
- (NSString *)familyString;

- (NSUInteger)cpuFrequency;
- (NSUInteger)busFrequency;
- (NSUInteger)cpuCount;
- (NSUInteger)totalMemory;
- (NSUInteger)userMemory;

//当前CPU使用率
- (NSInteger)cpuUsage;

- (NSNumber *)totalDiskSpace;
- (NSNumber *)freeDiskSpace;

- (NSString *)macaddress;

- (BOOL)hasRetinaDisplay;
- (UIDeviceFamily)deviceFamily;
- (UIDevicePerformance)performace;
- (BOOL)isIOS6;
- (BOOL)isIOS7;
- (BOOL)isIOS8;
- (BOOL)isIphone6OrPlus;
- (BOOL)isIphone6Plus;
- (BOOL)isIphone6PlusNormal;
- (BOOL)isIphone6PlusBig;
- (BOOL)isIphone6;
- (BOOL)isIphone6Normal;
- (BOOL)isIphone6Big;
- (BOOL)isIphoneX;
- (BOOL)isJailBreak;

+ (double)loadAutoLayoutRate;

- (int)availableMemory;
- (int)usedMemory;


/**
 获取总内存大小

 */
+ (int)getTotalMemorySize;

/**
 获取总硬盘大小

 */
+ (int)getTotalDiskSize;


/**
 获取硬盘剩余容量

 */
+ (int)getAvailableDiskSize;

/**
 返回这杯uuid

 */
+ (NSString *)uuidForVendor;


/**
 获取DNS信息

 */
+ (NSString *) getDNSAddressesStr;

/**
 获取wifi信息

 */
+ (NSDictionary *) localWiFiInfo;

/**
 获取ssid信息

 */
+ (NSString *)getSSIDInfo;

/**
 获取wifi ssid

 */
+ (NSString *)getBSSID;

/**
 外网IP

 */
+ (NSString *)outSideIP;

/**
 @return 屏幕亮度
 */
+ (NSString *)brightness;

/**
 @return vpn信息
 */
+ (NSDictionary *)vpnInfo;

/**
 @return 运营商信息
 */
+ (NSString *)voipName;

/**
 @return 移动国家码
 */
+ (NSString *)voipMCC;

/**
 @return 移动网络码
 */
+ (NSString *)voipMNC;

/**
 @return 网络制式
 */
+ (NSString *)voipRadio;

/**
 @return 国家代码
 */
+ (NSString *)voipCountryCode;

/**
 @return 移动蜂窝ip地址
 */
+ (NSString *)cellIpAddress;

/**
 @return 代理类型
 */
+ (NSString *)proxyType;

/**
 @return 代理ip
 */
+ (NSString *)proxyIpAddress;

/**
 @return 时区
 */
+ (NSString *)timeZone;

/**
 @return 电池状态
 */
+ (UIDeviceBatteryState)batteryState;

/**
 @return 电量
 */
+ (CGFloat)batterylevel;

/**
 @return 设备名称
 */
+ (NSString *)deviceName;

/**
 @return 系统内核版本
 */
+ (NSString *)kernelVersion;

/**
 @return 设备开机时间
 */
+ (long long)systemUpTime;

@end
