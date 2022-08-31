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

#include <alibabacloud/cdn/model/DescribeDomainReqHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainReqHitRateDataResult::DescribeDomainReqHitRateDataResult() :
	ServiceResult()
{}

DescribeDomainReqHitRateDataResult::DescribeDomainReqHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainReqHitRateDataResult::~DescribeDomainReqHitRateDataResult()
{}

void DescribeDomainReqHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReqHitRateIntervalNode = value["ReqHitRateInterval"]["DataModule"];
	for (auto valueReqHitRateIntervalDataModule : allReqHitRateIntervalNode)
	{
		DataModule reqHitRateIntervalObject;
		if(!valueReqHitRateIntervalDataModule["Value"].isNull())
			reqHitRateIntervalObject.value = valueReqHitRateIntervalDataModule["Value"].asString();
		if(!valueReqHitRateIntervalDataModule["TimeStamp"].isNull())
			reqHitRateIntervalObject.timeStamp = valueReqHitRateIntervalDataModule["TimeStamp"].asString();
		reqHitRateInterval_.push_back(reqHitRateIntervalObject);
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

std::vector<DescribeDomainReqHitRateDataResult::DataModule> DescribeDomainReqHitRateDataResult::getReqHitRateInterval()const
{
	return reqHitRateInterval_;
}

std::string DescribeDomainReqHitRateDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainReqHitRateDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainReqHitRateDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainReqHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

