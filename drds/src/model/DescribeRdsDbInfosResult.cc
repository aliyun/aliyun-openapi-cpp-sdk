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

#include <alibabacloud/drds/model/DescribeRdsDbInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRdsDbInfosResult::DescribeRdsDbInfosResult() :
	ServiceResult()
{}

DescribeRdsDbInfosResult::DescribeRdsDbInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsDbInfosResult::~DescribeRdsDbInfosResult()
{}

void DescribeRdsDbInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabasesNode = value["Databases"]["Database"];
	for (auto valueDatabasesDatabase : allDatabasesNode)
	{
		Database databasesObject;
		if(!valueDatabasesDatabase["DbName"].isNull())
			databasesObject.dbName = valueDatabasesDatabase["DbName"].asString();
		if(!valueDatabasesDatabase["Status"].isNull())
			databasesObject.status = std::stoi(valueDatabasesDatabase["Status"].asString());
		if(!valueDatabasesDatabase["Description"].isNull())
			databasesObject.description = valueDatabasesDatabase["Description"].asString();
		databases_.push_back(databasesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::vector<DescribeRdsDbInfosResult::Database> DescribeRdsDbInfosResult::getDatabases()const
{
	return databases_;
}

std::string DescribeRdsDbInfosResult::getTotal()const
{
	return total_;
}

bool DescribeRdsDbInfosResult::getSuccess()const
{
	return success_;
}

