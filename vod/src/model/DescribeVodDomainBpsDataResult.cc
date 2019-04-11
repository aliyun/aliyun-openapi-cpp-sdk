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

#include <alibabacloud/vod/model/DescribeVodDomainBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainBpsDataResult::DescribeVodDomainBpsDataResult() :
	ServiceResult()
{}

DescribeVodDomainBpsDataResult::DescribeVodDomainBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainBpsDataResult::~DescribeVodDomainBpsDataResult()
{}

void DescribeVodDomainBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBpsDataPerInterval = value["BpsDataPerInterval"]["DataModule"];
	for (auto value : allBpsDataPerInterval)
	{
		DataModule bpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			bpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			bpsDataPerIntervalObject.value = value["Value"].asString();
		if(!value["DomesticValue"].isNull())
			bpsDataPerIntervalObject.domesticValue = value["DomesticValue"].asString();
		if(!value["OverseasValue"].isNull())
			bpsDataPerIntervalObject.overseasValue = value["OverseasValue"].asString();
		if(!value["HttpsValue"].isNull())
			bpsDataPerIntervalObject.httpsValue = value["HttpsValue"].asString();
		if(!value["HttpsDomesticValue"].isNull())
			bpsDataPerIntervalObject.httpsDomesticValue = value["HttpsDomesticValue"].asString();
		if(!value["HttpsOverseasValue"].isNull())
			bpsDataPerIntervalObject.httpsOverseasValue = value["HttpsOverseasValue"].asString();
		bpsDataPerInterval_.push_back(bpsDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["LocationNameEn"].isNull())
		locationNameEn_ = value["LocationNameEn"].asString();
	if(!value["IspNameEn"].isNull())
		ispNameEn_ = value["IspNameEn"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeVodDomainBpsDataResult::getIspNameEn()const
{
	return ispNameEn_;
}

std::string DescribeVodDomainBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainBpsDataResult::getLocationNameEn()const
{
	return locationNameEn_;
}

std::string DescribeVodDomainBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeVodDomainBpsDataResult::DataModule> DescribeVodDomainBpsDataResult::getBpsDataPerInterval()const
{
	return bpsDataPerInterval_;
}

