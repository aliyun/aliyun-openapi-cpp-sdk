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

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/push/PushExport.h>

namespace AlibabaCloud
{
	namespace Push
	{
		namespace Model
		{
			class ALIBABACLOUD_PUSH_EXPORT MassPushRequest : public RpcServiceRequest
			{
			public:
				struct PushTask
				{
					int androidNotificationBarType;
					std::string body;
					std::string deviceType;
					std::string pushTime;
					int sendSpeed;
					std::string androidNotificationHuaweiChannel;
					std::string androidPopupActivity;
					std::string iOSRemindBody;
					std::string androidNotifyType;
					std::string androidPopupTitle;
					std::string iOSMusic;
					std::string iOSApnsEnv;
					bool iOSMutableContent;
					int androidNotificationBarPriority;
					std::string expireTime;
					std::string androidImageUrl;
					std::string androidNotificationVivoChannel;
					std::string iOSNotificationCategory;
					std::string androidNotificationXiaomiChannel;
					bool storeOffline;
					std::string androidInboxBody;
					std::string jobKey;
					std::string androidOpenUrl;
					std::string androidXiaoMiNotifyBody;
					std::string iOSSubtitle;
					std::string androidXiaomiBigPictureUrl;
					bool iOSRemind;
					std::string iOSNotificationThreadId;
					std::string androidMusic;
					std::string iOSNotificationCollapseId;
					std::string pushType;
					std::string androidExtParameters;
					int iOSBadge;
					std::string androidBigBody;
					bool iOSBadgeAutoIncrement;
					std::string androidOpenType;
					std::string title;
					std::string androidRenderStyle;
					std::string iOSExtParameters;
					std::string androidXiaomiImageUrl;
					std::string androidPopupBody;
					std::string androidBigPictureUrl;
					bool iOSSilentNotification;
					std::string target;
					std::string androidBigTitle;
					std::string androidNotificationChannel;
					bool androidRemind;
					std::string androidActivity;
					int androidNotificationNotifyId;
					std::string targetValue;
					std::string androidXiaoMiNotifyTitle;
					std::string androidXiaoMiActivity;
				};

			public:
				MassPushRequest();
				~MassPushRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<PushTask> getPushTask()const;
				void setPushTask(const std::vector<PushTask>& pushTask);
				long getAppKey()const;
				void setAppKey(long appKey);

            private:
				std::string accessKeyId_;
				std::vector<PushTask> pushTask_;
				long appKey_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_MASSPUSHREQUEST_H_