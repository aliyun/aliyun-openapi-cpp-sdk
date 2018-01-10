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

#include <alibabacloud/cdn/model/DescribeDomainPvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainPvDataResult::DescribeDomainPvDataResult() :
	ServiceResult()
{}

DescribeDomainPvDataResult::DescribeDomainPvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainPvDataResult::~DescribeDomainPvDataResult()
{}

void DescribeDomainPvDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPvDataInterval = value["PvDataInterval"]["UsageData"];
	for (auto value : allPvDataInterval)
	{
		UsageData usageDataObject;
		usageDataObject.timeStamp = value["TimeStamp"].asString();
		usageDataObject.value = value["Value"].asString();
		pvDataInterval_.push_back(usageDataObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainPvDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainPvDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainPvDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainPvDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainPvDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainPvDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainPvDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainPvDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

