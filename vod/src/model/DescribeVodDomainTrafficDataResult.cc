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

#include <alibabacloud/vod/model/DescribeVodDomainTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainTrafficDataResult::DescribeVodDomainTrafficDataResult() :
	ServiceResult()
{}

DescribeVodDomainTrafficDataResult::DescribeVodDomainTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainTrafficDataResult::~DescribeVodDomainTrafficDataResult()
{}

void DescribeVodDomainTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficDataPerIntervalNode = value["TrafficDataPerInterval"]["DataModule"];
	for (auto valueTrafficDataPerIntervalDataModule : allTrafficDataPerIntervalNode)
	{
		DataModule trafficDataPerIntervalObject;
		if(!valueTrafficDataPerIntervalDataModule["HttpsDomesticValue"].isNull())
			trafficDataPerIntervalObject.httpsDomesticValue = valueTrafficDataPerIntervalDataModule["HttpsDomesticValue"].asString();
		if(!valueTrafficDataPerIntervalDataModule["Value"].isNull())
			trafficDataPerIntervalObject.value = valueTrafficDataPerIntervalDataModule["Value"].asString();
		if(!valueTrafficDataPerIntervalDataModule["OverseasValue"].isNull())
			trafficDataPerIntervalObject.overseasValue = valueTrafficDataPerIntervalDataModule["OverseasValue"].asString();
		if(!valueTrafficDataPerIntervalDataModule["HttpsValue"].isNull())
			trafficDataPerIntervalObject.httpsValue = valueTrafficDataPerIntervalDataModule["HttpsValue"].asString();
		if(!valueTrafficDataPerIntervalDataModule["HttpsOverseasValue"].isNull())
			trafficDataPerIntervalObject.httpsOverseasValue = valueTrafficDataPerIntervalDataModule["HttpsOverseasValue"].asString();
		if(!valueTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			trafficDataPerIntervalObject.timeStamp = valueTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueTrafficDataPerIntervalDataModule["DomesticValue"].isNull())
			trafficDataPerIntervalObject.domesticValue = valueTrafficDataPerIntervalDataModule["DomesticValue"].asString();
		trafficDataPerInterval_.push_back(trafficDataPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["TotalTraffic"].isNull())
		totalTraffic_ = value["TotalTraffic"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeVodDomainTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeVodDomainTrafficDataResult::DataModule> DescribeVodDomainTrafficDataResult::getTrafficDataPerInterval()const
{
	return trafficDataPerInterval_;
}

std::string DescribeVodDomainTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeVodDomainTrafficDataResult::getTotalTraffic()const
{
	return totalTraffic_;
}

