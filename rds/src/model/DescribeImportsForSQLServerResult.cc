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

#include <alibabacloud/rds/model/DescribeImportsForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeImportsForSQLServerResult::DescribeImportsForSQLServerResult() :
	ServiceResult()
{}

DescribeImportsForSQLServerResult::DescribeImportsForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImportsForSQLServerResult::~DescribeImportsForSQLServerResult()
{}

void DescribeImportsForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["SQLServerImport"];
	for (auto value : allItems)
	{
		SQLServerImport itemsObject;
		if(!value["ImportId"].isNull())
			itemsObject.importId = std::stoi(value["ImportId"].asString());
		if(!value["FileName"].isNull())
			itemsObject.fileName = value["FileName"].asString();
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["ImportStatus"].isNull())
			itemsObject.importStatus = value["ImportStatus"].asString();
		if(!value["StartTime"].isNull())
			itemsObject.startTime = value["StartTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCounts"].isNull())
		totalRecordCounts_ = std::stoi(value["TotalRecordCounts"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["SQLItemsCounts"].isNull())
		sQLItemsCounts_ = std::stoi(value["SQLItemsCounts"].asString());

}

int DescribeImportsForSQLServerResult::getTotalRecordCounts()const
{
	return totalRecordCounts_;
}

int DescribeImportsForSQLServerResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeImportsForSQLServerResult::SQLServerImport> DescribeImportsForSQLServerResult::getItems()const
{
	return items_;
}

int DescribeImportsForSQLServerResult::getSQLItemsCounts()const
{
	return sQLItemsCounts_;
}

