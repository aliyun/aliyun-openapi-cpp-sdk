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

#include <alibabacloud/emr/model/CreateHostPoolRequest.h>

using AlibabaCloud::Emr::Model::CreateHostPoolRequest;

CreateHostPoolRequest::CreateHostPoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateHostPool")
{}

CreateHostPoolRequest::~CreateHostPoolRequest()
{}

long CreateHostPoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateHostPoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateHostPoolRequest::getRegionId()const
{
	return regionId_;
}

void CreateHostPoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateHostPoolRequest::getName()const
{
	return name_;
}

void CreateHostPoolRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateHostPoolRequest::getDescription()const
{
	return description_;
}

void CreateHostPoolRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::vector<CreateHostPoolRequest::KubeClusterInfo> CreateHostPoolRequest::getKubeClusterInfo()const
{
	return kubeClusterInfo_;
}

void CreateHostPoolRequest::setKubeClusterInfo(const std::vector<KubeClusterInfo>& kubeClusterInfo)
{
	kubeClusterInfo_ = kubeClusterInfo;
	int i = 0;
	for(int i = 0; i!= kubeClusterInfo.size(); i++)	{
		auto obj = kubeClusterInfo.at(i);
		std::string str ="KubeClusterInfo."+ std::to_string(i);
		setCoreParameter(str + ".ExternalKey", std::to_string(obj.externalKey));
		setCoreParameter(str + ".InternalConfig", std::to_string(obj.internalConfig));
		setCoreParameter(str + ".PublicConfig", std::to_string(obj.publicConfig));
		setCoreParameter(str + ".SshConfig", std::to_string(obj.sshConfig));
	}
}

std::string CreateHostPoolRequest::getType()const
{
	return type_;
}

void CreateHostPoolRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string CreateHostPoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHostPoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

