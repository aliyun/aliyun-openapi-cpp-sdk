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

#include <alibabacloud/vod/model/DescribeVodDomainReqHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainReqHitRateDataResult::DescribeVodDomainReqHitRateDataResult() :
	ServiceResult()
{}

DescribeVodDomainReqHitRateDataResult::DescribeVodDomainReqHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainReqHitRateDataResult::~DescribeVodDomainReqHitRateDataResult()
{}

void DescribeVodDomainReqHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataModule"];
	for (auto valueDataDataModule : allDataNode)
	{
		DataModule dataObject;
		if(!valueDataDataModule["Value"].isNull())
			dataObject.value = valueDataDataModule["Value"].asString();
		if(!valueDataDataModule["TimeStamp"].isNull())
			dataObject.timeStamp = valueDataDataModule["TimeStamp"].asString();
		if(!valueDataDataModule["HttpsValue"].isNull())
			dataObject.httpsValue = valueDataDataModule["HttpsValue"].asString();
		data_.push_back(dataObject);
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

std::string DescribeVodDomainReqHitRateDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainReqHitRateDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainReqHitRateDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainReqHitRateDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeVodDomainReqHitRateDataResult::DataModule> DescribeVodDomainReqHitRateDataResult::getData()const
{
	return data_;
}

