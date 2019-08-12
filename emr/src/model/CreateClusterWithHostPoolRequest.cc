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

#include <alibabacloud/emr/model/CreateClusterWithHostPoolRequest.h>

using AlibabaCloud::Emr::Model::CreateClusterWithHostPoolRequest;

CreateClusterWithHostPoolRequest::CreateClusterWithHostPoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateClusterWithHostPool")
{}

CreateClusterWithHostPoolRequest::~CreateClusterWithHostPoolRequest()
{}

long CreateClusterWithHostPoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterWithHostPoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateClusterWithHostPoolRequest::getClusterName()const
{
	return clusterName_;
}

void CreateClusterWithHostPoolRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setCoreParameter("ClusterName", clusterName);
}

bool CreateClusterWithHostPoolRequest::getEasEnable()const
{
	return easEnable_;
}

void CreateClusterWithHostPoolRequest::setEasEnable(bool easEnable)
{
	easEnable_ = easEnable;
	setCoreParameter("EasEnable", easEnable);
}

std::vector<CreateClusterWithHostPoolRequest::HostInfo> CreateClusterWithHostPoolRequest::getHostInfo()const
{
	return hostInfo_;
}

void CreateClusterWithHostPoolRequest::setHostInfo(const std::vector<HostInfo>& hostInfo)
{
	hostInfo_ = hostInfo;
	int i = 0;
	for(int i = 0; i!= hostInfo.size(); i++)	{
		auto obj = hostInfo.at(i);
		std::string str ="HostInfo."+ std::to_string(i);
		setCoreParameter(str + ".HpHostBizId", std::to_string(obj.hpHostBizId));
		setCoreParameter(str + ".HostName", std::to_string(obj.hostName));
		setCoreParameter(str + ".Role", std::to_string(obj.role));
		setCoreParameter(str + ".GroupId", obj.groupId);
		setCoreParameter(str + ".PrivateIp", std::to_string(obj.privateIp));
		setCoreParameter(str + ".ServiceComponentInfo", obj.serviceComponentInfo);
		setCoreParameter(str + ".HostGroupName", std::to_string(obj.hostGroupName));
	}
}

std::string CreateClusterWithHostPoolRequest::getRelatedClusterId()const
{
	return relatedClusterId_;
}

void CreateClusterWithHostPoolRequest::setRelatedClusterId(const std::string& relatedClusterId)
{
	relatedClusterId_ = relatedClusterId;
	setCoreParameter("RelatedClusterId", relatedClusterId);
}

std::string CreateClusterWithHostPoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterWithHostPoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterWithHostPoolRequest::getClusterType()const
{
	return clusterType_;
}

void CreateClusterWithHostPoolRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

std::string CreateClusterWithHostPoolRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterWithHostPoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<CreateClusterWithHostPoolRequest::HostGroup> CreateClusterWithHostPoolRequest::getHostGroup()const
{
	return hostGroup_;
}

void CreateClusterWithHostPoolRequest::setHostGroup(const std::vector<HostGroup>& hostGroup)
{
	hostGroup_ = hostGroup;
	int i = 0;
	for(int i = 0; i!= hostGroup.size(); i++)	{
		auto obj = hostGroup.at(i);
		std::string str ="HostGroup."+ std::to_string(i);
		setCoreParameter(str + ".GroupType", std::to_string(obj.groupType));
		setCoreParameter(str + ".GroupId", obj.groupId);
		setCoreParameter(str + ".GroupName", std::to_string(obj.groupName));
	}
}

std::string CreateClusterWithHostPoolRequest::getStackName()const
{
	return stackName_;
}

void CreateClusterWithHostPoolRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

std::string CreateClusterWithHostPoolRequest::getStackVersion()const
{
	return stackVersion_;
}

void CreateClusterWithHostPoolRequest::setStackVersion(const std::string& stackVersion)
{
	stackVersion_ = stackVersion;
	setCoreParameter("StackVersion", stackVersion);
}

std::vector<CreateClusterWithHostPoolRequest::ServiceInfo> CreateClusterWithHostPoolRequest::getServiceInfo()const
{
	return serviceInfo_;
}

void CreateClusterWithHostPoolRequest::setServiceInfo(const std::vector<ServiceInfo>& serviceInfo)
{
	serviceInfo_ = serviceInfo;
	int i = 0;
	for(int i = 0; i!= serviceInfo.size(); i++)	{
		auto obj = serviceInfo.at(i);
		std::string str ="ServiceInfo."+ std::to_string(i);
		setCoreParameter(str + ".ServiceEcmVersion", std::to_string(obj.serviceEcmVersion));
		setCoreParameter(str + ".ServiceVersion", std::to_string(obj.serviceVersion));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
	}
}

std::vector<CreateClusterWithHostPoolRequest::Config> CreateClusterWithHostPoolRequest::getConfig()const
{
	return config_;
}

void CreateClusterWithHostPoolRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	int i = 0;
	for(int i = 0; i!= config.size(); i++)	{
		auto obj = config.at(i);
		std::string str ="Config."+ std::to_string(i);
		setCoreParameter(str + ".ConfigKey", std::to_string(obj.configKey));
		setCoreParameter(str + ".FileName", std::to_string(obj.fileName));
		setCoreParameter(str + ".ConfigValue", std::to_string(obj.configValue));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
	}
}

