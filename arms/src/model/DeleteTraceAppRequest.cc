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

#include <alibabacloud/arms/model/DeleteTraceAppRequest.h>

using AlibabaCloud::ARMS::Model::DeleteTraceAppRequest;

DeleteTraceAppRequest::DeleteTraceAppRequest() :
	RpcServiceRequest("arms", "2019-08-08", "DeleteTraceApp")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteTraceAppRequest::~DeleteTraceAppRequest()
{}

std::string DeleteTraceAppRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTraceAppRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteTraceAppRequest::getAppId()const
{
	return appId_;
}

void DeleteTraceAppRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DeleteTraceAppRequest::getType()const
{
	return type_;
}

void DeleteTraceAppRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

