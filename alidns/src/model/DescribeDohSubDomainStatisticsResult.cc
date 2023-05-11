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

#include <alibabacloud/alidns/model/DescribeDohSubDomainStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDohSubDomainStatisticsResult::DescribeDohSubDomainStatisticsResult() :
	ServiceResult()
{}

DescribeDohSubDomainStatisticsResult::DescribeDohSubDomainStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDohSubDomainStatisticsResult::~DescribeDohSubDomainStatisticsResult()
{}

void DescribeDohSubDomainStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatisticsNode = value["Statistics"]["Statistic"];
	for (auto valueStatisticsStatistic : allStatisticsNode)
	{
		Statistic statisticsObject;
		if(!valueStatisticsStatistic["V6HttpCount"].isNull())
			statisticsObject.v6HttpCount = std::stol(valueStatisticsStatistic["V6HttpCount"].asString());
		if(!valueStatisticsStatistic["V4HttpsCount"].isNull())
			statisticsObject.v4HttpsCount = std::stol(valueStatisticsStatistic["V4HttpsCount"].asString());
		if(!valueStatisticsStatistic["Timestamp"].isNull())
			statisticsObject.timestamp = std::stol(valueStatisticsStatistic["Timestamp"].asString());
		if(!valueStatisticsStatistic["TotalCount"].isNull())
			statisticsObject.totalCount = std::stol(valueStatisticsStatistic["TotalCount"].asString());
		if(!valueStatisticsStatistic["V4HttpCount"].isNull())
			statisticsObject.v4HttpCount = std::stol(valueStatisticsStatistic["V4HttpCount"].asString());
		if(!valueStatisticsStatistic["V6HttpsCount"].isNull())
			statisticsObject.v6HttpsCount = std::stol(valueStatisticsStatistic["V6HttpsCount"].asString());
		statistics_.push_back(statisticsObject);
	}

}

std::vector<DescribeDohSubDomainStatisticsResult::Statistic> DescribeDohSubDomainStatisticsResult::getStatistics()const
{
	return statistics_;
}

