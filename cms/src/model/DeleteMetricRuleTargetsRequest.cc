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

#include <alibabacloud/cms/model/DeleteMetricRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::DeleteMetricRuleTargetsRequest;

DeleteMetricRuleTargetsRequest::DeleteMetricRuleTargetsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DeleteMetricRuleTargets")
{
	setMethod(HttpRequest::Method::Put);
}

DeleteMetricRuleTargetsRequest::~DeleteMetricRuleTargetsRequest()
{}

std::vector<std::string> DeleteMetricRuleTargetsRequest::getTargetIds()const
{
	return targetIds_;
}

void DeleteMetricRuleTargetsRequest::setTargetIds(const std::vector<std::string>& targetIds)
{
	targetIds_ = targetIds;
	for(int dep1 = 0; dep1!= targetIds.size(); dep1++)
		setCoreParameter("TargetIds."+ std::to_string(dep1), targetIds.at(dep1));
}

std::string DeleteMetricRuleTargetsRequest::getCmsUserInner()const
{
	return cmsUserInner_;
}

void DeleteMetricRuleTargetsRequest::setCmsUserInner(const std::string& cmsUserInner)
{
	cmsUserInner_ = cmsUserInner;
	setCoreParameter("CmsUserInner", cmsUserInner);
}

std::string DeleteMetricRuleTargetsRequest::getRuleId()const
{
	return ruleId_;
}

void DeleteMetricRuleTargetsRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", ruleId);
}

