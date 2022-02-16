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

#include <alibabacloud/emr/model/GetApplicationRequest.h>

using AlibabaCloud::Emr::Model::GetApplicationRequest;

GetApplicationRequest::GetApplicationRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetApplication")
{
	setMethod(HttpRequest::Method::Post);
}

GetApplicationRequest::~GetApplicationRequest()
{}

std::string GetApplicationRequest::getClientToken()const
{
	return clientToken_;
}

void GetApplicationRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetApplicationRequest::getRegionId()const
{
	return regionId_;
}

void GetApplicationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetApplicationRequest::getClusterId()const
{
	return clusterId_;
}

void GetApplicationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetApplicationRequest::getApplicationName()const
{
	return applicationName_;
}

void GetApplicationRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

std::string GetApplicationRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetApplicationRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

