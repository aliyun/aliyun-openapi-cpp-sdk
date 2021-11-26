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

#include <alibabacloud/cbn/model/DescribeRouteServicesInCenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeRouteServicesInCenResult::DescribeRouteServicesInCenResult() :
	ServiceResult()
{}

DescribeRouteServicesInCenResult::DescribeRouteServicesInCenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouteServicesInCenResult::~DescribeRouteServicesInCenResult()
{}

void DescribeRouteServicesInCenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteServiceEntriesNode = value["RouteServiceEntries"]["RouteServiceEntry"];
	for (auto valueRouteServiceEntriesRouteServiceEntry : allRouteServiceEntriesNode)
	{
		RouteServiceEntry routeServiceEntriesObject;
		if(!valueRouteServiceEntriesRouteServiceEntry["Status"].isNull())
			routeServiceEntriesObject.status = valueRouteServiceEntriesRouteServiceEntry["Status"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["Host"].isNull())
			routeServiceEntriesObject.host = valueRouteServiceEntriesRouteServiceEntry["Host"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["Description"].isNull())
			routeServiceEntriesObject.description = valueRouteServiceEntriesRouteServiceEntry["Description"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["HostVpcId"].isNull())
			routeServiceEntriesObject.hostVpcId = valueRouteServiceEntriesRouteServiceEntry["HostVpcId"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["CenId"].isNull())
			routeServiceEntriesObject.cenId = valueRouteServiceEntriesRouteServiceEntry["CenId"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["AccessRegionId"].isNull())
			routeServiceEntriesObject.accessRegionId = valueRouteServiceEntriesRouteServiceEntry["AccessRegionId"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["HostRegionId"].isNull())
			routeServiceEntriesObject.hostRegionId = valueRouteServiceEntriesRouteServiceEntry["HostRegionId"].asString();
		if(!valueRouteServiceEntriesRouteServiceEntry["UpdateInterval"].isNull())
			routeServiceEntriesObject.updateInterval = valueRouteServiceEntriesRouteServiceEntry["UpdateInterval"].asString();
		auto allCidrs = value["Cidrs"]["Cidr"];
		for (auto value : allCidrs)
			routeServiceEntriesObject.cidrs.push_back(value.asString());
		routeServiceEntries_.push_back(routeServiceEntriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouteServicesInCenResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRouteServicesInCenResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRouteServicesInCenResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRouteServicesInCenResult::RouteServiceEntry> DescribeRouteServicesInCenResult::getRouteServiceEntries()const
{
	return routeServiceEntries_;
}

