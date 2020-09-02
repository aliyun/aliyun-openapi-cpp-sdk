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

#include <alibabacloud/push/model/QueryDeviceCountRequest.h>

using AlibabaCloud::Push::Model::QueryDeviceCountRequest;

QueryDeviceCountRequest::QueryDeviceCountRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryDeviceCount")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceCountRequest::~QueryDeviceCountRequest()
{}

std::string QueryDeviceCountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceCountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceCountRequest::getTarget()const
{
	return target_;
}

void QueryDeviceCountRequest::setTarget(const std::string& target)
{
	target_ = target;
	setParameter("Target", target);
}

long QueryDeviceCountRequest::getAppKey()const
{
	return appKey_;
}

void QueryDeviceCountRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

std::string QueryDeviceCountRequest::getTargetValue()const
{
	return targetValue_;
}

void QueryDeviceCountRequest::setTargetValue(const std::string& targetValue)
{
	targetValue_ = targetValue;
	setParameter("TargetValue", targetValue);
}

