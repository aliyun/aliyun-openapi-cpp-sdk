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
	canTempUpgrade_ = std::stoi(value["CanTempUpgrade"].asString());
	tempUpgradeTimeStart_ = value["TempUpgradeTimeStart"].asString();
	tempUpgradeTimeEnd_ = value["TempUpgradeTimeEnd"].asString();
	tempUpgradeRecoveryTime_ = value["TempUpgradeRecoveryTime"].asString();
	tempUpgradeRecoveryClass_ = value["TempUpgradeRecoveryClass"].asString();
	tempUpgradeRecoveryCpu_ = std::stoi(value["TempUpgradeRecoveryCpu"].asString());
	tempUpgradeRecoveryMemory_ = std::stoi(value["TempUpgradeRecoveryMemory"].asString());
	tempUpgradeRecoveryMaxIOPS_ = value["TempUpgradeRecoveryMaxIOPS"].asString();
	tempUpgradeRecoveryMaxConnections_ = value["TempUpgradeRecoveryMaxConnections"].asString();

}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryMaxIOPS()const
{
	return tempUpgradeRecoveryMaxIOPS_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeRecoveryMaxIOPS(const std::string& tempUpgradeRecoveryMaxIOPS)
{
	tempUpgradeRecoveryMaxIOPS_ = tempUpgradeRecoveryMaxIOPS;
}

int DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryMemory()const
{
	return tempUpgradeRecoveryMemory_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeRecoveryMemory(int tempUpgradeRecoveryMemory)
{
	tempUpgradeRecoveryMemory_ = tempUpgradeRecoveryMemory;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryTime()const
{
	return tempUpgradeRecoveryTime_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeRecoveryTime(const std::string& tempUpgradeRecoveryTime)
{
	tempUpgradeRecoveryTime_ = tempUpgradeRecoveryTime;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryMaxConnections()const
{
	return tempUpgradeRecoveryMaxConnections_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeRecoveryMaxConnections(const std::string& tempUpgradeRecoveryMaxConnections)
{
	tempUpgradeRecoveryMaxConnections_ = tempUpgradeRecoveryMaxConnections;
}

int DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryCpu()const
{
	return tempUpgradeRecoveryCpu_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeRecoveryCpu(int tempUpgradeRecoveryCpu)
{
	tempUpgradeRecoveryCpu_ = tempUpgradeRecoveryCpu;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeTimeStart()const
{
	return tempUpgradeTimeStart_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeTimeStart(const std::string& tempUpgradeTimeStart)
{
	tempUpgradeTimeStart_ = tempUpgradeTimeStart;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeTimeEnd()const
{
	return tempUpgradeTimeEnd_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeTimeEnd(const std::string& tempUpgradeTimeEnd)
{
	tempUpgradeTimeEnd_ = tempUpgradeTimeEnd;
}

bool DescribeDBInstanceExtendAttributeResult::getCanTempUpgrade()const
{
	return canTempUpgrade_;
}

void DescribeDBInstanceExtendAttributeResult::setCanTempUpgrade(bool canTempUpgrade)
{
	canTempUpgrade_ = canTempUpgrade;
}

std::string DescribeDBInstanceExtendAttributeResult::getTempUpgradeRecoveryClass()const
{
	return tempUpgradeRecoveryClass_;
}

void DescribeDBInstanceExtendAttributeResult::setTempUpgradeRecoveryClass(const std::string& tempUpgradeRecoveryClass)
{
	tempUpgradeRecoveryClass_ = tempUpgradeRecoveryClass;
}

