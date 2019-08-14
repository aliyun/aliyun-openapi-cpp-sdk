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

#include <alibabacloud/emr/model/ModifyClusterServiceConfigForAdminRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterServiceConfigForAdminRequest;

ModifyClusterServiceConfigForAdminRequest::ModifyClusterServiceConfigForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterServiceConfigForAdmin")
{}

ModifyClusterServiceConfigForAdminRequest::~ModifyClusterServiceConfigForAdminRequest()
{}

bool ModifyClusterServiceConfigForAdminRequest::getRefreshHostConfig()const
{
	return refreshHostConfig_;
}

void ModifyClusterServiceConfigForAdminRequest::setRefreshHostConfig(bool refreshHostConfig)
{
	refreshHostConfig_ = refreshHostConfig;
	setCoreParameter("RefreshHostConfig", refreshHostConfig ? "true" : "false");
}

long ModifyClusterServiceConfigForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterServiceConfigForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterServiceConfigForAdminRequest::getConfigType()const
{
	return configType_;
}

void ModifyClusterServiceConfigForAdminRequest::setConfigType(const std::string& configType)
{
	configType_ = configType;
	setCoreParameter("ConfigType", configType);
}

std::string ModifyClusterServiceConfigForAdminRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void ModifyClusterServiceConfigForAdminRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setCoreParameter("HostInstanceId", hostInstanceId);
}

std::string ModifyClusterServiceConfigForAdminRequest::getAuthor()const
{
	return author_;
}

void ModifyClusterServiceConfigForAdminRequest::setAuthor(const std::string& author)
{
	author_ = author;
	setCoreParameter("Author", author);
}

std::string ModifyClusterServiceConfigForAdminRequest::getGroupId()const
{
	return groupId_;
}

void ModifyClusterServiceConfigForAdminRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string ModifyClusterServiceConfigForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterServiceConfigForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyClusterServiceConfigForAdminRequest::getUserId()const
{
	return userId_;
}

void ModifyClusterServiceConfigForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string ModifyClusterServiceConfigForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterServiceConfigForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterServiceConfigForAdminRequest::getCustomConfigParams()const
{
	return customConfigParams_;
}

void ModifyClusterServiceConfigForAdminRequest::setCustomConfigParams(const std::string& customConfigParams)
{
	customConfigParams_ = customConfigParams;
	setCoreParameter("CustomConfigParams", customConfigParams);
}

std::string ModifyClusterServiceConfigForAdminRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterServiceConfigForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyClusterServiceConfigForAdminRequest::getServiceName()const
{
	return serviceName_;
}

void ModifyClusterServiceConfigForAdminRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string ModifyClusterServiceConfigForAdminRequest::getComment()const
{
	return comment_;
}

void ModifyClusterServiceConfigForAdminRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", comment);
}

std::vector<std::string> ModifyClusterServiceConfigForAdminRequest::getGatewayClusterIdList()const
{
	return gatewayClusterIdList_;
}

void ModifyClusterServiceConfigForAdminRequest::setGatewayClusterIdList(const std::vector<std::string>& gatewayClusterIdList)
{
	gatewayClusterIdList_ = gatewayClusterIdList;
	for(int i = 0; i!= gatewayClusterIdList.size(); i++)
		setCoreParameter("GatewayClusterIdList."+ std::to_string(i), gatewayClusterIdList.at(i));
}

std::string ModifyClusterServiceConfigForAdminRequest::getConfigParams()const
{
	return configParams_;
}

void ModifyClusterServiceConfigForAdminRequest::setConfigParams(const std::string& configParams)
{
	configParams_ = configParams;
	setCoreParameter("ConfigParams", configParams);
}

