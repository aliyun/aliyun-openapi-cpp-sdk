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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeDataResult::DescribeDomainRealTimeDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeDataResult::DescribeDomainRealTimeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeDataResult::~DescribeDomainRealTimeDataResult()
{}

void DescribeDomainRealTimeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataPerInterval = value["DataPerInterval"]["DataModule"];
	for (auto value : allDataPerInterval)
	{
		DataModule dataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			dataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			dataPerIntervalObject.value = value["Value"].asString();
		dataPerInterval_.push_back(dataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["Field"].isNull())
		field_ = value["Field"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainRealTimeDataResult::getField()const
{
	return field_;
}

std::string DescribeDomainRealTimeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainRealTimeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainRealTimeDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainRealTimeDataResult::DataModule> DescribeDomainRealTimeDataResult::getDataPerInterval()const
{
	return dataPerInterval_;
}

