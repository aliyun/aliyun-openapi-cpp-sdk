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

#include <alibabacloud/trademark/model/QueryMonitorKeywordsRequest.h>

using AlibabaCloud::Trademark::Model::QueryMonitorKeywordsRequest;

QueryMonitorKeywordsRequest::QueryMonitorKeywordsRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryMonitorKeywords")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMonitorKeywordsRequest::~QueryMonitorKeywordsRequest()
{}

std::vector<std::string> QueryMonitorKeywordsRequest::getKeywords()const
{
	return keywords_;
}

void QueryMonitorKeywordsRequest::setKeywords(const std::vector<std::string>& keywords)
{
	keywords_ = keywords;
	for(int dep1 = 0; dep1!= keywords.size(); dep1++) {
		setParameter("Keywords."+ std::to_string(dep1), keywords.at(dep1));
	}
}

int QueryMonitorKeywordsRequest::getRuleType()const
{
	return ruleType_;
}

void QueryMonitorKeywordsRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", std::to_string(ruleType));
}

