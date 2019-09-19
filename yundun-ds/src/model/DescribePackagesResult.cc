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

#include <alibabacloud/yundun-ds/model/DescribePackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribePackagesResult::DescribePackagesResult() :
	ServiceResult()
{}

DescribePackagesResult::DescribePackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePackagesResult::~DescribePackagesResult()
{}

void DescribePackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Package"];
	for (auto valueItemsPackage : allItemsNode)
	{
		Package itemsObject;
		if(!valueItemsPackage["Id"].isNull())
			itemsObject.id = std::stol(valueItemsPackage["Id"].asString());
		if(!valueItemsPackage["Name"].isNull())
			itemsObject.name = valueItemsPackage["Name"].asString();
		if(!valueItemsPackage["Owner"].isNull())
			itemsObject.owner = valueItemsPackage["Owner"].asString();
		if(!valueItemsPackage["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsPackage["CreationTime"].asString());
		if(!valueItemsPackage["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsPackage["Sensitive"].asString() == "true";
		if(!valueItemsPackage["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsPackage["RiskLevelId"].asString());
		if(!valueItemsPackage["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsPackage["RiskLevelName"].asString();
		if(!valueItemsPackage["DepartName"].isNull())
			itemsObject.departName = valueItemsPackage["DepartName"].asString();
		if(!valueItemsPackage["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsPackage["TotalCount"].asString());
		if(!valueItemsPackage["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsPackage["SensitiveCount"].asString());
		if(!valueItemsPackage["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(valueItemsPackage["InstanceId"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribePackagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePackagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribePackagesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribePackagesResult::Package> DescribePackagesResult::getItems()const
{
	return items_;
}

