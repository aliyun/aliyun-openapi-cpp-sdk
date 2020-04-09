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

#include <alibabacloud/retailcloud/model/ListAppInstanceRequest.h>

using AlibabaCloud::Retailcloud::Model::ListAppInstanceRequest;

ListAppInstanceRequest::ListAppInstanceRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListAppInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ListAppInstanceRequest::~ListAppInstanceRequest()
{}

long ListAppInstanceRequest::getAppId()const
{
	return appId_;
}

void ListAppInstanceRequest::setAppId(long appId)
{
	appId_ = appId;
	setBodyParameter("AppId", std::to_string(appId));
}

int ListAppInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListAppInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

long ListAppInstanceRequest::getEnvId()const
{
	return envId_;
}

void ListAppInstanceRequest::setEnvId(long envId)
{
	envId_ = envId;
	setBodyParameter("EnvId", std::to_string(envId));
}

int ListAppInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAppInstanceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

