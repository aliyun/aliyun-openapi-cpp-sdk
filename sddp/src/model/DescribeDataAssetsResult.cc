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

#include <alibabacloud/sddp/model/DescribeDataAssetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataAssetsResult::DescribeDataAssetsResult() :
	ServiceResult()
{}

DescribeDataAssetsResult::DescribeDataAssetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataAssetsResult::~DescribeDataAssetsResult()
{}

void DescribeDataAssetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Asset"];
	for (auto valueItemsAsset : allItemsNode)
	{
		Asset itemsObject;
		if(!valueItemsAsset["Acl"].isNull())
			itemsObject.acl = valueItemsAsset["Acl"].asString();
		if(!valueItemsAsset["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsAsset["CreationTime"].asString());
		if(!valueItemsAsset["DataType"].isNull())
			itemsObject.dataType = valueItemsAsset["DataType"].asString();
		if(!valueItemsAsset["Owner"].isNull())
			itemsObject.owner = valueItemsAsset["Owner"].asString();
		if(!valueItemsAsset["SensitiveRatio"].isNull())
			itemsObject.sensitiveRatio = valueItemsAsset["SensitiveRatio"].asString();
		if(!valueItemsAsset["Protection"].isNull())
			itemsObject.protection = valueItemsAsset["Protection"].asString() == "true";
		if(!valueItemsAsset["DepartName"].isNull())
			itemsObject.departName = valueItemsAsset["DepartName"].asString();
		if(!valueItemsAsset["Labelsec"].isNull())
			itemsObject.labelsec = valueItemsAsset["Labelsec"].asString() == "true";
		if(!valueItemsAsset["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsAsset["TotalCount"].asString());
		if(!valueItemsAsset["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsAsset["RiskLevelId"].asString());
		if(!valueItemsAsset["RuleName"].isNull())
			itemsObject.ruleName = valueItemsAsset["RuleName"].asString();
		if(!valueItemsAsset["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsAsset["Sensitive"].asString() == "true";
		if(!valueItemsAsset["ObjectKey"].isNull())
			itemsObject.objectKey = valueItemsAsset["ObjectKey"].asString();
		if(!valueItemsAsset["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsAsset["RiskLevelName"].asString();
		if(!valueItemsAsset["OdpsRiskLevelName"].isNull())
			itemsObject.odpsRiskLevelName = valueItemsAsset["OdpsRiskLevelName"].asString();
		if(!valueItemsAsset["ProductId"].isNull())
			itemsObject.productId = valueItemsAsset["ProductId"].asString();
		if(!valueItemsAsset["Name"].isNull())
			itemsObject.name = valueItemsAsset["Name"].asString();
		if(!valueItemsAsset["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsAsset["SensitiveCount"].asString());
		if(!valueItemsAsset["Id"].isNull())
			itemsObject.id = valueItemsAsset["Id"].asString();
		if(!valueItemsAsset["ProductCode"].isNull())
			itemsObject.productCode = valueItemsAsset["ProductCode"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataAssetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataAssetsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataAssetsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataAssetsResult::Asset> DescribeDataAssetsResult::getItems()const
{
	return items_;
}

