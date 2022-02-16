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

#include <alibabacloud/emr/model/UpdateScalingGroupRequest.h>

using AlibabaCloud::Emr::Model::UpdateScalingGroupRequest;

UpdateScalingGroupRequest::UpdateScalingGroupRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateScalingGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateScalingGroupRequest::~UpdateScalingGroupRequest()
{}

std::string UpdateScalingGroupRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateScalingGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateScalingGroupRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void UpdateScalingGroupRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string UpdateScalingGroupRequest::getDescription()const
{
	return description_;
}

void UpdateScalingGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

Struct UpdateScalingGroupRequest::getScalingGroupConfig()const
{
	return scalingGroupConfig_;
}

void UpdateScalingGroupRequest::setScalingGroupConfig(const Struct& scalingGroupConfig)
{
	scalingGroupConfig_ = scalingGroupConfig;
	setParameter("ScalingGroupConfig", std::to_string(scalingGroupConfig));
}

std::string UpdateScalingGroupRequest::getRegionId()const
{
	return regionId_;
}

void UpdateScalingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array UpdateScalingGroupRequest::getScalingRules()const
{
	return scalingRules_;
}

void UpdateScalingGroupRequest::setScalingRules(const Array& scalingRules)
{
	scalingRules_ = scalingRules;
	setParameter("ScalingRules", std::to_string(scalingRules));
}

std::string UpdateScalingGroupRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateScalingGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateScalingGroupRequest::getName()const
{
	return name_;
}

void UpdateScalingGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateScalingGroupRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateScalingGroupRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

