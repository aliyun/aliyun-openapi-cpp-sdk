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

#include <alibabacloud/cdn/model/DescribeDomainUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainUsageDataResult::DescribeDomainUsageDataResult() :
	ServiceResult()
{}

DescribeDomainUsageDataResult::DescribeDomainUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainUsageDataResult::~DescribeDomainUsageDataResult()
{}

void DescribeDomainUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsageDataPerIntervalNode = value["UsageDataPerInterval"]["DataModule"];
	for (auto valueUsageDataPerIntervalDataModule : allUsageDataPerIntervalNode)
	{
		DataModule usageDataPerIntervalObject;
		if(!valueUsageDataPerIntervalDataModule["Value"].isNull())
			usageDataPerIntervalObject.value = valueUsageDataPerIntervalDataModule["Value"].asString();
		if(!valueUsageDataPerIntervalDataModule["TimeStamp"].isNull())
			usageDataPerIntervalObject.timeStamp = valueUsageDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueUsageDataPerIntervalDataModule["PeakTime"].isNull())
			usageDataPerIntervalObject.peakTime = valueUsageDataPerIntervalDataModule["PeakTime"].asString();
		if(!valueUsageDataPerIntervalDataModule["SpecialValue"].isNull())
			usageDataPerIntervalObject.specialValue = valueUsageDataPerIntervalDataModule["SpecialValue"].asString();
		usageDataPerInterval_.push_back(usageDataPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Area"].isNull())
		area_ = value["Area"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::vector<DescribeDomainUsageDataResult::DataModule> DescribeDomainUsageDataResult::getUsageDataPerInterval()const
{
	return usageDataPerInterval_;
}

std::string DescribeDomainUsageDataResult::getType()const
{
	return type_;
}

std::string DescribeDomainUsageDataResult::getArea()const
{
	return area_;
}

std::string DescribeDomainUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainUsageDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainUsageDataResult::getDataInterval()const
{
	return dataInterval_;
}

