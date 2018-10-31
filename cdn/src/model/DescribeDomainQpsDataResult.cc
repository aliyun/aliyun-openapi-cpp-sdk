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
		DataModule qpsDataIntervalObject;
		if(!value["TimeStamp"].isNull())
			qpsDataIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			qpsDataIntervalObject.value = value["Value"].asString();
		if(!value["DomesticValue"].isNull())
			qpsDataIntervalObject.domesticValue = value["DomesticValue"].asString();
		if(!value["OverseasValue"].isNull())
			qpsDataIntervalObject.overseasValue = value["OverseasValue"].asString();
		if(!value["AccValue"].isNull())
			qpsDataIntervalObject.accValue = value["AccValue"].asString();
		if(!value["AccDomesticValue"].isNull())
			qpsDataIntervalObject.accDomesticValue = value["AccDomesticValue"].asString();
		if(!value["AccOverseasValue"].isNull())
			qpsDataIntervalObject.accOverseasValue = value["AccOverseasValue"].asString();
		if(!value["DynamicValue"].isNull())
			qpsDataIntervalObject.dynamicValue = value["DynamicValue"].asString();
		if(!value["DynamicDomesticValue"].isNull())
			qpsDataIntervalObject.dynamicDomesticValue = value["DynamicDomesticValue"].asString();
		if(!value["DynamicOverseasValue"].isNull())
			qpsDataIntervalObject.dynamicOverseasValue = value["DynamicOverseasValue"].asString();
		if(!value["StaticValue"].isNull())
			qpsDataIntervalObject.staticValue = value["StaticValue"].asString();
		if(!value["StaticDomesticValue"].isNull())
			qpsDataIntervalObject.staticDomesticValue = value["StaticDomesticValue"].asString();
		if(!value["StaticOverseasValue"].isNull())
			qpsDataIntervalObject.staticOverseasValue = value["StaticOverseasValue"].asString();
		qpsDataInterval_.push_back(qpsDataIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainQpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainQpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainQpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainQpsDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainQpsDataResult::DataModule> DescribeDomainQpsDataResult::getQpsDataInterval()const
{
	return qpsDataInterval_;
}

