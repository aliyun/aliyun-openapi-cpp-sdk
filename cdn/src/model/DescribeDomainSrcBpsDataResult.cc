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

#include <alibabacloud/cdn/model/DescribeDomainSrcBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcBpsDataResult::DescribeDomainSrcBpsDataResult() :
	ServiceResult()
{}

DescribeDomainSrcBpsDataResult::DescribeDomainSrcBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSrcBpsDataResult::~DescribeDomainSrcBpsDataResult()
{}

void DescribeDomainSrcBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSrcBpsDataPerInterval = value["SrcBpsDataPerInterval"]["DataModule"];
	for (auto value : allSrcBpsDataPerInterval)
	{
		DataModule dataModuleObject;
		dataModuleObject.timeStamp = value["TimeStamp"].asString();
		dataModuleObject.value = value["Value"].asString();
		srcBpsDataPerInterval_.push_back(dataModuleObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainSrcBpsDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcBpsDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainSrcBpsDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcBpsDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainSrcBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainSrcBpsDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainSrcBpsDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcBpsDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

