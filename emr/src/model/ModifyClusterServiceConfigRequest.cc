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
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterServiceConfigRequest::~ModifyClusterServiceConfigRequest()
{}

bool ModifyClusterServiceConfigRequest::getRefreshHostConfig()const
{
	return refreshHostConfig_;
}

void ModifyClusterServiceConfigRequest::setRefreshHostConfig(bool refreshHostConfig)
{
	refreshHostConfig_ = refreshHostConfig;
	setParameter("RefreshHostConfig", refreshHostConfig ? "true" : "false");
}

long ModifyClusterServiceConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterServiceConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterServiceConfigRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void ModifyClusterServiceConfigRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setParameter("HostInstanceId", hostInstanceId);
}

std::string ModifyClusterServiceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterServiceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterServiceConfigRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterServiceConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClusterServiceConfigRequest::getServiceName()const
{
	return serviceName_;
}

void ModifyClusterServiceConfigRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::vector<std::string> ModifyClusterServiceConfigRequest::getGatewayClusterIdList()const
{
	return gatewayClusterIdList_;
}

void ModifyClusterServiceConfigRequest::setGatewayClusterIdList(const std::vector<std::string>& gatewayClusterIdList)
{
	gatewayClusterIdList_ = gatewayClusterIdList;
	for(int dep1 = 0; dep1!= gatewayClusterIdList.size(); dep1++) {
		setParameter("GatewayClusterIdList."+ std::to_string(dep1), gatewayClusterIdList.at(dep1));
	}
}

std::string ModifyClusterServiceConfigRequest::getConfigParams()const
{
	return configParams_;
}

void ModifyClusterServiceConfigRequest::setConfigParams(const std::string& configParams)
{
	configParams_ = configParams;
	setParameter("ConfigParams", configParams);
}

std::string ModifyClusterServiceConfigRequest::getConfigType()const
{
	return configType_;
}

void ModifyClusterServiceConfigRequest::setConfigType(const std::string& configType)
{
	configType_ = configType;
	setParameter("ConfigType", configType);
}

std::string ModifyClusterServiceConfigRequest::getGroupId()const
{
	return groupId_;
}

void ModifyClusterServiceConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string ModifyClusterServiceConfigRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterServiceConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyClusterServiceConfigRequest::getCustomConfigParams()const
{
	return customConfigParams_;
}

void ModifyClusterServiceConfigRequest::setCustomConfigParams(const std::string& customConfigParams)
{
	customConfigParams_ = customConfigParams;
	setParameter("CustomConfigParams", customConfigParams);
}

std::string ModifyClusterServiceConfigRequest::getComment()const
{
	return comment_;
}

void ModifyClusterServiceConfigRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

