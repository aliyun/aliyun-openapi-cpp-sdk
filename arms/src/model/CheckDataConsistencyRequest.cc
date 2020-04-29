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

#include <alibabacloud/arms/model/CheckDataConsistencyRequest.h>

using AlibabaCloud::ARMS::Model::CheckDataConsistencyRequest;

CheckDataConsistencyRequest::CheckDataConsistencyRequest() :
	RpcServiceRequest("arms", "2019-08-08", "CheckDataConsistency")
{
	setMethod(HttpRequest::Method::Post);
}

CheckDataConsistencyRequest::~CheckDataConsistencyRequest()
{}

long CheckDataConsistencyRequest::getCurrentTimestamp()const
{
	return currentTimestamp_;
}

void CheckDataConsistencyRequest::setCurrentTimestamp(long currentTimestamp)
{
	currentTimestamp_ = currentTimestamp;
	setParameter("CurrentTimestamp", std::to_string(currentTimestamp));
}

std::string CheckDataConsistencyRequest::getRegionId()const
{
	return regionId_;
}

void CheckDataConsistencyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CheckDataConsistencyRequest::getAppType()const
{
	return appType_;
}

void CheckDataConsistencyRequest::setAppType(const std::string& appType)
{
	appType_ = appType;
	setParameter("AppType", appType);
}

std::string CheckDataConsistencyRequest::getPid()const
{
	return pid_;
}

void CheckDataConsistencyRequest::setPid(const std::string& pid)
{
	pid_ = pid;
	setParameter("Pid", pid);
}

std::string CheckDataConsistencyRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void CheckDataConsistencyRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

