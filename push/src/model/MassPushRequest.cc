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
	setCoreParameter("AccessKeyId", accessKeyId);
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
		std::string pushTaskObjStr = "PushTask." + std::to_string(dep1);
		setCoreParameter(pushTaskObjStr + ".AndroidNotificationBarType", std::to_string(pushTaskObj.androidNotificationBarType));
		setCoreParameter(pushTaskObjStr + ".AndroidExtParameters", pushTaskObj.androidExtParameters);
		setCoreParameter(pushTaskObjStr + ".IOSBadge", std::to_string(pushTaskObj.iOSBadge));
		setCoreParameter(pushTaskObjStr + ".IOSBadgeAutoIncrement", pushTaskObj.iOSBadgeAutoIncrement ? "true" : "false");
		setCoreParameter(pushTaskObjStr + ".AndroidOpenType", pushTaskObj.androidOpenType);
		setCoreParameter(pushTaskObjStr + ".Title", pushTaskObj.title);
		setCoreParameter(pushTaskObjStr + ".Body", pushTaskObj.body);
		setCoreParameter(pushTaskObjStr + ".DeviceType", pushTaskObj.deviceType);
		setCoreParameter(pushTaskObjStr + ".PushTime", pushTaskObj.pushTime);
		setCoreParameter(pushTaskObjStr + ".SendSpeed", std::to_string(pushTaskObj.sendSpeed));
		setCoreParameter(pushTaskObjStr + ".AndroidPopupActivity", pushTaskObj.androidPopupActivity);
		setCoreParameter(pushTaskObjStr + ".IOSRemindBody", pushTaskObj.iOSRemindBody);
		setCoreParameter(pushTaskObjStr + ".IOSExtParameters", pushTaskObj.iOSExtParameters);
		setCoreParameter(pushTaskObjStr + ".AndroidNotifyType", pushTaskObj.androidNotifyType);
		setCoreParameter(pushTaskObjStr + ".AndroidPopupTitle", pushTaskObj.androidPopupTitle);
		setCoreParameter(pushTaskObjStr + ".IOSMusic", pushTaskObj.iOSMusic);
		setCoreParameter(pushTaskObjStr + ".IOSApnsEnv", pushTaskObj.iOSApnsEnv);
		setCoreParameter(pushTaskObjStr + ".IOSMutableContent", pushTaskObj.iOSMutableContent ? "true" : "false");
		setCoreParameter(pushTaskObjStr + ".AndroidNotificationBarPriority", std::to_string(pushTaskObj.androidNotificationBarPriority));
		setCoreParameter(pushTaskObjStr + ".ExpireTime", pushTaskObj.expireTime);
		setCoreParameter(pushTaskObjStr + ".AndroidPopupBody", pushTaskObj.androidPopupBody);
		setCoreParameter(pushTaskObjStr + ".IOSNotificationCategory", pushTaskObj.iOSNotificationCategory);
		setCoreParameter(pushTaskObjStr + ".StoreOffline", pushTaskObj.storeOffline ? "true" : "false");
		setCoreParameter(pushTaskObjStr + ".IOSSilentNotification", pushTaskObj.iOSSilentNotification ? "true" : "false");
		setCoreParameter(pushTaskObjStr + ".JobKey", pushTaskObj.jobKey);
		setCoreParameter(pushTaskObjStr + ".Target", pushTaskObj.target);
		setCoreParameter(pushTaskObjStr + ".AndroidOpenUrl", pushTaskObj.androidOpenUrl);
		setCoreParameter(pushTaskObjStr + ".AndroidNotificationChannel", pushTaskObj.androidNotificationChannel);
		setCoreParameter(pushTaskObjStr + ".AndroidRemind", pushTaskObj.androidRemind ? "true" : "false");
		setCoreParameter(pushTaskObjStr + ".AndroidActivity", pushTaskObj.androidActivity);
		setCoreParameter(pushTaskObjStr + ".AndroidXiaoMiNotifyBody", pushTaskObj.androidXiaoMiNotifyBody);
		setCoreParameter(pushTaskObjStr + ".IOSSubtitle", pushTaskObj.iOSSubtitle);
		setCoreParameter(pushTaskObjStr + ".IOSRemind", pushTaskObj.iOSRemind ? "true" : "false");
		setCoreParameter(pushTaskObjStr + ".TargetValue", pushTaskObj.targetValue);
		setCoreParameter(pushTaskObjStr + ".AndroidMusic", pushTaskObj.androidMusic);
		setCoreParameter(pushTaskObjStr + ".AndroidXiaoMiActivity", pushTaskObj.androidXiaoMiActivity);
		setCoreParameter(pushTaskObjStr + ".AndroidXiaoMiNotifyTitle", pushTaskObj.androidXiaoMiNotifyTitle);
		setCoreParameter(pushTaskObjStr + ".PushType", pushTaskObj.pushType);
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

