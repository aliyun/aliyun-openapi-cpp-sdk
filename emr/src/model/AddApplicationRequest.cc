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

#include <alibabacloud/emr/model/AddApplicationRequest.h>

using AlibabaCloud::Emr::Model::AddApplicationRequest;

AddApplicationRequest::AddApplicationRequest() :
	RpcServiceRequest("emr", "2021-03-20", "AddApplication")
{
	setMethod(HttpRequest::Method::Post);
}

AddApplicationRequest::~AddApplicationRequest()
{}

std::string AddApplicationRequest::getClientToken()const
{
	return clientToken_;
}

void AddApplicationRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AddApplicationRequest::getDescription()const
{
	return description_;
}

void AddApplicationRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AddApplicationRequest::getRegionId()const
{
	return regionId_;
}

void AddApplicationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddApplicationRequest::getClusterId()const
{
	return clusterId_;
}

void AddApplicationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string AddApplicationRequest::getSystemDebug()const
{
	return systemDebug_;
}

void AddApplicationRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array AddApplicationRequest::getApplications()const
{
	return applications_;
}

void AddApplicationRequest::setApplications(const Array& applications)
{
	applications_ = applications;
	setParameter("Applications", std::to_string(applications));
}

