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

#include <alibabacloud/gpdb/model/DescribeSQLLogsV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeSQLLogsV2Result::DescribeSQLLogsV2Result() :
	ServiceResult()
{}

DescribeSQLLogsV2Result::DescribeSQLLogsV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogsV2Result::~DescribeSQLLogsV2Result()
{}

void DescribeSQLLogsV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["OperationClass"].isNull())
			itemsObject.operationClass = valueItemsItem["OperationClass"].asString();
		if(!valueItemsItem["ExecuteState"].isNull())
			itemsObject.executeState = valueItemsItem["ExecuteState"].asString();
		if(!valueItemsItem["ExecuteCost"].isNull())
			itemsObject.executeCost = std::stof(valueItemsItem["ExecuteCost"].asString());
		if(!valueItemsItem["SQLText"].isNull())
			itemsObject.sQLText = valueItemsItem["SQLText"].asString();
		if(!valueItemsItem["SourcePort"].isNull())
			itemsObject.sourcePort = std::stoi(valueItemsItem["SourcePort"].asString());
		if(!valueItemsItem["DBRole"].isNull())
			itemsObject.dBRole = valueItemsItem["DBRole"].asString();
		if(!valueItemsItem["OperationType"].isNull())
			itemsObject.operationType = valueItemsItem["OperationType"].asString();
		if(!valueItemsItem["SourceIP"].isNull())
			itemsObject.sourceIP = valueItemsItem["SourceIP"].asString();
		if(!valueItemsItem["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsItem["ReturnRowCounts"].asString());
		if(!valueItemsItem["DBName"].isNull())
			itemsObject.dBName = valueItemsItem["DBName"].asString();
		if(!valueItemsItem["OperationExecuteTime"].isNull())
			itemsObject.operationExecuteTime = valueItemsItem["OperationExecuteTime"].asString();
		if(!valueItemsItem["ScanRowCounts"].isNull())
			itemsObject.scanRowCounts = std::stol(valueItemsItem["ScanRowCounts"].asString());
		if(!valueItemsItem["AccountName"].isNull())
			itemsObject.accountName = valueItemsItem["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeSQLLogsV2Result::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLLogsV2Result::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLLogsV2Result::Item> DescribeSQLLogsV2Result::getItems()const
{
	return items_;
}

