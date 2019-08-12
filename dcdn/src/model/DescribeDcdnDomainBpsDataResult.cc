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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBpsDataPerInterval = value["BpsDataPerInterval"]["DataModule"];
	for (auto value : allBpsDataPerInterval)
	{
		DataModule bpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			bpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Bps"].isNull())
			bpsDataPerIntervalObject.bps = std::stof(value["Bps"].asString());
		if(!value["DynamicHttpBps"].isNull())
			bpsDataPerIntervalObject.dynamicHttpBps = std::stof(value["DynamicHttpBps"].asString());
		if(!value["DynamicHttpsBps"].isNull())
			bpsDataPerIntervalObject.dynamicHttpsBps = std::stof(value["DynamicHttpsBps"].asString());
		if(!value["StaticHttpBps"].isNull())
			bpsDataPerIntervalObject.staticHttpBps = std::stof(value["StaticHttpBps"].asString());
		if(!value["StaticHttpsBps"].isNull())
			bpsDataPerIntervalObject.staticHttpsBps = std::stof(value["StaticHttpsBps"].asString());
		bpsDataPerInterval_.push_back(bpsDataPerIntervalObject);
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

