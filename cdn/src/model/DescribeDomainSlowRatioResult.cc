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

#include <alibabacloud/cdn/model/DescribeDomainSlowRatioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSlowRatioResult::DescribeDomainSlowRatioResult() :
	ServiceResult()
{}

DescribeDomainSlowRatioResult::DescribeDomainSlowRatioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSlowRatioResult::~DescribeDomainSlowRatioResult()
{}

void DescribeDomainSlowRatioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSlowRatioDataPerInterval = value["SlowRatioDataPerInterval"]["SlowRatioData"];
	for (auto value : allSlowRatioDataPerInterval)
	{
		SlowRatioData slowRatioDataObject;
		slowRatioDataObject.totalUsers = std::stoi(value["TotalUsers"].asString());
		slowRatioDataObject.slowUsers = std::stoi(value["SlowUsers"].asString());
		slowRatioDataObject.slowRatio = std::stof(value["SlowRatio"].asString());
		slowRatioDataObject.regionNameZh = value["RegionNameZh"].asString();
		slowRatioDataObject.regionNameEn = value["RegionNameEn"].asString();
		slowRatioDataObject.ispNameZh = value["IspNameZh"].asString();
		slowRatioDataObject.ispNameEn = value["IspNameEn"].asString();
		slowRatioDataObject.time = value["Time"].asString();
		slowRatioDataPerInterval_.push_back(slowRatioDataObject);
	}
	endTime_ = value["EndTime"].asString();
	dataInterval_ = std::stoi(value["DataInterval"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());
	startTime_ = value["StartTime"].asString();

}

int DescribeDomainSlowRatioResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeDomainSlowRatioResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeDomainSlowRatioResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSlowRatioResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

int DescribeDomainSlowRatioResult::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainSlowRatioResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeDomainSlowRatioResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainSlowRatioResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

int DescribeDomainSlowRatioResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainSlowRatioResult::setDataInterval(int dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainSlowRatioResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSlowRatioResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

