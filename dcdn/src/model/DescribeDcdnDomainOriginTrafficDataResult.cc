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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainOriginTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainOriginTrafficDataResult::DescribeDcdnDomainOriginTrafficDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainOriginTrafficDataResult::DescribeDcdnDomainOriginTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainOriginTrafficDataResult::~DescribeDcdnDomainOriginTrafficDataResult()
{}

void DescribeDcdnDomainOriginTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOriginTrafficDataPerIntervalNode = value["OriginTrafficDataPerInterval"]["DataModule"];
	for (auto valueOriginTrafficDataPerIntervalDataModule : allOriginTrafficDataPerIntervalNode)
	{
		DataModule originTrafficDataPerIntervalObject;
		if(!valueOriginTrafficDataPerIntervalDataModule["DynamicHttpOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.dynamicHttpOriginTraffic = std::stof(valueOriginTrafficDataPerIntervalDataModule["DynamicHttpOriginTraffic"].asString());
		if(!valueOriginTrafficDataPerIntervalDataModule["StaticHttpsOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.staticHttpsOriginTraffic = std::stof(valueOriginTrafficDataPerIntervalDataModule["StaticHttpsOriginTraffic"].asString());
		if(!valueOriginTrafficDataPerIntervalDataModule["OriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.originTraffic = std::stof(valueOriginTrafficDataPerIntervalDataModule["OriginTraffic"].asString());
		if(!valueOriginTrafficDataPerIntervalDataModule["StaticHttpOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.staticHttpOriginTraffic = std::stof(valueOriginTrafficDataPerIntervalDataModule["StaticHttpOriginTraffic"].asString());
		if(!valueOriginTrafficDataPerIntervalDataModule["DynamicHttpsOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.dynamicHttpsOriginTraffic = std::stof(valueOriginTrafficDataPerIntervalDataModule["DynamicHttpsOriginTraffic"].asString());
		if(!valueOriginTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			originTrafficDataPerIntervalObject.timeStamp = valueOriginTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		originTrafficDataPerInterval_.push_back(originTrafficDataPerIntervalObject);
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

std::string DescribeDcdnDomainOriginTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainOriginTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainOriginTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainOriginTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDcdnDomainOriginTrafficDataResult::DataModule> DescribeDcdnDomainOriginTrafficDataResult::getOriginTrafficDataPerInterval()const
{
	return originTrafficDataPerInterval_;
}

