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

#include <alibabacloud/cdn/model/DescribeDomainPathDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainPathDataResult::DescribeDomainPathDataResult() :
	ServiceResult()
{}

DescribeDomainPathDataResult::DescribeDomainPathDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainPathDataResult::~DescribeDomainPathDataResult()
{}

void DescribeDomainPathDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPathDataPerInterval = value["PathDataPerInterval"]["UsageData"];
	for (auto value : allPathDataPerInterval)
	{
		UsageData usageDataObject;
		usageDataObject.traffic = std::stoi(value["Traffic"].asString());
		usageDataObject.acc = std::stoi(value["Acc"].asString());
		usageDataObject.path = value["Path"].asString();
		usageDataObject.time = value["Time"].asString();
		pathDataPerInterval_.push_back(usageDataObject);
	}
	domainName_ = value["DomainName"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	pageSize_ = std::stoi(value["PageSize"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	dataInterval_ = value["DataInterval"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDomainPathDataResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeDomainPathDataResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeDomainPathDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainPathDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

int DescribeDomainPathDataResult::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainPathDataResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

std::string DescribeDomainPathDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainPathDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

int DescribeDomainPathDataResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainPathDataResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeDomainPathDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainPathDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeDomainPathDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainPathDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

