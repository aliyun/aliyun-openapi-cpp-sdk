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

#include <alibabacloud/scdn/model/DescribeScdnDomainHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainHitRateDataResult::DescribeScdnDomainHitRateDataResult() :
	ServiceResult()
{}

DescribeScdnDomainHitRateDataResult::DescribeScdnDomainHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainHitRateDataResult::~DescribeScdnDomainHitRateDataResult()
{}

void DescribeScdnDomainHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHitRatePerIntervalNode = value["HitRatePerInterval"]["DataModule"];
	for (auto valueHitRatePerIntervalDataModule : allHitRatePerIntervalNode)
	{
		DataModule hitRatePerIntervalObject;
		if(!valueHitRatePerIntervalDataModule["TimeStamp"].isNull())
			hitRatePerIntervalObject.timeStamp = valueHitRatePerIntervalDataModule["TimeStamp"].asString();
		if(!valueHitRatePerIntervalDataModule["ByteHitRate"].isNull())
			hitRatePerIntervalObject.byteHitRate = valueHitRatePerIntervalDataModule["ByteHitRate"].asString();
		if(!valueHitRatePerIntervalDataModule["ReqHitRate"].isNull())
			hitRatePerIntervalObject.reqHitRate = valueHitRatePerIntervalDataModule["ReqHitRate"].asString();
		hitRatePerInterval_.push_back(hitRatePerIntervalObject);
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

std::string DescribeScdnDomainHitRateDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainHitRateDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeScdnDomainHitRateDataResult::DataModule> DescribeScdnDomainHitRateDataResult::getHitRatePerInterval()const
{
	return hitRatePerInterval_;
}

std::string DescribeScdnDomainHitRateDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

