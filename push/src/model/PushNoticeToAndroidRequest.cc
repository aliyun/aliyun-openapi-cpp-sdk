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

#include <alibabacloud/push/model/PushNoticeToAndroidRequest.h>

using AlibabaCloud::Push::Model::PushNoticeToAndroidRequest;

PushNoticeToAndroidRequest::PushNoticeToAndroidRequest() :
	RpcServiceRequest("push", "2016-08-01", "PushNoticeToAndroid")
{
	setMethod(HttpRequest::Method::Post);
}

PushNoticeToAndroidRequest::~PushNoticeToAndroidRequest()
{}

std::string PushNoticeToAndroidRequest::getExtParameters()const
{
	return extParameters_;
}

void PushNoticeToAndroidRequest::setExtParameters(const std::string& extParameters)
{
	extParameters_ = extParameters;
	setParameter("ExtParameters", extParameters);
}

std::string PushNoticeToAndroidRequest::getTitle()const
{
	return title_;
}

void PushNoticeToAndroidRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string PushNoticeToAndroidRequest::getBody()const
{
	return body_;
}

void PushNoticeToAndroidRequest::setBody(const std::string& body)
{
	body_ = body;
	setParameter("Body", body);
}

std::string PushNoticeToAndroidRequest::getJobKey()const
{
	return jobKey_;
}

void PushNoticeToAndroidRequest::setJobKey(const std::string& jobKey)
{
	jobKey_ = jobKey;
	setParameter("JobKey", jobKey);
}

std::string PushNoticeToAndroidRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PushNoticeToAndroidRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string PushNoticeToAndroidRequest::getTarget()const
{
	return target_;
}

void PushNoticeToAndroidRequest::setTarget(const std::string& target)
{
	target_ = target;
	setParameter("Target", target);
}

long PushNoticeToAndroidRequest::getAppKey()const
{
	return appKey_;
}

void PushNoticeToAndroidRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

std::string PushNoticeToAndroidRequest::getTargetValue()const
{
	return targetValue_;
}

void PushNoticeToAndroidRequest::setTargetValue(const std::string& targetValue)
{
	targetValue_ = targetValue;
	setParameter("TargetValue", targetValue);
}

