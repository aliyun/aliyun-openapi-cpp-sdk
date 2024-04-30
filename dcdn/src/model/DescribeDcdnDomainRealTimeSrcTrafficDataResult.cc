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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainRealTimeSrcTrafficDataResult::DescribeDcdnDomainRealTimeSrcTrafficDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainRealTimeSrcTrafficDataResult::DescribeDcdnDomainRealTimeSrcTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainRealTimeSrcTrafficDataResult::~DescribeDcdnDomainRealTimeSrcTrafficDataResult()
{}

void DescribeDcdnDomainRealTimeSrcTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRealTimeSrcTrafficDataPerIntervalNode = value["RealTimeSrcTrafficDataPerInterval"]["DataModule"];
	for (auto valueRealTimeSrcTrafficDataPerIntervalDataModule : allRealTimeSrcTrafficDataPerIntervalNode)
	{
		DataModule realTimeSrcTrafficDataPerIntervalObject;
		if(!valueRealTimeSrcTrafficDataPerIntervalDataModule["Value"].isNull())
			realTimeSrcTrafficDataPerIntervalObject.value = valueRealTimeSrcTrafficDataPerIntervalDataModule["Value"].asString();
		if(!valueRealTimeSrcTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			realTimeSrcTrafficDataPerIntervalObject.timeStamp = valueRealTimeSrcTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		realTimeSrcTrafficDataPerInterval_.push_back(realTimeSrcTrafficDataPerIntervalObject);
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

std::string DescribeDcdnDomainRealTimeSrcTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainRealTimeSrcTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainRealTimeSrcTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainRealTimeSrcTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDcdnDomainRealTimeSrcTrafficDataResult::DataModule> DescribeDcdnDomainRealTimeSrcTrafficDataResult::getRealTimeSrcTrafficDataPerInterval()const
{
	return realTimeSrcTrafficDataPerInterval_;
}

