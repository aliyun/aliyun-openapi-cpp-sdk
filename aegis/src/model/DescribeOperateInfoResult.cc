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

#include <alibabacloud/aegis/model/DescribeOperateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeOperateInfoResult::DescribeOperateInfoResult() :
	ServiceResult()
{}

DescribeOperateInfoResult::DescribeOperateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOperateInfoResult::~DescribeOperateInfoResult()
{}

void DescribeOperateInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspEventValueArray = value["SuspEventValueArray"]["IntegerItem"];
	for (const auto &item : allSuspEventValueArray)
		suspEventValueArray_.push_back(item.asString());
	auto allSuspEventAaggregatValueArray = value["SuspEventAaggregatValueArray"]["IntegerItem"];
	for (const auto &item : allSuspEventAaggregatValueArray)
		suspEventAaggregatValueArray_.push_back(item.asString());
	auto allVulValueArray = value["VulValueArray"]["IntegerItem"];
	for (const auto &item : allVulValueArray)
		vulValueArray_.push_back(item.asString());
	auto allVulAaggregatValueArray = value["VulAaggregatValueArray"]["IntegerItem"];
	for (const auto &item : allVulAaggregatValueArray)
		vulAaggregatValueArray_.push_back(item.asString());
	auto allDateArray = value["DateArray"]["StringItem"];
	for (const auto &item : allDateArray)
		dateArray_.push_back(item.asString());
	auto allHealthCheckValueArray = value["HealthCheckValueArray"]["IntegerItem"];
	for (const auto &item : allHealthCheckValueArray)
		healthCheckValueArray_.push_back(item.asString());
	auto allHealthCheckAaggregatValueArray = value["HealthCheckAaggregatValueArray"]["IntegerItem"];
	for (const auto &item : allHealthCheckAaggregatValueArray)
		healthCheckAaggregatValueArray_.push_back(item.asString());
	if(!value["HealthCheckDealedCount"].isNull())
		healthCheckDealedCount_ = std::stoi(value["HealthCheckDealedCount"].asString());
	if(!value["SecurityEventDealedCount"].isNull())
		securityEventDealedCount_ = std::stoi(value["SecurityEventDealedCount"].asString());
	if(!value["VulnerabilityDealedCount"].isNull())
		vulnerabilityDealedCount_ = std::stoi(value["VulnerabilityDealedCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<std::string> DescribeOperateInfoResult::getVulValueArray()const
{
	return vulValueArray_;
}

std::vector<std::string> DescribeOperateInfoResult::getVulAaggregatValueArray()const
{
	return vulAaggregatValueArray_;
}

std::vector<std::string> DescribeOperateInfoResult::getHealthCheckAaggregatValueArray()const
{
	return healthCheckAaggregatValueArray_;
}

int DescribeOperateInfoResult::getSecurityEventDealedCount()const
{
	return securityEventDealedCount_;
}

std::vector<std::string> DescribeOperateInfoResult::getSuspEventValueArray()const
{
	return suspEventValueArray_;
}

std::vector<std::string> DescribeOperateInfoResult::getSuspEventAaggregatValueArray()const
{
	return suspEventAaggregatValueArray_;
}

int DescribeOperateInfoResult::getVulnerabilityDealedCount()const
{
	return vulnerabilityDealedCount_;
}

std::vector<std::string> DescribeOperateInfoResult::getDateArray()const
{
	return dateArray_;
}

std::vector<std::string> DescribeOperateInfoResult::getHealthCheckValueArray()const
{
	return healthCheckValueArray_;
}

int DescribeOperateInfoResult::getHealthCheckDealedCount()const
{
	return healthCheckDealedCount_;
}

bool DescribeOperateInfoResult::getSuccess()const
{
	return success_;
}

