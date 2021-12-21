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

#include <alibabacloud/cbn/model/DescribeGeographicRegionMembershipResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeGeographicRegionMembershipResult::DescribeGeographicRegionMembershipResult() :
	ServiceResult()
{}

DescribeGeographicRegionMembershipResult::DescribeGeographicRegionMembershipResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGeographicRegionMembershipResult::~DescribeGeographicRegionMembershipResult()
{}

void DescribeGeographicRegionMembershipResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionIdsNode = value["RegionIds"]["RegionId"];
	for (auto valueRegionIdsRegionId : allRegionIdsNode)
	{
		RegionId regionIdsObject;
		if(!valueRegionIdsRegionId["RegionId"].isNull())
			regionIdsObject.regionId = valueRegionIdsRegionId["RegionId"].asString();
		regionIds_.push_back(regionIdsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeGeographicRegionMembershipResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeGeographicRegionMembershipResult::RegionId> DescribeGeographicRegionMembershipResult::getRegionIds()const
{
	return regionIds_;
}

int DescribeGeographicRegionMembershipResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGeographicRegionMembershipResult::getPageNumber()const
{
	return pageNumber_;
}

