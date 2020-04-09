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

#include <alibabacloud/retailcloud/model/ListServicesRequest.h>

using AlibabaCloud::Retailcloud::Model::ListServicesRequest;

ListServicesRequest::ListServicesRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListServices")
{
	setMethod(HttpRequest::Method::Post);
}

ListServicesRequest::~ListServicesRequest()
{}

std::string ListServicesRequest::getServiceType()const
{
	return serviceType_;
}

void ListServicesRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

long ListServicesRequest::getAppId()const
{
	return appId_;
}

void ListServicesRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string ListServicesRequest::getName()const
{
	return name_;
}

void ListServicesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListServicesRequest::getPageSize()const
{
	return pageSize_;
}

void ListServicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListServicesRequest::getEnvId()const
{
	return envId_;
}

void ListServicesRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

int ListServicesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListServicesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

