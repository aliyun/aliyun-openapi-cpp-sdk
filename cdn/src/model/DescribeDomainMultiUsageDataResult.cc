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

#include <alibabacloud/cdn/model/DescribeDomainMultiUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainMultiUsageDataResult::DescribeDomainMultiUsageDataResult() :
	ServiceResult()
{}

DescribeDomainMultiUsageDataResult::DescribeDomainMultiUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainMultiUsageDataResult::~DescribeDomainMultiUsageDataResult()
{}

void DescribeDomainMultiUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRequestPerIntervalNode = value["RequestPerInterval"]["RequestDataModule"];
	for (auto valueRequestPerIntervalRequestDataModule : allRequestPerIntervalNode)
	{
		RequestDataModule requestPerIntervalObject;
		if(!valueRequestPerIntervalRequestDataModule["Type"].isNull())
			requestPerIntervalObject.type = valueRequestPerIntervalRequestDataModule["Type"].asString();
		if(!valueRequestPerIntervalRequestDataModule["TimeStamp"].isNull())
			requestPerIntervalObject.timeStamp = valueRequestPerIntervalRequestDataModule["TimeStamp"].asString();
		if(!valueRequestPerIntervalRequestDataModule["Domain"].isNull())
			requestPerIntervalObject.domain = valueRequestPerIntervalRequestDataModule["Domain"].asString();
		if(!valueRequestPerIntervalRequestDataModule["Request"].isNull())
			requestPerIntervalObject.request = std::stol(valueRequestPerIntervalRequestDataModule["Request"].asString());
		requestPerInterval_.push_back(requestPerIntervalObject);
	}
	auto allTrafficPerIntervalNode = value["TrafficPerInterval"]["TrafficDataModule"];
	for (auto valueTrafficPerIntervalTrafficDataModule : allTrafficPerIntervalNode)
	{
		TrafficDataModule trafficPerIntervalObject;
		if(!valueTrafficPerIntervalTrafficDataModule["Type"].isNull())
			trafficPerIntervalObject.type = valueTrafficPerIntervalTrafficDataModule["Type"].asString();
		if(!valueTrafficPerIntervalTrafficDataModule["Domain"].isNull())
			trafficPerIntervalObject.domain = valueTrafficPerIntervalTrafficDataModule["Domain"].asString();
		if(!valueTrafficPerIntervalTrafficDataModule["TimeStamp"].isNull())
			trafficPerIntervalObject.timeStamp = valueTrafficPerIntervalTrafficDataModule["TimeStamp"].asString();
		if(!valueTrafficPerIntervalTrafficDataModule["Area"].isNull())
			trafficPerIntervalObject.area = valueTrafficPerIntervalTrafficDataModule["Area"].asString();
		if(!valueTrafficPerIntervalTrafficDataModule["Bps"].isNull())
			trafficPerIntervalObject.bps = std::stof(valueTrafficPerIntervalTrafficDataModule["Bps"].asString());
		trafficPerInterval_.push_back(trafficPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeDomainMultiUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainMultiUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainMultiUsageDataResult::RequestDataModule> DescribeDomainMultiUsageDataResult::getRequestPerInterval()const
{
	return requestPerInterval_;
}

std::vector<DescribeDomainMultiUsageDataResult::TrafficDataModule> DescribeDomainMultiUsageDataResult::getTrafficPerInterval()const
{
	return trafficPerInterval_;
}

