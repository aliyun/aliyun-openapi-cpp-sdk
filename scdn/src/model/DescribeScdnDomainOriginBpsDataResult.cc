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

#include <alibabacloud/scdn/model/DescribeScdnDomainOriginBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainOriginBpsDataResult::DescribeScdnDomainOriginBpsDataResult() :
	ServiceResult()
{}

DescribeScdnDomainOriginBpsDataResult::DescribeScdnDomainOriginBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainOriginBpsDataResult::~DescribeScdnDomainOriginBpsDataResult()
{}

void DescribeScdnDomainOriginBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOriginBpsDataPerIntervalNode = value["OriginBpsDataPerInterval"]["DataModule"];
	for (auto valueOriginBpsDataPerIntervalDataModule : allOriginBpsDataPerIntervalNode)
	{
		DataModule originBpsDataPerIntervalObject;
		if(!valueOriginBpsDataPerIntervalDataModule["HttpOriginBpsValue"].isNull())
			originBpsDataPerIntervalObject.httpOriginBpsValue = valueOriginBpsDataPerIntervalDataModule["HttpOriginBpsValue"].asString();
		if(!valueOriginBpsDataPerIntervalDataModule["TimeStamp"].isNull())
			originBpsDataPerIntervalObject.timeStamp = valueOriginBpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueOriginBpsDataPerIntervalDataModule["HttpsOriginBpsValue"].isNull())
			originBpsDataPerIntervalObject.httpsOriginBpsValue = valueOriginBpsDataPerIntervalDataModule["HttpsOriginBpsValue"].asString();
		if(!valueOriginBpsDataPerIntervalDataModule["OriginBpsValue"].isNull())
			originBpsDataPerIntervalObject.originBpsValue = valueOriginBpsDataPerIntervalDataModule["OriginBpsValue"].asString();
		originBpsDataPerInterval_.push_back(originBpsDataPerIntervalObject);
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

std::string DescribeScdnDomainOriginBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainOriginBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainOriginBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainOriginBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeScdnDomainOriginBpsDataResult::DataModule> DescribeScdnDomainOriginBpsDataResult::getOriginBpsDataPerInterval()const
{
	return originBpsDataPerInterval_;
}

