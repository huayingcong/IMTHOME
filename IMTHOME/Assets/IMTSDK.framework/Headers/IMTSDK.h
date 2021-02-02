//
//  IMTSDK.h
//  IMTSDK
//
//  Created by Aiken on 2019/10/23.
//  Copyright © 2019 Aiken. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
// Hvt实时发送数据等级
typedef NS_OPTIONS(NSUInteger, ReceiveBitHvtType) {
    ReceiveBitHvtTypeStart           = 1 << 0, //0001  = 1 开始
    ReceiveBitHvtTypeHeartbeat       = 1 << 1, //0010  = 2 心跳
    ReceiveBitHvtTypeEnd             = 1 << 2, //0100  = 4  结束
    ReceiveBitHvtTypeError           = 1 << 3, //1000  = 8  异常
};

@interface IMTSDK : NSObject
/** 初始化管理单例 **/
+ (instancetype)shareManager;

#pragma mark - 初始化数据
- (void)creatManageData;

#pragma mark - 更新页面访问
/** 页面访问创建新的页面记录 **/
- (void)accessPageView:(UIView *)accview;
/** 更新页面最后时间信息 **/
- (void)upDataAVtiveView:(UIView *)accview;

#pragma mark - 更新APP状态方法
/* 创建页面回话信息 */
- (void)accessSessionRecord;
/** 更新页面回话信息 **/
- (void)updataSessionStateisActive:(BOOL)isactive;
 
#pragma - mark 设置配置信息
/** 设置渠道赋值 **/
- (void)setChannelId:(NSString *)channelid;
 /** 设置UAID **/
- (void)setUAId:(NSString *)sdkuaid;
/** 查询上传所有页面信息 -> 页面活动数据 -> 回话信息 -> Log信息   // 设置为串行 执行**/
- (void)queryAllDataBase;
/** 请求更新配置文件*/
- (void)dispathConfigureInfoUPData;
/** 启动Video数据***/
- (void)startVideoVid:(NSString *)vid ChannelId:(NSString *)channelid;
/** 暂停Video数据***/
- (void)pauserVideoVid:(NSString *)vid ChannelId:(NSString *)channelid;
/** 恢复Video数据***/
- (void)resumeVideoVid:(NSString *)vid ChannelId:(NSString *)channelid;
/** 停止Video数据***/
- (void)stopVideoVid:(NSString *)vid ChannelId:(NSString *)channelid;
/** Video心跳数据****/
- (void)videoHeartbeatVid:(NSString *)vid ChannelId:(NSString *)channelid;
/** 设置隐私协议 **/
- (void)agreeToPrivacyAgreement:(BOOL)isAgree;
/** 返回隐私协议地址  **/
- (NSString *)getPrivacyAgreementURL;
@end
NS_ASSUME_NONNULL_END
