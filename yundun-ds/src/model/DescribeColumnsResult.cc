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

#include <alibabacloud/yundun-ds/model/DescribeColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeColumnsResult::DescribeColumnsResult() :
	ServiceResult()
{}

DescribeColumnsResult::DescribeColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColumnsResult::~DescribeColumnsResult()
{}

void DescribeColumnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Column"];
	for (auto valueItemsColumn : allItemsNode)
	{
		Column itemsObject;
		if(!valueItemsColumn["Id"].isNull())
			itemsObject.id = std::stol(valueItemsColumn["Id"].asString());
		if(!valueItemsColumn["Name"].isNull())
			itemsObject.name = valueItemsColumn["Name"].asString();
		if(!valueItemsColumn["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(valueItemsColumn["InstanceId"].asString());
		if(!valueItemsColumn["TableId"].isNull())
			itemsObject.tableId = std::stol(valueItemsColumn["TableId"].asString());
		if(!valueItemsColumn["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsColumn["CreationTime"].asString());
		if(!valueItemsColumn["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsColumn["Sensitive"].asString() == "true";
		if(!valueItemsColumn["ProductCode"].isNull())
			itemsObject.productCode = valueItemsColumn["ProductCode"].asString();
		if(!valueItemsColumn["DataType"].isNull())
			itemsObject.dataType = valueItemsColumn["DataType"].asString();
		if(!valueItemsColumn["OdpsRiskLevelValue"].isNull())
			itemsObject.odpsRiskLevelValue = std::stoi(valueItemsColumn["OdpsRiskLevelValue"].asString());
		if(!valueItemsColumn["OdpsRiskLevelName"].isNull())
			itemsObject.odpsRiskLevelName = valueItemsColumn["OdpsRiskLevelName"].asString();
		if(!valueItemsColumn["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsColumn["RiskLevelId"].asString());
		if(!valueItemsColumn["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsColumn["RiskLevelName"].asString();
		if(!valueItemsColumn["RuleId"].isNull())
			itemsObject.ruleId = std::stol(valueItemsColumn["RuleId"].asString());
		if(!valueItemsColumn["RuleName"].isNull())
			itemsObject.ruleName = valueItemsColumn["RuleName"].asString();
		if(!valueItemsColumn["DepartName"].isNull())
			itemsObject.departName = valueItemsColumn["DepartName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeColumnsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeColumnsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeColumnsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeColumnsResult::Column> DescribeColumnsResult::getItems()const
{
	return items_;
}

