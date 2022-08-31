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

#include <alibabacloud/scdn/model/DescribeScdnDomainTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainTrafficDataResult::DescribeScdnDomainTrafficDataResult() :
	ServiceResult()
{}

DescribeScdnDomainTrafficDataResult::DescribeScdnDomainTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainTrafficDataResult::~DescribeScdnDomainTrafficDataResult()
{}

void DescribeScdnDomainTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficDataPerIntervalNode = value["TrafficDataPerInterval"]["DataModule"];
	for (auto valueTrafficDataPerIntervalDataModule : allTrafficDataPerIntervalNode)
	{
		DataModule trafficDataPerIntervalObject;
		if(!valueTrafficDataPerIntervalDataModule["TrafficValue"].isNull())
			trafficDataPerIntervalObject.trafficValue = valueTrafficDataPerIntervalDataModule["TrafficValue"].asString();
		if(!valueTrafficDataPerIntervalDataModule["HttpTrafficValue"].isNull())
			trafficDataPerIntervalObject.httpTrafficValue = valueTrafficDataPerIntervalDataModule["HttpTrafficValue"].asString();
		if(!valueTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			trafficDataPerIntervalObject.timeStamp = valueTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueTrafficDataPerIntervalDataModule["HttpsTrafficValue"].isNull())
			trafficDataPerIntervalObject.httpsTrafficValue = valueTrafficDataPerIntervalDataModule["HttpsTrafficValue"].asString();
		trafficDataPerInterval_.push_back(trafficDataPerIntervalObject);
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

std::string DescribeScdnDomainTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeScdnDomainTrafficDataResult::DataModule> DescribeScdnDomainTrafficDataResult::getTrafficDataPerInterval()const
{
	return trafficDataPerInterval_;
}

std::string DescribeScdnDomainTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

