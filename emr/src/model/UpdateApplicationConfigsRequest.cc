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

#include <alibabacloud/emr/model/UpdateApplicationConfigsRequest.h>

using AlibabaCloud::Emr::Model::UpdateApplicationConfigsRequest;

UpdateApplicationConfigsRequest::UpdateApplicationConfigsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateApplicationConfigs")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateApplicationConfigsRequest::~UpdateApplicationConfigsRequest()
{}

Array UpdateApplicationConfigsRequest::getConfigs()const
{
	return configs_;
}

void UpdateApplicationConfigsRequest::setConfigs(const Array& configs)
{
	configs_ = configs;
	setParameter("Configs", std::to_string(configs));
}

std::string UpdateApplicationConfigsRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateApplicationConfigsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateApplicationConfigsRequest::getDescription()const
{
	return description_;
}

void UpdateApplicationConfigsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool UpdateApplicationConfigsRequest::getRefreshNodeConfig()const
{
	return refreshNodeConfig_;
}

void UpdateApplicationConfigsRequest::setRefreshNodeConfig(bool refreshNodeConfig)
{
	refreshNodeConfig_ = refreshNodeConfig;
	setParameter("RefreshNodeConfig", refreshNodeConfig ? "true" : "false");
}

std::string UpdateApplicationConfigsRequest::getRegionId()const
{
	return regionId_;
}

void UpdateApplicationConfigsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array UpdateApplicationConfigsRequest::getApplicationConfigs()const
{
	return applicationConfigs_;
}

void UpdateApplicationConfigsRequest::setApplicationConfigs(const Array& applicationConfigs)
{
	applicationConfigs_ = applicationConfigs;
	setParameter("ApplicationConfigs", std::to_string(applicationConfigs));
}

std::string UpdateApplicationConfigsRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateApplicationConfigsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool UpdateApplicationConfigsRequest::getRefreshConfig()const
{
	return refreshConfig_;
}

void UpdateApplicationConfigsRequest::setRefreshConfig(bool refreshConfig)
{
	refreshConfig_ = refreshConfig;
	setParameter("RefreshConfig", refreshConfig ? "true" : "false");
}

std::string UpdateApplicationConfigsRequest::getApplicationName()const
{
	return applicationName_;
}

void UpdateApplicationConfigsRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

std::string UpdateApplicationConfigsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateApplicationConfigsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

