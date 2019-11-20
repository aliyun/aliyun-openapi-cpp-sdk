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
{
	setMethod(HttpRequest::Method::Put);
}

PutMetricRuleTargetsRequest::~PutMetricRuleTargetsRequest()
{}

std::string PutMetricRuleTargetsRequest::getRuleName()const
{
	return ruleName_;
}

void PutMetricRuleTargetsRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::vector<PutMetricRuleTargetsRequest::Targets> PutMetricRuleTargetsRequest::getTargets()const
{
	return targets_;
}

void PutMetricRuleTargetsRequest::setTargets(const std::vector<Targets>& targets)
{
	targets_ = targets;
	for(int dep1 = 0; dep1!= targets.size(); dep1++) {
		auto targetsObj = targets.at(dep1);
		std::string targetsObjStr = "Targets." + std::to_string(dep1);
		setCoreParameter(targetsObjStr + ".Level", targetsObj.level);
		setCoreParameter(targetsObjStr + ".Id", targetsObj.id);
		setCoreParameter(targetsObjStr + ".Arn", targetsObj.arn);
	}
}

std::string PutMetricRuleTargetsRequest::getCmsUserInner()const
{
	return cmsUserInner_;
}

void PutMetricRuleTargetsRequest::setCmsUserInner(const std::string& cmsUserInner)
{
	cmsUserInner_ = cmsUserInner;
	setCoreParameter("CmsUserInner", cmsUserInner);
}

std::string PutMetricRuleTargetsRequest::getActions()const
{
	return actions_;
}

void PutMetricRuleTargetsRequest::setActions(const std::string& actions)
{
	actions_ = actions;
	setCoreParameter("Actions", actions);
}

