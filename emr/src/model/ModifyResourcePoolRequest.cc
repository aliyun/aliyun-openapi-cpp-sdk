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
{
	setMethod(HttpRequest::Method::Post);
}

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

bool ModifyResourcePoolRequest::getActive()const
{
	return active_;
}

void ModifyResourcePoolRequest::setActive(bool active)
{
	active_ = active;
	setParameter("Active", active ? "true" : "false");
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

std::string ModifyResourcePoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyResourcePoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
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

std::string ModifyResourcePoolRequest::getId()const
{
	return id_;
}

void ModifyResourcePoolRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::vector<ModifyResourcePoolRequest::Config> ModifyResourcePoolRequest::getConfig()const
{
	return config_;
}

void ModifyResourcePoolRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	for(int dep1 = 0; dep1!= config.size(); dep1++) {
		auto configObj = config.at(dep1);
		std::string configObjStr = "Config." + std::to_string(dep1 + 1);
		setParameter(configObjStr + ".ConfigKey", configObj.configKey);
		setParameter(configObjStr + ".Note", configObj.note);
		setParameter(configObjStr + ".ConfigValue", configObj.configValue);
		setParameter(configObjStr + ".Id", configObj.id);
		setParameter(configObjStr + ".Category", configObj.category);
	}
}

