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

#include <alibabacloud/rds/model/DescribeDBInstanceTDEResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceTDEResult::DescribeDBInstanceTDEResult() :
	ServiceResult()
{}

DescribeDBInstanceTDEResult::DescribeDBInstanceTDEResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceTDEResult::~DescribeDBInstanceTDEResult()
{}

void DescribeDBInstanceTDEResult::parse(const std::string &payload)
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
		if(!valueDatabasesDatabase["TDEStatus"].isNull())
			databasesObject.tDEStatus = valueDatabasesDatabase["TDEStatus"].asString();
		databases_.push_back(databasesObject);
	}
	if(!value["TDEMode"].isNull())
		tDEMode_ = value["TDEMode"].asString();
	if(!value["TDEStatus"].isNull())
		tDEStatus_ = value["TDEStatus"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();

}

std::string DescribeDBInstanceTDEResult::getTDEStatus()const
{
	return tDEStatus_;
}

std::vector<DescribeDBInstanceTDEResult::Database> DescribeDBInstanceTDEResult::getDatabases()const
{
	return databases_;
}

std::string DescribeDBInstanceTDEResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeDBInstanceTDEResult::getTDEMode()const
{
	return tDEMode_;
}

