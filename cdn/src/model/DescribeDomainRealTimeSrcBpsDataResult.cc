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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeSrcBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeSrcBpsDataResult::DescribeDomainRealTimeSrcBpsDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeSrcBpsDataResult::DescribeDomainRealTimeSrcBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeSrcBpsDataResult::~DescribeDomainRealTimeSrcBpsDataResult()
{}

void DescribeDomainRealTimeSrcBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRealTimeSrcBpsDataPerInterval = value["RealTimeSrcBpsDataPerInterval"]["DataModule"];
	for (auto value : allRealTimeSrcBpsDataPerInterval)
	{
		DataModule realTimeSrcBpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			realTimeSrcBpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			realTimeSrcBpsDataPerIntervalObject.value = value["Value"].asString();
		realTimeSrcBpsDataPerInterval_.push_back(realTimeSrcBpsDataPerIntervalObject);
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

std::string DescribeDomainRealTimeSrcBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeDomainRealTimeSrcBpsDataResult::DataModule> DescribeDomainRealTimeSrcBpsDataResult::getRealTimeSrcBpsDataPerInterval()const
{
	return realTimeSrcBpsDataPerInterval_;
}

std::string DescribeDomainRealTimeSrcBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainRealTimeSrcBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainRealTimeSrcBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

