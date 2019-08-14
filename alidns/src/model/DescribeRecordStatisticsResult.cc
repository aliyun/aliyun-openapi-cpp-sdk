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

#include <alibabacloud/alidns/model/DescribeRecordStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeRecordStatisticsResult::DescribeRecordStatisticsResult() :
	ServiceResult()
{}

DescribeRecordStatisticsResult::DescribeRecordStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecordStatisticsResult::~DescribeRecordStatisticsResult()
{}

void DescribeRecordStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStatistics = value["Statistics"]["Statistic"];
	for (auto value : allStatistics)
	{
		Statistic statisticsObject;
		if(!value["Timestamp"].isNull())
			statisticsObject.timestamp = std::stol(value["Timestamp"].asString());
		if(!value["Count"].isNull())
			statisticsObject.count = std::stol(value["Count"].asString());
		statistics_.push_back(statisticsObject);
	}

}

std::vector<DescribeRecordStatisticsResult::Statistic> DescribeRecordStatisticsResult::getStatistics()const
{
	return statistics_;
}

