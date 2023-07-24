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

#include <alibabacloud/sasti/model/DescribeIpReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sasti;
using namespace AlibabaCloud::Sasti::Model;

DescribeIpReportResult::DescribeIpReportResult() :
	ServiceResult()
{}

DescribeIpReportResult::DescribeIpReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpReportResult::~DescribeIpReportResult()
{}

void DescribeIpReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Context"].isNull())
		context_ = value["Context"].asString();
	if(!value["Intelligences"].isNull())
		intelligences_ = value["Intelligences"].asString();
	if(!value["Whois"].isNull())
		whois_ = value["Whois"].asString();
	if(!value["AttackPreferenceTop5"].isNull())
		attackPreferenceTop5_ = value["AttackPreferenceTop5"].asString();
	if(!value["Confidence"].isNull())
		confidence_ = value["Confidence"].asString();
	if(!value["ThreatTypes"].isNull())
		threatTypes_ = value["ThreatTypes"].asString();
	if(!value["Scenario"].isNull())
		scenario_ = value["Scenario"].asString();
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["ThreatLevel"].isNull())
		threatLevel_ = value["ThreatLevel"].asString();
	if(!value["AttackCntByThreatType"].isNull())
		attackCntByThreatType_ = value["AttackCntByThreatType"].asString();
	if(!value["Group"].isNull())
		group_ = value["Group"].asString();

}

std::string DescribeIpReportResult::getContext()const
{
	return context_;
}

std::string DescribeIpReportResult::getGroup()const
{
	return group_;
}

std::string DescribeIpReportResult::getWhois()const
{
	return whois_;
}

std::string DescribeIpReportResult::getAttackCntByThreatType()const
{
	return attackCntByThreatType_;
}

std::string DescribeIpReportResult::getThreatLevel()const
{
	return threatLevel_;
}

std::string DescribeIpReportResult::getConfidence()const
{
	return confidence_;
}

std::string DescribeIpReportResult::getIp()const
{
	return ip_;
}

std::string DescribeIpReportResult::getThreatTypes()const
{
	return threatTypes_;
}

std::string DescribeIpReportResult::getIntelligences()const
{
	return intelligences_;
}

std::string DescribeIpReportResult::getAttackPreferenceTop5()const
{
	return attackPreferenceTop5_;
}

std::string DescribeIpReportResult::getScenario()const
{
	return scenario_;
}

