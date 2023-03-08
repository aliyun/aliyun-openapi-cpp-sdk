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

#include <alibabacloud/adb/model/DescribeAdbMySqlTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeAdbMySqlTablesResult::DescribeAdbMySqlTablesResult() :
	ServiceResult()
{}

DescribeAdbMySqlTablesResult::DescribeAdbMySqlTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAdbMySqlTablesResult::~DescribeAdbMySqlTablesResult()
{}

void DescribeAdbMySqlTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTables = value["Tables"]["Table"];
	for (const auto &item : allTables)
		tables_.push_back(item.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Schema"].isNull())
		schema_ = value["Schema"].asString();

}

std::string DescribeAdbMySqlTablesResult::getMessage()const
{
	return message_;
}

std::string DescribeAdbMySqlTablesResult::getSchema()const
{
	return schema_;
}

std::vector<std::string> DescribeAdbMySqlTablesResult::getTables()const
{
	return tables_;
}

bool DescribeAdbMySqlTablesResult::getSuccess()const
{
	return success_;
}

