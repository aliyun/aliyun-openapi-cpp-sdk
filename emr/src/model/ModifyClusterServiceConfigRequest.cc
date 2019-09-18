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

#include <alibabacloud/emr/model/ModifyClusterServiceConfigRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterServiceConfigRequest;

ModifyClusterServiceConfigRequest::ModifyClusterServiceConfigRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterServiceConfig")
{}

ModifyClusterServiceConfigRequest::~ModifyClusterServiceConfigRequest()
{}

bool ModifyClusterServiceConfigRequest::getRefreshHostConfig()const
{
	return refreshHostConfig_;
}

void ModifyClusterServiceConfigRequest::setRefreshHostConfig(bool refreshHostConfig)
{
	refreshHostConfig_ = refreshHostConfig;
	setCoreParameter("RefreshHostConfig", refreshHostConfig ? "true" : "false");
}

long ModifyClusterServiceConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterServiceConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterServiceConfigRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void ModifyClusterServiceConfigRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setCoreParameter("HostInstanceId", hostInstanceId);
}

std::string ModifyClusterServiceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterServiceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterServiceConfigRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterServiceConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyClusterServiceConfigRequest::getServiceName()const
{
	return serviceName_;
}

void ModifyClusterServiceConfigRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::vector<std::string> ModifyClusterServiceConfigRequest::getGatewayClusterIdList()const
{
	return gatewayClusterIdList_;
}

void ModifyClusterServiceConfigRequest::setGatewayClusterIdList(const std::vector<std::string>& gatewayClusterIdList)
{
	gatewayClusterIdList_ = gatewayClusterIdList;
	for(int i = 0; i!= gatewayClusterIdList.size(); i++)
		setCoreParameter("GatewayClusterIdList."+ std::to_string(i), gatewayClusterIdList.at(i));
}

std::string ModifyClusterServiceConfigRequest::getConfigParams()const
{
	return configParams_;
}

void ModifyClusterServiceConfigRequest::setConfigParams(const std::string& configParams)
{
	configParams_ = configParams;
	setCoreParameter("ConfigParams", configParams);
}

std::string ModifyClusterServiceConfigRequest::getConfigType()const
{
	return configType_;
}

void ModifyClusterServiceConfigRequest::setConfigType(const std::string& configType)
{
	configType_ = configType;
	setCoreParameter("ConfigType", configType);
}

std::string ModifyClusterServiceConfigRequest::getGroupId()const
{
	return groupId_;
}

void ModifyClusterServiceConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string ModifyClusterServiceConfigRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterServiceConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyClusterServiceConfigRequest::getCustomConfigParams()const
{
	return customConfigParams_;
}

void ModifyClusterServiceConfigRequest::setCustomConfigParams(const std::string& customConfigParams)
{
	customConfigParams_ = customConfigParams;
	setCoreParameter("CustomConfigParams", customConfigParams);
}

std::string ModifyClusterServiceConfigRequest::getComment()const
{
	return comment_;
}

void ModifyClusterServiceConfigRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", comment);
}

