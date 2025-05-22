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

#include <alibabacloud/rds/model/DescribeDBInstancePromoteActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancePromoteActivityResult::DescribeDBInstancePromoteActivityResult() :
	ServiceResult()
{}

DescribeDBInstancePromoteActivityResult::DescribeDBInstancePromoteActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancePromoteActivityResult::~DescribeDBInstancePromoteActivityResult()
{}

void DescribeDBInstancePromoteActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AliUid"].isNull())
		aliUid_ = value["AliUid"].asString();
	if(!value["Bid"].isNull())
		bid_ = value["Bid"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["IsActivity"].isNull())
		isActivity_ = value["IsActivity"].asString();

}

std::string DescribeDBInstancePromoteActivityResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstancePromoteActivityResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBInstancePromoteActivityResult::getBid()const
{
	return bid_;
}

std::string DescribeDBInstancePromoteActivityResult::getIsActivity()const
{
	return isActivity_;
}

std::string DescribeDBInstancePromoteActivityResult::getAliUid()const
{
	return aliUid_;
}

std::string DescribeDBInstancePromoteActivityResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

