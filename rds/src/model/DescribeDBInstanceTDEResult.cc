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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDatabases = value["Databases"]["Database"];
	for (auto value : allDatabases)
	{
		Database databasesObject;
		if(!value["DBName"].isNull())
			databasesObject.dBName = value["DBName"].asString();
		if(!value["TDEStatus"].isNull())
			databasesObject.tDEStatus = value["TDEStatus"].asString();
		databases_.push_back(databasesObject);
	}
	if(!value["TDEStatus"].isNull())
		tDEStatus_ = value["TDEStatus"].asString();

}

std::string DescribeDBInstanceTDEResult::getTDEStatus()const
{
	return tDEStatus_;
}

std::vector<DescribeDBInstanceTDEResult::Database> DescribeDBInstanceTDEResult::getDatabases()const
{
	return databases_;
}

