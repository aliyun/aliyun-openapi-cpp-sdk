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

#include <alibabacloud/vod/model/DescribeVodDomainSrcBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainSrcBpsDataResult::DescribeVodDomainSrcBpsDataResult() :
	ServiceResult()
{}

DescribeVodDomainSrcBpsDataResult::DescribeVodDomainSrcBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainSrcBpsDataResult::~DescribeVodDomainSrcBpsDataResult()
{}

void DescribeVodDomainSrcBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSrcBpsDataPerIntervalNode = value["SrcBpsDataPerInterval"]["DataModule"];
	for (auto valueSrcBpsDataPerIntervalDataModule : allSrcBpsDataPerIntervalNode)
	{
		DataModule srcBpsDataPerIntervalObject;
		if(!valueSrcBpsDataPerIntervalDataModule["Value"].isNull())
			srcBpsDataPerIntervalObject.value = valueSrcBpsDataPerIntervalDataModule["Value"].asString();
		if(!valueSrcBpsDataPerIntervalDataModule["TimeStamp"].isNull())
			srcBpsDataPerIntervalObject.timeStamp = valueSrcBpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueSrcBpsDataPerIntervalDataModule["HttpsValue"].isNull())
			srcBpsDataPerIntervalObject.httpsValue = valueSrcBpsDataPerIntervalDataModule["HttpsValue"].asString();
		srcBpsDataPerInterval_.push_back(srcBpsDataPerIntervalObject);
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

std::vector<DescribeVodDomainSrcBpsDataResult::DataModule> DescribeVodDomainSrcBpsDataResult::getSrcBpsDataPerInterval()const
{
	return srcBpsDataPerInterval_;
}

std::string DescribeVodDomainSrcBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainSrcBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainSrcBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainSrcBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

