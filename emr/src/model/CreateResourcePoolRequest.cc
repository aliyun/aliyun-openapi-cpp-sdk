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

#include <alibabacloud/emr/model/CreateResourcePoolRequest.h>

using AlibabaCloud::Emr::Model::CreateResourcePoolRequest;

CreateResourcePoolRequest::CreateResourcePoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateResourcePool")
{}

CreateResourcePoolRequest::~CreateResourcePoolRequest()
{}

std::string CreateResourcePoolRequest::getNote()const
{
	return note_;
}

void CreateResourcePoolRequest::setNote(const std::string& note)
{
	note_ = note;
	setCoreParameter("Note", std::to_string(note));
}

long CreateResourcePoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateResourcePoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateResourcePoolRequest::getRegionId()const
{
	return regionId_;
}

void CreateResourcePoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateResourcePoolRequest::getName()const
{
	return name_;
}

void CreateResourcePoolRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

bool CreateResourcePoolRequest::getActive()const
{
	return active_;
}

void CreateResourcePoolRequest::setActive(bool active)
{
	active_ = active;
	setCoreParameter("Active", active ? "true" : "false");
}

std::string CreateResourcePoolRequest::getClusterId()const
{
	return clusterId_;
}

void CreateResourcePoolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string CreateResourcePoolRequest::getYarnSiteConfig()const
{
	return yarnSiteConfig_;
}

void CreateResourcePoolRequest::setYarnSiteConfig(const std::string& yarnSiteConfig)
{
	yarnSiteConfig_ = yarnSiteConfig;
	setCoreParameter("YarnSiteConfig", std::to_string(yarnSiteConfig));
}

std::vector<CreateResourcePoolRequest::Config> CreateResourcePoolRequest::getConfig()const
{
	return config_;
}

void CreateResourcePoolRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	int i = 0;
	for(int i = 0; i!= config.size(); i++)	{
		auto obj = config.at(i);
		std::string str ="Config."+ std::to_string(i);
		setCoreParameter(str + ".ConfigKey", std::to_string(obj.configKey));
		setCoreParameter(str + ".Note", std::to_string(obj.note));
		setCoreParameter(str + ".configType", std::to_string(obj.configType));
		setCoreParameter(str + ".TargetId", std::to_string(obj.targetId));
		setCoreParameter(str + ".ConfigValue", std::to_string(obj.configValue));
		setCoreParameter(str + ".Category", std::to_string(obj.category));
	}
}

std::string CreateResourcePoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateResourcePoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateResourcePoolRequest::getPoolType()const
{
	return poolType_;
}

void CreateResourcePoolRequest::setPoolType(const std::string& poolType)
{
	poolType_ = poolType;
	setCoreParameter("PoolType", std::to_string(poolType));
}

