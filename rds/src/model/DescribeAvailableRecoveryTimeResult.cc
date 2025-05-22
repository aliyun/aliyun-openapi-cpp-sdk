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

#include <alibabacloud/rds/model/DescribeAvailableRecoveryTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAvailableRecoveryTimeResult::DescribeAvailableRecoveryTimeResult() :
	ServiceResult()
{}

DescribeAvailableRecoveryTimeResult::DescribeAvailableRecoveryTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableRecoveryTimeResult::~DescribeAvailableRecoveryTimeResult()
{}

void DescribeAvailableRecoveryTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CrossBackupId"].isNull())
		crossBackupId_ = std::stoi(value["CrossBackupId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["RecoveryBeginTime"].isNull())
		recoveryBeginTime_ = value["RecoveryBeginTime"].asString();
	if(!value["RecoveryEndTime"].isNull())
		recoveryEndTime_ = value["RecoveryEndTime"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string DescribeAvailableRecoveryTimeResult::getRecoveryEndTime()const
{
	return recoveryEndTime_;
}

std::string DescribeAvailableRecoveryTimeResult::getRecoveryBeginTime()const
{
	return recoveryBeginTime_;
}

std::string DescribeAvailableRecoveryTimeResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeAvailableRecoveryTimeResult::getRegionId()const
{
	return regionId_;
}

int DescribeAvailableRecoveryTimeResult::getCrossBackupId()const
{
	return crossBackupId_;
}

