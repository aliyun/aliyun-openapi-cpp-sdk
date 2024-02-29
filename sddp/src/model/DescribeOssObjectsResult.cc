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

#include <alibabacloud/sddp/model/DescribeOssObjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeOssObjectsResult::DescribeOssObjectsResult() :
	ServiceResult()
{}

DescribeOssObjectsResult::DescribeOssObjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssObjectsResult::~DescribeOssObjectsResult()
{}

void DescribeOssObjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Column"];
	for (auto valueItemsColumn : allItemsNode)
	{
		Column itemsObject;
		if(!valueItemsColumn["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(valueItemsColumn["InstanceId"].asString());
		if(!valueItemsColumn["CategoryName"].isNull())
			itemsObject.categoryName = valueItemsColumn["CategoryName"].asString();
		if(!valueItemsColumn["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsColumn["RiskLevelId"].asString());
		if(!valueItemsColumn["RegionId"].isNull())
			itemsObject.regionId = valueItemsColumn["RegionId"].asString();
		if(!valueItemsColumn["FileId"].isNull())
			itemsObject.fileId = valueItemsColumn["FileId"].asString();
		if(!valueItemsColumn["LastScanTime"].isNull())
			itemsObject.lastScanTime = std::stol(valueItemsColumn["LastScanTime"].asString());
		if(!valueItemsColumn["RegionName"].isNull())
			itemsObject.regionName = valueItemsColumn["RegionName"].asString();
		if(!valueItemsColumn["Size"].isNull())
			itemsObject.size = std::stol(valueItemsColumn["Size"].asString());
		if(!valueItemsColumn["BucketName"].isNull())
			itemsObject.bucketName = valueItemsColumn["BucketName"].asString();
		if(!valueItemsColumn["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsColumn["RiskLevelName"].asString();
		if(!valueItemsColumn["Category"].isNull())
			itemsObject.category = std::stol(valueItemsColumn["Category"].asString());
		if(!valueItemsColumn["Name"].isNull())
			itemsObject.name = valueItemsColumn["Name"].asString();
		if(!valueItemsColumn["RuleCount"].isNull())
			itemsObject.ruleCount = std::stoi(valueItemsColumn["RuleCount"].asString());
		if(!valueItemsColumn["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsColumn["SensitiveCount"].asString());
		if(!valueItemsColumn["Id"].isNull())
			itemsObject.id = valueItemsColumn["Id"].asString();
		if(!valueItemsColumn["FileCategoryCode"].isNull())
			itemsObject.fileCategoryCode = std::stol(valueItemsColumn["FileCategoryCode"].asString());
		if(!valueItemsColumn["FileCategoryName"].isNull())
			itemsObject.fileCategoryName = valueItemsColumn["FileCategoryName"].asString();
		auto allRuleListNode = valueItemsColumn["RuleList"]["Rule"];
		for (auto valueItemsColumnRuleListRule : allRuleListNode)
		{
			Column::Rule ruleListObject;
			if(!valueItemsColumnRuleListRule["Name"].isNull())
				ruleListObject.name = valueItemsColumnRuleListRule["Name"].asString();
			if(!valueItemsColumnRuleListRule["RiskLevelId"].isNull())
				ruleListObject.riskLevelId = std::stol(valueItemsColumnRuleListRule["RiskLevelId"].asString());
			if(!valueItemsColumnRuleListRule["Count"].isNull())
				ruleListObject.count = std::stol(valueItemsColumnRuleListRule["Count"].asString());
			itemsObject.ruleList.push_back(ruleListObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeOssObjectsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeOssObjectsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOssObjectsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeOssObjectsResult::Column> DescribeOssObjectsResult::getItems()const
{
	return items_;
}

