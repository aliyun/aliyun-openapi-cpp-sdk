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

#include <alibabacloud/edas/model/ListMethodsRequest.h>

using AlibabaCloud::Edas::Model::ListMethodsRequest;

ListMethodsRequest::ListMethodsRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/service/list_methods");
	setMethod(HttpRequest::Method::Get);
}

ListMethodsRequest::~ListMethodsRequest()
{}

std::string ListMethodsRequest::getAppId()const
{
	return appId_;
}

void ListMethodsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ListMethodsRequest::getServiceName()const
{
	return serviceName_;
}

void ListMethodsRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

