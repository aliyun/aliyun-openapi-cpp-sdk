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

#include <alibabacloud/ens/model/DescribeEnsRouteTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsRouteTablesResult::DescribeEnsRouteTablesResult() :
	ServiceResult()
{}

DescribeEnsRouteTablesResult::DescribeEnsRouteTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsRouteTablesResult::~DescribeEnsRouteTablesResult()
{}

void DescribeEnsRouteTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteTablesNode = value["RouteTables"]["RouteTable"];
	for (auto valueRouteTablesRouteTable : allRouteTablesNode)
	{
		RouteTable routeTablesObject;
		if(!valueRouteTablesRouteTable["CreationTime"].isNull())
			routeTablesObject.creationTime = valueRouteTablesRouteTable["CreationTime"].asString();
		if(!valueRouteTablesRouteTable["Status"].isNull())
			routeTablesObject.status = valueRouteTablesRouteTable["Status"].asString();
		if(!valueRouteTablesRouteTable["RouteTableId"].isNull())
			routeTablesObject.routeTableId = valueRouteTablesRouteTable["RouteTableId"].asString();
		if(!valueRouteTablesRouteTable["NetworkId"].isNull())
			routeTablesObject.networkId = valueRouteTablesRouteTable["NetworkId"].asString();
		if(!valueRouteTablesRouteTable["EnsRegionId"].isNull())
			routeTablesObject.ensRegionId = valueRouteTablesRouteTable["EnsRegionId"].asString();
		if(!valueRouteTablesRouteTable["Type"].isNull())
			routeTablesObject.type = valueRouteTablesRouteTable["Type"].asString();
		if(!valueRouteTablesRouteTable["RouteTableName"].isNull())
			routeTablesObject.routeTableName = valueRouteTablesRouteTable["RouteTableName"].asString();
		if(!valueRouteTablesRouteTable["NetworkName"].isNull())
			routeTablesObject.networkName = valueRouteTablesRouteTable["NetworkName"].asString();
		if(!valueRouteTablesRouteTable["AssociateType"].isNull())
			routeTablesObject.associateType = valueRouteTablesRouteTable["AssociateType"].asString();
		if(!valueRouteTablesRouteTable["Description"].isNull())
			routeTablesObject.description = valueRouteTablesRouteTable["Description"].asString();
		if(!valueRouteTablesRouteTable["IsDefaultGatewayRouteTable"].isNull())
			routeTablesObject.isDefaultGatewayRouteTable = valueRouteTablesRouteTable["IsDefaultGatewayRouteTable"].asString() == "true";
		auto allAssociatedResourcesNode = valueRouteTablesRouteTable["AssociatedResources"]["AssociatedResource"];
		for (auto valueRouteTablesRouteTableAssociatedResourcesAssociatedResource : allAssociatedResourcesNode)
		{
			RouteTable::AssociatedResource associatedResourcesObject;
			if(!valueRouteTablesRouteTableAssociatedResourcesAssociatedResource["ResourceType"].isNull())
				associatedResourcesObject.resourceType = valueRouteTablesRouteTableAssociatedResourcesAssociatedResource["ResourceType"].asString();
			if(!valueRouteTablesRouteTableAssociatedResourcesAssociatedResource["ResourceId"].isNull())
				associatedResourcesObject.resourceId = valueRouteTablesRouteTableAssociatedResourcesAssociatedResource["ResourceId"].asString();
			if(!valueRouteTablesRouteTableAssociatedResourcesAssociatedResource["ResourceName"].isNull())
				associatedResourcesObject.resourceName = valueRouteTablesRouteTableAssociatedResourcesAssociatedResource["ResourceName"].asString();
			routeTablesObject.associatedResources.push_back(associatedResourcesObject);
		}
		auto allVSwitchIds = value["VSwitchIds"]["VSwitch"];
		for (auto value : allVSwitchIds)
			routeTablesObject.vSwitchIds.push_back(value.asString());
		routeTables_.push_back(routeTablesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeEnsRouteTablesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEnsRouteTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEnsRouteTablesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEnsRouteTablesResult::RouteTable> DescribeEnsRouteTablesResult::getRouteTables()const
{
	return routeTables_;
}

