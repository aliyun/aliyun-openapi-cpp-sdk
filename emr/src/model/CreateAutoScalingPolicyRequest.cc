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

#include <alibabacloud/emr/model/CreateAutoScalingPolicyRequest.h>

using AlibabaCloud::Emr::Model::CreateAutoScalingPolicyRequest;

CreateAutoScalingPolicyRequest::CreateAutoScalingPolicyRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateAutoScalingPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAutoScalingPolicyRequest::~CreateAutoScalingPolicyRequest()
{}

std::string CreateAutoScalingPolicyRequest::getClientToken()const
{
	return clientToken_;
}

void CreateAutoScalingPolicyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateAutoScalingPolicyRequest::getRegionId()const
{
	return regionId_;
}

void CreateAutoScalingPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateAutoScalingPolicyRequest::getClusterId()const
{
	return clusterId_;
}

void CreateAutoScalingPolicyRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Array CreateAutoScalingPolicyRequest::getScalingRuleSpecs()const
{
	return scalingRuleSpecs_;
}

void CreateAutoScalingPolicyRequest::setScalingRuleSpecs(const Array& scalingRuleSpecs)
{
	scalingRuleSpecs_ = scalingRuleSpecs;
	setParameter("ScalingRuleSpecs", std::to_string(scalingRuleSpecs));
}

std::string CreateAutoScalingPolicyRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void CreateAutoScalingPolicyRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

bool CreateAutoScalingPolicyRequest::getEnableWhenCreate()const
{
	return enableWhenCreate_;
}

void CreateAutoScalingPolicyRequest::setEnableWhenCreate(bool enableWhenCreate)
{
	enableWhenCreate_ = enableWhenCreate;
	setParameter("EnableWhenCreate", enableWhenCreate ? "true" : "false");
}

std::string CreateAutoScalingPolicyRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateAutoScalingPolicyRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

