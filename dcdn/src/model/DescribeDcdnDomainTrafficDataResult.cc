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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainTrafficDataResult::DescribeDcdnDomainTrafficDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainTrafficDataResult::DescribeDcdnDomainTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainTrafficDataResult::~DescribeDcdnDomainTrafficDataResult()
{}

void DescribeDcdnDomainTrafficDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTrafficDataPerInterval = value["TrafficDataPerInterval"]["DataModule"];
	for (auto value : allTrafficDataPerInterval)
	{
		DataModule trafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			trafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Traffic"].isNull())
			trafficDataPerIntervalObject.traffic = std::stof(value["Traffic"].asString());
		if(!value["DynamicHttpTraffic"].isNull())
			trafficDataPerIntervalObject.dynamicHttpTraffic = std::stof(value["DynamicHttpTraffic"].asString());
		if(!value["DynamicHttpsTraffic"].isNull())
			trafficDataPerIntervalObject.dynamicHttpsTraffic = std::stof(value["DynamicHttpsTraffic"].asString());
		if(!value["StaticHttpTraffic"].isNull())
			trafficDataPerIntervalObject.staticHttpTraffic = std::stof(value["StaticHttpTraffic"].asString());
		if(!value["StaticHttpsTraffic"].isNull())
			trafficDataPerIntervalObject.staticHttpsTraffic = std::stof(value["StaticHttpsTraffic"].asString());
		trafficDataPerInterval_.push_back(trafficDataPerIntervalObject);
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

std::string DescribeDcdnDomainTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeDcdnDomainTrafficDataResult::DataModule> DescribeDcdnDomainTrafficDataResult::getTrafficDataPerInterval()const
{
	return trafficDataPerInterval_;
}

std::string DescribeDcdnDomainTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

