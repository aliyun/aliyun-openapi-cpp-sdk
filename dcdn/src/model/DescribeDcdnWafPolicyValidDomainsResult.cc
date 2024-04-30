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

#include <alibabacloud/dcdn/model/DescribeDcdnWafPolicyValidDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafPolicyValidDomainsResult::DescribeDcdnWafPolicyValidDomainsResult() :
	ServiceResult()
{}

DescribeDcdnWafPolicyValidDomainsResult::DescribeDcdnWafPolicyValidDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafPolicyValidDomainsResult::~DescribeDcdnWafPolicyValidDomainsResult()
{}

void DescribeDcdnWafPolicyValidDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["DomainItem"];
	for (auto valueDomainsDomainItem : allDomainsNode)
	{
		DomainItem domainsObject;
		if(!valueDomainsDomainItem["PolicyName"].isNull())
			domainsObject.policyName = valueDomainsDomainItem["PolicyName"].asString();
		if(!valueDomainsDomainItem["PolicyId"].isNull())
			domainsObject.policyId = std::stol(valueDomainsDomainItem["PolicyId"].asString());
		if(!valueDomainsDomainItem["DomainName"].isNull())
			domainsObject.domainName = valueDomainsDomainItem["DomainName"].asString();
		if(!valueDomainsDomainItem["PolicyType"].isNull())
			domainsObject.policyType = valueDomainsDomainItem["PolicyType"].asString();
		auto allPoliciesNode = valueDomainsDomainItem["Policies"]["Policy"];
		for (auto valueDomainsDomainItemPoliciesPolicy : allPoliciesNode)
		{
			DomainItem::Policy policiesObject;
			if(!valueDomainsDomainItemPoliciesPolicy["Id"].isNull())
				policiesObject.id = std::stol(valueDomainsDomainItemPoliciesPolicy["Id"].asString());
			if(!valueDomainsDomainItemPoliciesPolicy["Name"].isNull())
				policiesObject.name = valueDomainsDomainItemPoliciesPolicy["Name"].asString();
			if(!valueDomainsDomainItemPoliciesPolicy["Type"].isNull())
				policiesObject.type = valueDomainsDomainItemPoliciesPolicy["Type"].asString();
			domainsObject.policies.push_back(policiesObject);
		}
		domains_.push_back(domainsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeDcdnWafPolicyValidDomainsResult::DomainItem> DescribeDcdnWafPolicyValidDomainsResult::getDomains()const
{
	return domains_;
}

int DescribeDcdnWafPolicyValidDomainsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDcdnWafPolicyValidDomainsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnWafPolicyValidDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

