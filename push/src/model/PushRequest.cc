/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/push/model/PushRequest.h>

using AlibabaCloud::Push::Model::PushRequest;

PushRequest::PushRequest()
    : RpcServiceRequest("push", "2016-08-01", "Push") {
  setMethod(HttpRequest::Method::Post);
}

PushRequest::~PushRequest() {}

int PushRequest::getAndroidNotificationBarType() const {
  return androidNotificationBarType_;
}

void PushRequest::setAndroidNotificationBarType(int androidNotificationBarType) {
  androidNotificationBarType_ = androidNotificationBarType;
  setParameter(std::string("AndroidNotificationBarType"), std::to_string(androidNotificationBarType));
}

int PushRequest::getSmsSendPolicy() const {
  return smsSendPolicy_;
}

void PushRequest::setSmsSendPolicy(int smsSendPolicy) {
  smsSendPolicy_ = smsSendPolicy;
  setParameter(std::string("SmsSendPolicy"), std::to_string(smsSendPolicy));
}

std::string PushRequest::getBody() const {
  return body_;
}

void PushRequest::setBody(const std::string &body) {
  body_ = body;
  setParameter(std::string("Body"), body);
}

std::string PushRequest::getDeviceType() const {
  return deviceType_;
}

void PushRequest::setDeviceType(const std::string &deviceType) {
  deviceType_ = deviceType;
  setParameter(std::string("DeviceType"), deviceType);
}

std::string PushRequest::getPushTime() const {
  return pushTime_;
}

void PushRequest::setPushTime(const std::string &pushTime) {
  pushTime_ = pushTime;
  setParameter(std::string("PushTime"), pushTime);
}

int PushRequest::getSendSpeed() const {
  return sendSpeed_;
}

void PushRequest::setSendSpeed(int sendSpeed) {
  sendSpeed_ = sendSpeed;
  setParameter(std::string("SendSpeed"), std::to_string(sendSpeed));
}

std::string PushRequest::getAndroidNotificationHuaweiChannel() const {
  return androidNotificationHuaweiChannel_;
}

void PushRequest::setAndroidNotificationHuaweiChannel(const std::string &androidNotificationHuaweiChannel) {
  androidNotificationHuaweiChannel_ = androidNotificationHuaweiChannel;
  setParameter(std::string("AndroidNotificationHuaweiChannel"), androidNotificationHuaweiChannel);
}

std::string PushRequest::getAndroidPopupActivity() const {
  return androidPopupActivity_;
}

void PushRequest::setAndroidPopupActivity(const std::string &androidPopupActivity) {
  androidPopupActivity_ = androidPopupActivity;
  setParameter(std::string("AndroidPopupActivity"), androidPopupActivity);
}

std::string PushRequest::getIOSRemindBody() const {
  return iOSRemindBody_;
}

void PushRequest::setIOSRemindBody(const std::string &iOSRemindBody) {
  iOSRemindBody_ = iOSRemindBody;
  setParameter(std::string("iOSRemindBody"), iOSRemindBody);
}

bool PushRequest::getTrim() const {
  return trim_;
}

void PushRequest::setTrim(bool trim) {
  trim_ = trim;
  setParameter(std::string("Trim"), trim ? "true" : "false");
}

std::string PushRequest::getAndroidNotifyType() const {
  return androidNotifyType_;
}

void PushRequest::setAndroidNotifyType(const std::string &androidNotifyType) {
  androidNotifyType_ = androidNotifyType;
  setParameter(std::string("AndroidNotifyType"), androidNotifyType);
}

std::string PushRequest::getAndroidPopupTitle() const {
  return androidPopupTitle_;
}

void PushRequest::setAndroidPopupTitle(const std::string &androidPopupTitle) {
  androidPopupTitle_ = androidPopupTitle;
  setParameter(std::string("AndroidPopupTitle"), androidPopupTitle);
}

std::string PushRequest::getAndroidMessageHuaweiCategory() const {
  return androidMessageHuaweiCategory_;
}

void PushRequest::setAndroidMessageHuaweiCategory(const std::string &androidMessageHuaweiCategory) {
  androidMessageHuaweiCategory_ = androidMessageHuaweiCategory;
  setParameter(std::string("AndroidMessageHuaweiCategory"), androidMessageHuaweiCategory);
}

std::string PushRequest::getIOSMusic() const {
  return iOSMusic_;
}

void PushRequest::setIOSMusic(const std::string &iOSMusic) {
  iOSMusic_ = iOSMusic;
  setParameter(std::string("iOSMusic"), iOSMusic);
}

std::string PushRequest::getIOSApnsEnv() const {
  return iOSApnsEnv_;
}

void PushRequest::setIOSApnsEnv(const std::string &iOSApnsEnv) {
  iOSApnsEnv_ = iOSApnsEnv;
  setParameter(std::string("iOSApnsEnv"), iOSApnsEnv);
}

bool PushRequest::getIOSMutableContent() const {
  return iOSMutableContent_;
}

void PushRequest::setIOSMutableContent(bool iOSMutableContent) {
  iOSMutableContent_ = iOSMutableContent;
  setParameter(std::string("iOSMutableContent"), iOSMutableContent ? "true" : "false");
}

int PushRequest::getAndroidNotificationBarPriority() const {
  return androidNotificationBarPriority_;
}

void PushRequest::setAndroidNotificationBarPriority(int androidNotificationBarPriority) {
  androidNotificationBarPriority_ = androidNotificationBarPriority;
  setParameter(std::string("AndroidNotificationBarPriority"), std::to_string(androidNotificationBarPriority));
}

std::string PushRequest::getExpireTime() const {
  return expireTime_;
}

void PushRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), expireTime);
}

std::string PushRequest::getAndroidImageUrl() const {
  return androidImageUrl_;
}

void PushRequest::setAndroidImageUrl(const std::string &androidImageUrl) {
  androidImageUrl_ = androidImageUrl;
  setParameter(std::string("AndroidImageUrl"), androidImageUrl);
}

std::string PushRequest::getAndroidNotificationVivoChannel() const {
  return androidNotificationVivoChannel_;
}

void PushRequest::setAndroidNotificationVivoChannel(const std::string &androidNotificationVivoChannel) {
  androidNotificationVivoChannel_ = androidNotificationVivoChannel;
  setParameter(std::string("AndroidNotificationVivoChannel"), androidNotificationVivoChannel);
}

std::string PushRequest::getIOSNotificationCategory() const {
  return iOSNotificationCategory_;
}

void PushRequest::setIOSNotificationCategory(const std::string &iOSNotificationCategory) {
  iOSNotificationCategory_ = iOSNotificationCategory;
  setParameter(std::string("iOSNotificationCategory"), iOSNotificationCategory);
}

std::string PushRequest::getAndroidNotificationXiaomiChannel() const {
  return androidNotificationXiaomiChannel_;
}

void PushRequest::setAndroidNotificationXiaomiChannel(const std::string &androidNotificationXiaomiChannel) {
  androidNotificationXiaomiChannel_ = androidNotificationXiaomiChannel;
  setParameter(std::string("AndroidNotificationXiaomiChannel"), androidNotificationXiaomiChannel);
}

bool PushRequest::getStoreOffline() const {
  return storeOffline_;
}

void PushRequest::setStoreOffline(bool storeOffline) {
  storeOffline_ = storeOffline;
  setParameter(std::string("StoreOffline"), storeOffline ? "true" : "false");
}

std::string PushRequest::getSmsParams() const {
  return smsParams_;
}

void PushRequest::setSmsParams(const std::string &smsParams) {
  smsParams_ = smsParams;
  setParameter(std::string("SmsParams"), smsParams);
}

double PushRequest::getIOSRelevanceScore() const {
  return iOSRelevanceScore_;
}

void PushRequest::setIOSRelevanceScore(double iOSRelevanceScore) {
  iOSRelevanceScore_ = iOSRelevanceScore;
  setParameter(std::string("iOSRelevanceScore"), std::to_string(iOSRelevanceScore));
}

int PushRequest::getAndroidVivoPushMode() const {
  return androidVivoPushMode_;
}

void PushRequest::setAndroidVivoPushMode(int androidVivoPushMode) {
  androidVivoPushMode_ = androidVivoPushMode;
  setParameter(std::string("AndroidVivoPushMode"), std::to_string(androidVivoPushMode));
}

std::string PushRequest::getAndroidInboxBody() const {
  return androidInboxBody_;
}

void PushRequest::setAndroidInboxBody(const std::string &androidInboxBody) {
  androidInboxBody_ = androidInboxBody;
  setParameter(std::string("AndroidInboxBody"), androidInboxBody);
}

std::string PushRequest::getJobKey() const {
  return jobKey_;
}

void PushRequest::setJobKey(const std::string &jobKey) {
  jobKey_ = jobKey;
  setParameter(std::string("JobKey"), jobKey);
}

std::string PushRequest::getAndroidOpenUrl() const {
  return androidOpenUrl_;
}

void PushRequest::setAndroidOpenUrl(const std::string &androidOpenUrl) {
  androidOpenUrl_ = androidOpenUrl;
  setParameter(std::string("AndroidOpenUrl"), androidOpenUrl);
}

std::string PushRequest::getAndroidXiaoMiNotifyBody() const {
  return androidXiaoMiNotifyBody_;
}

void PushRequest::setAndroidXiaoMiNotifyBody(const std::string &androidXiaoMiNotifyBody) {
  androidXiaoMiNotifyBody_ = androidXiaoMiNotifyBody;
  setParameter(std::string("AndroidXiaoMiNotifyBody"), androidXiaoMiNotifyBody);
}

std::string PushRequest::getIOSSubtitle() const {
  return iOSSubtitle_;
}

void PushRequest::setIOSSubtitle(const std::string &iOSSubtitle) {
  iOSSubtitle_ = iOSSubtitle;
  setParameter(std::string("iOSSubtitle"), iOSSubtitle);
}

std::string PushRequest::getAndroidXiaomiBigPictureUrl() const {
  return androidXiaomiBigPictureUrl_;
}

void PushRequest::setAndroidXiaomiBigPictureUrl(const std::string &androidXiaomiBigPictureUrl) {
  androidXiaomiBigPictureUrl_ = androidXiaomiBigPictureUrl;
  setParameter(std::string("AndroidXiaomiBigPictureUrl"), androidXiaomiBigPictureUrl);
}

bool PushRequest::getIOSRemind() const {
  return iOSRemind_;
}

void PushRequest::setIOSRemind(bool iOSRemind) {
  iOSRemind_ = iOSRemind;
  setParameter(std::string("iOSRemind"), iOSRemind ? "true" : "false");
}

std::string PushRequest::getIOSNotificationThreadId() const {
  return iOSNotificationThreadId_;
}

void PushRequest::setIOSNotificationThreadId(const std::string &iOSNotificationThreadId) {
  iOSNotificationThreadId_ = iOSNotificationThreadId;
  setParameter(std::string("iOSNotificationThreadId"), iOSNotificationThreadId);
}

std::string PushRequest::getAndroidMusic() const {
  return androidMusic_;
}

void PushRequest::setAndroidMusic(const std::string &androidMusic) {
  androidMusic_ = androidMusic;
  setParameter(std::string("AndroidMusic"), androidMusic);
}

std::string PushRequest::getIOSNotificationCollapseId() const {
  return iOSNotificationCollapseId_;
}

void PushRequest::setIOSNotificationCollapseId(const std::string &iOSNotificationCollapseId) {
  iOSNotificationCollapseId_ = iOSNotificationCollapseId;
  setParameter(std::string("iOSNotificationCollapseId"), iOSNotificationCollapseId);
}

std::string PushRequest::getAndroidMessageHuaweiUrgency() const {
  return androidMessageHuaweiUrgency_;
}

void PushRequest::setAndroidMessageHuaweiUrgency(const std::string &androidMessageHuaweiUrgency) {
  androidMessageHuaweiUrgency_ = androidMessageHuaweiUrgency;
  setParameter(std::string("AndroidMessageHuaweiUrgency"), androidMessageHuaweiUrgency);
}

std::string PushRequest::getPushType() const {
  return pushType_;
}

void PushRequest::setPushType(const std::string &pushType) {
  pushType_ = pushType;
  setParameter(std::string("PushType"), pushType);
}

std::string PushRequest::getIOSInterruptionLevel() const {
  return iOSInterruptionLevel_;
}

void PushRequest::setIOSInterruptionLevel(const std::string &iOSInterruptionLevel) {
  iOSInterruptionLevel_ = iOSInterruptionLevel;
  setParameter(std::string("iOSInterruptionLevel"), iOSInterruptionLevel);
}

std::string PushRequest::getAndroidExtParameters() const {
  return androidExtParameters_;
}

void PushRequest::setAndroidExtParameters(const std::string &androidExtParameters) {
  androidExtParameters_ = androidExtParameters;
  setParameter(std::string("AndroidExtParameters"), androidExtParameters);
}

int PushRequest::getIOSBadge() const {
  return iOSBadge_;
}

void PushRequest::setIOSBadge(int iOSBadge) {
  iOSBadge_ = iOSBadge;
  setParameter(std::string("iOSBadge"), std::to_string(iOSBadge));
}

std::string PushRequest::getAndroidBigBody() const {
  return androidBigBody_;
}

void PushRequest::setAndroidBigBody(const std::string &androidBigBody) {
  androidBigBody_ = androidBigBody;
  setParameter(std::string("AndroidBigBody"), androidBigBody);
}

bool PushRequest::getIOSBadgeAutoIncrement() const {
  return iOSBadgeAutoIncrement_;
}

void PushRequest::setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement) {
  iOSBadgeAutoIncrement_ = iOSBadgeAutoIncrement;
  setParameter(std::string("iOSBadgeAutoIncrement"), iOSBadgeAutoIncrement ? "true" : "false");
}

std::string PushRequest::getAndroidOpenType() const {
  return androidOpenType_;
}

void PushRequest::setAndroidOpenType(const std::string &androidOpenType) {
  androidOpenType_ = androidOpenType;
  setParameter(std::string("AndroidOpenType"), androidOpenType);
}

std::string PushRequest::getTitle() const {
  return title_;
}

void PushRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string PushRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PushRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int PushRequest::getSmsDelaySecs() const {
  return smsDelaySecs_;
}

void PushRequest::setSmsDelaySecs(int smsDelaySecs) {
  smsDelaySecs_ = smsDelaySecs;
  setParameter(std::string("SmsDelaySecs"), std::to_string(smsDelaySecs));
}

int PushRequest::getAndroidRenderStyle() const {
  return androidRenderStyle_;
}

void PushRequest::setAndroidRenderStyle(int androidRenderStyle) {
  androidRenderStyle_ = androidRenderStyle;
  setParameter(std::string("AndroidRenderStyle"), std::to_string(androidRenderStyle));
}

std::string PushRequest::getIOSExtParameters() const {
  return iOSExtParameters_;
}

void PushRequest::setIOSExtParameters(const std::string &iOSExtParameters) {
  iOSExtParameters_ = iOSExtParameters;
  setParameter(std::string("iOSExtParameters"), iOSExtParameters);
}

std::string PushRequest::getAndroidXiaomiImageUrl() const {
  return androidXiaomiImageUrl_;
}

void PushRequest::setAndroidXiaomiImageUrl(const std::string &androidXiaomiImageUrl) {
  androidXiaomiImageUrl_ = androidXiaomiImageUrl;
  setParameter(std::string("AndroidXiaomiImageUrl"), androidXiaomiImageUrl);
}

std::string PushRequest::getSmsTemplateName() const {
  return smsTemplateName_;
}

void PushRequest::setSmsTemplateName(const std::string &smsTemplateName) {
  smsTemplateName_ = smsTemplateName;
  setParameter(std::string("SmsTemplateName"), smsTemplateName);
}

std::string PushRequest::getAndroidPopupBody() const {
  return androidPopupBody_;
}

void PushRequest::setAndroidPopupBody(const std::string &androidPopupBody) {
  androidPopupBody_ = androidPopupBody;
  setParameter(std::string("AndroidPopupBody"), androidPopupBody);
}

std::string PushRequest::getAndroidBigPictureUrl() const {
  return androidBigPictureUrl_;
}

void PushRequest::setAndroidBigPictureUrl(const std::string &androidBigPictureUrl) {
  androidBigPictureUrl_ = androidBigPictureUrl;
  setParameter(std::string("AndroidBigPictureUrl"), androidBigPictureUrl);
}

bool PushRequest::getIOSSilentNotification() const {
  return iOSSilentNotification_;
}

void PushRequest::setIOSSilentNotification(bool iOSSilentNotification) {
  iOSSilentNotification_ = iOSSilentNotification;
  setParameter(std::string("iOSSilentNotification"), iOSSilentNotification ? "true" : "false");
}

std::string PushRequest::getSendChannels() const {
  return sendChannels_;
}

void PushRequest::setSendChannels(const std::string &sendChannels) {
  sendChannels_ = sendChannels;
  setParameter(std::string("SendChannels"), sendChannels);
}

std::string PushRequest::getTarget() const {
  return target_;
}

void PushRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string PushRequest::getAndroidBigTitle() const {
  return androidBigTitle_;
}

void PushRequest::setAndroidBigTitle(const std::string &androidBigTitle) {
  androidBigTitle_ = androidBigTitle;
  setParameter(std::string("AndroidBigTitle"), androidBigTitle);
}

std::string PushRequest::getAndroidNotificationChannel() const {
  return androidNotificationChannel_;
}

void PushRequest::setAndroidNotificationChannel(const std::string &androidNotificationChannel) {
  androidNotificationChannel_ = androidNotificationChannel;
  setParameter(std::string("AndroidNotificationChannel"), androidNotificationChannel);
}

bool PushRequest::getAndroidRemind() const {
  return androidRemind_;
}

void PushRequest::setAndroidRemind(bool androidRemind) {
  androidRemind_ = androidRemind;
  setParameter(std::string("AndroidRemind"), androidRemind ? "true" : "false");
}

std::string PushRequest::getAndroidActivity() const {
  return androidActivity_;
}

void PushRequest::setAndroidActivity(const std::string &androidActivity) {
  androidActivity_ = androidActivity;
  setParameter(std::string("AndroidActivity"), androidActivity);
}

std::string PushRequest::getSmsSignName() const {
  return smsSignName_;
}

void PushRequest::setSmsSignName(const std::string &smsSignName) {
  smsSignName_ = smsSignName;
  setParameter(std::string("SmsSignName"), smsSignName);
}

int PushRequest::getAndroidNotificationNotifyId() const {
  return androidNotificationNotifyId_;
}

void PushRequest::setAndroidNotificationNotifyId(int androidNotificationNotifyId) {
  androidNotificationNotifyId_ = androidNotificationNotifyId;
  setParameter(std::string("AndroidNotificationNotifyId"), std::to_string(androidNotificationNotifyId));
}

long PushRequest::getAppKey() const {
  return appKey_;
}

void PushRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

std::string PushRequest::getTargetValue() const {
  return targetValue_;
}

void PushRequest::setTargetValue(const std::string &targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), targetValue);
}

std::string PushRequest::getAndroidXiaoMiActivity() const {
  return androidXiaoMiActivity_;
}

void PushRequest::setAndroidXiaoMiActivity(const std::string &androidXiaoMiActivity) {
  androidXiaoMiActivity_ = androidXiaoMiActivity;
  setParameter(std::string("AndroidXiaoMiActivity"), androidXiaoMiActivity);
}

std::string PushRequest::getAndroidXiaoMiNotifyTitle() const {
  return androidXiaoMiNotifyTitle_;
}

void PushRequest::setAndroidXiaoMiNotifyTitle(const std::string &androidXiaoMiNotifyTitle) {
  androidXiaoMiNotifyTitle_ = androidXiaoMiNotifyTitle;
  setParameter(std::string("AndroidXiaoMiNotifyTitle"), androidXiaoMiNotifyTitle);
}

