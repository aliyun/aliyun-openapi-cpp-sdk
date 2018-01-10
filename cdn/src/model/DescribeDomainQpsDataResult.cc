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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainQpsDataResult::DescribeDomainQpsDataResult() :
	ServiceResult()
{}

DescribeDomainQpsDataResult::DescribeDomainQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainQpsDataResult::~DescribeDomainQpsDataResult()
{}

void DescribeDomainQpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allQpsDataInterval = value["QpsDataInterval"]["DataModule"];
	for (auto value : allQpsDataInterval)
	{
		DataModule dataModuleObject;
		dataModuleObject.timeStamp = value["TimeStamp"].asString();
		dataModuleObject.value = value["Value"].asString();
		dataModuleObject.domesticValue = value["DomesticValue"].asString();
		dataModuleObject.overseasValue = value["OverseasValue"].asString();
		dataModuleObject.accValue = value["AccValue"].asString();
		dataModuleObject.accDomesticValue = value["AccDomesticValue"].asString();
		dataModuleObject.accOverseasValue = value["AccOverseasValue"].asString();
		dataModuleObject.dynamicValue = value["DynamicValue"].asString();
		dataModuleObject.dynamicDomesticValue = value["DynamicDomesticValue"].asString();
		dataModuleObject.dynamicOverseasValue = value["DynamicOverseasValue"].asString();
		dataModuleObject.staticValue = value["StaticValue"].asString();
		dataModuleObject.staticDomesticValue = value["StaticDomesticValue"].asString();
		dataModuleObject.staticOverseasValue = value["StaticOverseasValue"].asString();
		qpsDataInterval_.push_back(dataModuleObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainQpsDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainQpsDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainQpsDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainQpsDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainQpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainQpsDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainQpsDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainQpsDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

