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

#include <alibabacloud/push/model/MassPushRequest.h>

using AlibabaCloud::Push::Model::MassPushRequest;

MassPushRequest::MassPushRequest() :
	RpcServiceRequest("push", "2016-08-01", "MassPush")
{}

MassPushRequest::~MassPushRequest()
{}

std::string MassPushRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MassPushRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<MassPushRequest::PushTask> MassPushRequest::getPushTask()const
{
	return pushTask_;
}

void MassPushRequest::setPushTask(const std::vector<PushTask>& pushTask)
{
	pushTask_ = pushTask;
	int i = 0;
	for(int i = 0; i!= pushTask.size(); i++)	{
		auto obj = pushTask.at(i);
		std::string str ="PushTask."+ std::to_string(i);
		setCoreParameter(str + ".AndroidNotificationBarType", std::to_string(obj.androidNotificationBarType));
		setCoreParameter(str + ".AndroidExtParameters", obj.androidExtParameters);
		setCoreParameter(str + ".iOSBadge", std::to_string(obj.iOSBadge));
		setCoreParameter(str + ".iOSBadgeAutoIncrement", obj.iOSBadgeAutoIncrement ? "true" : "false");
		setCoreParameter(str + ".AndroidOpenType", obj.androidOpenType);
		setCoreParameter(str + ".Title", obj.title);
		setCoreParameter(str + ".Body", obj.body);
		setCoreParameter(str + ".DeviceType", obj.deviceType);
		setCoreParameter(str + ".PushTime", obj.pushTime);
		setCoreParameter(str + ".SendSpeed", std::to_string(obj.sendSpeed));
		setCoreParameter(str + ".AndroidPopupActivity", obj.androidPopupActivity);
		setCoreParameter(str + ".iOSRemindBody", obj.iOSRemindBody);
		setCoreParameter(str + ".iOSExtParameters", obj.iOSExtParameters);
		setCoreParameter(str + ".AndroidNotifyType", obj.androidNotifyType);
		setCoreParameter(str + ".AndroidPopupTitle", obj.androidPopupTitle);
		setCoreParameter(str + ".iOSMusic", obj.iOSMusic);
		setCoreParameter(str + ".iOSApnsEnv", obj.iOSApnsEnv);
		setCoreParameter(str + ".iOSMutableContent", obj.iOSMutableContent ? "true" : "false");
		setCoreParameter(str + ".AndroidNotificationBarPriority", std::to_string(obj.androidNotificationBarPriority));
		setCoreParameter(str + ".ExpireTime", obj.expireTime);
		setCoreParameter(str + ".AndroidPopupBody", obj.androidPopupBody);
		setCoreParameter(str + ".iOSNotificationCategory", obj.iOSNotificationCategory);
		setCoreParameter(str + ".StoreOffline", obj.storeOffline ? "true" : "false");
		setCoreParameter(str + ".iOSSilentNotification", obj.iOSSilentNotification ? "true" : "false");
		setCoreParameter(str + ".JobKey", obj.jobKey);
		setCoreParameter(str + ".Target", obj.target);
		setCoreParameter(str + ".AndroidOpenUrl", obj.androidOpenUrl);
		setCoreParameter(str + ".AndroidNotificationChannel", obj.androidNotificationChannel);
		setCoreParameter(str + ".AndroidRemind", obj.androidRemind ? "true" : "false");
		setCoreParameter(str + ".AndroidActivity", obj.androidActivity);
		setCoreParameter(str + ".AndroidXiaoMiNotifyBody", obj.androidXiaoMiNotifyBody);
		setCoreParameter(str + ".iOSSubtitle", obj.iOSSubtitle);
		setCoreParameter(str + ".iOSRemind", obj.iOSRemind ? "true" : "false");
		setCoreParameter(str + ".TargetValue", obj.targetValue);
		setCoreParameter(str + ".AndroidMusic", obj.androidMusic);
		setCoreParameter(str + ".AndroidXiaoMiActivity", obj.androidXiaoMiActivity);
		setCoreParameter(str + ".AndroidXiaoMiNotifyTitle", obj.androidXiaoMiNotifyTitle);
		setCoreParameter(str + ".PushType", obj.pushType);
	}
}

long MassPushRequest::getAppKey()const
{
	return appKey_;
}

void MassPushRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

