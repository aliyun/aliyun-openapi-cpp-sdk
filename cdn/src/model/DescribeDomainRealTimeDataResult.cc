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
		DataModule dataModuleObject;
		dataModuleObject.timeStamp = value["TimeStamp"].asString();
		dataModuleObject.value = value["Value"].asString();
		dataPerInterval_.push_back(dataModuleObject);
	}
	domainName_ = value["DomainName"].asString();
	field_ = value["Field"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainRealTimeDataResult::getField()const
{
	return field_;
}

void DescribeDomainRealTimeDataResult::setField(const std::string& field)
{
	field_ = field;
}

std::string DescribeDomainRealTimeDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainRealTimeDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainRealTimeDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

