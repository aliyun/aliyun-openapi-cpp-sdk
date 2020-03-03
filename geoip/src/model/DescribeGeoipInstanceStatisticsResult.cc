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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

DescribeGeoipInstanceStatisticsResult::DescribeGeoipInstanceStatisticsResult() :
	ServiceResult()
{}

DescribeGeoipInstanceStatisticsResult::DescribeGeoipInstanceStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGeoipInstanceStatisticsResult::~DescribeGeoipInstanceStatisticsResult()
{}

void DescribeGeoipInstanceStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatisticsNode = value["Statistics"]["Statistic"];
	for (auto valueStatisticsStatistic : allStatisticsNode)
	{
		Statistic statisticsObject;
		if(!valueStatisticsStatistic["Timestamp"].isNull())
			statisticsObject.timestamp = std::stol(valueStatisticsStatistic["Timestamp"].asString());
		if(!valueStatisticsStatistic["Count"].isNull())
			statisticsObject.count = std::stol(valueStatisticsStatistic["Count"].asString());
		statistics_.push_back(statisticsObject);
	}

}

std::vector<DescribeGeoipInstanceStatisticsResult::Statistic> DescribeGeoipInstanceStatisticsResult::getStatistics()const
{
	return statistics_;
}

