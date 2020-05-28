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
			class ALIBABACLOUD_PUSH_EXPORT PushRequest : public RpcServiceRequest
			{

			public:
				PushRequest();
				~PushRequest();

				int getAndroidNotificationBarType()const;
				void setAndroidNotificationBarType(int androidNotificationBarType);
				int getSmsSendPolicy()const;
				void setSmsSendPolicy(int smsSendPolicy);
				std::string getBody()const;
				void setBody(const std::string& body);
				std::string getDeviceType()const;
				void setDeviceType(const std::string& deviceType);
				std::string getPushTime()const;
				void setPushTime(const std::string& pushTime);
				int getSendSpeed()const;
				void setSendSpeed(int sendSpeed);
				std::string getAndroidPopupActivity()const;
				void setAndroidPopupActivity(const std::string& androidPopupActivity);
				std::string getIOSRemindBody()const;
				void setIOSRemindBody(const std::string& iOSRemindBody);
				std::string getAndroidNotifyType()const;
				void setAndroidNotifyType(const std::string& androidNotifyType);
				std::string getAndroidPopupTitle()const;
				void setAndroidPopupTitle(const std::string& androidPopupTitle);
				std::string getIOSMusic()const;
				void setIOSMusic(const std::string& iOSMusic);
				std::string getIOSApnsEnv()const;
				void setIOSApnsEnv(const std::string& iOSApnsEnv);
				bool getIOSMutableContent()const;
				void setIOSMutableContent(bool iOSMutableContent);
				int getAndroidNotificationBarPriority()const;
				void setAndroidNotificationBarPriority(int androidNotificationBarPriority);
				std::string getExpireTime()const;
				void setExpireTime(const std::string& expireTime);
				std::string getIOSNotificationCategory()const;
				void setIOSNotificationCategory(const std::string& iOSNotificationCategory);
				std::string getAndroidNotificationXiaomiChannel()const;
				void setAndroidNotificationXiaomiChannel(const std::string& androidNotificationXiaomiChannel);
				bool getStoreOffline()const;
				void setStoreOffline(bool storeOffline);
				std::string getSmsParams()const;
				void setSmsParams(const std::string& smsParams);
				std::string getJobKey()const;
				void setJobKey(const std::string& jobKey);
				std::string getAndroidOpenUrl()const;
				void setAndroidOpenUrl(const std::string& androidOpenUrl);
				std::string getAndroidXiaoMiNotifyBody()const;
				void setAndroidXiaoMiNotifyBody(const std::string& androidXiaoMiNotifyBody);
				std::string getIOSSubtitle()const;
				void setIOSSubtitle(const std::string& iOSSubtitle);
				bool getIOSRemind()const;
				void setIOSRemind(bool iOSRemind);
				std::string getAndroidMusic()const;
				void setAndroidMusic(const std::string& androidMusic);
				std::string getPushType()const;
				void setPushType(const std::string& pushType);
				std::string getAndroidExtParameters()const;
				void setAndroidExtParameters(const std::string& androidExtParameters);
				int getIOSBadge()const;
				void setIOSBadge(int iOSBadge);
				bool getIOSBadgeAutoIncrement()const;
				void setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement);
				std::string getAndroidOpenType()const;
				void setAndroidOpenType(const std::string& androidOpenType);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getSmsDelaySecs()const;
				void setSmsDelaySecs(int smsDelaySecs);
				std::string getIOSExtParameters()const;
				void setIOSExtParameters(const std::string& iOSExtParameters);
				std::string getSmsTemplateName()const;
				void setSmsTemplateName(const std::string& smsTemplateName);
				std::string getAndroidPopupBody()const;
				void setAndroidPopupBody(const std::string& androidPopupBody);
				bool getIOSSilentNotification()const;
				void setIOSSilentNotification(bool iOSSilentNotification);
				std::string getTarget()const;
				void setTarget(const std::string& target);
				std::string getAndroidNotificationChannel()const;
				void setAndroidNotificationChannel(const std::string& androidNotificationChannel);
				bool getAndroidRemind()const;
				void setAndroidRemind(bool androidRemind);
				std::string getAndroidActivity()const;
				void setAndroidActivity(const std::string& androidActivity);
				std::string getSmsSignName()const;
				void setSmsSignName(const std::string& smsSignName);
				long getAppKey()const;
				void setAppKey(long appKey);
				std::string getTargetValue()const;
				void setTargetValue(const std::string& targetValue);
				std::string getAndroidXiaoMiActivity()const;
				void setAndroidXiaoMiActivity(const std::string& androidXiaoMiActivity);
				std::string getAndroidXiaoMiNotifyTitle()const;
				void setAndroidXiaoMiNotifyTitle(const std::string& androidXiaoMiNotifyTitle);

            private:
				int androidNotificationBarType_;
				int smsSendPolicy_;
				std::string body_;
				std::string deviceType_;
				std::string pushTime_;
				int sendSpeed_;
				std::string androidPopupActivity_;
				std::string iOSRemindBody_;
				std::string androidNotifyType_;
				std::string androidPopupTitle_;
				std::string iOSMusic_;
				std::string iOSApnsEnv_;
				bool iOSMutableContent_;
				int androidNotificationBarPriority_;
				std::string expireTime_;
				std::string iOSNotificationCategory_;
				std::string androidNotificationXiaomiChannel_;
				bool storeOffline_;
				std::string smsParams_;
				std::string jobKey_;
				std::string androidOpenUrl_;
				std::string androidXiaoMiNotifyBody_;
				std::string iOSSubtitle_;
				bool iOSRemind_;
				std::string androidMusic_;
				std::string pushType_;
				std::string androidExtParameters_;
				int iOSBadge_;
				bool iOSBadgeAutoIncrement_;
				std::string androidOpenType_;
				std::string title_;
				std::string accessKeyId_;
				int smsDelaySecs_;
				std::string iOSExtParameters_;
				std::string smsTemplateName_;
				std::string androidPopupBody_;
				bool iOSSilentNotification_;
				std::string target_;
				std::string androidNotificationChannel_;
				bool androidRemind_;
				std::string androidActivity_;
				std::string smsSignName_;
				long appKey_;
				std::string targetValue_;
				std::string androidXiaoMiActivity_;
				std::string androidXiaoMiNotifyTitle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_PUSHREQUEST_H_