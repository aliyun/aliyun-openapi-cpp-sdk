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

#include <alibabacloud/emr/model/ModifyResourcePoolRequest.h>

using AlibabaCloud::Emr::Model::ModifyResourcePoolRequest;

ModifyResourcePoolRequest::ModifyResourcePoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyResourcePool")
{}

ModifyResourcePoolRequest::~ModifyResourcePoolRequest()
{}

long ModifyResourcePoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyResourcePoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyResourcePoolRequest::getRegionId()const
{
	return regionId_;
}

void ModifyResourcePoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyResourcePoolRequest::getName()const
{
	return name_;
}

void ModifyResourcePoolRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool ModifyResourcePoolRequest::getActive()const
{
	return active_;
}

void ModifyResourcePoolRequest::setActive(bool active)
{
	active_ = active;
	setParameter("Active", std::to_string(active));
}

std::string ModifyResourcePoolRequest::getId()const
{
	return id_;
}

void ModifyResourcePoolRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyResourcePoolRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyResourcePoolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyResourcePoolRequest::getYarnsiteconfig()const
{
	return yarnsiteconfig_;
}

void ModifyResourcePoolRequest::setYarnsiteconfig(const std::string& yarnsiteconfig)
{
	yarnsiteconfig_ = yarnsiteconfig;
	setParameter("Yarnsiteconfig", yarnsiteconfig);
}

std::vector<ModifyResourcePoolRequest::Config> ModifyResourcePoolRequest::getConfig()const
{
	return config_;
}

void ModifyResourcePoolRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	int i = 0;
	for(int i = 0; i!= config.size(); i++)	{
		auto obj = config.at(i);
		std::string str ="Config."+ std::to_string(i);
		setParameter(str + ".ConfigKey", obj.configKey);
		setParameter(str + ".Note", obj.note);
		setParameter(str + ".ConfigValue", obj.configValue);
		setParameter(str + ".Id", obj.id);
		setParameter(str + ".Category", obj.category);
	}
}

std::string ModifyResourcePoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyResourcePoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

