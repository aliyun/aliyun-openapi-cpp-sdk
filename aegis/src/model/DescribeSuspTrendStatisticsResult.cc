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

#include <alibabacloud/aegis/model/DescribeSuspTrendStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSuspTrendStatisticsResult::DescribeSuspTrendStatisticsResult() :
	ServiceResult()
{}

DescribeSuspTrendStatisticsResult::DescribeSuspTrendStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspTrendStatisticsResult::~DescribeSuspTrendStatisticsResult()
{}

void DescribeSuspTrendStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspiciousItems = value["SuspiciousItems"]["StringItem"];
	for (const auto &item : allSuspiciousItems)
		suspiciousItems_.push_back(item.asString());
	if(!value["StartTime"].isNull())
		startTime_ = std::stoi(value["StartTime"].asString());
	if(!value["Interval"].isNull())
		interval_ = std::stoi(value["Interval"].asString());

}

int DescribeSuspTrendStatisticsResult::getStartTime()const
{
	return startTime_;
}

std::vector<std::string> DescribeSuspTrendStatisticsResult::getSuspiciousItems()const
{
	return suspiciousItems_;
}

int DescribeSuspTrendStatisticsResult::getInterval()const
{
	return interval_;
}

