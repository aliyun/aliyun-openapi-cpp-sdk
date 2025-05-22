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

#include <alibabacloud/rds/model/DescribeDBInstanceConnectivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceConnectivityResult::DescribeDBInstanceConnectivityResult() :
	ServiceResult()
{}

DescribeDBInstanceConnectivityResult::DescribeDBInstanceConnectivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceConnectivityResult::~DescribeDBInstanceConnectivityResult()
{}

void DescribeDBInstanceConnectivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ConnCheckErrorCode"].isNull())
		connCheckErrorCode_ = value["ConnCheckErrorCode"].asString();
	if(!value["ConnCheckErrorMessage"].isNull())
		connCheckErrorMessage_ = value["ConnCheckErrorMessage"].asString();
	if(!value["ConnCheckResult"].isNull())
		connCheckResult_ = value["ConnCheckResult"].asString();
	if(!value["DbInstanceName"].isNull())
		dbInstanceName_ = value["DbInstanceName"].asString();

}

std::string DescribeDBInstanceConnectivityResult::getConnCheckErrorCode()const
{
	return connCheckErrorCode_;
}

std::string DescribeDBInstanceConnectivityResult::getConnCheckResult()const
{
	return connCheckResult_;
}

std::string DescribeDBInstanceConnectivityResult::getConnCheckErrorMessage()const
{
	return connCheckErrorMessage_;
}

std::string DescribeDBInstanceConnectivityResult::getDbInstanceName()const
{
	return dbInstanceName_;
}

