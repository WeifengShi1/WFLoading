//
//  WFLoadingConfig.h
//  WFLoadingDemo
//
//  Created by Apple on 2018/10/8.
//  Copyright © 2018年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WFLoadingConfigDelgate.h"

@interface WFLoadingConfig : NSObject<WFLoadingConfigDelgate>
/**
 * loading界面配置，未填写项自动返回默认值，修改默认值可修改WFLoadingDefaultConfig属性

 */

/**loading加载文字*/
@property (nonatomic,  copy) NSString * loadingMsg;
/**loading加载文字颜色*/
@property (nonatomic,strong) UIColor * loadingMsgTextColor;
/**loading加载文字大小*/
@property (nonatomic,strong) UIFont * loadingMsgTextFont;
/**loading加载图片组*/
@property (nonatomic,strong) NSArray <NSString*>* images;
/**动画时长 默认2秒*/
@property (nonatomic,assign) NSTimeInterval imageTimeInterval;


/**提示页配置，如需显示提示页，请在loading结束后调用stop方法*/

/**提示页图片*/
@property (nonatomic,  copy) NSString * emptyImage;
/**请求失败提示页提示文本 默认为空*/
@property (nonatomic,  copy) NSString * emptyMsg;
/**请求失败提示页文本颜色  默认灰色*/
@property (nonatomic,strong) UIColor * emptyMsgTextColor;
/**请求失败提示页文本字体大小 默认14*/
@property (nonatomic,strong) UIFont * emptyMsgTextFont;


/**按钮文字*/
@property (nonatomic,  copy) NSString * emptyBtnTitle;
/**按钮文字颜色  默认白色*/
@property (nonatomic,strong) UIColor * emptyBtnTitleColor;
/**按钮背景色    默认蓝色*/
@property (nonatomic,strong) UIColor * emptyBtnblackGroundColor;
/**按钮文字大小  默认14 建议14-16*/
@property (nonatomic,strong) UIFont * emptyBtnFont;
/**按钮响应方法*/
@property (nonatomic,  copy) BtnAction action;

+(WFLoadingConfig*)loadingWithBtnAction:(BtnAction)action;
-(instancetype)initWithAction:(BtnAction)action;
+(WFLoadingConfig*)loadingWithBtnTitle:(NSString*)title emptyImage:(NSString*)emptyImage Action:(BtnAction)action;
-(instancetype)initWithBtnTitle:(NSString*)title emptyImage:(NSString*)emptyImage Action:(BtnAction)action;;
@end
