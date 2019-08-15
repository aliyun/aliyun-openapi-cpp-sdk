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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUsageDataPerInterval = value["UsageDataPerInterval"]["DataModule"];
	for (auto value : allUsageDataPerInterval)
	{
		DataModule usageDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			usageDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["PeakTime"].isNull())
			usageDataPerIntervalObject.peakTime = value["PeakTime"].asString();
		if(!value["Value"].isNull())
			usageDataPerIntervalObject.value = value["Value"].asString();
		if(!value["SpecialValue"].isNull())
			usageDataPerIntervalObject.specialValue = value["SpecialValue"].asString();
		usageDataPerInterval_.push_back(usageDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Area"].isNull())
		area_ = value["Area"].asString();
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

