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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPathDataPerInterval = value["PathDataPerInterval"]["UsageData"];
	for (auto value : allPathDataPerInterval)
	{
		UsageData pathDataPerIntervalObject;
		if(!value["Traffic"].isNull())
			pathDataPerIntervalObject.traffic = std::stoi(value["Traffic"].asString());
		if(!value["Acc"].isNull())
			pathDataPerIntervalObject.acc = std::stoi(value["Acc"].asString());
		if(!value["Path"].isNull())
			pathDataPerIntervalObject.path = value["Path"].asString();
		if(!value["Time"].isNull())
			pathDataPerIntervalObject.time = value["Time"].asString();
		pathDataPerInterval_.push_back(pathDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDomainPathDataResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDomainPathDataResult::getEndTime()const
{
	return endTime_;
}

int DescribeDomainPathDataResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDomainPathDataResult::getDomainName()const
{
	return domainName_;
}

int DescribeDomainPathDataResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDomainPathDataResult::UsageData> DescribeDomainPathDataResult::getPathDataPerInterval()const
{
	return pathDataPerInterval_;
}

std::string DescribeDomainPathDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainPathDataResult::getDataInterval()const
{
	return dataInterval_;
}

