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

#include <alibabacloud/cdn/model/DescribeDomainAverageResponseTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainAverageResponseTimeResult::DescribeDomainAverageResponseTimeResult() :
	ServiceResult()
{}

DescribeDomainAverageResponseTimeResult::DescribeDomainAverageResponseTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainAverageResponseTimeResult::~DescribeDomainAverageResponseTimeResult()
{}

void DescribeDomainAverageResponseTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvgRTPerIntervalNode = value["AvgRTPerInterval"]["DataModule"];
	for (auto valueAvgRTPerIntervalDataModule : allAvgRTPerIntervalNode)
	{
		DataModule avgRTPerIntervalObject;
		if(!valueAvgRTPerIntervalDataModule["Value"].isNull())
			avgRTPerIntervalObject.value = valueAvgRTPerIntervalDataModule["Value"].asString();
		if(!valueAvgRTPerIntervalDataModule["TimeStamp"].isNull())
			avgRTPerIntervalObject.timeStamp = valueAvgRTPerIntervalDataModule["TimeStamp"].asString();
		avgRTPerInterval_.push_back(avgRTPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::vector<DescribeDomainAverageResponseTimeResult::DataModule> DescribeDomainAverageResponseTimeResult::getAvgRTPerInterval()const
{
	return avgRTPerInterval_;
}

std::string DescribeDomainAverageResponseTimeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainAverageResponseTimeResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainAverageResponseTimeResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainAverageResponseTimeResult::getDataInterval()const
{
	return dataInterval_;
}

