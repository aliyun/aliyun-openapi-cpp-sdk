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

#include <alibabacloud/emr/model/CreateAutoScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::CreateAutoScalingRuleRequest;

CreateAutoScalingRuleRequest::CreateAutoScalingRuleRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateAutoScalingRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAutoScalingRuleRequest::~CreateAutoScalingRuleRequest()
{}

std::string CreateAutoScalingRuleRequest::getClientToken()const
{
	return clientToken_;
}

void CreateAutoScalingRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateAutoScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateAutoScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Struct CreateAutoScalingRuleRequest::getScalingRuleSpec()const
{
	return scalingRuleSpec_;
}

void CreateAutoScalingRuleRequest::setScalingRuleSpec(const Struct& scalingRuleSpec)
{
	scalingRuleSpec_ = scalingRuleSpec;
	setParameter("ScalingRuleSpec", std::to_string(scalingRuleSpec));
}

std::string CreateAutoScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void CreateAutoScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateAutoScalingRuleRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateAutoScalingRuleRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string CreateAutoScalingRuleRequest::getScalingPolicyId()const
{
	return scalingPolicyId_;
}

void CreateAutoScalingRuleRequest::setScalingPolicyId(const std::string& scalingPolicyId)
{
	scalingPolicyId_ = scalingPolicyId;
	setParameter("ScalingPolicyId", scalingPolicyId);
}

