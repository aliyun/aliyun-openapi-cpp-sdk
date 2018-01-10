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

#include <alibabacloud/cdn/model/DescribeExtensiveDomainDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeExtensiveDomainDataResult::DescribeExtensiveDomainDataResult() :
	ServiceResult()
{}

DescribeExtensiveDomainDataResult::DescribeExtensiveDomainDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExtensiveDomainDataResult::~DescribeExtensiveDomainDataResult()
{}

void DescribeExtensiveDomainDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataPerInterval = value["DataPerInterval"]["UsageData"];
	for (auto value : allDataPerInterval)
	{
		UsageData usageDataObject;
		usageDataObject.exactDomain = value["ExactDomain"].asString();
		usageDataObject.timeStamp = value["TimeStamp"].asString();
		usageDataObject.acc = value["Acc"].asString();
		usageDataObject.flow = value["Flow"].asString();
		dataPerInterval_.push_back(usageDataObject);
	}
	extensiveDomain_ = value["ExtensiveDomain"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	pageNumber_ = value["PageNumber"].asString();
	totalCount_ = value["TotalCount"].asString();
	pageSize_ = value["PageSize"].asString();

}

std::string DescribeExtensiveDomainDataResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeExtensiveDomainDataResult::setTotalCount(const std::string& totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeExtensiveDomainDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeExtensiveDomainDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeExtensiveDomainDataResult::getPageSize()const
{
	return pageSize_;
}

void DescribeExtensiveDomainDataResult::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
}

std::string DescribeExtensiveDomainDataResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeExtensiveDomainDataResult::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeExtensiveDomainDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeExtensiveDomainDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeExtensiveDomainDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeExtensiveDomainDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeExtensiveDomainDataResult::getExtensiveDomain()const
{
	return extensiveDomain_;
}

void DescribeExtensiveDomainDataResult::setExtensiveDomain(const std::string& extensiveDomain)
{
	extensiveDomain_ = extensiveDomain;
}

