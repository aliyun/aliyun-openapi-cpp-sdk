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

#include <alibabacloud/cdn/model/TestDescribeDomainBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

TestDescribeDomainBpsDataResult::TestDescribeDomainBpsDataResult() :
	ServiceResult()
{}

TestDescribeDomainBpsDataResult::TestDescribeDomainBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TestDescribeDomainBpsDataResult::~TestDescribeDomainBpsDataResult()
{}

void TestDescribeDomainBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBpsDataPerIntervalNode = value["BpsDataPerInterval"]["DataModule"];
	for (auto valueBpsDataPerIntervalDataModule : allBpsDataPerIntervalNode)
	{
		DataModule bpsDataPerIntervalObject;
		if(!valueBpsDataPerIntervalDataModule["L2Value"].isNull())
			bpsDataPerIntervalObject.l2Value = valueBpsDataPerIntervalDataModule["L2Value"].asString();
		if(!valueBpsDataPerIntervalDataModule["DynamicValue"].isNull())
			bpsDataPerIntervalObject.dynamicValue = valueBpsDataPerIntervalDataModule["DynamicValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["DynamicDomesticValue"].isNull())
			bpsDataPerIntervalObject.dynamicDomesticValue = valueBpsDataPerIntervalDataModule["DynamicDomesticValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["DomesticValue"].isNull())
			bpsDataPerIntervalObject.domesticValue = valueBpsDataPerIntervalDataModule["DomesticValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["Value"].isNull())
			bpsDataPerIntervalObject.value = valueBpsDataPerIntervalDataModule["Value"].asString();
		if(!valueBpsDataPerIntervalDataModule["OverseasL2Value"].isNull())
			bpsDataPerIntervalObject.overseasL2Value = valueBpsDataPerIntervalDataModule["OverseasL2Value"].asString();
		if(!valueBpsDataPerIntervalDataModule["StaticDomesticValue"].isNull())
			bpsDataPerIntervalObject.staticDomesticValue = valueBpsDataPerIntervalDataModule["StaticDomesticValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["DomesticL2Value"].isNull())
			bpsDataPerIntervalObject.domesticL2Value = valueBpsDataPerIntervalDataModule["DomesticL2Value"].asString();
		if(!valueBpsDataPerIntervalDataModule["OverseasValue"].isNull())
			bpsDataPerIntervalObject.overseasValue = valueBpsDataPerIntervalDataModule["OverseasValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["StaticValue"].isNull())
			bpsDataPerIntervalObject.staticValue = valueBpsDataPerIntervalDataModule["StaticValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["TimeStamp"].isNull())
			bpsDataPerIntervalObject.timeStamp = valueBpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueBpsDataPerIntervalDataModule["StaticOverseasValue"].isNull())
			bpsDataPerIntervalObject.staticOverseasValue = valueBpsDataPerIntervalDataModule["StaticOverseasValue"].asString();
		if(!valueBpsDataPerIntervalDataModule["DynamicOverseasValue"].isNull())
			bpsDataPerIntervalObject.dynamicOverseasValue = valueBpsDataPerIntervalDataModule["DynamicOverseasValue"].asString();
		bpsDataPerInterval_.push_back(bpsDataPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["IspNameEn"].isNull())
		ispNameEn_ = value["IspNameEn"].asString();
	if(!value["LocationNameEn"].isNull())
		locationNameEn_ = value["LocationNameEn"].asString();
	if(!value["LocationName"].isNull())
		locationName_ = value["LocationName"].asString();
	if(!value["IspName"].isNull())
		ispName_ = value["IspName"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string TestDescribeDomainBpsDataResult::getIspNameEn()const
{
	return ispNameEn_;
}

std::string TestDescribeDomainBpsDataResult::getIspName()const
{
	return ispName_;
}

std::string TestDescribeDomainBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string TestDescribeDomainBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string TestDescribeDomainBpsDataResult::getLocationNameEn()const
{
	return locationNameEn_;
}

std::string TestDescribeDomainBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string TestDescribeDomainBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<TestDescribeDomainBpsDataResult::DataModule> TestDescribeDomainBpsDataResult::getBpsDataPerInterval()const
{
	return bpsDataPerInterval_;
}

std::string TestDescribeDomainBpsDataResult::getLocationName()const
{
	return locationName_;
}

