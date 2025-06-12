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

#include <alibabacloud/clickhouse/model/DescribeProcessListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeProcessListResult::DescribeProcessListResult() :
	ServiceResult()
{}

DescribeProcessListResult::DescribeProcessListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProcessListResult::~DescribeProcessListResult()
{}

void DescribeProcessListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto processListNode = value["ProcessList"];
	if(!processListNode["Rows"].isNull())
		processList_.rows = processListNode["Rows"].asString();
	if(!processListNode["RowsBeforeLimitAtLeast"].isNull())
		processList_.rowsBeforeLimitAtLeast = processListNode["RowsBeforeLimitAtLeast"].asString();
	auto allTableSchemaNode = processListNode["TableSchema"]["ResultSet"];
	for (auto processListNodeTableSchemaResultSet : allTableSchemaNode)
	{
		ProcessList::ResultSet resultSetObject;
		if(!processListNodeTableSchemaResultSet["Type"].isNull())
			resultSetObject.type = processListNodeTableSchemaResultSet["Type"].asString();
		if(!processListNodeTableSchemaResultSet["Name"].isNull())
			resultSetObject.name = processListNodeTableSchemaResultSet["Name"].asString();
		processList_.tableSchema.push_back(resultSetObject);
	}
	auto allDataNode = processListNode["Data"]["ResultSet"];
	for (auto processListNodeDataResultSet : allDataNode)
	{
		ProcessList::ResultSet1 resultSet1Object;
		if(!processListNodeDataResultSet["QueryStartTime"].isNull())
			resultSet1Object.queryStartTime = processListNodeDataResultSet["QueryStartTime"].asString();
		if(!processListNodeDataResultSet["Query"].isNull())
			resultSet1Object.query = processListNodeDataResultSet["Query"].asString();
		if(!processListNodeDataResultSet["InitialAddress"].isNull())
			resultSet1Object.initialAddress = processListNodeDataResultSet["InitialAddress"].asString();
		if(!processListNodeDataResultSet["InitialQueryId"].isNull())
			resultSet1Object.initialQueryId = processListNodeDataResultSet["InitialQueryId"].asString();
		if(!processListNodeDataResultSet["InitialUser"].isNull())
			resultSet1Object.initialUser = processListNodeDataResultSet["InitialUser"].asString();
		if(!processListNodeDataResultSet["QueryDurationMs"].isNull())
			resultSet1Object.queryDurationMs = processListNodeDataResultSet["QueryDurationMs"].asString();
		processList_.data.push_back(resultSet1Object);
	}
	auto statisticsNode = processListNode["Statistics"];
	if(!statisticsNode["RowsRead"].isNull())
		processList_.statistics.rowsRead = std::stoi(statisticsNode["RowsRead"].asString());
	if(!statisticsNode["ElapsedTime"].isNull())
		processList_.statistics.elapsedTime = std::stof(statisticsNode["ElapsedTime"].asString());
	if(!statisticsNode["BytesRead"].isNull())
		processList_.statistics.bytesRead = std::stoi(statisticsNode["BytesRead"].asString());

}

DescribeProcessListResult::ProcessList DescribeProcessListResult::getProcessList()const
{
	return processList_;
}

