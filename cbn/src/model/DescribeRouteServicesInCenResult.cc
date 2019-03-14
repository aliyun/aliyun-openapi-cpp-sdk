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
	auto allRouteServiceEntries = value["RouteServiceEntries"]["RouteServiceEntry"];
	for (auto value : allRouteServiceEntries)
	{
		RouteServiceEntry routeServiceEntriesObject;
		if(!value["CenId"].isNull())
			routeServiceEntriesObject.cenId = value["CenId"].asString();
		if(!value["Host"].isNull())
			routeServiceEntriesObject.host = value["Host"].asString();
		if(!value["HostRegionId"].isNull())
			routeServiceEntriesObject.hostRegionId = value["HostRegionId"].asString();
		if(!value["AccessRegionId"].isNull())
			routeServiceEntriesObject.accessRegionId = value["AccessRegionId"].asString();
		if(!value["UpdateInterval"].isNull())
			routeServiceEntriesObject.updateInterval = value["UpdateInterval"].asString();
		if(!value["Status"].isNull())
			routeServiceEntriesObject.status = value["Status"].asString();
		auto allCidrs = value["Cidrs"]["Cidr"];
		for (auto value : allCidrs)
			routeServiceEntriesObject.cidrs.push_back(value.asString());
		routeServiceEntries_.push_back(routeServiceEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

