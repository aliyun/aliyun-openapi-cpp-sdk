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

#ifndef ALIBABACLOUD_PUSH_MODEL_MASSPUSHREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_MASSPUSHREQUEST_H_

#include <alibabacloud/push/PushExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Push {
namespace Model {
class ALIBABACLOUD_PUSH_EXPORT MassPushRequest : public RpcServiceRequest {
public:
	struct PushTask {
		int androidNotificationBarType;
		int androidMessageOppoNotifyLevel;
		std::string body;
		std::string deviceType;
		std::string pushTime;
		int sendSpeed;
		std::string androidNotificationHuaweiChannel;
		std::string androidPopupActivity;
		int harmonyNotifyId;
		std::string harmonyRenderStyle;
		std::string iOSRemindBody;
		bool trim;
		std::string androidMessageVivoCategory;
		std::string androidNotifyType;
		std::string androidPopupTitle;
		std::string androidMessageHuaweiCategory;
		std::string iOSMusic;
		std::string iOSApnsEnv;
		bool iOSMutableContent;
		int androidNotificationBarPriority;
		std::string expireTime;
		std::string androidImageUrl;
		std::string androidNotificationThreadId;
		int androidHonorTargetUserType;
		std::string harmonyRemindBody;
		std::string androidNotificationVivoChannel;
		std::string androidVivoReceiptId;
		std::string iOSNotificationCategory;
		std::string androidNotificationXiaomiChannel;
		std::string harmonyAction;
		bool storeOffline;
		double iOSRelevanceScore;
		int androidVivoPushMode;
		std::string androidInboxBody;
		std::string jobKey;
		std::string harmonyReceiptId;
		std::string androidOpenUrl;
		int androidBadgeSetNum;
		std::string androidXiaoMiNotifyBody;
		std::string iOSSubtitle;
		std::string androidXiaomiBigPictureUrl;
		std::string harmonyCategory;
		bool iOSRemind;
		std::string iOSNotificationThreadId;
		int androidHuaweiTargetUserType;
		bool harmonyRemind;
		std::string androidMusic;
		bool harmonyExtensionPush;
		std::string iOSNotificationCollapseId;
		std::string androidMessageHuaweiUrgency;
		std::string pushType;
		std::string iOSInterruptionLevel;
		std::string harmonyExtensionExtraData;
		std::string androidExtParameters;
		std::string harmonyImageUrl;
		int iOSBadge;
		std::string androidBigBody;
		bool iOSBadgeAutoIncrement;
		std::string androidOpenType;
		std::string harmonyRemindTitle;
		std::string title;
		std::string androidBadgeClass;
		int harmonyBadgeAddNum;
		bool harmonyTestMessage;
		std::string androidRenderStyle;
		std::string iOSExtParameters;
		int androidBadgeAddNum;
		std::string androidHuaweiReceiptId;
		std::string androidNotificationHonorChannel;
		std::string androidXiaomiImageUrl;
		int androidTargetUserType;
		std::string harmonyUri;
		std::string androidPopupBody;
		std::string harmonyExtParameters;
		std::string androidBigPictureUrl;
		bool iOSSilentNotification;
		std::string androidNotificationGroup;
		std::string sendChannels;
		std::string harmonyActionType;
		std::string target;
		std::string harmonyNotificationSlotType;
		std::string androidBigTitle;
		std::string androidNotificationChannel;
		bool androidRemind;
		std::string harmonyInboxContent;
		std::string androidActivity;
		std::string androidMessageOppoCategory;
		int androidNotificationNotifyId;
		std::string targetValue;
		int harmonyBadgeSetNum;
		std::string androidXiaoMiNotifyTitle;
		std::string androidXiaoMiActivity;
	};
	MassPushRequest();
	~MassPushRequest();
	std::vector<PushTask> getPushTask() const;
	void setPushTask(const std::vector<PushTask> &pushTask);
	long getAppKey() const;
	void setAppKey(long appKey);

private:
	std::vector<PushTask> pushTask_;
	long appKey_;
};
} // namespace Model
} // namespace Push
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PUSH_MODEL_MASSPUSHREQUEST_H_
