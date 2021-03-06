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

#include <alibabacloud/airec/model/DescribeRuleRequest.h>

using AlibabaCloud::Airec::Model::DescribeRuleRequest;

DescribeRuleRequest::DescribeRuleRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/rules/[ruleId]");
	setMethod(HttpRequest::Method::Get);
}

DescribeRuleRequest::~DescribeRuleRequest()
{}

std::string DescribeRuleRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeRuleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeRuleRequest::getRuleType()const
{
	return ruleType_;
}

void DescribeRuleRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string DescribeRuleRequest::getSceneId()const
{
	return sceneId_;
}

void DescribeRuleRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string DescribeRuleRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

