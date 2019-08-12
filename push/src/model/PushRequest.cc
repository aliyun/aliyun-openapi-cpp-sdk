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

PushRequest::PushRequest() :
	RpcServiceRequest("push", "2016-08-01", "Push")
{}

PushRequest::~PushRequest()
{}

int PushRequest::getAndroidNotificationBarType()const
{
	return androidNotificationBarType_;
}

void PushRequest::setAndroidNotificationBarType(int androidNotificationBarType)
{
	androidNotificationBarType_ = androidNotificationBarType;
	setCoreParameter("AndroidNotificationBarType", androidNotificationBarType);
}

int PushRequest::getSmsSendPolicy()const
{
	return smsSendPolicy_;
}

void PushRequest::setSmsSendPolicy(int smsSendPolicy)
{
	smsSendPolicy_ = smsSendPolicy;
	setCoreParameter("SmsSendPolicy", smsSendPolicy);
}

std::string PushRequest::getAndroidExtParameters()const
{
	return androidExtParameters_;
}

void PushRequest::setAndroidExtParameters(const std::string& androidExtParameters)
{
	androidExtParameters_ = androidExtParameters;
	setCoreParameter("AndroidExtParameters", std::to_string(androidExtParameters));
}

int PushRequest::getIOSBadge()const
{
	return iOSBadge_;
}

void PushRequest::setIOSBadge(int iOSBadge)
{
	iOSBadge_ = iOSBadge;
	setCoreParameter("IOSBadge", iOSBadge);
}

bool PushRequest::getIOSBadgeAutoIncrement()const
{
	return iOSBadgeAutoIncrement_;
}

void PushRequest::setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement)
{
	iOSBadgeAutoIncrement_ = iOSBadgeAutoIncrement;
	setCoreParameter("IOSBadgeAutoIncrement", iOSBadgeAutoIncrement ? "true" : "false");
}

std::string PushRequest::getAndroidOpenType()const
{
	return androidOpenType_;
}

void PushRequest::setAndroidOpenType(const std::string& androidOpenType)
{
	androidOpenType_ = androidOpenType;
	setCoreParameter("AndroidOpenType", std::to_string(androidOpenType));
}

std::string PushRequest::getTitle()const
{
	return title_;
}

void PushRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

std::string PushRequest::getBody()const
{
	return body_;
}

void PushRequest::setBody(const std::string& body)
{
	body_ = body;
	setCoreParameter("Body", std::to_string(body));
}

std::string PushRequest::getDeviceType()const
{
	return deviceType_;
}

void PushRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setCoreParameter("DeviceType", std::to_string(deviceType));
}

std::string PushRequest::getPushTime()const
{
	return pushTime_;
}

void PushRequest::setPushTime(const std::string& pushTime)
{
	pushTime_ = pushTime;
	setCoreParameter("PushTime", std::to_string(pushTime));
}

std::string PushRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PushRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int PushRequest::getSmsDelaySecs()const
{
	return smsDelaySecs_;
}

void PushRequest::setSmsDelaySecs(int smsDelaySecs)
{
	smsDelaySecs_ = smsDelaySecs;
	setCoreParameter("SmsDelaySecs", smsDelaySecs);
}

int PushRequest::getSendSpeed()const
{
	return sendSpeed_;
}

void PushRequest::setSendSpeed(int sendSpeed)
{
	sendSpeed_ = sendSpeed;
	setCoreParameter("SendSpeed", sendSpeed);
}

std::string PushRequest::getAndroidPopupActivity()const
{
	return androidPopupActivity_;
}

void PushRequest::setAndroidPopupActivity(const std::string& androidPopupActivity)
{
	androidPopupActivity_ = androidPopupActivity;
	setCoreParameter("AndroidPopupActivity", std::to_string(androidPopupActivity));
}

std::string PushRequest::getIOSRemindBody()const
{
	return iOSRemindBody_;
}

void PushRequest::setIOSRemindBody(const std::string& iOSRemindBody)
{
	iOSRemindBody_ = iOSRemindBody;
	setCoreParameter("IOSRemindBody", std::to_string(iOSRemindBody));
}

std::string PushRequest::getIOSExtParameters()const
{
	return iOSExtParameters_;
}

void PushRequest::setIOSExtParameters(const std::string& iOSExtParameters)
{
	iOSExtParameters_ = iOSExtParameters;
	setCoreParameter("IOSExtParameters", std::to_string(iOSExtParameters));
}

std::string PushRequest::getAndroidNotifyType()const
{
	return androidNotifyType_;
}

void PushRequest::setAndroidNotifyType(const std::string& androidNotifyType)
{
	androidNotifyType_ = androidNotifyType;
	setCoreParameter("AndroidNotifyType", std::to_string(androidNotifyType));
}

std::string PushRequest::getAndroidPopupTitle()const
{
	return androidPopupTitle_;
}

void PushRequest::setAndroidPopupTitle(const std::string& androidPopupTitle)
{
	androidPopupTitle_ = androidPopupTitle;
	setCoreParameter("AndroidPopupTitle", std::to_string(androidPopupTitle));
}

std::string PushRequest::getIOSMusic()const
{
	return iOSMusic_;
}

void PushRequest::setIOSMusic(const std::string& iOSMusic)
{
	iOSMusic_ = iOSMusic;
	setCoreParameter("IOSMusic", std::to_string(iOSMusic));
}

std::string PushRequest::getIOSApnsEnv()const
{
	return iOSApnsEnv_;
}

void PushRequest::setIOSApnsEnv(const std::string& iOSApnsEnv)
{
	iOSApnsEnv_ = iOSApnsEnv;
	setCoreParameter("IOSApnsEnv", std::to_string(iOSApnsEnv));
}

bool PushRequest::getIOSMutableContent()const
{
	return iOSMutableContent_;
}

void PushRequest::setIOSMutableContent(bool iOSMutableContent)
{
	iOSMutableContent_ = iOSMutableContent;
	setCoreParameter("IOSMutableContent", iOSMutableContent ? "true" : "false");
}

int PushRequest::getAndroidNotificationBarPriority()const
{
	return androidNotificationBarPriority_;
}

void PushRequest::setAndroidNotificationBarPriority(int androidNotificationBarPriority)
{
	androidNotificationBarPriority_ = androidNotificationBarPriority;
	setCoreParameter("AndroidNotificationBarPriority", androidNotificationBarPriority);
}

std::string PushRequest::getExpireTime()const
{
	return expireTime_;
}

void PushRequest::setExpireTime(const std::string& expireTime)
{
	expireTime_ = expireTime;
	setCoreParameter("ExpireTime", std::to_string(expireTime));
}

std::string PushRequest::getSmsTemplateName()const
{
	return smsTemplateName_;
}

void PushRequest::setSmsTemplateName(const std::string& smsTemplateName)
{
	smsTemplateName_ = smsTemplateName;
	setCoreParameter("SmsTemplateName", std::to_string(smsTemplateName));
}

std::string PushRequest::getAndroidPopupBody()const
{
	return androidPopupBody_;
}

void PushRequest::setAndroidPopupBody(const std::string& androidPopupBody)
{
	androidPopupBody_ = androidPopupBody;
	setCoreParameter("AndroidPopupBody", std::to_string(androidPopupBody));
}

std::string PushRequest::getIOSNotificationCategory()const
{
	return iOSNotificationCategory_;
}

void PushRequest::setIOSNotificationCategory(const std::string& iOSNotificationCategory)
{
	iOSNotificationCategory_ = iOSNotificationCategory;
	setCoreParameter("IOSNotificationCategory", std::to_string(iOSNotificationCategory));
}

bool PushRequest::getStoreOffline()const
{
	return storeOffline_;
}

void PushRequest::setStoreOffline(bool storeOffline)
{
	storeOffline_ = storeOffline;
	setCoreParameter("StoreOffline", storeOffline ? "true" : "false");
}

bool PushRequest::getIOSSilentNotification()const
{
	return iOSSilentNotification_;
}

void PushRequest::setIOSSilentNotification(bool iOSSilentNotification)
{
	iOSSilentNotification_ = iOSSilentNotification;
	setCoreParameter("IOSSilentNotification", iOSSilentNotification ? "true" : "false");
}

std::string PushRequest::getSmsParams()const
{
	return smsParams_;
}

void PushRequest::setSmsParams(const std::string& smsParams)
{
	smsParams_ = smsParams;
	setCoreParameter("SmsParams", std::to_string(smsParams));
}

std::string PushRequest::getJobKey()const
{
	return jobKey_;
}

void PushRequest::setJobKey(const std::string& jobKey)
{
	jobKey_ = jobKey;
	setCoreParameter("JobKey", std::to_string(jobKey));
}

std::string PushRequest::getTarget()const
{
	return target_;
}

void PushRequest::setTarget(const std::string& target)
{
	target_ = target;
	setCoreParameter("Target", std::to_string(target));
}

std::string PushRequest::getAndroidOpenUrl()const
{
	return androidOpenUrl_;
}

void PushRequest::setAndroidOpenUrl(const std::string& androidOpenUrl)
{
	androidOpenUrl_ = androidOpenUrl;
	setCoreParameter("AndroidOpenUrl", std::to_string(androidOpenUrl));
}

std::string PushRequest::getAndroidNotificationChannel()const
{
	return androidNotificationChannel_;
}

void PushRequest::setAndroidNotificationChannel(const std::string& androidNotificationChannel)
{
	androidNotificationChannel_ = androidNotificationChannel;
	setCoreParameter("AndroidNotificationChannel", std::to_string(androidNotificationChannel));
}

bool PushRequest::getAndroidRemind()const
{
	return androidRemind_;
}

void PushRequest::setAndroidRemind(bool androidRemind)
{
	androidRemind_ = androidRemind;
	setCoreParameter("AndroidRemind", androidRemind ? "true" : "false");
}

std::string PushRequest::getAndroidActivity()const
{
	return androidActivity_;
}

void PushRequest::setAndroidActivity(const std::string& androidActivity)
{
	androidActivity_ = androidActivity;
	setCoreParameter("AndroidActivity", std::to_string(androidActivity));
}

std::string PushRequest::getAndroidXiaoMiNotifyBody()const
{
	return androidXiaoMiNotifyBody_;
}

void PushRequest::setAndroidXiaoMiNotifyBody(const std::string& androidXiaoMiNotifyBody)
{
	androidXiaoMiNotifyBody_ = androidXiaoMiNotifyBody;
	setCoreParameter("AndroidXiaoMiNotifyBody", std::to_string(androidXiaoMiNotifyBody));
}

std::string PushRequest::getIOSSubtitle()const
{
	return iOSSubtitle_;
}

void PushRequest::setIOSSubtitle(const std::string& iOSSubtitle)
{
	iOSSubtitle_ = iOSSubtitle;
	setCoreParameter("IOSSubtitle", std::to_string(iOSSubtitle));
}

std::string PushRequest::getSmsSignName()const
{
	return smsSignName_;
}

void PushRequest::setSmsSignName(const std::string& smsSignName)
{
	smsSignName_ = smsSignName;
	setCoreParameter("SmsSignName", std::to_string(smsSignName));
}

bool PushRequest::getIOSRemind()const
{
	return iOSRemind_;
}

void PushRequest::setIOSRemind(bool iOSRemind)
{
	iOSRemind_ = iOSRemind;
	setCoreParameter("IOSRemind", iOSRemind ? "true" : "false");
}

long PushRequest::getAppKey()const
{
	return appKey_;
}

void PushRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", appKey);
}

std::string PushRequest::getTargetValue()const
{
	return targetValue_;
}

void PushRequest::setTargetValue(const std::string& targetValue)
{
	targetValue_ = targetValue;
	setCoreParameter("TargetValue", std::to_string(targetValue));
}

std::string PushRequest::getAndroidMusic()const
{
	return androidMusic_;
}

void PushRequest::setAndroidMusic(const std::string& androidMusic)
{
	androidMusic_ = androidMusic;
	setCoreParameter("AndroidMusic", std::to_string(androidMusic));
}

std::string PushRequest::getAndroidXiaoMiActivity()const
{
	return androidXiaoMiActivity_;
}

void PushRequest::setAndroidXiaoMiActivity(const std::string& androidXiaoMiActivity)
{
	androidXiaoMiActivity_ = androidXiaoMiActivity;
	setCoreParameter("AndroidXiaoMiActivity", std::to_string(androidXiaoMiActivity));
}

std::string PushRequest::getAndroidXiaoMiNotifyTitle()const
{
	return androidXiaoMiNotifyTitle_;
}

void PushRequest::setAndroidXiaoMiNotifyTitle(const std::string& androidXiaoMiNotifyTitle)
{
	androidXiaoMiNotifyTitle_ = androidXiaoMiNotifyTitle;
	setCoreParameter("AndroidXiaoMiNotifyTitle", std::to_string(androidXiaoMiNotifyTitle));
}

std::string PushRequest::getPushType()const
{
	return pushType_;
}

void PushRequest::setPushType(const std::string& pushType)
{
	pushType_ = pushType;
	setCoreParameter("PushType", std::to_string(pushType));
}

