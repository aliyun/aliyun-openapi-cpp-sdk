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

#include <alibabacloud/aegis/model/DescribeAnalysisStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAnalysisStatisticsResult::DescribeAnalysisStatisticsResult() :
	ServiceResult()
{}

DescribeAnalysisStatisticsResult::DescribeAnalysisStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAnalysisStatisticsResult::~DescribeAnalysisStatisticsResult()
{}

void DescribeAnalysisStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statisticsNode = value["Statistics"];
	if(!statisticsNode["Total"].isNull())
		statistics_.total = std::stoi(statisticsNode["Total"].asString());
	if(!statisticsNode["Serious"].isNull())
		statistics_.serious = std::stoi(statisticsNode["Serious"].asString());
	if(!statisticsNode["Suspicious"].isNull())
		statistics_.suspicious = std::stoi(statisticsNode["Suspicious"].asString());
	if(!statisticsNode["Remind"].isNull())
		statistics_.remind = std::stoi(statisticsNode["Remind"].asString());

}

DescribeAnalysisStatisticsResult::Statistics DescribeAnalysisStatisticsResult::getStatistics()const
{
	return statistics_;
}

