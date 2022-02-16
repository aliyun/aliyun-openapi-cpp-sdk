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

#include <alibabacloud/emr/model/UpdateAutoScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::UpdateAutoScalingRuleRequest;

UpdateAutoScalingRuleRequest::UpdateAutoScalingRuleRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateAutoScalingRule")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAutoScalingRuleRequest::~UpdateAutoScalingRuleRequest()
{}

std::string UpdateAutoScalingRuleRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAutoScalingRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateAutoScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void UpdateAutoScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setParameter("ScalingRuleId", scalingRuleId);
}

std::string UpdateAutoScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAutoScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Struct UpdateAutoScalingRuleRequest::getScalingRuleSpec()const
{
	return scalingRuleSpec_;
}

void UpdateAutoScalingRuleRequest::setScalingRuleSpec(const Struct& scalingRuleSpec)
{
	scalingRuleSpec_ = scalingRuleSpec;
	setParameter("ScalingRuleSpec", std::to_string(scalingRuleSpec));
}

std::string UpdateAutoScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateAutoScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateAutoScalingRuleRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateAutoScalingRuleRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

