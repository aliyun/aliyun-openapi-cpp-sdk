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

#include <alibabacloud/sddp/model/DescribeDataLimitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataLimitsResult::DescribeDataLimitsResult() :
	ServiceResult()
{}

DescribeDataLimitsResult::DescribeDataLimitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLimitsResult::~DescribeDataLimitsResult()
{}

void DescribeDataLimitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DataLimit"];
	for (auto valueItemsDataLimit : allItemsNode)
	{
		DataLimit itemsObject;
		if(!valueItemsDataLimit["RegionId"].isNull())
			itemsObject.regionId = valueItemsDataLimit["RegionId"].asString();
		if(!valueItemsDataLimit["LocalName"].isNull())
			itemsObject.localName = valueItemsDataLimit["LocalName"].asString();
		if(!valueItemsDataLimit["ParentId"].isNull())
			itemsObject.parentId = valueItemsDataLimit["ParentId"].asString();
		if(!valueItemsDataLimit["Id"].isNull())
			itemsObject.id = std::stol(valueItemsDataLimit["Id"].asString());
		if(!valueItemsDataLimit["UserName"].isNull())
			itemsObject.userName = valueItemsDataLimit["UserName"].asString();
		if(!valueItemsDataLimit["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsDataLimit["GmtCreate"].asString());
		if(!valueItemsDataLimit["Connector"].isNull())
			itemsObject.connector = valueItemsDataLimit["Connector"].asString();
		if(!valueItemsDataLimit["CheckStatus"].isNull())
			itemsObject.checkStatus = std::stoi(valueItemsDataLimit["CheckStatus"].asString());
		if(!valueItemsDataLimit["CheckStatusName"].isNull())
			itemsObject.checkStatusName = valueItemsDataLimit["CheckStatusName"].asString();
		if(!valueItemsDataLimit["ResourceType"].isNull())
			itemsObject.resourceType = std::stol(valueItemsDataLimit["ResourceType"].asString());
		if(!valueItemsDataLimit["ResourceTypeCode"].isNull())
			itemsObject.resourceTypeCode = valueItemsDataLimit["ResourceTypeCode"].asString();
		if(!valueItemsDataLimit["AuditStatus"].isNull())
			itemsObject.auditStatus = std::stoi(valueItemsDataLimit["AuditStatus"].asString());
		if(!valueItemsDataLimit["LogStoreDay"].isNull())
			itemsObject.logStoreDay = std::stoi(valueItemsDataLimit["LogStoreDay"].asString());
		if(!valueItemsDataLimit["Enable"].isNull())
			itemsObject.enable = std::stoi(valueItemsDataLimit["Enable"].asString());
		if(!valueItemsDataLimit["AutoScan"].isNull())
			itemsObject.autoScan = std::stoi(valueItemsDataLimit["AutoScan"].asString());
		if(!valueItemsDataLimit["EngineType"].isNull())
			itemsObject.engineType = valueItemsDataLimit["EngineType"].asString();
		if(!valueItemsDataLimit["ProcessStatus"].isNull())
			itemsObject.processStatus = std::stoi(valueItemsDataLimit["ProcessStatus"].asString());
		if(!valueItemsDataLimit["ProcessTotalCount"].isNull())
			itemsObject.processTotalCount = std::stoi(valueItemsDataLimit["ProcessTotalCount"].asString());
		if(!valueItemsDataLimit["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsDataLimit["TotalCount"].asString());
		if(!valueItemsDataLimit["LastFinishedTime"].isNull())
			itemsObject.lastFinishedTime = std::stol(valueItemsDataLimit["LastFinishedTime"].asString());
		if(!valueItemsDataLimit["ErrorCode"].isNull())
			itemsObject.errorCode = valueItemsDataLimit["ErrorCode"].asString();
		if(!valueItemsDataLimit["ErrorMessage"].isNull())
			itemsObject.errorMessage = valueItemsDataLimit["ErrorMessage"].asString();
		if(!valueItemsDataLimit["Port"].isNull())
			itemsObject.port = std::stoi(valueItemsDataLimit["Port"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataLimitsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataLimitsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataLimitsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataLimitsResult::DataLimit> DescribeDataLimitsResult::getItems()const
{
	return items_;
}

