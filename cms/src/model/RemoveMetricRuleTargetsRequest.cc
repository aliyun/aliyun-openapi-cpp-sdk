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

#include <alibabacloud/cms/model/RemoveMetricRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::RemoveMetricRuleTargetsRequest;

RemoveMetricRuleTargetsRequest::RemoveMetricRuleTargetsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "RemoveMetricRuleTargets")
{}

RemoveMetricRuleTargetsRequest::~RemoveMetricRuleTargetsRequest()
{}

std::vector<std::string> RemoveMetricRuleTargetsRequest::getContactGroupTargetIds()const
{
	return contactGroupTargetIds_;
}

void RemoveMetricRuleTargetsRequest::setContactGroupTargetIds(const std::vector<std::string>& contactGroupTargetIds)
{
	contactGroupTargetIds_ = contactGroupTargetIds;
	for(int i = 0; i!= contactGroupTargetIds.size(); i++)
		setCoreParameter("ContactGroupTargetIds."+ std::to_string(i), std::to_string(contactGroupTargetIds.at(i)));
}

std::vector<std::string> RemoveMetricRuleTargetsRequest::getTargetIds()const
{
	return targetIds_;
}

void RemoveMetricRuleTargetsRequest::setTargetIds(const std::vector<std::string>& targetIds)
{
	targetIds_ = targetIds;
	for(int i = 0; i!= targetIds.size(); i++)
		setCoreParameter("TargetIds."+ std::to_string(i), std::to_string(targetIds.at(i)));
}

std::vector<std::string> RemoveMetricRuleTargetsRequest::getWebhookTargetIds()const
{
	return webhookTargetIds_;
}

void RemoveMetricRuleTargetsRequest::setWebhookTargetIds(const std::vector<std::string>& webhookTargetIds)
{
	webhookTargetIds_ = webhookTargetIds;
	for(int i = 0; i!= webhookTargetIds.size(); i++)
		setCoreParameter("WebhookTargetIds."+ std::to_string(i), std::to_string(webhookTargetIds.at(i)));
}

std::string RemoveMetricRuleTargetsRequest::getRuleName()const
{
	return ruleName_;
}

void RemoveMetricRuleTargetsRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", std::to_string(ruleName));
}

