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

#include <alibabacloud/smartag/model/DescribeDeviceAutoUpgradePolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeDeviceAutoUpgradePolicyResult::DescribeDeviceAutoUpgradePolicyResult() :
	ServiceResult()
{}

DescribeDeviceAutoUpgradePolicyResult::DescribeDeviceAutoUpgradePolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeviceAutoUpgradePolicyResult::~DescribeDeviceAutoUpgradePolicyResult()
{}

void DescribeDeviceAutoUpgradePolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UpgradeType"].isNull())
		upgradeType_ = value["UpgradeType"].asString();
	if(!value["TimeZone"].isNull())
		timeZone_ = value["TimeZone"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["Jitter"].isNull())
		jitter_ = value["Jitter"].asString();
	if(!value["Duration"].isNull())
		duration_ = value["Duration"].asString();
	if(!value["CronExpression"].isNull())
		cronExpression_ = value["CronExpression"].asString();
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();

}

std::string DescribeDeviceAutoUpgradePolicyResult::getUpgradeType()const
{
	return upgradeType_;
}

std::string DescribeDeviceAutoUpgradePolicyResult::getTimeZone()const
{
	return timeZone_;
}

std::string DescribeDeviceAutoUpgradePolicyResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string DescribeDeviceAutoUpgradePolicyResult::getJitter()const
{
	return jitter_;
}

std::string DescribeDeviceAutoUpgradePolicyResult::getDuration()const
{
	return duration_;
}

std::string DescribeDeviceAutoUpgradePolicyResult::getCronExpression()const
{
	return cronExpression_;
}

std::string DescribeDeviceAutoUpgradePolicyResult::getSmartAGId()const
{
	return smartAGId_;
}

