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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainHitRateDataResult::DescribeDcdnDomainHitRateDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainHitRateDataResult::DescribeDcdnDomainHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainHitRateDataResult::~DescribeDcdnDomainHitRateDataResult()
{}

void DescribeDcdnDomainHitRateDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHitRatePerInterval = value["HitRatePerInterval"]["DataModule"];
	for (auto value : allHitRatePerInterval)
	{
		DataModule hitRatePerIntervalObject;
		if(!value["TimeStamp"].isNull())
			hitRatePerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["ReqHitRate"].isNull())
			hitRatePerIntervalObject.reqHitRate = std::stof(value["ReqHitRate"].asString());
		if(!value["ByteHitRate"].isNull())
			hitRatePerIntervalObject.byteHitRate = std::stof(value["ByteHitRate"].asString());
		hitRatePerInterval_.push_back(hitRatePerIntervalObject);
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

std::string DescribeDcdnDomainHitRateDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainHitRateDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeDcdnDomainHitRateDataResult::DataModule> DescribeDcdnDomainHitRateDataResult::getHitRatePerInterval()const
{
	return hitRatePerInterval_;
}

std::string DescribeDcdnDomainHitRateDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

