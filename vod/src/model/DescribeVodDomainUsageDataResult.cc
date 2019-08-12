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

#include <alibabacloud/vod/model/DescribeVodDomainUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainUsageDataResult::DescribeVodDomainUsageDataResult() :
	ServiceResult()
{}

DescribeVodDomainUsageDataResult::DescribeVodDomainUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainUsageDataResult::~DescribeVodDomainUsageDataResult()
{}

void DescribeVodDomainUsageDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUsageDataPerInterval = value["UsageDataPerInterval"]["DataModule"];
	for (auto value : allUsageDataPerInterval)
	{
		DataModule usageDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			usageDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			usageDataPerIntervalObject.value = value["Value"].asString();
		usageDataPerInterval_.push_back(usageDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Area"].isNull())
		area_ = value["Area"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::vector<DescribeVodDomainUsageDataResult::DataModule> DescribeVodDomainUsageDataResult::getUsageDataPerInterval()const
{
	return usageDataPerInterval_;
}

std::string DescribeVodDomainUsageDataResult::getType()const
{
	return type_;
}

std::string DescribeVodDomainUsageDataResult::getArea()const
{
	return area_;
}

std::string DescribeVodDomainUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainUsageDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainUsageDataResult::getDataInterval()const
{
	return dataInterval_;
}

