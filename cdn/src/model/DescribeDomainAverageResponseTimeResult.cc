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
	auto allAvgRTPerInterval = value["AvgRTPerInterval"]["DataModule"];
	for (auto value : allAvgRTPerInterval)
	{
		DataModule dataModuleObject;
		dataModuleObject.timeStamp = value["TimeStamp"].asString();
		dataModuleObject.value = value["Value"].asString();
		avgRTPerInterval_.push_back(dataModuleObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainAverageResponseTimeResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainAverageResponseTimeResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainAverageResponseTimeResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainAverageResponseTimeResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainAverageResponseTimeResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainAverageResponseTimeResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainAverageResponseTimeResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainAverageResponseTimeResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

