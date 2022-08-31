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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlowDataPerIntervalNode = value["FlowDataPerInterval"]["DataModule"];
	for (auto valueFlowDataPerIntervalDataModule : allFlowDataPerIntervalNode)
	{
		DataModule flowDataPerIntervalObject;
		if(!valueFlowDataPerIntervalDataModule["Value"].isNull())
			flowDataPerIntervalObject.value = valueFlowDataPerIntervalDataModule["Value"].asString();
		if(!valueFlowDataPerIntervalDataModule["StaticDomesticValue"].isNull())
			flowDataPerIntervalObject.staticDomesticValue = valueFlowDataPerIntervalDataModule["StaticDomesticValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["DynamicValue"].isNull())
			flowDataPerIntervalObject.dynamicValue = valueFlowDataPerIntervalDataModule["DynamicValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["OverseasValue"].isNull())
			flowDataPerIntervalObject.overseasValue = valueFlowDataPerIntervalDataModule["OverseasValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["StaticValue"].isNull())
			flowDataPerIntervalObject.staticValue = valueFlowDataPerIntervalDataModule["StaticValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["TimeStamp"].isNull())
			flowDataPerIntervalObject.timeStamp = valueFlowDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueFlowDataPerIntervalDataModule["StaticOverseasValue"].isNull())
			flowDataPerIntervalObject.staticOverseasValue = valueFlowDataPerIntervalDataModule["StaticOverseasValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["DynamicDomesticValue"].isNull())
			flowDataPerIntervalObject.dynamicDomesticValue = valueFlowDataPerIntervalDataModule["DynamicDomesticValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["DomesticValue"].isNull())
			flowDataPerIntervalObject.domesticValue = valueFlowDataPerIntervalDataModule["DomesticValue"].asString();
		if(!valueFlowDataPerIntervalDataModule["DynamicOverseasValue"].isNull())
			flowDataPerIntervalObject.dynamicOverseasValue = valueFlowDataPerIntervalDataModule["DynamicOverseasValue"].asString();
		flowDataPerInterval_.push_back(flowDataPerIntervalObject);
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

