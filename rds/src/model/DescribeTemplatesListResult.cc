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

#include <alibabacloud/rds/model/DescribeTemplatesListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeTemplatesListResult::DescribeTemplatesListResult() :
	ServiceResult()
{}

DescribeTemplatesListResult::DescribeTemplatesListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTemplatesListResult::~DescribeTemplatesListResult()
{}

void DescribeTemplatesListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["Template"].isNull())
			itemsObject._template = value["Template"].asString();
		if(!value["TotalConsume"].isNull())
			itemsObject.totalConsume = std::stol(value["TotalConsume"].asString());
		if(!value["AvgConsume"].isNull())
			itemsObject.avgConsume = std::stof(value["AvgConsume"].asString());
		if(!value["TotalCounts"].isNull())
			itemsObject.totalCounts = std::stol(value["TotalCounts"].asString());
		if(!value["AvgScanRows"].isNull())
			itemsObject.avgScanRows = std::stof(value["AvgScanRows"].asString());
		if(!value["TotalScanRows"].isNull())
			itemsObject.totalScanRows = std::stol(value["TotalScanRows"].asString());
		if(!value["TotalUpdateRows"].isNull())
			itemsObject.totalUpdateRows = std::stol(value["TotalUpdateRows"].asString());
		if(!value["AvgUpdateRows"].isNull())
			itemsObject.avgUpdateRows = std::stof(value["AvgUpdateRows"].asString());
		if(!value["SqlType"].isNull())
			itemsObject.sqlType = value["SqlType"].asString();
		if(!value["TemplateHash"].isNull())
			itemsObject.templateHash = value["TemplateHash"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["PagingID"].isNull())
		pagingID_ = value["PagingID"].asString();
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["PageNumbers"].isNull())
		pageNumbers_ = std::stoi(value["PageNumbers"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());

}

int DescribeTemplatesListResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

int DescribeTemplatesListResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

std::string DescribeTemplatesListResult::getEndTime()const
{
	return endTime_;
}

int DescribeTemplatesListResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeTemplatesListResult::getStartTime()const
{
	return startTime_;
}

int DescribeTemplatesListResult::getTotalRecords()const
{
	return totalRecords_;
}

std::vector<DescribeTemplatesListResult::ItemsItem> DescribeTemplatesListResult::getItems()const
{
	return items_;
}

int DescribeTemplatesListResult::getPageNumbers()const
{
	return pageNumbers_;
}

std::string DescribeTemplatesListResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

std::string DescribeTemplatesListResult::getPagingID()const
{
	return pagingID_;
}

