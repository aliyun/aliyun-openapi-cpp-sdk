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

#include <alibabacloud/cbn/model/DescribeRouteConflictResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeRouteConflictResult::DescribeRouteConflictResult() :
	ServiceResult()
{}

DescribeRouteConflictResult::DescribeRouteConflictResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouteConflictResult::~DescribeRouteConflictResult()
{}

void DescribeRouteConflictResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteConflictsNode = value["RouteConflicts"]["RouteConflict"];
	for (auto valueRouteConflictsRouteConflict : allRouteConflictsNode)
	{
		RouteConflict routeConflictsObject;
		if(!valueRouteConflictsRouteConflict["Status"].isNull())
			routeConflictsObject.status = valueRouteConflictsRouteConflict["Status"].asString();
		if(!valueRouteConflictsRouteConflict["DestinationCidrBlock"].isNull())
			routeConflictsObject.destinationCidrBlock = valueRouteConflictsRouteConflict["DestinationCidrBlock"].asString();
		if(!valueRouteConflictsRouteConflict["InstanceId"].isNull())
			routeConflictsObject.instanceId = valueRouteConflictsRouteConflict["InstanceId"].asString();
		if(!valueRouteConflictsRouteConflict["InstanceType"].isNull())
			routeConflictsObject.instanceType = valueRouteConflictsRouteConflict["InstanceType"].asString();
		if(!valueRouteConflictsRouteConflict["RegionId"].isNull())
			routeConflictsObject.regionId = valueRouteConflictsRouteConflict["RegionId"].asString();
		routeConflicts_.push_back(routeConflictsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouteConflictResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRouteConflictResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRouteConflictResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRouteConflictResult::RouteConflict> DescribeRouteConflictResult::getRouteConflicts()const
{
	return routeConflicts_;
}

