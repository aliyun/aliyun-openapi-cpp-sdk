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

#include <alibabacloud/retailcloud/model/CreateAppResourceAllocRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateAppResourceAllocRequest;

CreateAppResourceAllocRequest::CreateAppResourceAllocRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateAppResourceAlloc")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAppResourceAllocRequest::~CreateAppResourceAllocRequest()
{}

long CreateAppResourceAllocRequest::getAppId()const
{
	return appId_;
}

void CreateAppResourceAllocRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

long CreateAppResourceAllocRequest::getAppEnvId()const
{
	return appEnvId_;
}

void CreateAppResourceAllocRequest::setAppEnvId(long appEnvId)
{
	appEnvId_ = appEnvId;
	setParameter("AppEnvId", std::to_string(appEnvId));
}

std::string CreateAppResourceAllocRequest::getClusterId()const
{
	return clusterId_;
}

void CreateAppResourceAllocRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

