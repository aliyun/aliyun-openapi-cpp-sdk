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

#include <alibabacloud/aegis/model/DescribeScreenOperateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenOperateInfoResult::DescribeScreenOperateInfoResult() :
	ServiceResult()
{}

DescribeScreenOperateInfoResult::DescribeScreenOperateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenOperateInfoResult::~DescribeScreenOperateInfoResult()
{}

void DescribeScreenOperateInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspEventValueArray = value["SuspEventValueArray"]["IntegerItem"];
	for (const auto &item : allSuspEventValueArray)
		suspEventValueArray_.push_back(item.asString());
	auto allVulValueArray = value["VulValueArray"]["IntegerItem"];
	for (const auto &item : allVulValueArray)
		vulValueArray_.push_back(item.asString());
	auto allDateArray = value["DateArray"]["StringItem"];
	for (const auto &item : allDateArray)
		dateArray_.push_back(item.asString());
	auto allHealthCheckValueArray = value["HealthCheckValueArray"]["IntegerItem"];
	for (const auto &item : allHealthCheckValueArray)
		healthCheckValueArray_.push_back(item.asString());
	if(!value["HealthCheckDealedCount"].isNull())
		healthCheckDealedCount_ = std::stoi(value["HealthCheckDealedCount"].asString());
	if(!value["SecurityEventDealedCount"].isNull())
		securityEventDealedCount_ = std::stoi(value["SecurityEventDealedCount"].asString());
	if(!value["VulnerabilityDealedCount"].isNull())
		vulnerabilityDealedCount_ = std::stoi(value["VulnerabilityDealedCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["SuccessA"].isNull())
		successA_ = value["SuccessA"].asString() == "true";

}

std::vector<std::string> DescribeScreenOperateInfoResult::getVulValueArray()const
{
	return vulValueArray_;
}

bool DescribeScreenOperateInfoResult::getSuccessA()const
{
	return successA_;
}

int DescribeScreenOperateInfoResult::getSecurityEventDealedCount()const
{
	return securityEventDealedCount_;
}

std::vector<std::string> DescribeScreenOperateInfoResult::getSuspEventValueArray()const
{
	return suspEventValueArray_;
}

int DescribeScreenOperateInfoResult::getVulnerabilityDealedCount()const
{
	return vulnerabilityDealedCount_;
}

std::vector<std::string> DescribeScreenOperateInfoResult::getDateArray()const
{
	return dateArray_;
}

std::vector<std::string> DescribeScreenOperateInfoResult::getHealthCheckValueArray()const
{
	return healthCheckValueArray_;
}

int DescribeScreenOperateInfoResult::getHealthCheckDealedCount()const
{
	return healthCheckDealedCount_;
}

bool DescribeScreenOperateInfoResult::getSuccess()const
{
	return success_;
}

