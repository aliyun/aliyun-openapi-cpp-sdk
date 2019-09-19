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

#include <alibabacloud/yundun-ds/model/DescribeRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeRulesResult::DescribeRulesResult() :
	ServiceResult()
{}

DescribeRulesResult::DescribeRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRulesResult::~DescribeRulesResult()
{}

void DescribeRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Rule"];
	for (auto valueItemsRule : allItemsNode)
	{
		Rule itemsObject;
		if(!valueItemsRule["Id"].isNull())
			itemsObject.id = std::stol(valueItemsRule["Id"].asString());
		if(!valueItemsRule["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsRule["GmtCreate"].asString());
		if(!valueItemsRule["GmtModified"].isNull())
			itemsObject.gmtModified = std::stol(valueItemsRule["GmtModified"].asString());
		if(!valueItemsRule["CustomType"].isNull())
			itemsObject.customType = std::stoi(valueItemsRule["CustomType"].asString());
		if(!valueItemsRule["Name"].isNull())
			itemsObject.name = valueItemsRule["Name"].asString();
		if(!valueItemsRule["Description"].isNull())
			itemsObject.description = valueItemsRule["Description"].asString();
		if(!valueItemsRule["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsRule["UserId"].asString());
		if(!valueItemsRule["LoginName"].isNull())
			itemsObject.loginName = valueItemsRule["LoginName"].asString();
		if(!valueItemsRule["DisplayName"].isNull())
			itemsObject.displayName = valueItemsRule["DisplayName"].asString();
		if(!valueItemsRule["Category"].isNull())
			itemsObject.category = std::stoi(valueItemsRule["Category"].asString());
		if(!valueItemsRule["CategoryName"].isNull())
			itemsObject.categoryName = valueItemsRule["CategoryName"].asString();
		if(!valueItemsRule["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsRule["Status"].asString());
		if(!valueItemsRule["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsRule["RiskLevelName"].asString();
		if(!valueItemsRule["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsRule["RiskLevelId"].asString());
		if(!valueItemsRule["Content"].isNull())
			itemsObject.content = valueItemsRule["Content"].asString();
		if(!valueItemsRule["DepartName"].isNull())
			itemsObject.departName = valueItemsRule["DepartName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRulesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeRulesResult::Rule> DescribeRulesResult::getItems()const
{
	return items_;
}

