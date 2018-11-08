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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainOriginBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainOriginBpsDataResult::DescribeDcdnDomainOriginBpsDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainOriginBpsDataResult::DescribeDcdnDomainOriginBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainOriginBpsDataResult::~DescribeDcdnDomainOriginBpsDataResult()
{}

void DescribeDcdnDomainOriginBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allOriginBpsDataPerInterval = value["OriginBpsDataPerInterval"]["DataModule"];
	for (auto value : allOriginBpsDataPerInterval)
	{
		DataModule originBpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			originBpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["OriginBps"].isNull())
			originBpsDataPerIntervalObject.originBps = std::stof(value["OriginBps"].asString());
		if(!value["DynamicHttpOriginBps"].isNull())
			originBpsDataPerIntervalObject.dynamicHttpOriginBps = std::stof(value["DynamicHttpOriginBps"].asString());
		if(!value["DynamicHttpsOriginBps"].isNull())
			originBpsDataPerIntervalObject.dynamicHttpsOriginBps = std::stof(value["DynamicHttpsOriginBps"].asString());
		if(!value["StaticHttpOriginBps"].isNull())
			originBpsDataPerIntervalObject.staticHttpOriginBps = std::stof(value["StaticHttpOriginBps"].asString());
		if(!value["StaticHttpsOriginBps"].isNull())
			originBpsDataPerIntervalObject.staticHttpsOriginBps = std::stof(value["StaticHttpsOriginBps"].asString());
		originBpsDataPerInterval_.push_back(originBpsDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDcdnDomainOriginBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainOriginBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainOriginBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainOriginBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDcdnDomainOriginBpsDataResult::DataModule> DescribeDcdnDomainOriginBpsDataResult::getOriginBpsDataPerInterval()const
{
	return originBpsDataPerInterval_;
}

