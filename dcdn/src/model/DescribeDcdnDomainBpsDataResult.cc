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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainBpsDataResult::DescribeDcdnDomainBpsDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainBpsDataResult::DescribeDcdnDomainBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainBpsDataResult::~DescribeDcdnDomainBpsDataResult()
{}

void DescribeDcdnDomainBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBpsDataPerIntervalNode = value["BpsDataPerInterval"]["DataModule"];
	for (auto valueBpsDataPerIntervalDataModule : allBpsDataPerIntervalNode)
	{
		DataModule bpsDataPerIntervalObject;
		if(!valueBpsDataPerIntervalDataModule["TimeStamp"].isNull())
			bpsDataPerIntervalObject.timeStamp = valueBpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueBpsDataPerIntervalDataModule["StaticHttpsBps"].isNull())
			bpsDataPerIntervalObject.staticHttpsBps = std::stof(valueBpsDataPerIntervalDataModule["StaticHttpsBps"].asString());
		if(!valueBpsDataPerIntervalDataModule["Bps"].isNull())
			bpsDataPerIntervalObject.bps = std::stof(valueBpsDataPerIntervalDataModule["Bps"].asString());
		if(!valueBpsDataPerIntervalDataModule["DynamicHttpsBps"].isNull())
			bpsDataPerIntervalObject.dynamicHttpsBps = std::stof(valueBpsDataPerIntervalDataModule["DynamicHttpsBps"].asString());
		if(!valueBpsDataPerIntervalDataModule["DynamicHttpBps"].isNull())
			bpsDataPerIntervalObject.dynamicHttpBps = std::stof(valueBpsDataPerIntervalDataModule["DynamicHttpBps"].asString());
		if(!valueBpsDataPerIntervalDataModule["StaticHttpBps"].isNull())
			bpsDataPerIntervalObject.staticHttpBps = std::stof(valueBpsDataPerIntervalDataModule["StaticHttpBps"].asString());
		bpsDataPerInterval_.push_back(bpsDataPerIntervalObject);
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

std::string DescribeDcdnDomainBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDcdnDomainBpsDataResult::DataModule> DescribeDcdnDomainBpsDataResult::getBpsDataPerInterval()const
{
	return bpsDataPerInterval_;
}

