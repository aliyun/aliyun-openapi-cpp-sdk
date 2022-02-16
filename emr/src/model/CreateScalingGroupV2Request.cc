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

#include <alibabacloud/emr/model/CreateScalingGroupV2Request.h>

using AlibabaCloud::Emr::Model::CreateScalingGroupV2Request;

CreateScalingGroupV2Request::CreateScalingGroupV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "CreateScalingGroupV2")
{
	setMethod(HttpRequest::Method::Post);
}

CreateScalingGroupV2Request::~CreateScalingGroupV2Request()
{}

long CreateScalingGroupV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateScalingGroupV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateScalingGroupV2Request::getDescription()const
{
	return description_;
}

void CreateScalingGroupV2Request::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateScalingGroupV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingGroupV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingGroupV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateScalingGroupV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateScalingGroupV2Request::getRegionId()const
{
	return regionId_;
}

void CreateScalingGroupV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateScalingGroupV2Request::getHostGroupId()const
{
	return hostGroupId_;
}

void CreateScalingGroupV2Request::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::string CreateScalingGroupV2Request::getName()const
{
	return name_;
}

void CreateScalingGroupV2Request::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

