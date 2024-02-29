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

#include <alibabacloud/sddp/model/DescribeDataObjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataObjectsResult::DescribeDataObjectsResult() :
	ServiceResult()
{}

DescribeDataObjectsResult::DescribeDataObjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataObjectsResult::~DescribeDataObjectsResult()
{}

void DescribeDataObjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Rule"];
	for (auto valueItemsRule : allItemsNode)
	{
		Rule itemsObject;
		if(!valueItemsRule["Name"].isNull())
			itemsObject.name = valueItemsRule["Name"].asString();
		if(!valueItemsRule["Id"].isNull())
			itemsObject.id = valueItemsRule["Id"].asString();
		if(!valueItemsRule["TemplateId"].isNull())
			itemsObject.templateId = std::stol(valueItemsRule["TemplateId"].asString());
		if(!valueItemsRule["ProductId"].isNull())
			itemsObject.productId = std::stol(valueItemsRule["ProductId"].asString());
		if(!valueItemsRule["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsRule["InstanceDescription"].asString();
		if(!valueItemsRule["ProductCode"].isNull())
			itemsObject.productCode = valueItemsRule["ProductCode"].asString();
		if(!valueItemsRule["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsRule["InstanceId"].asString();
		if(!valueItemsRule["LastScanTime"].isNull())
			itemsObject.lastScanTime = std::stol(valueItemsRule["LastScanTime"].asString());
		if(!valueItemsRule["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsRule["SensitiveCount"].asString());
		if(!valueItemsRule["ObjectType"].isNull())
			itemsObject.objectType = valueItemsRule["ObjectType"].asString();
		if(!valueItemsRule["Path"].isNull())
			itemsObject.path = valueItemsRule["Path"].asString();
		if(!valueItemsRule["RegionName"].isNull())
			itemsObject.regionName = valueItemsRule["RegionName"].asString();
		if(!valueItemsRule["ObjectFileCategory"].isNull())
			itemsObject.objectFileCategory = valueItemsRule["ObjectFileCategory"].asString();
		auto allModelTagsNode = valueItemsRule["ModelTags"]["modelTagsItem"];
		for (auto valueItemsRuleModelTagsmodelTagsItem : allModelTagsNode)
		{
			Rule::ModelTagsItem modelTagsObject;
			if(!valueItemsRuleModelTagsmodelTagsItem["Id"].isNull())
				modelTagsObject.id = std::stol(valueItemsRuleModelTagsmodelTagsItem["Id"].asString());
			if(!valueItemsRuleModelTagsmodelTagsItem["Name"].isNull())
				modelTagsObject.name = valueItemsRuleModelTagsmodelTagsItem["Name"].asString();
			itemsObject.modelTags.push_back(modelTagsObject);
		}
		auto allRuleListNode = valueItemsRule["RuleList"]["ruleListItem"];
		for (auto valueItemsRuleRuleListruleListItem : allRuleListNode)
		{
			Rule::RuleListItem ruleListObject;
			if(!valueItemsRuleRuleListruleListItem["RuleId"].isNull())
				ruleListObject.ruleId = std::stol(valueItemsRuleRuleListruleListItem["RuleId"].asString());
			if(!valueItemsRuleRuleListruleListItem["RuleName"].isNull())
				ruleListObject.ruleName = valueItemsRuleRuleListruleListItem["RuleName"].asString();
			if(!valueItemsRuleRuleListruleListItem["RiskLevelId"].isNull())
				ruleListObject.riskLevelId = std::stol(valueItemsRuleRuleListruleListItem["RiskLevelId"].asString());
			if(!valueItemsRuleRuleListruleListItem["RiskLevelName"].isNull())
				ruleListObject.riskLevelName = valueItemsRuleRuleListruleListItem["RiskLevelName"].asString();
			if(!valueItemsRuleRuleListruleListItem["RuleCount"].isNull())
				ruleListObject.ruleCount = std::stoi(valueItemsRuleRuleListruleListItem["RuleCount"].asString());
			itemsObject.ruleList.push_back(ruleListObject);
		}
		auto allCategories = value["Categories"]["categories"];
		for (auto value : allCategories)
			itemsObject.categories.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataObjectsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataObjectsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataObjectsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataObjectsResult::Rule> DescribeDataObjectsResult::getItems()const
{
	return items_;
}

