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

#include <alibabacloud/cdn/model/DescribeDomainSrcTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcTrafficDataResult::DescribeDomainSrcTrafficDataResult() :
	ServiceResult()
{}

DescribeDomainSrcTrafficDataResult::DescribeDomainSrcTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSrcTrafficDataResult::~DescribeDomainSrcTrafficDataResult()
{}

void DescribeDomainSrcTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSrcTrafficDataPerIntervalNode = value["SrcTrafficDataPerInterval"]["DataModule"];
	for (auto valueSrcTrafficDataPerIntervalDataModule : allSrcTrafficDataPerIntervalNode)
	{
		DataModule srcTrafficDataPerIntervalObject;
		if(!valueSrcTrafficDataPerIntervalDataModule["Value"].isNull())
			srcTrafficDataPerIntervalObject.value = valueSrcTrafficDataPerIntervalDataModule["Value"].asString();
		if(!valueSrcTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			srcTrafficDataPerIntervalObject.timeStamp = valueSrcTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueSrcTrafficDataPerIntervalDataModule["HttpsValue"].isNull())
			srcTrafficDataPerIntervalObject.httpsValue = valueSrcTrafficDataPerIntervalDataModule["HttpsValue"].asString();
		srcTrafficDataPerInterval_.push_back(srcTrafficDataPerIntervalObject);
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

std::string DescribeDomainSrcTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainSrcTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainSrcTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainSrcTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainSrcTrafficDataResult::DataModule> DescribeDomainSrcTrafficDataResult::getSrcTrafficDataPerInterval()const
{
	return srcTrafficDataPerInterval_;
}

