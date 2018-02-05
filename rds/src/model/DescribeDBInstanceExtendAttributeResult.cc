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

#include <alibabacloud/rds/model/DescribeDBInstanceExtendAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceExtendAttributeResult::DescribeDBInstanceExtendAttributeResult() :
	ServiceResult()
{}

DescribeDBInstanceExtendAttributeResult::DescribeDBInstanceExtendAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceExtendAttributeResult::~DescribeDBInstanceExtendAttributeResult()
{}

void DescribeDBInstanceExtendAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["CanTempUpgrade"].isNull())
		canTempUpgrade_ = value["CanTempUpgrade"].asString() == "true";
	if(!value["TempUpgradeTimeStart"].isNull())
		tempUpgradeTimeStart_ = value["TempUpgradeTimeStart"].asString();
	if(!value["TempUpgradeTimeEnd"].isNull())
		tempUpgradeTimeEnd_ = value["TempUpgradeTimeEnd"].asString();
	if(!value["TempUpgradeRecoveryTime"].isNull())
		tempUpgradeRecoveryTime_ = value["TempUpgradeRecoveryTime"].asString();
	if(!value["TempUpgradeRecoveryClass"].isNull())
		tempUpgradeRecoveryClass_ = value["TempUpgradeRecoveryClass"].asString();
	if(!value["TempUpgradeRecoveryCpu"].isNull())
		tempUpgradeRecoveryCpu_ = std::stoi(value["TempUpgradeRecoveryCpu"].asString());
	if(!value["TempUpgradeRecoveryMemory"].isNull())
		tempUpgradeRecoveryMemory_ = std::stoi(value["TempUpgradeRecoveryMemory"].asString());
	if(!value["TempUpgradeRecoveryMaxIOPS"].isNull())
		tempUpgradeRecoveryMaxIOPS_ = value["TempUpgradeRecoveryMaxIOPS"].asString();
	if(!value["TempUpgradeRecoveryMaxConnections"].isNull())
		tempUpgradeRecoveryMaxConnections_ = value["TempUpgradeRecoveryMaxConnections"].asString();

}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryMaxIOPS()const
{
	return tempUpgradeRecoveryMaxIOPS_;
}

int DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryMemory()const
{
	return tempUpgradeRecoveryMemory_;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryTime()const
{
	return tempUpgradeRecoveryTime_;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryMaxConnections()const
{
	return tempUpgradeRecoveryMaxConnections_;
}

int DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryCpu()const
{
	return tempUpgradeRecoveryCpu_;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeTimeStart()const
{
	return tempUpgradeTimeStart_;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeTimeEnd()const
{
	return tempUpgradeTimeEnd_;
}

bool DescribeDBInstanceExtendAttributeResult::getCanTempUpgrade()const
{
	return canTempUpgrade_;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryClass()const
{
	return tempUpgradeRecoveryClass_;
}

