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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainRealTimeSrcTrafficDataResult::DescribeScdnDomainRealTimeSrcTrafficDataResult() :
	ServiceResult()
{}

DescribeScdnDomainRealTimeSrcTrafficDataResult::DescribeScdnDomainRealTimeSrcTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainRealTimeSrcTrafficDataResult::~DescribeScdnDomainRealTimeSrcTrafficDataResult()
{}

void DescribeScdnDomainRealTimeSrcTrafficDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRealTimeSrcTrafficDataPerInterval = value["RealTimeSrcTrafficDataPerInterval"]["DataModule"];
	for (auto value : allRealTimeSrcTrafficDataPerInterval)
	{
		DataModule realTimeSrcTrafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			realTimeSrcTrafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			realTimeSrcTrafficDataPerIntervalObject.value = value["Value"].asString();
		realTimeSrcTrafficDataPerInterval_.push_back(realTimeSrcTrafficDataPerIntervalObject);
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

std::string DescribeScdnDomainRealTimeSrcTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeScdnDomainRealTimeSrcTrafficDataResult::DataModule> DescribeScdnDomainRealTimeSrcTrafficDataResult::getRealTimeSrcTrafficDataPerInterval()const
{
	return realTimeSrcTrafficDataPerInterval_;
}

