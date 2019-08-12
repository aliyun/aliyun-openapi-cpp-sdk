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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRegionIds = value["RegionIds"]["RegionId"];
	for (auto value : allRegionIds)
	{
		RegionId regionIdsObject;
		if(!value["RegionId"].isNull())
			regionIdsObject.regionId = value["RegionId"].asString();
		regionIds_.push_back(regionIdsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

