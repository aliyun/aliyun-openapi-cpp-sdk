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
	auto allItems = value["Items"]["Column"];
	for (auto value : allItems)
	{
		Column itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(value["RiskLevelId"].asString());
		if(!value["Category"].isNull())
			itemsObject.category = std::stol(value["Category"].asString());
		if(!value["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(value["InstanceId"].asString());
		if(!value["FileId"].isNull())
			itemsObject.fileId = value["FileId"].asString();
		if(!value["RiskLevelName"].isNull())
			itemsObject.riskLevelName = std::stol(value["RiskLevelName"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
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

