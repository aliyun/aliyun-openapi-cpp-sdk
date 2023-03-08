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

#include <alibabacloud/adb/model/DescribeAdbMySqlColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeAdbMySqlColumnsResult::DescribeAdbMySqlColumnsResult() :
	ServiceResult()
{}

DescribeAdbMySqlColumnsResult::DescribeAdbMySqlColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAdbMySqlColumnsResult::~DescribeAdbMySqlColumnsResult()
{}

void DescribeAdbMySqlColumnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allColumnsNode = value["Columns"]["Column"];
	for (auto valueColumnsColumn : allColumnsNode)
	{
		Column columnsObject;
		if(!valueColumnsColumn["Type"].isNull())
			columnsObject.type = valueColumnsColumn["Type"].asString();
		if(!valueColumnsColumn["Name"].isNull())
			columnsObject.name = valueColumnsColumn["Name"].asString();
		if(!valueColumnsColumn["Comment"].isNull())
			columnsObject.comment = valueColumnsColumn["Comment"].asString();
		columns_.push_back(columnsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Schema"].isNull())
		schema_ = value["Schema"].asString();
	if(!value["TableName"].isNull())
		tableName_ = value["TableName"].asString();
	if(!value["ColumnCount"].isNull())
		columnCount_ = std::stoi(value["ColumnCount"].asString());

}

std::string DescribeAdbMySqlColumnsResult::getTableName()const
{
	return tableName_;
}

int DescribeAdbMySqlColumnsResult::getColumnCount()const
{
	return columnCount_;
}

std::string DescribeAdbMySqlColumnsResult::getMessage()const
{
	return message_;
}

std::string DescribeAdbMySqlColumnsResult::getSchema()const
{
	return schema_;
}

std::vector<DescribeAdbMySqlColumnsResult::Column> DescribeAdbMySqlColumnsResult::getColumns()const
{
	return columns_;
}

bool DescribeAdbMySqlColumnsResult::getSuccess()const
{
	return success_;
}

