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

#include <alibabacloud/vpc/model/DescribeVRoutersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVRoutersResult::DescribeVRoutersResult() :
	ServiceResult()
{}

DescribeVRoutersResult::DescribeVRoutersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVRoutersResult::~DescribeVRoutersResult()
{}

void DescribeVRoutersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVRoutersNode = value["VRouters"]["VRouter"];
	for (auto valueVRoutersVRouter : allVRoutersNode)
	{
		VRouter vRoutersObject;
		if(!valueVRoutersVRouter["VpcId"].isNull())
			vRoutersObject.vpcId = valueVRoutersVRouter["VpcId"].asString();
		if(!valueVRoutersVRouter["CreationTime"].isNull())
			vRoutersObject.creationTime = valueVRoutersVRouter["CreationTime"].asString();
		if(!valueVRoutersVRouter["VRouterId"].isNull())
			vRoutersObject.vRouterId = valueVRoutersVRouter["VRouterId"].asString();
		if(!valueVRoutersVRouter["Description"].isNull())
			vRoutersObject.description = valueVRoutersVRouter["Description"].asString();
		if(!valueVRoutersVRouter["VRouterName"].isNull())
			vRoutersObject.vRouterName = valueVRoutersVRouter["VRouterName"].asString();
		if(!valueVRoutersVRouter["RegionId"].isNull())
			vRoutersObject.regionId = valueVRoutersVRouter["RegionId"].asString();
		auto allRouteTableIds = value["RouteTableIds"]["RouteTableId"];
		for (auto value : allRouteTableIds)
			vRoutersObject.routeTableIds.push_back(value.asString());
		vRouters_.push_back(vRoutersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeVRoutersResult::VRouter> DescribeVRoutersResult::getVRouters()const
{
	return vRouters_;
}

int DescribeVRoutersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVRoutersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVRoutersResult::getPageNumber()const
{
	return pageNumber_;
}

