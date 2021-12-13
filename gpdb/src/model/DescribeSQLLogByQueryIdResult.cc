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

#include <alibabacloud/gpdb/model/DescribeSQLLogByQueryIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeSQLLogByQueryIdResult::DescribeSQLLogByQueryIdResult() :
	ServiceResult()
{}

DescribeSQLLogByQueryIdResult::DescribeSQLLogByQueryIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogByQueryIdResult::~DescribeSQLLogByQueryIdResult()
{}

void DescribeSQLLogByQueryIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQLLog"];
	for (auto valueItemsSQLLog : allItemsNode)
	{
		SQLLog itemsObject;
		if(!valueItemsSQLLog["OperationClass"].isNull())
			itemsObject.operationClass = valueItemsSQLLog["OperationClass"].asString();
		if(!valueItemsSQLLog["ExecuteState"].isNull())
			itemsObject.executeState = valueItemsSQLLog["ExecuteState"].asString();
		if(!valueItemsSQLLog["ExecuteCost"].isNull())
			itemsObject.executeCost = std::stof(valueItemsSQLLog["ExecuteCost"].asString());
		if(!valueItemsSQLLog["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLLog["SQLText"].asString();
		if(!valueItemsSQLLog["SourcePort"].isNull())
			itemsObject.sourcePort = std::stoi(valueItemsSQLLog["SourcePort"].asString());
		if(!valueItemsSQLLog["DBRole"].isNull())
			itemsObject.dBRole = valueItemsSQLLog["DBRole"].asString();
		if(!valueItemsSQLLog["OperationType"].isNull())
			itemsObject.operationType = valueItemsSQLLog["OperationType"].asString();
		if(!valueItemsSQLLog["SourceIP"].isNull())
			itemsObject.sourceIP = valueItemsSQLLog["SourceIP"].asString();
		if(!valueItemsSQLLog["SQLPlan"].isNull())
			itemsObject.sQLPlan = valueItemsSQLLog["SQLPlan"].asString();
		if(!valueItemsSQLLog["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsSQLLog["ReturnRowCounts"].asString());
		if(!valueItemsSQLLog["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLLog["DBName"].asString();
		if(!valueItemsSQLLog["OperationExecuteTime"].isNull())
			itemsObject.operationExecuteTime = valueItemsSQLLog["OperationExecuteTime"].asString();
		if(!valueItemsSQLLog["ScanRowCounts"].isNull())
			itemsObject.scanRowCounts = std::stol(valueItemsSQLLog["ScanRowCounts"].asString());
		if(!valueItemsSQLLog["AccountName"].isNull())
			itemsObject.accountName = valueItemsSQLLog["AccountName"].asString();
		if(!valueItemsSQLLog["QueryId"].isNull())
			itemsObject.queryId = valueItemsSQLLog["QueryId"].asString();
		auto allSliceIds = value["SliceIds"]["SliceIDs"];
		for (auto value : allSliceIds)
			itemsObject.sliceIds.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeSQLLogByQueryIdResult::SQLLog> DescribeSQLLogByQueryIdResult::getItems()const
{
	return items_;
}

