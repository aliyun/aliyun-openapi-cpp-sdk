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

#include <alibabacloud/vod/model/DescribeVodDomainHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainHitRateDataResult::DescribeVodDomainHitRateDataResult() :
	ServiceResult()
{}

DescribeVodDomainHitRateDataResult::DescribeVodDomainHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainHitRateDataResult::~DescribeVodDomainHitRateDataResult()
{}

void DescribeVodDomainHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHitRateIntervalNode = value["HitRateInterval"]["DataModule"];
	for (auto valueHitRateIntervalDataModule : allHitRateIntervalNode)
	{
		DataModule hitRateIntervalObject;
		if(!valueHitRateIntervalDataModule["Value"].isNull())
			hitRateIntervalObject.value = valueHitRateIntervalDataModule["Value"].asString();
		if(!valueHitRateIntervalDataModule["TimeStamp"].isNull())
			hitRateIntervalObject.timeStamp = valueHitRateIntervalDataModule["TimeStamp"].asString();
		if(!valueHitRateIntervalDataModule["HttpsValue"].isNull())
			hitRateIntervalObject.httpsValue = valueHitRateIntervalDataModule["HttpsValue"].asString();
		hitRateInterval_.push_back(hitRateIntervalObject);
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

std::vector<DescribeVodDomainHitRateDataResult::DataModule> DescribeVodDomainHitRateDataResult::getHitRateInterval()const
{
	return hitRateInterval_;
}

std::string DescribeVodDomainHitRateDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainHitRateDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainHitRateDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

