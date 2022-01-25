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

#include <alibabacloud/live/model/UpdateLiveStreamWatermarkRuleRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveStreamWatermarkRuleRequest;

UpdateLiveStreamWatermarkRuleRequest::UpdateLiveStreamWatermarkRuleRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateLiveStreamWatermarkRule")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateLiveStreamWatermarkRuleRequest::~UpdateLiveStreamWatermarkRuleRequest()
{}

std::string UpdateLiveStreamWatermarkRuleRequest::getDescription()const
{
	return description_;
}

void UpdateLiveStreamWatermarkRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long UpdateLiveStreamWatermarkRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateLiveStreamWatermarkRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateLiveStreamWatermarkRuleRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateLiveStreamWatermarkRuleRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string UpdateLiveStreamWatermarkRuleRequest::getName()const
{
	return name_;
}

void UpdateLiveStreamWatermarkRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateLiveStreamWatermarkRuleRequest::getRuleId()const
{
	return ruleId_;
}

void UpdateLiveStreamWatermarkRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

