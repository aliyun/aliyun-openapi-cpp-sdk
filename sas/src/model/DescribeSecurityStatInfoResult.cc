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

#include <alibabacloud/sas/model/DescribeSecurityStatInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSecurityStatInfoResult::DescribeSecurityStatInfoResult() :
	ServiceResult()
{}

DescribeSecurityStatInfoResult::DescribeSecurityStatInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityStatInfoResult::~DescribeSecurityStatInfoResult()
{}

void DescribeSecurityStatInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto securityEventNode = value["SecurityEvent"];
	if(!securityEventNode["SuspiciousCount"].isNull())
		securityEvent_.suspiciousCount = std::stoi(securityEventNode["SuspiciousCount"].asString());
	if(!securityEventNode["SeriousCount"].isNull())
		securityEvent_.seriousCount = std::stoi(securityEventNode["SeriousCount"].asString());
	if(!securityEventNode["RemindCount"].isNull())
		securityEvent_.remindCount = std::stoi(securityEventNode["RemindCount"].asString());
	if(!securityEventNode["TotalCount"].isNull())
		securityEvent_.totalCount = std::stoi(securityEventNode["TotalCount"].asString());
		auto allValueArray = securityEventNode["ValueArray"]["IntegerItem"];
		for (auto value : allValueArray)
			securityEvent_.valueArray.push_back(value.asString());
		auto allTimeArray = securityEventNode["TimeArray"]["LongItem"];
		for (auto value : allTimeArray)
			securityEvent_.timeArray.push_back(value.asString());
		auto allRemindList = securityEventNode["RemindList"]["IntegerItem"];
		for (auto value : allRemindList)
			securityEvent_.remindList.push_back(value.asString());
		auto allLevelsOn = securityEventNode["LevelsOn"]["StringItem"];
		for (auto value : allLevelsOn)
			securityEvent_.levelsOn.push_back(value.asString());
		auto allDateArray = securityEventNode["DateArray"]["StringItem"];
		for (auto value : allDateArray)
			securityEvent_.dateArray.push_back(value.asString());
		auto allSuspiciousList = securityEventNode["SuspiciousList"]["IntegerItem"];
		for (auto value : allSuspiciousList)
			securityEvent_.suspiciousList.push_back(value.asString());
		auto allSeriousList = securityEventNode["SeriousList"]["IntegerItem"];
		for (auto value : allSeriousList)
			securityEvent_.seriousList.push_back(value.asString());
	auto attackEventNode = value["AttackEvent"];
	if(!attackEventNode["TotalCount"].isNull())
		attackEvent_.totalCount = std::stoi(attackEventNode["TotalCount"].asString());
		auto allDateArray1 = attackEventNode["DateArray"]["StringItem"];
		for (auto value : allDateArray1)
			attackEvent_.dateArray1.push_back(value.asString());
		auto allValueArray2 = attackEventNode["ValueArray"]["IntegerItem"];
		for (auto value : allValueArray2)
			attackEvent_.valueArray2.push_back(value.asString());
	auto healthCheckNode = value["HealthCheck"];
	if(!healthCheckNode["HighCount"].isNull())
		healthCheck_.highCount = std::stoi(healthCheckNode["HighCount"].asString());
	if(!healthCheckNode["LowCount"].isNull())
		healthCheck_.lowCount = std::stoi(healthCheckNode["LowCount"].asString());
	if(!healthCheckNode["TotalCount"].isNull())
		healthCheck_.totalCount = std::stoi(healthCheckNode["TotalCount"].asString());
	if(!healthCheckNode["MediumCount"].isNull())
		healthCheck_.mediumCount = std::stoi(healthCheckNode["MediumCount"].asString());
		auto allValueArray3 = healthCheckNode["ValueArray"]["IntegerItem"];
		for (auto value : allValueArray3)
			healthCheck_.valueArray3.push_back(value.asString());
		auto allTimeArray4 = healthCheckNode["TimeArray"]["LongItem"];
		for (auto value : allTimeArray4)
			healthCheck_.timeArray4.push_back(value.asString());
		auto allLevelsOn5 = healthCheckNode["LevelsOn"]["StringItem"];
		for (auto value : allLevelsOn5)
			healthCheck_.levelsOn5.push_back(value.asString());
		auto allLowList = healthCheckNode["LowList"]["IntegerItem"];
		for (auto value : allLowList)
			healthCheck_.lowList.push_back(value.asString());
		auto allMediumList = healthCheckNode["MediumList"]["IntegerItem"];
		for (auto value : allMediumList)
			healthCheck_.mediumList.push_back(value.asString());
		auto allDateArray6 = healthCheckNode["DateArray"]["StringItem"];
		for (auto value : allDateArray6)
			healthCheck_.dateArray6.push_back(value.asString());
		auto allHighList = healthCheckNode["HighList"]["IntegerItem"];
		for (auto value : allHighList)
			healthCheck_.highList.push_back(value.asString());
	auto vulnerabilityNode = value["Vulnerability"];
	if(!vulnerabilityNode["NntfCount"].isNull())
		vulnerability_.nntfCount = std::stoi(vulnerabilityNode["NntfCount"].asString());
	if(!vulnerabilityNode["LaterCount"].isNull())
		vulnerability_.laterCount = std::stoi(vulnerabilityNode["LaterCount"].asString());
	if(!vulnerabilityNode["TotalCount"].isNull())
		vulnerability_.totalCount = std::stoi(vulnerabilityNode["TotalCount"].asString());
	if(!vulnerabilityNode["AsapCount"].isNull())
		vulnerability_.asapCount = std::stoi(vulnerabilityNode["AsapCount"].asString());
		auto allNntfList = vulnerabilityNode["NntfList"]["IntegerItem"];
		for (auto value : allNntfList)
			vulnerability_.nntfList.push_back(value.asString());
		auto allAsapList = vulnerabilityNode["AsapList"]["IntegerItem"];
		for (auto value : allAsapList)
			vulnerability_.asapList.push_back(value.asString());
		auto allValueArray7 = vulnerabilityNode["ValueArray"]["IntegerItem"];
		for (auto value : allValueArray7)
			vulnerability_.valueArray7.push_back(value.asString());
		auto allTimeArray8 = vulnerabilityNode["TimeArray"]["LongItem"];
		for (auto value : allTimeArray8)
			vulnerability_.timeArray8.push_back(value.asString());
		auto allLevelsOn9 = vulnerabilityNode["LevelsOn"]["StringItem"];
		for (auto value : allLevelsOn9)
			vulnerability_.levelsOn9.push_back(value.asString());
		auto allLaterList = vulnerabilityNode["LaterList"]["IntegerItem"];
		for (auto value : allLaterList)
			vulnerability_.laterList.push_back(value.asString());
		auto allDateArray10 = vulnerabilityNode["DateArray"]["StringItem"];
		for (auto value : allDateArray10)
			vulnerability_.dateArray10.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeSecurityStatInfoResult::SecurityEvent DescribeSecurityStatInfoResult::getSecurityEvent()const
{
	return securityEvent_;
}

DescribeSecurityStatInfoResult::HealthCheck DescribeSecurityStatInfoResult::getHealthCheck()const
{
	return healthCheck_;
}

DescribeSecurityStatInfoResult::Vulnerability DescribeSecurityStatInfoResult::getVulnerability()const
{
	return vulnerability_;
}

DescribeSecurityStatInfoResult::AttackEvent DescribeSecurityStatInfoResult::getAttackEvent()const
{
	return attackEvent_;
}

bool DescribeSecurityStatInfoResult::getSuccess()const
{
	return success_;
}

