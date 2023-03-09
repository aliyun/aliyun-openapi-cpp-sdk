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

#include <alibabacloud/adb/model/DescribeOperatorPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeOperatorPermissionResult::DescribeOperatorPermissionResult() :
	ServiceResult()
{}

DescribeOperatorPermissionResult::DescribeOperatorPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOperatorPermissionResult::~DescribeOperatorPermissionResult()
{}

void DescribeOperatorPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["Privileges"].isNull())
		privileges_ = value["Privileges"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeOperatorPermissionResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeOperatorPermissionResult::getPrivileges()const
{
	return privileges_;
}

std::string DescribeOperatorPermissionResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeOperatorPermissionResult::getDBClusterId()const
{
	return dBClusterId_;
}

