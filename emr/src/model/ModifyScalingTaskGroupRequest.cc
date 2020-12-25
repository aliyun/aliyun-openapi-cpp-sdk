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

#include <alibabacloud/emr/model/ModifyScalingTaskGroupRequest.h>

using AlibabaCloud::Emr::Model::ModifyScalingTaskGroupRequest;

ModifyScalingTaskGroupRequest::ModifyScalingTaskGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyScalingTaskGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyScalingTaskGroupRequest::~ModifyScalingTaskGroupRequest()
{}

long ModifyScalingTaskGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingTaskGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyScalingTaskGroupRequest::getWithGrace()const
{
	return withGrace_;
}

void ModifyScalingTaskGroupRequest::setWithGrace(bool withGrace)
{
	withGrace_ = withGrace;
	setParameter("WithGrace", withGrace ? "true" : "false");
}

std::string ModifyScalingTaskGroupRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyScalingTaskGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ModifyScalingTaskGroupRequest::getMinSize()const
{
	return minSize_;
}

void ModifyScalingTaskGroupRequest::setMinSize(int minSize)
{
	minSize_ = minSize;
	setParameter("MinSize", std::to_string(minSize));
}

std::string ModifyScalingTaskGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingTaskGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ModifyScalingTaskGroupRequest::getTimeoutWithGrace()const
{
	return timeoutWithGrace_;
}

void ModifyScalingTaskGroupRequest::setTimeoutWithGrace(long timeoutWithGrace)
{
	timeoutWithGrace_ = timeoutWithGrace;
	setParameter("TimeoutWithGrace", std::to_string(timeoutWithGrace));
}

std::string ModifyScalingTaskGroupRequest::getRegionId()const
{
	return regionId_;
}

void ModifyScalingTaskGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyScalingTaskGroupRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ModifyScalingTaskGroupRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::string ModifyScalingTaskGroupRequest::getActiveRuleCategory()const
{
	return activeRuleCategory_;
}

void ModifyScalingTaskGroupRequest::setActiveRuleCategory(const std::string& activeRuleCategory)
{
	activeRuleCategory_ = activeRuleCategory;
	setParameter("ActiveRuleCategory", activeRuleCategory);
}

int ModifyScalingTaskGroupRequest::getMaxSize()const
{
	return maxSize_;
}

void ModifyScalingTaskGroupRequest::setMaxSize(int maxSize)
{
	maxSize_ = maxSize;
	setParameter("MaxSize", std::to_string(maxSize));
}

int ModifyScalingTaskGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void ModifyScalingTaskGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setParameter("DefaultCooldown", std::to_string(defaultCooldown));
}

