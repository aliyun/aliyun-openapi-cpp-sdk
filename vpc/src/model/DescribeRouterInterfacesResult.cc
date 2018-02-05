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

#include <alibabacloud/vpc/model/DescribeRouterInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
		RouterInterfaceType routerInterfaceSetObject;
		if(!value["RouterInterfaceId"].isNull())
			routerInterfaceSetObject.routerInterfaceId = value["RouterInterfaceId"].asString();
		if(!value["OppositeRegionId"].isNull())
			routerInterfaceSetObject.oppositeRegionId = value["OppositeRegionId"].asString();
		if(!value["Role"].isNull())
			routerInterfaceSetObject.role = value["Role"].asString();
		if(!value["Spec"].isNull())
			routerInterfaceSetObject.spec = value["Spec"].asString();
		if(!value["Name"].isNull())
			routerInterfaceSetObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			routerInterfaceSetObject.description = value["Description"].asString();
		if(!value["RouterId"].isNull())
			routerInterfaceSetObject.routerId = value["RouterId"].asString();
		if(!value["RouterType"].isNull())
			routerInterfaceSetObject.routerType = value["RouterType"].asString();
		if(!value["CreationTime"].isNull())
			routerInterfaceSetObject.creationTime = value["CreationTime"].asString();
		if(!value["EndTime"].isNull())
			routerInterfaceSetObject.endTime = value["EndTime"].asString();
		if(!value["ChargeType"].isNull())
			routerInterfaceSetObject.chargeType = value["ChargeType"].asString();
		if(!value["Status"].isNull())
			routerInterfaceSetObject.status = value["Status"].asString();
		if(!value["BusinessStatus"].isNull())
			routerInterfaceSetObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["ConnectedTime"].isNull())
			routerInterfaceSetObject.connectedTime = value["ConnectedTime"].asString();
		if(!value["OppositeInterfaceId"].isNull())
			routerInterfaceSetObject.oppositeInterfaceId = value["OppositeInterfaceId"].asString();
		if(!value["OppositeInterfaceSpec"].isNull())
			routerInterfaceSetObject.oppositeInterfaceSpec = value["OppositeInterfaceSpec"].asString();
		if(!value["OppositeInterfaceStatus"].isNull())
			routerInterfaceSetObject.oppositeInterfaceStatus = value["OppositeInterfaceStatus"].asString();
		if(!value["OppositeInterfaceBusinessStatus"].isNull())
			routerInterfaceSetObject.oppositeInterfaceBusinessStatus = value["OppositeInterfaceBusinessStatus"].asString();
		if(!value["OppositeRouterId"].isNull())
			routerInterfaceSetObject.oppositeRouterId = value["OppositeRouterId"].asString();
		if(!value["OppositeRouterType"].isNull())
			routerInterfaceSetObject.oppositeRouterType = value["OppositeRouterType"].asString();
		if(!value["OppositeInterfaceOwnerId"].isNull())
			routerInterfaceSetObject.oppositeInterfaceOwnerId = value["OppositeInterfaceOwnerId"].asString();
		if(!value["AccessPointId"].isNull())
			routerInterfaceSetObject.accessPointId = value["AccessPointId"].asString();
		if(!value["OppositeAccessPointId"].isNull())
			routerInterfaceSetObject.oppositeAccessPointId = value["OppositeAccessPointId"].asString();
		if(!value["HealthCheckSourceIp"].isNull())
			routerInterfaceSetObject.healthCheckSourceIp = value["HealthCheckSourceIp"].asString();
		if(!value["HealthCheckTargetIp"].isNull())
			routerInterfaceSetObject.healthCheckTargetIp = value["HealthCheckTargetIp"].asString();
		if(!value["OppositeVpcInstanceId"].isNull())
			routerInterfaceSetObject.oppositeVpcInstanceId = value["OppositeVpcInstanceId"].asString();
		if(!value["VpcInstanceId"].isNull())
			routerInterfaceSetObject.vpcInstanceId = value["VpcInstanceId"].asString();
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

