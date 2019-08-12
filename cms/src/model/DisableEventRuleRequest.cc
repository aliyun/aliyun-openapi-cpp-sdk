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

#include <alibabacloud/cms/model/DisableEventRuleRequest.h>

using AlibabaCloud::Cms::Model::DisableEventRuleRequest;

DisableEventRuleRequest::DisableEventRuleRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DisableEventRule")
{}

DisableEventRuleRequest::~DisableEventRuleRequest()
{}

std::vector<std::string> DisableEventRuleRequest::getRuleNames()const
{
	return ruleNames_;
}

void DisableEventRuleRequest::setRuleNames(const std::vector<std::string>& ruleNames)
{
	ruleNames_ = ruleNames;
	for(int i = 0; i!= ruleNames.size(); i++)
		setCoreParameter("RuleNames."+ std::to_string(i), std::to_string(ruleNames.at(i)));
}

std::string DisableEventRuleRequest::getRuleName()const
{
	return ruleName_;
}

void DisableEventRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", std::to_string(ruleName));
}

