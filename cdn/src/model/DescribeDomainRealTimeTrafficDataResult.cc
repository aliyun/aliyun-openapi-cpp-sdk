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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeTrafficDataResult::DescribeDomainRealTimeTrafficDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeTrafficDataResult::DescribeDomainRealTimeTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeTrafficDataResult::~DescribeDomainRealTimeTrafficDataResult()
{}

void DescribeDomainRealTimeTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRealTimeTrafficDataPerIntervalNode = value["RealTimeTrafficDataPerInterval"]["DataModule"];
	for (auto valueRealTimeTrafficDataPerIntervalDataModule : allRealTimeTrafficDataPerIntervalNode)
	{
		DataModule realTimeTrafficDataPerIntervalObject;
		if(!valueRealTimeTrafficDataPerIntervalDataModule["Value"].isNull())
			realTimeTrafficDataPerIntervalObject.value = valueRealTimeTrafficDataPerIntervalDataModule["Value"].asString();
		if(!valueRealTimeTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			realTimeTrafficDataPerIntervalObject.timeStamp = valueRealTimeTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		realTimeTrafficDataPerInterval_.push_back(realTimeTrafficDataPerIntervalObject);
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

std::string DescribeDomainRealTimeTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeDomainRealTimeTrafficDataResult::DataModule> DescribeDomainRealTimeTrafficDataResult::getRealTimeTrafficDataPerInterval()const
{
	return realTimeTrafficDataPerInterval_;
}

std::string DescribeDomainRealTimeTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainRealTimeTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainRealTimeTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

