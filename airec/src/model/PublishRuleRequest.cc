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

#include <alibabacloud/airec/model/PublishRuleRequest.h>

using AlibabaCloud::Airec::Model::PublishRuleRequest;

PublishRuleRequest::PublishRuleRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/rules/[ruleId]/actions/publish");
	setMethod(HttpRequest::Method::Put);
}

PublishRuleRequest::~PublishRuleRequest()
{}

std::string PublishRuleRequest::getInstanceId()const
{
	return instanceId_;
}

void PublishRuleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string PublishRuleRequest::getRuleType()const
{
	return ruleType_;
}

void PublishRuleRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string PublishRuleRequest::getSceneId()const
{
	return sceneId_;
}

void PublishRuleRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string PublishRuleRequest::getRuleId()const
{
	return ruleId_;
}

void PublishRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

