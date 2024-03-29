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

#include <alibabacloud/rds/model/DescribeLocalAvailableRecoveryTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeLocalAvailableRecoveryTimeResult::DescribeLocalAvailableRecoveryTimeResult() :
	ServiceResult()
{}

DescribeLocalAvailableRecoveryTimeResult::DescribeLocalAvailableRecoveryTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLocalAvailableRecoveryTimeResult::~DescribeLocalAvailableRecoveryTimeResult()
{}

void DescribeLocalAvailableRecoveryTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RecoveryEndTime"].isNull())
		recoveryEndTime_ = value["RecoveryEndTime"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["RecoveryBeginTime"].isNull())
		recoveryBeginTime_ = value["RecoveryBeginTime"].asString();

}

std::string DescribeLocalAvailableRecoveryTimeResult::getRecoveryEndTime()const
{
	return recoveryEndTime_;
}

std::string DescribeLocalAvailableRecoveryTimeResult::getRecoveryBeginTime()const
{
	return recoveryBeginTime_;
}

std::string DescribeLocalAvailableRecoveryTimeResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

