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

int PushRequest::getAndroidMessageOppoNotifyLevel() const {
  return androidMessageOppoNotifyLevel_;
}

void PushRequest::setAndroidMessageOppoNotifyLevel(int androidMessageOppoNotifyLevel) {
  androidMessageOppoNotifyLevel_ = androidMessageOppoNotifyLevel;
  setParameter(std::string("AndroidMessageOppoNotifyLevel"), std::to_string(androidMessageOppoNotifyLevel));
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

std::string PushRequest::getAndroidPopupTitle() const {
  return androidPopupTitle_;
}

void PushRequest::setAndroidPopupTitle(const std::string &androidPopupTitle) {
  androidPopupTitle_ = androidPopupTitle;
  setParameter(std::string("AndroidPopupTitle"), androidPopupTitle);
}

std::string PushRequest::getIOSApnsEnv() const {
  return iOSApnsEnv_;
}

void PushRequest::setIOSApnsEnv(const std::string &iOSApnsEnv) {
  iOSApnsEnv_ = iOSApnsEnv;
  setParameter(std::string("iOSApnsEnv"), iOSApnsEnv);
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

std::string PushRequest::getAndroidVivoReceiptId() const {
  return androidVivoReceiptId_;
}

void PushRequest::setAndroidVivoReceiptId(const std::string &androidVivoReceiptId) {
  androidVivoReceiptId_ = androidVivoReceiptId;
  setParameter(std::string("AndroidVivoReceiptId"), androidVivoReceiptId);
}

std::string PushRequest::getIOSNotificationCategory() const {
  return iOSNotificationCategory_;
}

void PushRequest::setIOSNotificationCategory(const std::string &iOSNotificationCategory) {
  iOSNotificationCategory_ = iOSNotificationCategory;
  setParameter(std::string("iOSNotificationCategory"), iOSNotificationCategory);
}

std::string PushRequest::getAndroidXiaomiBigPictureUrl() const {
  return androidXiaomiBigPictureUrl_;
}

void PushRequest::setAndroidXiaomiBigPictureUrl(const std::string &androidXiaomiBigPictureUrl) {
  androidXiaomiBigPictureUrl_ = androidXiaomiBigPictureUrl;
  setParameter(std::string("AndroidXiaomiBigPictureUrl"), androidXiaomiBigPictureUrl);
}

std::string PushRequest::getHarmonyCategory() const {
  return harmonyCategory_;
}

void PushRequest::setHarmonyCategory(const std::string &harmonyCategory) {
  harmonyCategory_ = harmonyCategory;
  setParameter(std::string("HarmonyCategory"), harmonyCategory);
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

int PushRequest::getAndroidHuaweiTargetUserType() const {
  return androidHuaweiTargetUserType_;
}

void PushRequest::setAndroidHuaweiTargetUserType(int androidHuaweiTargetUserType) {
  androidHuaweiTargetUserType_ = androidHuaweiTargetUserType;
  setParameter(std::string("AndroidHuaweiTargetUserType"), std::to_string(androidHuaweiTargetUserType));
}

std::string PushRequest::getAndroidMessageHuaweiUrgency() const {
  return androidMessageHuaweiUrgency_;
}

void PushRequest::setAndroidMessageHuaweiUrgency(const std::string &androidMessageHuaweiUrgency) {
  androidMessageHuaweiUrgency_ = androidMessageHuaweiUrgency;
  setParameter(std::string("AndroidMessageHuaweiUrgency"), androidMessageHuaweiUrgency);
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

std::string PushRequest::getHarmonyRemindTitle() const {
  return harmonyRemindTitle_;
}

void PushRequest::setHarmonyRemindTitle(const std::string &harmonyRemindTitle) {
  harmonyRemindTitle_ = harmonyRemindTitle;
  setParameter(std::string("HarmonyRemindTitle"), harmonyRemindTitle);
}

std::string PushRequest::getAndroidBadgeClass() const {
  return androidBadgeClass_;
}

void PushRequest::setAndroidBadgeClass(const std::string &androidBadgeClass) {
  androidBadgeClass_ = androidBadgeClass;
  setParameter(std::string("AndroidBadgeClass"), androidBadgeClass);
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

std::string PushRequest::getHarmonyUri() const {
  return harmonyUri_;
}

void PushRequest::setHarmonyUri(const std::string &harmonyUri) {
  harmonyUri_ = harmonyUri;
  setParameter(std::string("HarmonyUri"), harmonyUri);
}

std::string PushRequest::getSmsTemplateName() const {
  return smsTemplateName_;
}

void PushRequest::setSmsTemplateName(const std::string &smsTemplateName) {
  smsTemplateName_ = smsTemplateName;
  setParameter(std::string("SmsTemplateName"), smsTemplateName);
}

std::string PushRequest::getHarmonyExtParameters() const {
  return harmonyExtParameters_;
}

void PushRequest::setHarmonyExtParameters(const std::string &harmonyExtParameters) {
  harmonyExtParameters_ = harmonyExtParameters;
  setParameter(std::string("HarmonyExtParameters"), harmonyExtParameters);
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

std::string PushRequest::getHarmonyNotificationSlotType() const {
  return harmonyNotificationSlotType_;
}

void PushRequest::setHarmonyNotificationSlotType(const std::string &harmonyNotificationSlotType) {
  harmonyNotificationSlotType_ = harmonyNotificationSlotType;
  setParameter(std::string("HarmonyNotificationSlotType"), harmonyNotificationSlotType);
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

int PushRequest::getHarmonyBadgeSetNum() const {
  return harmonyBadgeSetNum_;
}

void PushRequest::setHarmonyBadgeSetNum(int harmonyBadgeSetNum) {
  harmonyBadgeSetNum_ = harmonyBadgeSetNum;
  setParameter(std::string("HarmonyBadgeSetNum"), std::to_string(harmonyBadgeSetNum));
}

std::string PushRequest::getAndroidXiaoMiNotifyTitle() const {
  return androidXiaoMiNotifyTitle_;
}

void PushRequest::setAndroidXiaoMiNotifyTitle(const std::string &androidXiaoMiNotifyTitle) {
  androidXiaoMiNotifyTitle_ = androidXiaoMiNotifyTitle;
  setParameter(std::string("AndroidXiaoMiNotifyTitle"), androidXiaoMiNotifyTitle);
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

int PushRequest::getHarmonyNotifyId() const {
  return harmonyNotifyId_;
}

void PushRequest::setHarmonyNotifyId(int harmonyNotifyId) {
  harmonyNotifyId_ = harmonyNotifyId;
  setParameter(std::string("HarmonyNotifyId"), std::to_string(harmonyNotifyId));
}

std::string PushRequest::getHarmonyRenderStyle() const {
  return harmonyRenderStyle_;
}

void PushRequest::setHarmonyRenderStyle(const std::string &harmonyRenderStyle) {
  harmonyRenderStyle_ = harmonyRenderStyle;
  setParameter(std::string("HarmonyRenderStyle"), harmonyRenderStyle);
}

std::string PushRequest::getAndroidMessageVivoCategory() const {
  return androidMessageVivoCategory_;
}

void PushRequest::setAndroidMessageVivoCategory(const std::string &androidMessageVivoCategory) {
  androidMessageVivoCategory_ = androidMessageVivoCategory;
  setParameter(std::string("AndroidMessageVivoCategory"), androidMessageVivoCategory);
}

std::string PushRequest::getAndroidNotifyType() const {
  return androidNotifyType_;
}

void PushRequest::setAndroidNotifyType(const std::string &androidNotifyType) {
  androidNotifyType_ = androidNotifyType;
  setParameter(std::string("AndroidNotifyType"), androidNotifyType);
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

bool PushRequest::getIOSMutableContent() const {
  return iOSMutableContent_;
}

void PushRequest::setIOSMutableContent(bool iOSMutableContent) {
  iOSMutableContent_ = iOSMutableContent;
  setParameter(std::string("iOSMutableContent"), iOSMutableContent ? "true" : "false");
}

std::string PushRequest::getAndroidNotificationThreadId() const {
  return androidNotificationThreadId_;
}

void PushRequest::setAndroidNotificationThreadId(const std::string &androidNotificationThreadId) {
  androidNotificationThreadId_ = androidNotificationThreadId;
  setParameter(std::string("AndroidNotificationThreadId"), androidNotificationThreadId);
}

int PushRequest::getAndroidHonorTargetUserType() const {
  return androidHonorTargetUserType_;
}

void PushRequest::setAndroidHonorTargetUserType(int androidHonorTargetUserType) {
  androidHonorTargetUserType_ = androidHonorTargetUserType;
  setParameter(std::string("AndroidHonorTargetUserType"), std::to_string(androidHonorTargetUserType));
}

std::string PushRequest::getHarmonyRemindBody() const {
  return harmonyRemindBody_;
}

void PushRequest::setHarmonyRemindBody(const std::string &harmonyRemindBody) {
  harmonyRemindBody_ = harmonyRemindBody;
  setParameter(std::string("HarmonyRemindBody"), harmonyRemindBody);
}

std::string PushRequest::getAndroidNotificationVivoChannel() const {
  return androidNotificationVivoChannel_;
}

void PushRequest::setAndroidNotificationVivoChannel(const std::string &androidNotificationVivoChannel) {
  androidNotificationVivoChannel_ = androidNotificationVivoChannel;
  setParameter(std::string("AndroidNotificationVivoChannel"), androidNotificationVivoChannel);
}

std::string PushRequest::getAndroidNotificationXiaomiChannel() const {
  return androidNotificationXiaomiChannel_;
}

void PushRequest::setAndroidNotificationXiaomiChannel(const std::string &androidNotificationXiaomiChannel) {
  androidNotificationXiaomiChannel_ = androidNotificationXiaomiChannel;
  setParameter(std::string("AndroidNotificationXiaomiChannel"), androidNotificationXiaomiChannel);
}

std::string PushRequest::getHarmonyAction() const {
  return harmonyAction_;
}

void PushRequest::setHarmonyAction(const std::string &harmonyAction) {
  harmonyAction_ = harmonyAction;
  setParameter(std::string("HarmonyAction"), harmonyAction);
}

bool PushRequest::getStoreOffline() const {
  return storeOffline_;
}

void PushRequest::setStoreOffline(bool storeOffline) {
  storeOffline_ = storeOffline;
  setParameter(std::string("StoreOffline"), storeOffline ? "true" : "false");
}

double PushRequest::getIOSRelevanceScore() const {
  return iOSRelevanceScore_;
}

void PushRequest::setIOSRelevanceScore(double iOSRelevanceScore) {
  iOSRelevanceScore_ = iOSRelevanceScore;
  setParameter(std::string("iOSRelevanceScore"), std::to_string(iOSRelevanceScore));
}

std::string PushRequest::getSmsParams() const {
  return smsParams_;
}

void PushRequest::setSmsParams(const std::string &smsParams) {
  smsParams_ = smsParams;
  setParameter(std::string("SmsParams"), smsParams);
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

std::string PushRequest::getHarmonyReceiptId() const {
  return harmonyReceiptId_;
}

void PushRequest::setHarmonyReceiptId(const std::string &harmonyReceiptId) {
  harmonyReceiptId_ = harmonyReceiptId;
  setParameter(std::string("HarmonyReceiptId"), harmonyReceiptId);
}

std::string PushRequest::getAndroidOpenUrl() const {
  return androidOpenUrl_;
}

void PushRequest::setAndroidOpenUrl(const std::string &androidOpenUrl) {
  androidOpenUrl_ = androidOpenUrl;
  setParameter(std::string("AndroidOpenUrl"), androidOpenUrl);
}

int PushRequest::getAndroidBadgeSetNum() const {
  return androidBadgeSetNum_;
}

void PushRequest::setAndroidBadgeSetNum(int androidBadgeSetNum) {
  androidBadgeSetNum_ = androidBadgeSetNum;
  setParameter(std::string("AndroidBadgeSetNum"), std::to_string(androidBadgeSetNum));
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

bool PushRequest::getHarmonyRemind() const {
  return harmonyRemind_;
}

void PushRequest::setHarmonyRemind(bool harmonyRemind) {
  harmonyRemind_ = harmonyRemind;
  setParameter(std::string("HarmonyRemind"), harmonyRemind ? "true" : "false");
}

std::string PushRequest::getAndroidMusic() const {
  return androidMusic_;
}

void PushRequest::setAndroidMusic(const std::string &androidMusic) {
  androidMusic_ = androidMusic;
  setParameter(std::string("AndroidMusic"), androidMusic);
}

bool PushRequest::getHarmonyExtensionPush() const {
  return harmonyExtensionPush_;
}

void PushRequest::setHarmonyExtensionPush(bool harmonyExtensionPush) {
  harmonyExtensionPush_ = harmonyExtensionPush;
  setParameter(std::string("HarmonyExtensionPush"), harmonyExtensionPush ? "true" : "false");
}

std::string PushRequest::getIOSNotificationCollapseId() const {
  return iOSNotificationCollapseId_;
}

void PushRequest::setIOSNotificationCollapseId(const std::string &iOSNotificationCollapseId) {
  iOSNotificationCollapseId_ = iOSNotificationCollapseId;
  setParameter(std::string("iOSNotificationCollapseId"), iOSNotificationCollapseId);
}

std::string PushRequest::getPushType() const {
  return pushType_;
}

void PushRequest::setPushType(const std::string &pushType) {
  pushType_ = pushType;
  setParameter(std::string("PushType"), pushType);
}

std::string PushRequest::getHarmonyExtensionExtraData() const {
  return harmonyExtensionExtraData_;
}

void PushRequest::setHarmonyExtensionExtraData(const std::string &harmonyExtensionExtraData) {
  harmonyExtensionExtraData_ = harmonyExtensionExtraData;
  setParameter(std::string("HarmonyExtensionExtraData"), harmonyExtensionExtraData);
}

std::string PushRequest::getHarmonyImageUrl() const {
  return harmonyImageUrl_;
}

void PushRequest::setHarmonyImageUrl(const std::string &harmonyImageUrl) {
  harmonyImageUrl_ = harmonyImageUrl;
  setParameter(std::string("HarmonyImageUrl"), harmonyImageUrl);
}

std::string PushRequest::getAndroidBigBody() const {
  return androidBigBody_;
}

void PushRequest::setAndroidBigBody(const std::string &androidBigBody) {
  androidBigBody_ = androidBigBody;
  setParameter(std::string("AndroidBigBody"), androidBigBody);
}

std::string PushRequest::getTitle() const {
  return title_;
}

void PushRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

int PushRequest::getHarmonyBadgeAddNum() const {
  return harmonyBadgeAddNum_;
}

void PushRequest::setHarmonyBadgeAddNum(int harmonyBadgeAddNum) {
  harmonyBadgeAddNum_ = harmonyBadgeAddNum;
  setParameter(std::string("HarmonyBadgeAddNum"), std::to_string(harmonyBadgeAddNum));
}

bool PushRequest::getHarmonyTestMessage() const {
  return harmonyTestMessage_;
}

void PushRequest::setHarmonyTestMessage(bool harmonyTestMessage) {
  harmonyTestMessage_ = harmonyTestMessage;
  setParameter(std::string("HarmonyTestMessage"), harmonyTestMessage ? "true" : "false");
}

int PushRequest::getAndroidBadgeAddNum() const {
  return androidBadgeAddNum_;
}

void PushRequest::setAndroidBadgeAddNum(int androidBadgeAddNum) {
  androidBadgeAddNum_ = androidBadgeAddNum;
  setParameter(std::string("AndroidBadgeAddNum"), std::to_string(androidBadgeAddNum));
}

std::string PushRequest::getAndroidHuaweiReceiptId() const {
  return androidHuaweiReceiptId_;
}

void PushRequest::setAndroidHuaweiReceiptId(const std::string &androidHuaweiReceiptId) {
  androidHuaweiReceiptId_ = androidHuaweiReceiptId;
  setParameter(std::string("AndroidHuaweiReceiptId"), androidHuaweiReceiptId);
}

std::string PushRequest::getAndroidNotificationHonorChannel() const {
  return androidNotificationHonorChannel_;
}

void PushRequest::setAndroidNotificationHonorChannel(const std::string &androidNotificationHonorChannel) {
  androidNotificationHonorChannel_ = androidNotificationHonorChannel;
  setParameter(std::string("AndroidNotificationHonorChannel"), androidNotificationHonorChannel);
}

int PushRequest::getAndroidTargetUserType() const {
  return androidTargetUserType_;
}

void PushRequest::setAndroidTargetUserType(int androidTargetUserType) {
  androidTargetUserType_ = androidTargetUserType;
  setParameter(std::string("AndroidTargetUserType"), std::to_string(androidTargetUserType));
}

std::string PushRequest::getAndroidPopupBody() const {
  return androidPopupBody_;
}

void PushRequest::setAndroidPopupBody(const std::string &androidPopupBody) {
  androidPopupBody_ = androidPopupBody;
  setParameter(std::string("AndroidPopupBody"), androidPopupBody);
}

std::string PushRequest::getAndroidNotificationGroup() const {
  return androidNotificationGroup_;
}

void PushRequest::setAndroidNotificationGroup(const std::string &androidNotificationGroup) {
  androidNotificationGroup_ = androidNotificationGroup;
  setParameter(std::string("AndroidNotificationGroup"), androidNotificationGroup);
}

std::string PushRequest::getSendChannels() const {
  return sendChannels_;
}

void PushRequest::setSendChannels(const std::string &sendChannels) {
  sendChannels_ = sendChannels;
  setParameter(std::string("SendChannels"), sendChannels);
}

std::string PushRequest::getHarmonyActionType() const {
  return harmonyActionType_;
}

void PushRequest::setHarmonyActionType(const std::string &harmonyActionType) {
  harmonyActionType_ = harmonyActionType;
  setParameter(std::string("HarmonyActionType"), harmonyActionType);
}

std::string PushRequest::getTarget() const {
  return target_;
}

void PushRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string PushRequest::getHarmonyInboxContent() const {
  return harmonyInboxContent_;
}

void PushRequest::setHarmonyInboxContent(const std::string &harmonyInboxContent) {
  harmonyInboxContent_ = harmonyInboxContent;
  setParameter(std::string("HarmonyInboxContent"), harmonyInboxContent);
}

std::string PushRequest::getAndroidMessageOppoCategory() const {
  return androidMessageOppoCategory_;
}

void PushRequest::setAndroidMessageOppoCategory(const std::string &androidMessageOppoCategory) {
  androidMessageOppoCategory_ = androidMessageOppoCategory;
  setParameter(std::string("AndroidMessageOppoCategory"), androidMessageOppoCategory);
}

std::string PushRequest::getAndroidXiaoMiActivity() const {
  return androidXiaoMiActivity_;
}

void PushRequest::setAndroidXiaoMiActivity(const std::string &androidXiaoMiActivity) {
  androidXiaoMiActivity_ = androidXiaoMiActivity;
  setParameter(std::string("AndroidXiaoMiActivity"), androidXiaoMiActivity);
}

