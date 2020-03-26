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

#include <alibabacloud/push/model/PushMessageToAndroidRequest.h>

using AlibabaCloud::Push::Model::PushMessageToAndroidRequest;

PushMessageToAndroidRequest::PushMessageToAndroidRequest() :
	RpcServiceRequest("push", "2016-08-01", "PushMessageToAndroid")
{
	setMethod(HttpRequest::Method::Post);
}

PushMessageToAndroidRequest::~PushMessageToAndroidRequest()
{}

std::string PushMessageToAndroidRequest::getTitle()const
{
	return title_;
}

void PushMessageToAndroidRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string PushMessageToAndroidRequest::getBody()const
{
	return body_;
}

void PushMessageToAndroidRequest::setBody(const std::string& body)
{
	body_ = body;
	setParameter("Body", body);
}

std::string PushMessageToAndroidRequest::getJobKey()const
{
	return jobKey_;
}

void PushMessageToAndroidRequest::setJobKey(const std::string& jobKey)
{
	jobKey_ = jobKey;
	setParameter("JobKey", jobKey);
}

std::string PushMessageToAndroidRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PushMessageToAndroidRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string PushMessageToAndroidRequest::getTarget()const
{
	return target_;
}

void PushMessageToAndroidRequest::setTarget(const std::string& target)
{
	target_ = target;
	setParameter("Target", target);
}

long PushMessageToAndroidRequest::getAppKey()const
{
	return appKey_;
}

void PushMessageToAndroidRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

std::string PushMessageToAndroidRequest::getTargetValue()const
{
	return targetValue_;
}

void PushMessageToAndroidRequest::setTargetValue(const std::string& targetValue)
{
	targetValue_ = targetValue;
	setParameter("TargetValue", targetValue);
}

