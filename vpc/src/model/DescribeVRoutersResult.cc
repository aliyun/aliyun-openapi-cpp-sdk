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
	auto allVRouters = value["VRouters"]["VRouter"];
	for (auto value : allVRouters)
	{
		VRouter vRouterObject;
		vRouterObject.regionId = value["RegionId"].asString();
		vRouterObject.vpcId = value["VpcId"].asString();
		vRouterObject.vRouterName = value["VRouterName"].asString();
		vRouterObject.description = value["Description"].asString();
		vRouterObject.vRouterId = value["VRouterId"].asString();
		vRouterObject.creationTime = value["CreationTime"].asString();
		auto allRouteTableIds = value["RouteTableIds"]["RouteTableId"];
		for (auto value : allRouteTableIds)
			vRouterObject.routeTableIds.push_back(value.asString());
		vRouters_.push_back(vRouterObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVRoutersResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVRoutersResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVRoutersResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVRoutersResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVRoutersResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVRoutersResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

