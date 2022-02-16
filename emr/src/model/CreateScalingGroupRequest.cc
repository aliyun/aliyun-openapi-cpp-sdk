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

#include <alibabacloud/emr/model/CreateScalingGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateScalingGroupRequest;

CreateScalingGroupRequest::CreateScalingGroupRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateScalingGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateScalingGroupRequest::~CreateScalingGroupRequest()
{}

std::string CreateScalingGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateScalingGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateScalingGroupRequest::getDescription()const
{
	return description_;
}

void CreateScalingGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateScalingGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateScalingGroupRequest::getClusterId()const
{
	return clusterId_;
}

void CreateScalingGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Struct CreateScalingGroupRequest::getScalingConfig()const
{
	return scalingConfig_;
}

void CreateScalingGroupRequest::setScalingConfig(const Struct& scalingConfig)
{
	scalingConfig_ = scalingConfig;
	setParameter("ScalingConfig", std::to_string(scalingConfig));
}

std::string CreateScalingGroupRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateScalingGroupRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateScalingGroupRequest::getName()const
{
	return name_;
}

void CreateScalingGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateScalingGroupRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateScalingGroupRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array CreateScalingGroupRequest::getScalingRuleList()const
{
	return scalingRuleList_;
}

void CreateScalingGroupRequest::setScalingRuleList(const Array& scalingRuleList)
{
	scalingRuleList_ = scalingRuleList;
	setParameter("ScalingRuleList", std::to_string(scalingRuleList));
}

