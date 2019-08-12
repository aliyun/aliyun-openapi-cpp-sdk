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

#include <alibabacloud/alidns/model/DescribeDomainStatisticsSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainStatisticsSummaryResult::DescribeDomainStatisticsSummaryResult() :
	ServiceResult()
{}

DescribeDomainStatisticsSummaryResult::DescribeDomainStatisticsSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainStatisticsSummaryResult::~DescribeDomainStatisticsSummaryResult()
{}

void DescribeDomainStatisticsSummaryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStatistics = value["Statistics"]["Statistic"];
	for (auto value : allStatistics)
	{
		Statistic statisticsObject;
		if(!value["DomainName"].isNull())
			statisticsObject.domainName = value["DomainName"].asString();
		if(!value["Count"].isNull())
			statisticsObject.count = std::stol(value["Count"].asString());
		statistics_.push_back(statisticsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDomainStatisticsSummaryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDomainStatisticsSummaryResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDomainStatisticsSummaryResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeDomainStatisticsSummaryResult::getTotalItems()const
{
	return totalItems_;
}

std::vector<DescribeDomainStatisticsSummaryResult::Statistic> DescribeDomainStatisticsSummaryResult::getStatistics()const
{
	return statistics_;
}

