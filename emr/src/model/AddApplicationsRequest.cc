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

#include <alibabacloud/emr/model/AddApplicationsRequest.h>

using AlibabaCloud::Emr::Model::AddApplicationsRequest;

AddApplicationsRequest::AddApplicationsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "AddApplications")
{
	setMethod(HttpRequest::Method::Post);
}

AddApplicationsRequest::~AddApplicationsRequest()
{}

std::string AddApplicationsRequest::getClientToken()const
{
	return clientToken_;
}

void AddApplicationsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AddApplicationsRequest::getDescription()const
{
	return description_;
}

void AddApplicationsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AddApplicationsRequest::getRegionId()const
{
	return regionId_;
}

void AddApplicationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddApplicationsRequest::getClusterId()const
{
	return clusterId_;
}

void AddApplicationsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string AddApplicationsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void AddApplicationsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array AddApplicationsRequest::getApplications()const
{
	return applications_;
}

void AddApplicationsRequest::setApplications(const Array& applications)
{
	applications_ = applications;
	setParameter("Applications", std::to_string(applications));
}

