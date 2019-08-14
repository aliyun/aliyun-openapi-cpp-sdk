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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOriginTrafficDataPerInterval = value["OriginTrafficDataPerInterval"]["DataModule"];
	for (auto value : allOriginTrafficDataPerInterval)
	{
		DataModule originTrafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			originTrafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["OriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.originTraffic = std::stof(value["OriginTraffic"].asString());
		if(!value["DynamicHttpOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.dynamicHttpOriginTraffic = std::stof(value["DynamicHttpOriginTraffic"].asString());
		if(!value["DynamicHttpsOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.dynamicHttpsOriginTraffic = std::stof(value["DynamicHttpsOriginTraffic"].asString());
		if(!value["StaticHttpOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.staticHttpOriginTraffic = std::stof(value["StaticHttpOriginTraffic"].asString());
		if(!value["StaticHttpsOriginTraffic"].isNull())
			originTrafficDataPerIntervalObject.staticHttpsOriginTraffic = std::stof(value["StaticHttpsOriginTraffic"].asString());
		originTrafficDataPerInterval_.push_back(originTrafficDataPerIntervalObject);
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

