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

#include <alibabacloud/cms/model/PutMetricRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::PutMetricRuleTargetsRequest;

PutMetricRuleTargetsRequest::PutMetricRuleTargetsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "PutMetricRuleTargets")
{}

PutMetricRuleTargetsRequest::~PutMetricRuleTargetsRequest()
{}

std::string PutMetricRuleTargetsRequest::getRuleName()const
{
	return ruleName_;
}

void PutMetricRuleTargetsRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", std::to_string(ruleName));
}

std::string PutMetricRuleTargetsRequest::getActions()const
{
	return actions_;
}

void PutMetricRuleTargetsRequest::setActions(const std::string& actions)
{
	actions_ = actions;
	setCoreParameter("Actions", std::to_string(actions));
}

std::vector<PutMetricRuleTargetsRequest::Targets> PutMetricRuleTargetsRequest::getTargets()const
{
	return targets_;
}

void PutMetricRuleTargetsRequest::setTargets(const std::vector<Targets>& targets)
{
	targets_ = targets;
	int i = 0;
	for(int i = 0; i!= targets.size(); i++)	{
		auto obj = targets.at(i);
		std::string str ="Targets."+ std::to_string(i);
		setCoreParameter(str + ".Level", std::to_string(obj.level));
		setCoreParameter(str + ".Id", std::to_string(obj.id));
		setCoreParameter(str + ".Arn", std::to_string(obj.arn));
	}
}

