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

#ifndef ALIBABACLOUD_PUSH_MODEL_PUSHREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_PUSHREQUEST_H_

#include <alibabacloud/push/PushExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Push {
namespace Model {
class ALIBABACLOUD_PUSH_EXPORT PushRequest : public RpcServiceRequest {
public:
	PushRequest();
	~PushRequest();
	int getAndroidNotificationBarType() const;
	void setAndroidNotificationBarType(int androidNotificationBarType);
	int getAndroidMessageOppoNotifyLevel() const;
	void setAndroidMessageOppoNotifyLevel(int androidMessageOppoNotifyLevel);
	std::string getDeviceType() const;
	void setDeviceType(const std::string &deviceType);
	std::string getPushTime() const;
	void setPushTime(const std::string &pushTime);
	int getSendSpeed() const;
	void setSendSpeed(int sendSpeed);
	std::string getIOSRemindBody() const;
	void setIOSRemindBody(const std::string &iOSRemindBody);
	bool getTrim() const;
	void setTrim(bool trim);
	std::string getAndroidPopupTitle() const;
	void setAndroidPopupTitle(const std::string &androidPopupTitle);
	std::string getIOSApnsEnv() const;
	void setIOSApnsEnv(const std::string &iOSApnsEnv);
	int getAndroidNotificationBarPriority() const;
	void setAndroidNotificationBarPriority(int androidNotificationBarPriority);
	std::string getExpireTime() const;
	void setExpireTime(const std::string &expireTime);
	std::string getAndroidImageUrl() const;
	void setAndroidImageUrl(const std::string &androidImageUrl);
	std::string getAndroidVivoReceiptId() const;
	void setAndroidVivoReceiptId(const std::string &androidVivoReceiptId);
	std::string getIOSNotificationCategory() const;
	void setIOSNotificationCategory(const std::string &iOSNotificationCategory);
	std::string getAndroidXiaomiBigPictureUrl() const;
	void setAndroidXiaomiBigPictureUrl(const std::string &androidXiaomiBigPictureUrl);
	std::string getHarmonyCategory() const;
	void setHarmonyCategory(const std::string &harmonyCategory);
	bool getIOSRemind() const;
	void setIOSRemind(bool iOSRemind);
	std::string getIOSNotificationThreadId() const;
	void setIOSNotificationThreadId(const std::string &iOSNotificationThreadId);
	int getAndroidHuaweiTargetUserType() const;
	void setAndroidHuaweiTargetUserType(int androidHuaweiTargetUserType);
	std::string getAndroidMessageHuaweiUrgency() const;
	void setAndroidMessageHuaweiUrgency(const std::string &androidMessageHuaweiUrgency);
	std::string getIOSInterruptionLevel() const;
	void setIOSInterruptionLevel(const std::string &iOSInterruptionLevel);
	std::string getAndroidExtParameters() const;
	void setAndroidExtParameters(const std::string &androidExtParameters);
	int getIOSBadge() const;
	void setIOSBadge(int iOSBadge);
	bool getIOSBadgeAutoIncrement() const;
	void setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement);
	std::string getAndroidOpenType() const;
	void setAndroidOpenType(const std::string &androidOpenType);
	std::string getHarmonyRemindTitle() const;
	void setHarmonyRemindTitle(const std::string &harmonyRemindTitle);
	std::string getAndroidBadgeClass() const;
	void setAndroidBadgeClass(const std::string &androidBadgeClass);
	int getSmsDelaySecs() const;
	void setSmsDelaySecs(int smsDelaySecs);
	int getAndroidRenderStyle() const;
	void setAndroidRenderStyle(int androidRenderStyle);
	std::string getIOSExtParameters() const;
	void setIOSExtParameters(const std::string &iOSExtParameters);
	std::string getAndroidXiaomiImageUrl() const;
	void setAndroidXiaomiImageUrl(const std::string &androidXiaomiImageUrl);
	std::string getHarmonyUri() const;
	void setHarmonyUri(const std::string &harmonyUri);
	std::string getSmsTemplateName() const;
	void setSmsTemplateName(const std::string &smsTemplateName);
	std::string getHarmonyExtParameters() const;
	void setHarmonyExtParameters(const std::string &harmonyExtParameters);
	std::string getAndroidBigPictureUrl() const;
	void setAndroidBigPictureUrl(const std::string &androidBigPictureUrl);
	bool getIOSSilentNotification() const;
	void setIOSSilentNotification(bool iOSSilentNotification);
	std::string getHarmonyNotificationSlotType() const;
	void setHarmonyNotificationSlotType(const std::string &harmonyNotificationSlotType);
	std::string getAndroidBigTitle() const;
	void setAndroidBigTitle(const std::string &androidBigTitle);
	std::string getAndroidNotificationChannel() const;
	void setAndroidNotificationChannel(const std::string &androidNotificationChannel);
	bool getAndroidRemind() const;
	void setAndroidRemind(bool androidRemind);
	std::string getAndroidActivity() const;
	void setAndroidActivity(const std::string &androidActivity);
	std::string getSmsSignName() const;
	void setSmsSignName(const std::string &smsSignName);
	int getAndroidNotificationNotifyId() const;
	void setAndroidNotificationNotifyId(int androidNotificationNotifyId);
	long getAppKey() const;
	void setAppKey(long appKey);
	std::string getTargetValue() const;
	void setTargetValue(const std::string &targetValue);
	int getHarmonyBadgeSetNum() const;
	void setHarmonyBadgeSetNum(int harmonyBadgeSetNum);
	std::string getAndroidXiaoMiNotifyTitle() const;
	void setAndroidXiaoMiNotifyTitle(const std::string &androidXiaoMiNotifyTitle);
	int getSmsSendPolicy() const;
	void setSmsSendPolicy(int smsSendPolicy);
	std::string getBody() const;
	void setBody(const std::string &body);
	std::string getAndroidNotificationHuaweiChannel() const;
	void setAndroidNotificationHuaweiChannel(const std::string &androidNotificationHuaweiChannel);
	std::string getAndroidPopupActivity() const;
	void setAndroidPopupActivity(const std::string &androidPopupActivity);
	int getHarmonyNotifyId() const;
	void setHarmonyNotifyId(int harmonyNotifyId);
	std::string getHarmonyRenderStyle() const;
	void setHarmonyRenderStyle(const std::string &harmonyRenderStyle);
	std::string getAndroidMessageVivoCategory() const;
	void setAndroidMessageVivoCategory(const std::string &androidMessageVivoCategory);
	std::string getAndroidNotifyType() const;
	void setAndroidNotifyType(const std::string &androidNotifyType);
	std::string getAndroidMessageHuaweiCategory() const;
	void setAndroidMessageHuaweiCategory(const std::string &androidMessageHuaweiCategory);
	std::string getIOSMusic() const;
	void setIOSMusic(const std::string &iOSMusic);
	bool getIOSMutableContent() const;
	void setIOSMutableContent(bool iOSMutableContent);
	std::string getAndroidNotificationThreadId() const;
	void setAndroidNotificationThreadId(const std::string &androidNotificationThreadId);
	int getAndroidHonorTargetUserType() const;
	void setAndroidHonorTargetUserType(int androidHonorTargetUserType);
	std::string getHarmonyRemindBody() const;
	void setHarmonyRemindBody(const std::string &harmonyRemindBody);
	std::string getAndroidNotificationVivoChannel() const;
	void setAndroidNotificationVivoChannel(const std::string &androidNotificationVivoChannel);
	std::string getAndroidNotificationXiaomiChannel() const;
	void setAndroidNotificationXiaomiChannel(const std::string &androidNotificationXiaomiChannel);
	std::string getHarmonyAction() const;
	void setHarmonyAction(const std::string &harmonyAction);
	bool getStoreOffline() const;
	void setStoreOffline(bool storeOffline);
	double getIOSRelevanceScore() const;
	void setIOSRelevanceScore(double iOSRelevanceScore);
	std::string getSmsParams() const;
	void setSmsParams(const std::string &smsParams);
	int getAndroidVivoPushMode() const;
	void setAndroidVivoPushMode(int androidVivoPushMode);
	std::string getAndroidInboxBody() const;
	void setAndroidInboxBody(const std::string &androidInboxBody);
	std::string getJobKey() const;
	void setJobKey(const std::string &jobKey);
	std::string getHarmonyReceiptId() const;
	void setHarmonyReceiptId(const std::string &harmonyReceiptId);
	std::string getAndroidOpenUrl() const;
	void setAndroidOpenUrl(const std::string &androidOpenUrl);
	int getAndroidBadgeSetNum() const;
	void setAndroidBadgeSetNum(int androidBadgeSetNum);
	std::string getAndroidXiaoMiNotifyBody() const;
	void setAndroidXiaoMiNotifyBody(const std::string &androidXiaoMiNotifyBody);
	std::string getIOSSubtitle() const;
	void setIOSSubtitle(const std::string &iOSSubtitle);
	bool getHarmonyRemind() const;
	void setHarmonyRemind(bool harmonyRemind);
	std::string getAndroidMusic() const;
	void setAndroidMusic(const std::string &androidMusic);
	bool getHarmonyExtensionPush() const;
	void setHarmonyExtensionPush(bool harmonyExtensionPush);
	std::string getIOSNotificationCollapseId() const;
	void setIOSNotificationCollapseId(const std::string &iOSNotificationCollapseId);
	std::string getPushType() const;
	void setPushType(const std::string &pushType);
	std::string getHarmonyExtensionExtraData() const;
	void setHarmonyExtensionExtraData(const std::string &harmonyExtensionExtraData);
	std::string getHarmonyImageUrl() const;
	void setHarmonyImageUrl(const std::string &harmonyImageUrl);
	std::string getAndroidBigBody() const;
	void setAndroidBigBody(const std::string &androidBigBody);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	int getHarmonyBadgeAddNum() const;
	void setHarmonyBadgeAddNum(int harmonyBadgeAddNum);
	bool getHarmonyTestMessage() const;
	void setHarmonyTestMessage(bool harmonyTestMessage);
	int getAndroidBadgeAddNum() const;
	void setAndroidBadgeAddNum(int androidBadgeAddNum);
	std::string getAndroidHuaweiReceiptId() const;
	void setAndroidHuaweiReceiptId(const std::string &androidHuaweiReceiptId);
	std::string getAndroidNotificationHonorChannel() const;
	void setAndroidNotificationHonorChannel(const std::string &androidNotificationHonorChannel);
	int getAndroidTargetUserType() const;
	void setAndroidTargetUserType(int androidTargetUserType);
	std::string getAndroidPopupBody() const;
	void setAndroidPopupBody(const std::string &androidPopupBody);
	std::string getAndroidNotificationGroup() const;
	void setAndroidNotificationGroup(const std::string &androidNotificationGroup);
	std::string getSendChannels() const;
	void setSendChannels(const std::string &sendChannels);
	std::string getHarmonyActionType() const;
	void setHarmonyActionType(const std::string &harmonyActionType);
	std::string getTarget() const;
	void setTarget(const std::string &target);
	std::string getHarmonyInboxContent() const;
	void setHarmonyInboxContent(const std::string &harmonyInboxContent);
	std::string getAndroidMessageOppoCategory() const;
	void setAndroidMessageOppoCategory(const std::string &androidMessageOppoCategory);
	std::string getAndroidXiaoMiActivity() const;
	void setAndroidXiaoMiActivity(const std::string &androidXiaoMiActivity);

private:
	int androidNotificationBarType_;
	int androidMessageOppoNotifyLevel_;
	std::string deviceType_;
	std::string pushTime_;
	int sendSpeed_;
	std::string iOSRemindBody_;
	bool trim_;
	std::string androidPopupTitle_;
	std::string iOSApnsEnv_;
	int androidNotificationBarPriority_;
	std::string expireTime_;
	std::string androidImageUrl_;
	std::string androidVivoReceiptId_;
	std::string iOSNotificationCategory_;
	std::string androidXiaomiBigPictureUrl_;
	std::string harmonyCategory_;
	bool iOSRemind_;
	std::string iOSNotificationThreadId_;
	int androidHuaweiTargetUserType_;
	std::string androidMessageHuaweiUrgency_;
	std::string iOSInterruptionLevel_;
	std::string androidExtParameters_;
	int iOSBadge_;
	bool iOSBadgeAutoIncrement_;
	std::string androidOpenType_;
	std::string harmonyRemindTitle_;
	std::string androidBadgeClass_;
	int smsDelaySecs_;
	int androidRenderStyle_;
	std::string iOSExtParameters_;
	std::string androidXiaomiImageUrl_;
	std::string harmonyUri_;
	std::string smsTemplateName_;
	std::string harmonyExtParameters_;
	std::string androidBigPictureUrl_;
	bool iOSSilentNotification_;
	std::string harmonyNotificationSlotType_;
	std::string androidBigTitle_;
	std::string androidNotificationChannel_;
	bool androidRemind_;
	std::string androidActivity_;
	std::string smsSignName_;
	int androidNotificationNotifyId_;
	long appKey_;
	std::string targetValue_;
	int harmonyBadgeSetNum_;
	std::string androidXiaoMiNotifyTitle_;
	int smsSendPolicy_;
	std::string body_;
	std::string androidNotificationHuaweiChannel_;
	std::string androidPopupActivity_;
	int harmonyNotifyId_;
	std::string harmonyRenderStyle_;
	std::string androidMessageVivoCategory_;
	std::string androidNotifyType_;
	std::string androidMessageHuaweiCategory_;
	std::string iOSMusic_;
	bool iOSMutableContent_;
	std::string androidNotificationThreadId_;
	int androidHonorTargetUserType_;
	std::string harmonyRemindBody_;
	std::string androidNotificationVivoChannel_;
	std::string androidNotificationXiaomiChannel_;
	std::string harmonyAction_;
	bool storeOffline_;
	double iOSRelevanceScore_;
	std::string smsParams_;
	int androidVivoPushMode_;
	std::string androidInboxBody_;
	std::string jobKey_;
	std::string harmonyReceiptId_;
	std::string androidOpenUrl_;
	int androidBadgeSetNum_;
	std::string androidXiaoMiNotifyBody_;
	std::string iOSSubtitle_;
	bool harmonyRemind_;
	std::string androidMusic_;
	bool harmonyExtensionPush_;
	std::string iOSNotificationCollapseId_;
	std::string pushType_;
	std::string harmonyExtensionExtraData_;
	std::string harmonyImageUrl_;
	std::string androidBigBody_;
	std::string title_;
	int harmonyBadgeAddNum_;
	bool harmonyTestMessage_;
	int androidBadgeAddNum_;
	std::string androidHuaweiReceiptId_;
	std::string androidNotificationHonorChannel_;
	int androidTargetUserType_;
	std::string androidPopupBody_;
	std::string androidNotificationGroup_;
	std::string sendChannels_;
	std::string harmonyActionType_;
	std::string target_;
	std::string harmonyInboxContent_;
	std::string androidMessageOppoCategory_;
	std::string androidXiaoMiActivity_;
};
} // namespace Model
} // namespace Push
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PUSH_MODEL_PUSHREQUEST_H_
