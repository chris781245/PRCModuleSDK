//
//  UIDevice+Resolutions.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

enum {
    UIDeviceResolution_Unknown            = 0,
    UIDeviceResolution_iPhoneStandard    = 1,    // iPhone 1,3,3GS 标准    (320x480px)
    UIDeviceResolution_iPhoneRetina35    = 2,    // iPhone 4,4S 高清 3.5"    (640x960px)
    UIDeviceResolution_iPhoneRetina4    = 3,    // iPhone 5 高清 4"        (640x1136px)
    UIDeviceResolution_iPadStandard        = 4,    // iPad 1,2 标准        (1024x768px)
    UIDeviceResolution_iPadRetina        = 5,    // iPad 3 高清            (2048x1536px)
    UIDeviceResolution_iPhoneRetina47   = 6,    // iPhone 6 高清 4.7" (750x1334px)
    UIDeviceResolution_iPhoneRetina55   = 7,    // iPhone 6 Plus 高清 5.5" (1242x2208px @3x)
    UIDeviceResolution_iPhoneRetina47_Big   = 8,    // iPhone 6 高清 4.7" 放大模式 (640x1136px)
    UIDeviceResolution_iPhoneRetina55_Big   = 9 ,    // iPhone 6 Plus 高清 5.5" 放大模式 (1125x2001px @3x)
    UIDeviceResolution_iPhoneRetinaX   = 10   ,  // iPhone X (1125x2436px @3x) iPhone11 Pro
    UIDeviceResolution_iPhoneRetinaXSMax = 11 ,  // iPhone XS MAX iPhone 11 Pro Max
    UIDeviceResolution_iPhoneRetinaXR  = 12   ,  // iPhone XS R iPhone 11
    UIDeviceResolution_iPhoneRetina54  = 13,    // iPhone 12 13 mini 1080*2340px    375*812pt
    UIDeviceResolution_iPhoneRetina61  = 15,    // 12/12Pro /13/13Pro /14 1170*2532px  390*844pt
    UIDeviceResolution_iPhoneRetina67  = 16,    // 12ProMax /13ProMax /14Plus 1248*2778px    428*926pt
    UIDeviceResolution_iPhoneRetina61_14p  = 17, //14Pro  1179x2556px       393x852pt
    UIDeviceResolution_iPhoneRetina67_14pm  = 18, // 14ProMax  1290x2796px  430x932pt
    

}; typedef NSUInteger UIDeviceResolution;

@interface UIDevice (Resolutions)

- (UIDeviceResolution)resolution;

- (CGSize)resolutionSize;

/**
 *  获取当前设备分辨率宽度
 *
 *  @return 宽度
 */
- (int)currentDeviceResolutionWidth;

/**
 *  获取当前设备分辨率高度
 *
 *  @return 高度
 */
- (int)currentDeviceResolutionHeight;

/*
 如果设备是iPad 标准，对应为UIDeviceResolution_iPhoneStandard，
 如果设备是iPad Retina，对应为UIDeviceResolution_iPhoneRetina35
 */
- (CGSize)resolutionIphoneOnly;

//屏幕是否为retina屏幕
- (BOOL)retinaResolution;

NSString *NSStringFromResolution(UIDeviceResolution resolution);

@end

NS_ASSUME_NONNULL_END
