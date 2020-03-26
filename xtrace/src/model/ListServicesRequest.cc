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

#include <alibabacloud/xtrace/model/ListServicesRequest.h>

using AlibabaCloud::Xtrace::Model::ListServicesRequest;

ListServicesRequest::ListServicesRequest() :
	RpcServiceRequest("xtrace", "2019-08-08", "ListServices")
{
	setMethod(HttpRequest::Method::Post);
}

ListServicesRequest::~ListServicesRequest()
{}

std::string ListServicesRequest::getRegionId()const
{
	return regionId_;
}

void ListServicesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListServicesRequest::getAppType()const
{
	return appType_;
}

void ListServicesRequest::setAppType(const std::string& appType)
{
	appType_ = appType;
	setParameter("AppType", appType);
}

