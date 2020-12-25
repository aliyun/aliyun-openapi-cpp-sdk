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

#include <alibabacloud/emr/model/ModifyScalingGroupV2Request.h>

using AlibabaCloud::Emr::Model::ModifyScalingGroupV2Request;

ModifyScalingGroupV2Request::ModifyScalingGroupV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyScalingGroupV2")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyScalingGroupV2Request::~ModifyScalingGroupV2Request()
{}

long ModifyScalingGroupV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingGroupV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyScalingGroupV2Request::getDescription()const
{
	return description_;
}

void ModifyScalingGroupV2Request::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyScalingGroupV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingGroupV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyScalingGroupV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void ModifyScalingGroupV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string ModifyScalingGroupV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyScalingGroupV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyScalingGroupV2Request::getRegionId()const
{
	return regionId_;
}

void ModifyScalingGroupV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyScalingGroupV2Request::getName()const
{
	return name_;
}

void ModifyScalingGroupV2Request::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

