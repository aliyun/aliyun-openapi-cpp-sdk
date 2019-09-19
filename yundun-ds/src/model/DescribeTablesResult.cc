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

#include <alibabacloud/yundun-ds/model/DescribeTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeTablesResult::DescribeTablesResult() :
	ServiceResult()
{}

DescribeTablesResult::DescribeTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTablesResult::~DescribeTablesResult()
{}

void DescribeTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Table"];
	for (auto valueItemsTable : allItemsNode)
	{
		Table itemsObject;
		if(!valueItemsTable["Id"].isNull())
			itemsObject.id = std::stol(valueItemsTable["Id"].asString());
		if(!valueItemsTable["Name"].isNull())
			itemsObject.name = valueItemsTable["Name"].asString();
		if(!valueItemsTable["Owner"].isNull())
			itemsObject.owner = valueItemsTable["Owner"].asString();
		if(!valueItemsTable["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsTable["CreationTime"].asString());
		if(!valueItemsTable["ProductId"].isNull())
			itemsObject.productId = valueItemsTable["ProductId"].asString();
		if(!valueItemsTable["ProductCode"].isNull())
			itemsObject.productCode = valueItemsTable["ProductCode"].asString();
		if(!valueItemsTable["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsTable["Sensitive"].asString() == "true";
		if(!valueItemsTable["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsTable["RiskLevelId"].asString());
		if(!valueItemsTable["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsTable["RiskLevelName"].asString();
		if(!valueItemsTable["DepartName"].isNull())
			itemsObject.departName = valueItemsTable["DepartName"].asString();
		if(!valueItemsTable["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsTable["TotalCount"].asString());
		if(!valueItemsTable["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsTable["SensitiveCount"].asString());
		if(!valueItemsTable["SensitiveRatio"].isNull())
			itemsObject.sensitiveRatio = valueItemsTable["SensitiveRatio"].asString();
		if(!valueItemsTable["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(valueItemsTable["InstanceId"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTablesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTablesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeTablesResult::Table> DescribeTablesResult::getItems()const
{
	return items_;
}

