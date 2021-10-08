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
	auto allRouterInterfaceSetNode = value["RouterInterfaceSet"]["RouterInterfaceType"];
	for (auto valueRouterInterfaceSetRouterInterfaceType : allRouterInterfaceSetNode)
	{
		RouterInterfaceType routerInterfaceSetObject;
		if(!valueRouterInterfaceSetRouterInterfaceType["HealthCheckTargetIp"].isNull())
			routerInterfaceSetObject.healthCheckTargetIp = valueRouterInterfaceSetRouterInterfaceType["HealthCheckTargetIp"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["CreationTime"].isNull())
			routerInterfaceSetObject.creationTime = valueRouterInterfaceSetRouterInterfaceType["CreationTime"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["Status"].isNull())
			routerInterfaceSetObject.status = valueRouterInterfaceSetRouterInterfaceType["Status"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["Spec"].isNull())
			routerInterfaceSetObject.spec = valueRouterInterfaceSetRouterInterfaceType["Spec"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceId"].isNull())
			routerInterfaceSetObject.oppositeInterfaceId = valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["RouterInterfaceId"].isNull())
			routerInterfaceSetObject.routerInterfaceId = valueRouterInterfaceSetRouterInterfaceType["RouterInterfaceId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["ChargeType"].isNull())
			routerInterfaceSetObject.chargeType = valueRouterInterfaceSetRouterInterfaceType["ChargeType"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeRouterType"].isNull())
			routerInterfaceSetObject.oppositeRouterType = valueRouterInterfaceSetRouterInterfaceType["OppositeRouterType"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceOwnerId"].isNull())
			routerInterfaceSetObject.oppositeInterfaceOwnerId = valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceOwnerId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["Description"].isNull())
			routerInterfaceSetObject.description = valueRouterInterfaceSetRouterInterfaceType["Description"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["Name"].isNull())
			routerInterfaceSetObject.name = valueRouterInterfaceSetRouterInterfaceType["Name"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeRouterId"].isNull())
			routerInterfaceSetObject.oppositeRouterId = valueRouterInterfaceSetRouterInterfaceType["OppositeRouterId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceSpec"].isNull())
			routerInterfaceSetObject.oppositeInterfaceSpec = valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceSpec"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["RouterId"].isNull())
			routerInterfaceSetObject.routerId = valueRouterInterfaceSetRouterInterfaceType["RouterId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceBusinessStatus"].isNull())
			routerInterfaceSetObject.oppositeInterfaceBusinessStatus = valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceBusinessStatus"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["ConnectedTime"].isNull())
			routerInterfaceSetObject.connectedTime = valueRouterInterfaceSetRouterInterfaceType["ConnectedTime"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceStatus"].isNull())
			routerInterfaceSetObject.oppositeInterfaceStatus = valueRouterInterfaceSetRouterInterfaceType["OppositeInterfaceStatus"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["HealthCheckSourceIp"].isNull())
			routerInterfaceSetObject.healthCheckSourceIp = valueRouterInterfaceSetRouterInterfaceType["HealthCheckSourceIp"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["EndTime"].isNull())
			routerInterfaceSetObject.endTime = valueRouterInterfaceSetRouterInterfaceType["EndTime"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeRegionId"].isNull())
			routerInterfaceSetObject.oppositeRegionId = valueRouterInterfaceSetRouterInterfaceType["OppositeRegionId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["OppositeAccessPointId"].isNull())
			routerInterfaceSetObject.oppositeAccessPointId = valueRouterInterfaceSetRouterInterfaceType["OppositeAccessPointId"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["BusinessStatus"].isNull())
			routerInterfaceSetObject.businessStatus = valueRouterInterfaceSetRouterInterfaceType["BusinessStatus"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["Role"].isNull())
			routerInterfaceSetObject.role = valueRouterInterfaceSetRouterInterfaceType["Role"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["RouterType"].isNull())
			routerInterfaceSetObject.routerType = valueRouterInterfaceSetRouterInterfaceType["RouterType"].asString();
		if(!valueRouterInterfaceSetRouterInterfaceType["AccessPointId"].isNull())
			routerInterfaceSetObject.accessPointId = valueRouterInterfaceSetRouterInterfaceType["AccessPointId"].asString();
		routerInterfaceSet_.push_back(routerInterfaceSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouterInterfacesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRouterInterfacesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRouterInterfacesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRouterInterfacesResult::RouterInterfaceType> DescribeRouterInterfacesResult::getRouterInterfaceSet()const
{
	return routerInterfaceSet_;
}

