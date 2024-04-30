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
	auto allOriginBpsDataPerIntervalNode = value["OriginBpsDataPerInterval"]["DataModule"];
	for (auto valueOriginBpsDataPerIntervalDataModule : allOriginBpsDataPerIntervalNode)
	{
		DataModule originBpsDataPerIntervalObject;
		if(!valueOriginBpsDataPerIntervalDataModule["DynamicHttpOriginBps"].isNull())
			originBpsDataPerIntervalObject.dynamicHttpOriginBps = std::stof(valueOriginBpsDataPerIntervalDataModule["DynamicHttpOriginBps"].asString());
		if(!valueOriginBpsDataPerIntervalDataModule["StaticHttpOriginBps"].isNull())
			originBpsDataPerIntervalObject.staticHttpOriginBps = std::stof(valueOriginBpsDataPerIntervalDataModule["StaticHttpOriginBps"].asString());
		if(!valueOriginBpsDataPerIntervalDataModule["TimeStamp"].isNull())
			originBpsDataPerIntervalObject.timeStamp = valueOriginBpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueOriginBpsDataPerIntervalDataModule["StaticHttpsOriginBps"].isNull())
			originBpsDataPerIntervalObject.staticHttpsOriginBps = std::stof(valueOriginBpsDataPerIntervalDataModule["StaticHttpsOriginBps"].asString());
		if(!valueOriginBpsDataPerIntervalDataModule["OriginBps"].isNull())
			originBpsDataPerIntervalObject.originBps = std::stof(valueOriginBpsDataPerIntervalDataModule["OriginBps"].asString());
		if(!valueOriginBpsDataPerIntervalDataModule["DynamicHttpsOriginBps"].isNull())
			originBpsDataPerIntervalObject.dynamicHttpsOriginBps = std::stof(valueOriginBpsDataPerIntervalDataModule["DynamicHttpsOriginBps"].asString());
		originBpsDataPerInterval_.push_back(originBpsDataPerIntervalObject);
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

