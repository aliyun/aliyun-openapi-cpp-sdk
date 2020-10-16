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
{
	setMethod(HttpRequest::Method::Post);
}

MassPushRequest::~MassPushRequest()
{}

std::string MassPushRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MassPushRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<MassPushRequest::PushTask> MassPushRequest::getPushTask()const
{
	return pushTask_;
}

void MassPushRequest::setPushTask(const std::vector<PushTask>& pushTask)
{
	pushTask_ = pushTask;
	for(int dep1 = 0; dep1!= pushTask.size(); dep1++) {
		auto pushTaskObj = pushTask.at(dep1);
		std::string pushTaskObjStr = "PushTask." + std::to_string(dep1 + 1);
		setParameter(pushTaskObjStr + ".AndroidNotificationBarType", std::to_string(pushTaskObj.androidNotificationBarType));
		setParameter(pushTaskObjStr + ".AndroidExtParameters", pushTaskObj.androidExtParameters);
		setParameter(pushTaskObjStr + ".IOSBadge", std::to_string(pushTaskObj.iOSBadge));
		setParameter(pushTaskObjStr + ".IOSBadgeAutoIncrement", pushTaskObj.iOSBadgeAutoIncrement ? "true" : "false");
		setParameter(pushTaskObjStr + ".AndroidOpenType", pushTaskObj.androidOpenType);
		setParameter(pushTaskObjStr + ".Title", pushTaskObj.title);
		setParameter(pushTaskObjStr + ".Body", pushTaskObj.body);
		setParameter(pushTaskObjStr + ".DeviceType", pushTaskObj.deviceType);
		setParameter(pushTaskObjStr + ".PushTime", pushTaskObj.pushTime);
		setParameter(pushTaskObjStr + ".SendSpeed", std::to_string(pushTaskObj.sendSpeed));
		setParameter(pushTaskObjStr + ".AndroidNotificationHuaweiChannel", pushTaskObj.androidNotificationHuaweiChannel);
		setParameter(pushTaskObjStr + ".AndroidPopupActivity", pushTaskObj.androidPopupActivity);
		setParameter(pushTaskObjStr + ".IOSRemindBody", pushTaskObj.iOSRemindBody);
		setParameter(pushTaskObjStr + ".IOSExtParameters", pushTaskObj.iOSExtParameters);
		setParameter(pushTaskObjStr + ".AndroidNotifyType", pushTaskObj.androidNotifyType);
		setParameter(pushTaskObjStr + ".AndroidPopupTitle", pushTaskObj.androidPopupTitle);
		setParameter(pushTaskObjStr + ".IOSMusic", pushTaskObj.iOSMusic);
		setParameter(pushTaskObjStr + ".IOSApnsEnv", pushTaskObj.iOSApnsEnv);
		setParameter(pushTaskObjStr + ".IOSMutableContent", pushTaskObj.iOSMutableContent ? "true" : "false");
		setParameter(pushTaskObjStr + ".AndroidNotificationBarPriority", std::to_string(pushTaskObj.androidNotificationBarPriority));
		setParameter(pushTaskObjStr + ".ExpireTime", pushTaskObj.expireTime);
		setParameter(pushTaskObjStr + ".AndroidNotificationVivoChannel", pushTaskObj.androidNotificationVivoChannel);
		setParameter(pushTaskObjStr + ".AndroidPopupBody", pushTaskObj.androidPopupBody);
		setParameter(pushTaskObjStr + ".IOSNotificationCategory", pushTaskObj.iOSNotificationCategory);
		setParameter(pushTaskObjStr + ".AndroidNotificationXiaomiChannel", pushTaskObj.androidNotificationXiaomiChannel);
		setParameter(pushTaskObjStr + ".StoreOffline", pushTaskObj.storeOffline ? "true" : "false");
		setParameter(pushTaskObjStr + ".IOSSilentNotification", pushTaskObj.iOSSilentNotification ? "true" : "false");
		setParameter(pushTaskObjStr + ".JobKey", pushTaskObj.jobKey);
		setParameter(pushTaskObjStr + ".Target", pushTaskObj.target);
		setParameter(pushTaskObjStr + ".AndroidOpenUrl", pushTaskObj.androidOpenUrl);
		setParameter(pushTaskObjStr + ".AndroidNotificationChannel", pushTaskObj.androidNotificationChannel);
		setParameter(pushTaskObjStr + ".AndroidRemind", pushTaskObj.androidRemind ? "true" : "false");
		setParameter(pushTaskObjStr + ".AndroidActivity", pushTaskObj.androidActivity);
		setParameter(pushTaskObjStr + ".AndroidXiaoMiNotifyBody", pushTaskObj.androidXiaoMiNotifyBody);
		setParameter(pushTaskObjStr + ".IOSSubtitle", pushTaskObj.iOSSubtitle);
		setParameter(pushTaskObjStr + ".IOSRemind", pushTaskObj.iOSRemind ? "true" : "false");
		setParameter(pushTaskObjStr + ".AndroidNotificationNotifyId", std::to_string(pushTaskObj.androidNotificationNotifyId));
		setParameter(pushTaskObjStr + ".TargetValue", pushTaskObj.targetValue);
		setParameter(pushTaskObjStr + ".AndroidMusic", pushTaskObj.androidMusic);
		setParameter(pushTaskObjStr + ".AndroidXiaoMiActivity", pushTaskObj.androidXiaoMiActivity);
		setParameter(pushTaskObjStr + ".AndroidXiaoMiNotifyTitle", pushTaskObj.androidXiaoMiNotifyTitle);
		setParameter(pushTaskObjStr + ".IOSNotificationCollapseId", pushTaskObj.iOSNotificationCollapseId);
		setParameter(pushTaskObjStr + ".PushType", pushTaskObj.pushType);
	}
}

long MassPushRequest::getAppKey()const
{
	return appKey_;
}

void MassPushRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

