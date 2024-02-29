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

#include <alibabacloud/sddp/model/DescribeDataObjectColumnDetailV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataObjectColumnDetailV2Result::DescribeDataObjectColumnDetailV2Result() :
	ServiceResult()
{}

DescribeDataObjectColumnDetailV2Result::DescribeDataObjectColumnDetailV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataObjectColumnDetailV2Result::~DescribeDataObjectColumnDetailV2Result()
{}

void DescribeDataObjectColumnDetailV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Rule"];
	for (auto valueItemsRule : allItemsNode)
	{
		Rule itemsObject;
		if(!valueItemsRule["ColumnName"].isNull())
			itemsObject.columnName = valueItemsRule["ColumnName"].asString();
		if(!valueItemsRule["DataType"].isNull())
			itemsObject.dataType = valueItemsRule["DataType"].asString();
		if(!valueItemsRule["ColumnComment"].isNull())
			itemsObject.columnComment = valueItemsRule["ColumnComment"].asString();
		if(!valueItemsRule["PrimaryKey"].isNull())
			itemsObject.primaryKey = valueItemsRule["PrimaryKey"].asString() == "true";
		if(!valueItemsRule["Id"].isNull())
			itemsObject.id = valueItemsRule["Id"].asString();
		if(!valueItemsRule["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsRule["RiskLevelId"].asString());
		if(!valueItemsRule["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsRule["RiskLevelName"].asString();
		if(!valueItemsRule["RuleId"].isNull())
			itemsObject.ruleId = std::stol(valueItemsRule["RuleId"].asString());
		if(!valueItemsRule["RuleName"].isNull())
			itemsObject.ruleName = valueItemsRule["RuleName"].asString();
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
		auto allCategories = value["Categories"]["Category"];
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

int DescribeDataObjectColumnDetailV2Result::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataObjectColumnDetailV2Result::getPageSize()const
{
	return pageSize_;
}

int DescribeDataObjectColumnDetailV2Result::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataObjectColumnDetailV2Result::Rule> DescribeDataObjectColumnDetailV2Result::getItems()const
{
	return items_;
}

