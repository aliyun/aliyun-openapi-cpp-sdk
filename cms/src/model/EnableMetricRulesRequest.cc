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

#include <alibabacloud/cms/model/EnableMetricRulesRequest.h>

using AlibabaCloud::Cms::Model::EnableMetricRulesRequest;

EnableMetricRulesRequest::EnableMetricRulesRequest() :
	RpcServiceRequest("cms", "2019-01-01", "EnableMetricRules")
{
	setMethod(HttpRequest::Method::Post);
}

EnableMetricRulesRequest::~EnableMetricRulesRequest()
{}

std::vector<std::string> EnableMetricRulesRequest::getRuleId()const
{
	return ruleId_;
}

void EnableMetricRulesRequest::setRuleId(const std::vector<std::string>& ruleId)
{
	ruleId_ = ruleId;
	for(int dep1 = 0; dep1!= ruleId.size(); dep1++) {
		setParameter("RuleId."+ std::to_string(dep1), ruleId.at(dep1));
	}
}

