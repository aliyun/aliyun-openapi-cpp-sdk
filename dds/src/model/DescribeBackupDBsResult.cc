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

#include <alibabacloud/dds/model/DescribeBackupDBsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeBackupDBsResult::DescribeBackupDBsResult() :
	ServiceResult()
{}

DescribeBackupDBsResult::DescribeBackupDBsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupDBsResult::~DescribeBackupDBsResult()
{}

void DescribeBackupDBsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabasesNode = value["Databases"]["Database"];
	for (auto valueDatabasesDatabase : allDatabasesNode)
	{
		Database databasesObject;
		if(!valueDatabasesDatabase["DBName"].isNull())
			databasesObject.dBName = valueDatabasesDatabase["DBName"].asString();
		databases_.push_back(databasesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeBackupDBsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeBackupDBsResult::Database> DescribeBackupDBsResult::getDatabases()const
{
	return databases_;
}

int DescribeBackupDBsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupDBsResult::getPageNumber()const
{
	return pageNumber_;
}

