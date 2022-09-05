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

#include <alibabacloud/cdn/model/DescribeDomainPvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainPvDataResult::DescribeDomainPvDataResult() :
	ServiceResult()
{}

DescribeDomainPvDataResult::DescribeDomainPvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainPvDataResult::~DescribeDomainPvDataResult()
{}

void DescribeDomainPvDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPvDataIntervalNode = value["PvDataInterval"]["UsageData"];
	for (auto valuePvDataIntervalUsageData : allPvDataIntervalNode)
	{
		UsageData pvDataIntervalObject;
		if(!valuePvDataIntervalUsageData["Value"].isNull())
			pvDataIntervalObject.value = valuePvDataIntervalUsageData["Value"].asString();
		if(!valuePvDataIntervalUsageData["TimeStamp"].isNull())
			pvDataIntervalObject.timeStamp = valuePvDataIntervalUsageData["TimeStamp"].asString();
		pvDataInterval_.push_back(pvDataIntervalObject);
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

std::string DescribeDomainPvDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainPvDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainPvDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainPvDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainPvDataResult::UsageData> DescribeDomainPvDataResult::getPvDataInterval()const
{
	return pvDataInterval_;
}

