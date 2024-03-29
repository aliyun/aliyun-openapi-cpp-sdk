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

#include <alibabacloud/vs/model/DescribeVsDomainUvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainUvDataResult::DescribeVsDomainUvDataResult() :
	ServiceResult()
{}

DescribeVsDomainUvDataResult::DescribeVsDomainUvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainUvDataResult::~DescribeVsDomainUvDataResult()
{}

void DescribeVsDomainUvDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUvDataIntervalNode = value["UvDataInterval"]["UsageData"];
	for (auto valueUvDataIntervalUsageData : allUvDataIntervalNode)
	{
		UsageData uvDataIntervalObject;
		if(!valueUvDataIntervalUsageData["Value"].isNull())
			uvDataIntervalObject.value = valueUvDataIntervalUsageData["Value"].asString();
		if(!valueUvDataIntervalUsageData["TimeStamp"].isNull())
			uvDataIntervalObject.timeStamp = valueUvDataIntervalUsageData["TimeStamp"].asString();
		uvDataInterval_.push_back(uvDataIntervalObject);
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

std::vector<DescribeVsDomainUvDataResult::UsageData> DescribeVsDomainUvDataResult::getUvDataInterval()const
{
	return uvDataInterval_;
}

std::string DescribeVsDomainUvDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVsDomainUvDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVsDomainUvDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVsDomainUvDataResult::getDataInterval()const
{
	return dataInterval_;
}

