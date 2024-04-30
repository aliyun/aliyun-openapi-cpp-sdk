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

#include <alibabacloud/dcdn/model/DescribeDcdnWafGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafGroupsResult::DescribeDcdnWafGroupsResult() :
	ServiceResult()
{}

DescribeDcdnWafGroupsResult::DescribeDcdnWafGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafGroupsResult::~DescribeDcdnWafGroupsResult()
{}

void DescribeDcdnWafGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWafGroupsNode = value["WafGroups"]["WafGroupItem"];
	for (auto valueWafGroupsWafGroupItem : allWafGroupsNode)
	{
		WafGroupItem wafGroupsObject;
		if(!valueWafGroupsWafGroupItem["GmtModified"].isNull())
			wafGroupsObject.gmtModified = valueWafGroupsWafGroupItem["GmtModified"].asString();
		if(!valueWafGroupsWafGroupItem["Id"].isNull())
			wafGroupsObject.id = std::stol(valueWafGroupsWafGroupItem["Id"].asString());
		if(!valueWafGroupsWafGroupItem["Name"].isNull())
			wafGroupsObject.name = valueWafGroupsWafGroupItem["Name"].asString();
		if(!valueWafGroupsWafGroupItem["RuleCount"].isNull())
			wafGroupsObject.ruleCount = std::stoi(valueWafGroupsWafGroupItem["RuleCount"].asString());
		if(!valueWafGroupsWafGroupItem["TemplateId"].isNull())
			wafGroupsObject.templateId = std::stol(valueWafGroupsWafGroupItem["TemplateId"].asString());
		if(!valueWafGroupsWafGroupItem["Subscribe"].isNull())
			wafGroupsObject.subscribe = valueWafGroupsWafGroupItem["Subscribe"].asString();
		auto allPoliciesNode = valueWafGroupsWafGroupItem["Policies"]["PolicyItem"];
		for (auto valueWafGroupsWafGroupItemPoliciesPolicyItem : allPoliciesNode)
		{
			WafGroupItem::PolicyItem policiesObject;
			if(!valueWafGroupsWafGroupItemPoliciesPolicyItem["Id"].isNull())
				policiesObject.id = std::stol(valueWafGroupsWafGroupItemPoliciesPolicyItem["Id"].asString());
			if(!valueWafGroupsWafGroupItemPoliciesPolicyItem["Name"].isNull())
				policiesObject.name = valueWafGroupsWafGroupItemPoliciesPolicyItem["Name"].asString();
			if(!valueWafGroupsWafGroupItemPoliciesPolicyItem["Type"].isNull())
				policiesObject.type = valueWafGroupsWafGroupItemPoliciesPolicyItem["Type"].asString();
			wafGroupsObject.policies.push_back(policiesObject);
		}
		wafGroups_.push_back(wafGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeDcdnWafGroupsResult::WafGroupItem> DescribeDcdnWafGroupsResult::getWafGroups()const
{
	return wafGroups_;
}

int DescribeDcdnWafGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDcdnWafGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnWafGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

