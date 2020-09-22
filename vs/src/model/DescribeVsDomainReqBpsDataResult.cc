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

#include <alibabacloud/vs/model/DescribeVsDomainReqBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainReqBpsDataResult::DescribeVsDomainReqBpsDataResult() :
	ServiceResult()
{}

DescribeVsDomainReqBpsDataResult::DescribeVsDomainReqBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainReqBpsDataResult::~DescribeVsDomainReqBpsDataResult()
{}

void DescribeVsDomainReqBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReqBpsDataPerIntervalNode = value["ReqBpsDataPerInterval"]["DataModule"];
	for (auto valueReqBpsDataPerIntervalDataModule : allReqBpsDataPerIntervalNode)
	{
		DataModule reqBpsDataPerIntervalObject;
		if(!valueReqBpsDataPerIntervalDataModule["TimeStamp"].isNull())
			reqBpsDataPerIntervalObject.timeStamp = valueReqBpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueReqBpsDataPerIntervalDataModule["ReqBpsValue"].isNull())
			reqBpsDataPerIntervalObject.reqBpsValue = valueReqBpsDataPerIntervalDataModule["ReqBpsValue"].asString();
		reqBpsDataPerInterval_.push_back(reqBpsDataPerIntervalObject);
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

std::string DescribeVsDomainReqBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVsDomainReqBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeVsDomainReqBpsDataResult::DataModule> DescribeVsDomainReqBpsDataResult::getReqBpsDataPerInterval()const
{
	return reqBpsDataPerInterval_;
}

std::string DescribeVsDomainReqBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVsDomainReqBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

