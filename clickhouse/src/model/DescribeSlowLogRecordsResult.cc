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

#include <alibabacloud/clickhouse/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeSlowLogRecordsResult::DescribeSlowLogRecordsResult() :
	ServiceResult()
{}

DescribeSlowLogRecordsResult::DescribeSlowLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowLogRecordsResult::~DescribeSlowLogRecordsResult()
{}

void DescribeSlowLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto slowLogRecordsNode = value["SlowLogRecords"];
	if(!slowLogRecordsNode["Rows"].isNull())
		slowLogRecords_.rows = slowLogRecordsNode["Rows"].asString();
	if(!slowLogRecordsNode["RowsBeforeLimitAtLeast"].isNull())
		slowLogRecords_.rowsBeforeLimitAtLeast = slowLogRecordsNode["RowsBeforeLimitAtLeast"].asString();
	auto allTableSchemaNode = slowLogRecordsNode["TableSchema"]["ResultSet"];
	for (auto slowLogRecordsNodeTableSchemaResultSet : allTableSchemaNode)
	{
		SlowLogRecords::ResultSet resultSetObject;
		if(!slowLogRecordsNodeTableSchemaResultSet["Type"].isNull())
			resultSetObject.type = slowLogRecordsNodeTableSchemaResultSet["Type"].asString();
		if(!slowLogRecordsNodeTableSchemaResultSet["Name"].isNull())
			resultSetObject.name = slowLogRecordsNodeTableSchemaResultSet["Name"].asString();
		slowLogRecords_.tableSchema.push_back(resultSetObject);
	}
	auto allDataNode = slowLogRecordsNode["Data"]["ResultSet"];
	for (auto slowLogRecordsNodeDataResultSet : allDataNode)
	{
		SlowLogRecords::ResultSet1 resultSet1Object;
		if(!slowLogRecordsNodeDataResultSet["Type"].isNull())
			resultSet1Object.type = slowLogRecordsNodeDataResultSet["Type"].asString();
		if(!slowLogRecordsNodeDataResultSet["QueryStartTime"].isNull())
			resultSet1Object.queryStartTime = slowLogRecordsNodeDataResultSet["QueryStartTime"].asString();
		if(!slowLogRecordsNodeDataResultSet["Query"].isNull())
			resultSet1Object.query = slowLogRecordsNodeDataResultSet["Query"].asString();
		if(!slowLogRecordsNodeDataResultSet["ReadRows"].isNull())
			resultSet1Object.readRows = slowLogRecordsNodeDataResultSet["ReadRows"].asString();
		if(!slowLogRecordsNodeDataResultSet["InitialAddress"].isNull())
			resultSet1Object.initialAddress = slowLogRecordsNodeDataResultSet["InitialAddress"].asString();
		if(!slowLogRecordsNodeDataResultSet["MemoryUsage"].isNull())
			resultSet1Object.memoryUsage = slowLogRecordsNodeDataResultSet["MemoryUsage"].asString();
		if(!slowLogRecordsNodeDataResultSet["InitialUser"].isNull())
			resultSet1Object.initialUser = slowLogRecordsNodeDataResultSet["InitialUser"].asString();
		if(!slowLogRecordsNodeDataResultSet["InitialQueryId"].isNull())
			resultSet1Object.initialQueryId = slowLogRecordsNodeDataResultSet["InitialQueryId"].asString();
		if(!slowLogRecordsNodeDataResultSet["ReadBytes"].isNull())
			resultSet1Object.readBytes = slowLogRecordsNodeDataResultSet["ReadBytes"].asString();
		if(!slowLogRecordsNodeDataResultSet["QueryDurationMs"].isNull())
			resultSet1Object.queryDurationMs = slowLogRecordsNodeDataResultSet["QueryDurationMs"].asString();
		if(!slowLogRecordsNodeDataResultSet["ResultBytes"].isNull())
			resultSet1Object.resultBytes = slowLogRecordsNodeDataResultSet["ResultBytes"].asString();
		slowLogRecords_.data.push_back(resultSet1Object);
	}
	auto statisticsNode = slowLogRecordsNode["Statistics"];
	if(!statisticsNode["RowsRead"].isNull())
		slowLogRecords_.statistics.rowsRead = std::stoi(statisticsNode["RowsRead"].asString());
	if(!statisticsNode["ElapsedTime"].isNull())
		slowLogRecords_.statistics.elapsedTime = std::stof(statisticsNode["ElapsedTime"].asString());
	if(!statisticsNode["BytesRead"].isNull())
		slowLogRecords_.statistics.bytesRead = std::stoi(statisticsNode["BytesRead"].asString());

}

DescribeSlowLogRecordsResult::SlowLogRecords DescribeSlowLogRecordsResult::getSlowLogRecords()const
{
	return slowLogRecords_;
}

