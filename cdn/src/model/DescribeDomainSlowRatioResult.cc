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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSlowRatioDataPerInterval = value["SlowRatioDataPerInterval"]["SlowRatioData"];
	for (auto value : allSlowRatioDataPerInterval)
	{
		SlowRatioData slowRatioDataPerIntervalObject;
		if(!value["TotalUsers"].isNull())
			slowRatioDataPerIntervalObject.totalUsers = std::stoi(value["TotalUsers"].asString());
		if(!value["SlowUsers"].isNull())
			slowRatioDataPerIntervalObject.slowUsers = std::stoi(value["SlowUsers"].asString());
		if(!value["SlowRatio"].isNull())
			slowRatioDataPerIntervalObject.slowRatio = std::stof(value["SlowRatio"].asString());
		if(!value["RegionNameZh"].isNull())
			slowRatioDataPerIntervalObject.regionNameZh = value["RegionNameZh"].asString();
		if(!value["RegionNameEn"].isNull())
			slowRatioDataPerIntervalObject.regionNameEn = value["RegionNameEn"].asString();
		if(!value["IspNameZh"].isNull())
			slowRatioDataPerIntervalObject.ispNameZh = value["IspNameZh"].asString();
		if(!value["IspNameEn"].isNull())
			slowRatioDataPerIntervalObject.ispNameEn = value["IspNameEn"].asString();
		if(!value["Time"].isNull())
			slowRatioDataPerIntervalObject.time = value["Time"].asString();
		slowRatioDataPerInterval_.push_back(slowRatioDataPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = std::stoi(value["DataInterval"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

int DescribeDomainSlowRatioResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDomainSlowRatioResult::getEndTime()const
{
	return endTime_;
}

int DescribeDomainSlowRatioResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDomainSlowRatioResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDomainSlowRatioResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainSlowRatioResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainSlowRatioResult::SlowRatioData> DescribeDomainSlowRatioResult::getSlowRatioDataPerInterval()const
{
	return slowRatioDataPerInterval_;
}

