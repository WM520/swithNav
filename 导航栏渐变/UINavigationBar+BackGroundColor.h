//
//  UINavigationBar+BackGroundColor.h
//  导航栏渐变
//
//  Created by David on 16/6/16.
//  Copyright © 2016年 WM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (BackGroundColor)

- (void)wm_setBackgroundColor:(UIColor *)backgroundColor;
- (void)wm_setTranslationY:(CGFloat)translationY;
- (void)wm_setElementsAlpha:(CGFloat)alpha;
- (void)wm_reset;

@end
