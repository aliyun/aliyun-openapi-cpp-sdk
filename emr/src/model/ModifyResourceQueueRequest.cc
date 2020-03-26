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

#include <alibabacloud/emr/model/ModifyResourceQueueRequest.h>

using AlibabaCloud::Emr::Model::ModifyResourceQueueRequest;

ModifyResourceQueueRequest::ModifyResourceQueueRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyResourceQueue")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyResourceQueueRequest::~ModifyResourceQueueRequest()
{}

long ModifyResourceQueueRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyResourceQueueRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyResourceQueueRequest::getQualifiedName()const
{
	return qualifiedName_;
}

void ModifyResourceQueueRequest::setQualifiedName(const std::string& qualifiedName)
{
	qualifiedName_ = qualifiedName;
	setParameter("QualifiedName", qualifiedName);
}

long ModifyResourceQueueRequest::getResourcePoolId()const
{
	return resourcePoolId_;
}

void ModifyResourceQueueRequest::setResourcePoolId(long resourcePoolId)
{
	resourcePoolId_ = resourcePoolId;
	setParameter("ResourcePoolId", std::to_string(resourcePoolId));
}

std::string ModifyResourceQueueRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyResourceQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool ModifyResourceQueueRequest::getLeaf()const
{
	return leaf_;
}

void ModifyResourceQueueRequest::setLeaf(bool leaf)
{
	leaf_ = leaf;
	setParameter("Leaf", leaf ? "true" : "false");
}

std::string ModifyResourceQueueRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyResourceQueueRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ModifyResourceQueueRequest::getParentQueueId()const
{
	return parentQueueId_;
}

void ModifyResourceQueueRequest::setParentQueueId(long parentQueueId)
{
	parentQueueId_ = parentQueueId;
	setParameter("ParentQueueId", std::to_string(parentQueueId));
}

std::string ModifyResourceQueueRequest::getRegionId()const
{
	return regionId_;
}

void ModifyResourceQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyResourceQueueRequest::getName()const
{
	return name_;
}

void ModifyResourceQueueRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyResourceQueueRequest::getId()const
{
	return id_;
}

void ModifyResourceQueueRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::vector<ModifyResourceQueueRequest::Config> ModifyResourceQueueRequest::getConfig()const
{
	return config_;
}

void ModifyResourceQueueRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	for(int dep1 = 0; dep1!= config.size(); dep1++) {
		auto configObj = config.at(dep1);
		std::string configObjStr = "Config." + std::to_string(dep1 + 1);
		setParameter(configObjStr + ".ConfigKey", configObj.configKey);
		setParameter(configObjStr + ".Note", configObj.note);
		setParameter(configObjStr + ".ConfigValue", configObj.configValue);
		setParameter(configObjStr + ".Id", std::to_string(configObj.id));
		setParameter(configObjStr + ".Category", configObj.category);
	}
}

