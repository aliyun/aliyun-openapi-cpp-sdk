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

#include <alibabacloud/ecs/model/DescribeRouterInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeRouterInterfacesResult::DescribeRouterInterfacesResult() :
	ServiceResult()
{}

DescribeRouterInterfacesResult::DescribeRouterInterfacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouterInterfacesResult::~DescribeRouterInterfacesResult()
{}

void DescribeRouterInterfacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRouterInterfaceSet = value["RouterInterfaceSet"]["RouterInterfaceType"];
	for (auto value : allRouterInterfaceSet)
	{
		RouterInterfaceType routerInterfaceTypeObject;
		routerInterfaceTypeObject.routerInterfaceId = value["RouterInterfaceId"].asString();
		routerInterfaceTypeObject.oppositeRegionId = value["OppositeRegionId"].asString();
		routerInterfaceTypeObject.role = value["Role"].asString();
		routerInterfaceTypeObject.spec = value["Spec"].asString();
		routerInterfaceTypeObject.name = value["Name"].asString();
		routerInterfaceTypeObject.description = value["Description"].asString();
		routerInterfaceTypeObject.routerId = value["RouterId"].asString();
		routerInterfaceTypeObject.routerType = value["RouterType"].asString();
		routerInterfaceTypeObject.creationTime = value["CreationTime"].asString();
		routerInterfaceTypeObject.endTime = value["EndTime"].asString();
		routerInterfaceTypeObject.chargeType = value["ChargeType"].asString();
		routerInterfaceTypeObject.status = value["Status"].asString();
		routerInterfaceTypeObject.businessStatus = value["BusinessStatus"].asString();
		routerInterfaceTypeObject.connectedTime = value["ConnectedTime"].asString();
		routerInterfaceTypeObject.oppositeInterfaceId = value["OppositeInterfaceId"].asString();
		routerInterfaceTypeObject.oppositeInterfaceSpec = value["OppositeInterfaceSpec"].asString();
		routerInterfaceTypeObject.oppositeInterfaceStatus = value["OppositeInterfaceStatus"].asString();
		routerInterfaceTypeObject.oppositeInterfaceBusinessStatus = value["OppositeInterfaceBusinessStatus"].asString();
		routerInterfaceTypeObject.oppositeRouterId = value["OppositeRouterId"].asString();
		routerInterfaceTypeObject.oppositeRouterType = value["OppositeRouterType"].asString();
		routerInterfaceTypeObject.oppositeInterfaceOwnerId = value["OppositeInterfaceOwnerId"].asString();
		routerInterfaceTypeObject.accessPointId = value["AccessPointId"].asString();
		routerInterfaceTypeObject.oppositeAccessPointId = value["OppositeAccessPointId"].asString();
		routerInterfaceTypeObject.healthCheckSourceIp = value["HealthCheckSourceIp"].asString();
		routerInterfaceTypeObject.healthCheckTargetIp = value["HealthCheckTargetIp"].asString();
		routerInterfaceSet_.push_back(routerInterfaceTypeObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouterInterfacesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeRouterInterfacesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeRouterInterfacesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeRouterInterfacesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeRouterInterfacesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouterInterfacesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

