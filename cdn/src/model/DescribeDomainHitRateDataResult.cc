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

#include <alibabacloud/cdn/model/DescribeDomainHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHitRateDataResult::DescribeDomainHitRateDataResult() :
	ServiceResult()
{}

DescribeDomainHitRateDataResult::DescribeDomainHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainHitRateDataResult::~DescribeDomainHitRateDataResult()
{}

void DescribeDomainHitRateDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHitRateInterval = value["HitRateInterval"]["DataModule"];
	for (auto value : allHitRateInterval)
	{
		DataModule hitRateIntervalObject;
		if(!value["TimeStamp"].isNull())
			hitRateIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			hitRateIntervalObject.value = value["Value"].asString();
		hitRateInterval_.push_back(hitRateIntervalObject);
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

std::vector<DescribeDomainHitRateDataResult::DataModule> DescribeDomainHitRateDataResult::getHitRateInterval()const
{
	return hitRateInterval_;
}

std::string DescribeDomainHitRateDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainHitRateDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainHitRateDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

