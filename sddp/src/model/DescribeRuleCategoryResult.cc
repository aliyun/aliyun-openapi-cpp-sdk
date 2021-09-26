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

#include <alibabacloud/sddp/model/DescribeRuleCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeRuleCategoryResult::DescribeRuleCategoryResult() :
	ServiceResult()
{}

DescribeRuleCategoryResult::DescribeRuleCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleCategoryResult::~DescribeRuleCategoryResult()
{}

void DescribeRuleCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleListNode = value["RuleList"]["Rule"];
	for (auto valueRuleListRule : allRuleListNode)
	{
		Rule ruleListObject;
		if(!valueRuleListRule["GroupId"].isNull())
			ruleListObject.groupId = valueRuleListRule["GroupId"].asString();
		if(!valueRuleListRule["Name"].isNull())
			ruleListObject.name = valueRuleListRule["Name"].asString();
		auto allChildListNode = valueRuleListRule["ChildList"]["ChildRule"];
		for (auto valueRuleListRuleChildListChildRule : allChildListNode)
		{
			Rule::ChildRule childListObject;
			if(!valueRuleListRuleChildListChildRule["Id"].isNull())
				childListObject.id = std::stol(valueRuleListRuleChildListChildRule["Id"].asString());
			if(!valueRuleListRuleChildListChildRule["GroupId"].isNull())
				childListObject.groupId = valueRuleListRuleChildListChildRule["GroupId"].asString();
			if(!valueRuleListRuleChildListChildRule["Name"].isNull())
				childListObject.name = valueRuleListRuleChildListChildRule["Name"].asString();
			if(!valueRuleListRuleChildListChildRule["ParentId"].isNull())
				childListObject.parentId = valueRuleListRuleChildListChildRule["ParentId"].asString();
			ruleListObject.childList.push_back(childListObject);
		}
		ruleList_.push_back(ruleListObject);
	}
	auto allProductListNode = value["ProductList"]["Product"];
	for (auto valueProductListProduct : allProductListNode)
	{
		Product productListObject;
		if(!valueProductListProduct["value"].isNull())
			productListObject.value = valueProductListProduct["value"].asString();
		if(!valueProductListProduct["label"].isNull())
			productListObject.label = valueProductListProduct["label"].asString();
		productList_.push_back(productListObject);
	}

}

std::vector<DescribeRuleCategoryResult::Product> DescribeRuleCategoryResult::getProductList()const
{
	return productList_;
}

std::vector<DescribeRuleCategoryResult::Rule> DescribeRuleCategoryResult::getRuleList()const
{
	return ruleList_;
}

