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

#include <alibabacloud/sas/model/DescribeExposedStatisticsDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeExposedStatisticsDetailResult::DescribeExposedStatisticsDetailResult() :
	ServiceResult()
{}

DescribeExposedStatisticsDetailResult::DescribeExposedStatisticsDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExposedStatisticsDetailResult::~DescribeExposedStatisticsDetailResult()
{}

void DescribeExposedStatisticsDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatisticsDetailsNode = value["StatisticsDetails"]["StatisticsDetail"];
	for (auto valueStatisticsDetailsStatisticsDetail : allStatisticsDetailsNode)
	{
		StatisticsDetail statisticsDetailsObject;
		if(!valueStatisticsDetailsStatisticsDetail["ExposureIp"].isNull())
			statisticsDetailsObject.exposureIp = valueStatisticsDetailsStatisticsDetail["ExposureIp"].asString();
		if(!valueStatisticsDetailsStatisticsDetail["ExposurePort"].isNull())
			statisticsDetailsObject.exposurePort = valueStatisticsDetailsStatisticsDetail["ExposurePort"].asString();
		if(!valueStatisticsDetailsStatisticsDetail["ExposureTypeInstanceName"].isNull())
			statisticsDetailsObject.exposureTypeInstanceName = valueStatisticsDetailsStatisticsDetail["ExposureTypeInstanceName"].asString();
		if(!valueStatisticsDetailsStatisticsDetail["ExposedCount"].isNull())
			statisticsDetailsObject.exposedCount = std::stoi(valueStatisticsDetailsStatisticsDetail["ExposedCount"].asString());
		if(!valueStatisticsDetailsStatisticsDetail["ExposureType"].isNull())
			statisticsDetailsObject.exposureType = valueStatisticsDetailsStatisticsDetail["ExposureType"].asString();
		if(!valueStatisticsDetailsStatisticsDetail["RegionId"].isNull())
			statisticsDetailsObject.regionId = valueStatisticsDetailsStatisticsDetail["RegionId"].asString();
		if(!valueStatisticsDetailsStatisticsDetail["ExposureComponent"].isNull())
			statisticsDetailsObject.exposureComponent = valueStatisticsDetailsStatisticsDetail["ExposureComponent"].asString();
		if(!valueStatisticsDetailsStatisticsDetail["ExposureTypeId"].isNull())
			statisticsDetailsObject.exposureTypeId = valueStatisticsDetailsStatisticsDetail["ExposureTypeId"].asString();
		statisticsDetails_.push_back(statisticsDetailsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeExposedStatisticsDetailResult::PageInfo DescribeExposedStatisticsDetailResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeExposedStatisticsDetailResult::StatisticsDetail> DescribeExposedStatisticsDetailResult::getStatisticsDetails()const
{
	return statisticsDetails_;
}

