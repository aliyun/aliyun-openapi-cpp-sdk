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

#include <alibabacloud/retailcloud/model/ListAppResourceAllocsRequest.h>

using AlibabaCloud::Retailcloud::Model::ListAppResourceAllocsRequest;

ListAppResourceAllocsRequest::ListAppResourceAllocsRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListAppResourceAllocs")
{
	setMethod(HttpRequest::Method::Get);
}

ListAppResourceAllocsRequest::~ListAppResourceAllocsRequest()
{}

long ListAppResourceAllocsRequest::getAppId()const
{
	return appId_;
}

void ListAppResourceAllocsRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

int ListAppResourceAllocsRequest::getPageSize()const
{
	return pageSize_;
}

void ListAppResourceAllocsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListAppResourceAllocsRequest::getAppEnvId()const
{
	return appEnvId_;
}

void ListAppResourceAllocsRequest::setAppEnvId(long appEnvId)
{
	appEnvId_ = appEnvId;
	setParameter("AppEnvId", std::to_string(appEnvId));
}

std::string ListAppResourceAllocsRequest::getClusterId()const
{
	return clusterId_;
}

void ListAppResourceAllocsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListAppResourceAllocsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAppResourceAllocsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

