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

#include <alibabacloud/aegis/model/DescribeYesterdayStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeYesterdayStatisticsResult::DescribeYesterdayStatisticsResult() :
	ServiceResult()
{}

DescribeYesterdayStatisticsResult::DescribeYesterdayStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeYesterdayStatisticsResult::~DescribeYesterdayStatisticsResult()
{}

void DescribeYesterdayStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NewRiskCheckCount"].isNull())
		newRiskCheckCount_ = std::stoi(value["NewRiskCheckCount"].asString());
	if(!value["NewVulCount"].isNull())
		newVulCount_ = std::stoi(value["NewVulCount"].asString());
	if(!value["NewHealthCheckCount"].isNull())
		newHealthCheckCount_ = std::stoi(value["NewHealthCheckCount"].asString());
	if(!value["NewSuspiciousCount"].isNull())
		newSuspiciousCount_ = std::stoi(value["NewSuspiciousCount"].asString());

}

int DescribeYesterdayStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeYesterdayStatisticsResult::getNewVulCount()const
{
	return newVulCount_;
}

int DescribeYesterdayStatisticsResult::getNewHealthCheckCount()const
{
	return newHealthCheckCount_;
}

int DescribeYesterdayStatisticsResult::getNewRiskCheckCount()const
{
	return newRiskCheckCount_;
}

int DescribeYesterdayStatisticsResult::getNewSuspiciousCount()const
{
	return newSuspiciousCount_;
}

