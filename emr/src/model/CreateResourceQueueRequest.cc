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

#include <alibabacloud/emr/model/CreateResourceQueueRequest.h>

using AlibabaCloud::Emr::Model::CreateResourceQueueRequest;

CreateResourceQueueRequest::CreateResourceQueueRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateResourceQueue")
{}

CreateResourceQueueRequest::~CreateResourceQueueRequest()
{}

long CreateResourceQueueRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateResourceQueueRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateResourceQueueRequest::getParentQueueId()const
{
	return parentQueueId_;
}

void CreateResourceQueueRequest::setParentQueueId(long parentQueueId)
{
	parentQueueId_ = parentQueueId;
	setCoreParameter("ParentQueueId", parentQueueId);
}

std::string CreateResourceQueueRequest::getRegionId()const
{
	return regionId_;
}

void CreateResourceQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateResourceQueueRequest::getName()const
{
	return name_;
}

void CreateResourceQueueRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateResourceQueueRequest::getQualifiedName()const
{
	return qualifiedName_;
}

void CreateResourceQueueRequest::setQualifiedName(const std::string& qualifiedName)
{
	qualifiedName_ = qualifiedName;
	setCoreParameter("QualifiedName", std::to_string(qualifiedName));
}

long CreateResourceQueueRequest::getResourcePoolId()const
{
	return resourcePoolId_;
}

void CreateResourceQueueRequest::setResourcePoolId(long resourcePoolId)
{
	resourcePoolId_ = resourcePoolId;
	setCoreParameter("ResourcePoolId", resourcePoolId);
}

std::string CreateResourceQueueRequest::getClusterId()const
{
	return clusterId_;
}

void CreateResourceQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

bool CreateResourceQueueRequest::getLeaf()const
{
	return leaf_;
}

void CreateResourceQueueRequest::setLeaf(bool leaf)
{
	leaf_ = leaf;
	setCoreParameter("Leaf", leaf ? "true" : "false");
}

std::vector<CreateResourceQueueRequest::Config> CreateResourceQueueRequest::getConfig()const
{
	return config_;
}

void CreateResourceQueueRequest::setConfig(const std::vector<Config>& config)
{
	config_ = config;
	int i = 0;
	for(int i = 0; i!= config.size(); i++)	{
		auto obj = config.at(i);
		std::string str ="Config."+ std::to_string(i);
		setCoreParameter(str + ".ConfigKey", std::to_string(obj.configKey));
		setCoreParameter(str + ".Note", std::to_string(obj.note));
		setCoreParameter(str + ".ConfigValue", std::to_string(obj.configValue));
		setCoreParameter(str + ".Category", std::to_string(obj.category));
	}
}

std::string CreateResourceQueueRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateResourceQueueRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

