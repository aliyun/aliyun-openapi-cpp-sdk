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

#include <alibabacloud/cdn/model/DescribeDomainHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHitRateDataResult::DescribeDomainHitRateDataResult() :
	ServiceResult()
{}

DescribeDomainHitRateDataResult::DescribeDomainHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainHitRateDataResult::~DescribeDomainHitRateDataResult()
{}

void DescribeDomainHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allHitRateInterval = value["HitRateInterval"]["DataModule"];
	for (auto value : allHitRateInterval)
	{
		DataModule dataModuleObject;
		dataModuleObject.timeStamp = value["TimeStamp"].asString();
		dataModuleObject.value = value["Value"].asString();
		hitRateInterval_.push_back(dataModuleObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainHitRateDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainHitRateDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainHitRateDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainHitRateDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainHitRateDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainHitRateDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainHitRateDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

