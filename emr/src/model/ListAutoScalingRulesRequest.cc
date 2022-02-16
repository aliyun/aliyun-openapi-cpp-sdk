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

#include <alibabacloud/emr/model/ListAutoScalingRulesRequest.h>

using AlibabaCloud::Emr::Model::ListAutoScalingRulesRequest;

ListAutoScalingRulesRequest::ListAutoScalingRulesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListAutoScalingRules")
{
	setMethod(HttpRequest::Method::Post);
}

ListAutoScalingRulesRequest::~ListAutoScalingRulesRequest()
{}

std::string ListAutoScalingRulesRequest::getClientToken()const
{
	return clientToken_;
}

void ListAutoScalingRulesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListAutoScalingRulesRequest::getRegionId()const
{
	return regionId_;
}

void ListAutoScalingRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListAutoScalingRulesRequest::getScalingRuleType()const
{
	return scalingRuleType_;
}

void ListAutoScalingRulesRequest::setScalingRuleType(const std::string& scalingRuleType)
{
	scalingRuleType_ = scalingRuleType;
	setParameter("ScalingRuleType", scalingRuleType);
}

std::string ListAutoScalingRulesRequest::getScalingRuleState()const
{
	return scalingRuleState_;
}

void ListAutoScalingRulesRequest::setScalingRuleState(const std::string& scalingRuleState)
{
	scalingRuleState_ = scalingRuleState;
	setParameter("ScalingRuleState", scalingRuleState);
}

std::string ListAutoScalingRulesRequest::getClusterId()const
{
	return clusterId_;
}

void ListAutoScalingRulesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListAutoScalingRulesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListAutoScalingRulesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string ListAutoScalingRulesRequest::getScalingPolicyId()const
{
	return scalingPolicyId_;
}

void ListAutoScalingRulesRequest::setScalingPolicyId(const std::string& scalingPolicyId)
{
	scalingPolicyId_ = scalingPolicyId;
	setParameter("ScalingPolicyId", scalingPolicyId);
}

