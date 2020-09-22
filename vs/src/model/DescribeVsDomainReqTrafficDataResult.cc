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

#include <alibabacloud/vs/model/DescribeVsDomainReqTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainReqTrafficDataResult::DescribeVsDomainReqTrafficDataResult() :
	ServiceResult()
{}

DescribeVsDomainReqTrafficDataResult::DescribeVsDomainReqTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainReqTrafficDataResult::~DescribeVsDomainReqTrafficDataResult()
{}

void DescribeVsDomainReqTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReqTrafficDataPerIntervalNode = value["ReqTrafficDataPerInterval"]["DataModule"];
	for (auto valueReqTrafficDataPerIntervalDataModule : allReqTrafficDataPerIntervalNode)
	{
		DataModule reqTrafficDataPerIntervalObject;
		if(!valueReqTrafficDataPerIntervalDataModule["TimeStamp"].isNull())
			reqTrafficDataPerIntervalObject.timeStamp = valueReqTrafficDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueReqTrafficDataPerIntervalDataModule["ReqTrafficValue"].isNull())
			reqTrafficDataPerIntervalObject.reqTrafficValue = valueReqTrafficDataPerIntervalDataModule["ReqTrafficValue"].asString();
		reqTrafficDataPerInterval_.push_back(reqTrafficDataPerIntervalObject);
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

std::vector<DescribeVsDomainReqTrafficDataResult::DataModule> DescribeVsDomainReqTrafficDataResult::getReqTrafficDataPerInterval()const
{
	return reqTrafficDataPerInterval_;
}

std::string DescribeVsDomainReqTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVsDomainReqTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVsDomainReqTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVsDomainReqTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

