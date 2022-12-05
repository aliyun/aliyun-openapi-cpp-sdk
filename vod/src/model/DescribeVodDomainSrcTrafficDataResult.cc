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

#include <alibabacloud/vod/model/DescribeVodDomainSrcTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainSrcTrafficDataResult::DescribeVodDomainSrcTrafficDataResult() :
	ServiceResult()
{}

DescribeVodDomainSrcTrafficDataResult::DescribeVodDomainSrcTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainSrcTrafficDataResult::~DescribeVodDomainSrcTrafficDataResult()
{}

void DescribeVodDomainSrcTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSrcTrafficDataPerIntervalNode = value["SrcTrafficDataPerInterval"]["DataModule"];
	for (auto valueSrcTrafficDataPerIntervalDataModule : allSrcTrafficDataPerIntervalNode)
	{
		DataModule srcTrafficDataPerIntervalObject;
		if(!valueSrcTrafficDataPerIntervalDataModule["Value"].isNull())
			srcTrafficDataPerIntervalObject.value = valueSrcTrafficDataPerIntervalDataModule["Value"].asString();
		if(!valueSrcTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			srcTrafficDataPerIntervalObject.timeStamp = valueSrcTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueSrcTrafficDataPerIntervalDataModule["HttpsValue"].isNull())
			srcTrafficDataPerIntervalObject.httpsValue = valueSrcTrafficDataPerIntervalDataModule["HttpsValue"].asString();
		srcTrafficDataPerInterval_.push_back(srcTrafficDataPerIntervalObject);
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

std::string DescribeVodDomainSrcTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainSrcTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainSrcTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainSrcTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeVodDomainSrcTrafficDataResult::DataModule> DescribeVodDomainSrcTrafficDataResult::getSrcTrafficDataPerInterval()const
{
	return srcTrafficDataPerInterval_;
}

std::string DescribeVodDomainSrcTrafficDataResult::getTotalTraffic()const
{
	return totalTraffic_;
}

