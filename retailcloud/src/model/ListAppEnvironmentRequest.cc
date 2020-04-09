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

#include <alibabacloud/retailcloud/model/ListAppEnvironmentRequest.h>

using AlibabaCloud::Retailcloud::Model::ListAppEnvironmentRequest;

ListAppEnvironmentRequest::ListAppEnvironmentRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListAppEnvironment")
{
	setMethod(HttpRequest::Method::Get);
}

ListAppEnvironmentRequest::~ListAppEnvironmentRequest()
{}

std::string ListAppEnvironmentRequest::getEnvName()const
{
	return envName_;
}

void ListAppEnvironmentRequest::setEnvName(const std::string& envName)
{
	envName_ = envName;
	setParameter("EnvName", envName);
}

long ListAppEnvironmentRequest::getAppId()const
{
	return appId_;
}

void ListAppEnvironmentRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

int ListAppEnvironmentRequest::getEnvType()const
{
	return envType_;
}

void ListAppEnvironmentRequest::setEnvType(int envType)
{
	envType_ = envType;
	setParameter("EnvType", std::to_string(envType));
}

int ListAppEnvironmentRequest::getPageSize()const
{
	return pageSize_;
}

void ListAppEnvironmentRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListAppEnvironmentRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAppEnvironmentRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

