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

#include <alibabacloud/cdn/model/DescribeDomainFlowDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainFlowDataResult::DescribeDomainFlowDataResult() :
	ServiceResult()
{}

DescribeDomainFlowDataResult::DescribeDomainFlowDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainFlowDataResult::~DescribeDomainFlowDataResult()
{}

void DescribeDomainFlowDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFlowDataPerInterval = value["FlowDataPerInterval"]["DataModule"];
	for (auto value : allFlowDataPerInterval)
	{
		DataModule flowDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			flowDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			flowDataPerIntervalObject.value = value["Value"].asString();
		if(!value["DomesticValue"].isNull())
			flowDataPerIntervalObject.domesticValue = value["DomesticValue"].asString();
		if(!value["OverseasValue"].isNull())
			flowDataPerIntervalObject.overseasValue = value["OverseasValue"].asString();
		if(!value["DynamicValue"].isNull())
			flowDataPerIntervalObject.dynamicValue = value["DynamicValue"].asString();
		if(!value["DynamicDomesticValue"].isNull())
			flowDataPerIntervalObject.dynamicDomesticValue = value["DynamicDomesticValue"].asString();
		if(!value["DynamicOverseasValue"].isNull())
			flowDataPerIntervalObject.dynamicOverseasValue = value["DynamicOverseasValue"].asString();
		if(!value["StaticValue"].isNull())
			flowDataPerIntervalObject.staticValue = value["StaticValue"].asString();
		if(!value["StaticDomesticValue"].isNull())
			flowDataPerIntervalObject.staticDomesticValue = value["StaticDomesticValue"].asString();
		if(!value["StaticOverseasValue"].isNull())
			flowDataPerIntervalObject.staticOverseasValue = value["StaticOverseasValue"].asString();
		flowDataPerInterval_.push_back(flowDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainFlowDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainFlowDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeDomainFlowDataResult::DataModule> DescribeDomainFlowDataResult::getFlowDataPerInterval()const
{
	return flowDataPerInterval_;
}

std::string DescribeDomainFlowDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainFlowDataResult::getDataInterval()const
{
	return dataInterval_;
}

