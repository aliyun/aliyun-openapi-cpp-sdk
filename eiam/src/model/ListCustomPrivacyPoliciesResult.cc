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

#include <alibabacloud/eiam/model/ListCustomPrivacyPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListCustomPrivacyPoliciesResult::ListCustomPrivacyPoliciesResult() :
	ServiceResult()
{}

ListCustomPrivacyPoliciesResult::ListCustomPrivacyPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomPrivacyPoliciesResult::~ListCustomPrivacyPoliciesResult()
{}

void ListCustomPrivacyPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomPrivacyPoliciesNode = value["CustomPrivacyPolicies"]["CustomPrivacyPolicy"];
	for (auto valueCustomPrivacyPoliciesCustomPrivacyPolicy : allCustomPrivacyPoliciesNode)
	{
		CustomPrivacyPolicy customPrivacyPoliciesObject;
		if(!valueCustomPrivacyPoliciesCustomPrivacyPolicy["InstanceId"].isNull())
			customPrivacyPoliciesObject.instanceId = valueCustomPrivacyPoliciesCustomPrivacyPolicy["InstanceId"].asString();
		if(!valueCustomPrivacyPoliciesCustomPrivacyPolicy["CustomPrivacyPolicyId"].isNull())
			customPrivacyPoliciesObject.customPrivacyPolicyId = valueCustomPrivacyPoliciesCustomPrivacyPolicy["CustomPrivacyPolicyId"].asString();
		if(!valueCustomPrivacyPoliciesCustomPrivacyPolicy["CustomPrivacyPolicyName"].isNull())
			customPrivacyPoliciesObject.customPrivacyPolicyName = valueCustomPrivacyPoliciesCustomPrivacyPolicy["CustomPrivacyPolicyName"].asString();
		if(!valueCustomPrivacyPoliciesCustomPrivacyPolicy["Status"].isNull())
			customPrivacyPoliciesObject.status = valueCustomPrivacyPoliciesCustomPrivacyPolicy["Status"].asString();
		if(!valueCustomPrivacyPoliciesCustomPrivacyPolicy["UserConsentType"].isNull())
			customPrivacyPoliciesObject.userConsentType = valueCustomPrivacyPoliciesCustomPrivacyPolicy["UserConsentType"].asString();
		if(!valueCustomPrivacyPoliciesCustomPrivacyPolicy["DefaultLanguageCode"].isNull())
			customPrivacyPoliciesObject.defaultLanguageCode = valueCustomPrivacyPoliciesCustomPrivacyPolicy["DefaultLanguageCode"].asString();
		customPrivacyPolicies_.push_back(customPrivacyPoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

std::vector<ListCustomPrivacyPoliciesResult::CustomPrivacyPolicy> ListCustomPrivacyPoliciesResult::getCustomPrivacyPolicies()const
{
	return customPrivacyPolicies_;
}

long ListCustomPrivacyPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListCustomPrivacyPoliciesResult::getPreviousToken()const
{
	return previousToken_;
}

std::string ListCustomPrivacyPoliciesResult::getNextToken()const
{
	return nextToken_;
}

long ListCustomPrivacyPoliciesResult::getMaxResults()const
{
	return maxResults_;
}

