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

#include <alibabacloud/ecd/model/VerifyCenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

VerifyCenResult::VerifyCenResult() :
	ServiceResult()
{}

VerifyCenResult::VerifyCenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VerifyCenResult::~VerifyCenResult()
{}

void VerifyCenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteEntriesNode = value["RouteEntries"]["RouteEntry"];
	for (auto valueRouteEntriesRouteEntry : allRouteEntriesNode)
	{
		RouteEntry routeEntriesObject;
		if(!valueRouteEntriesRouteEntry["Status"].isNull())
			routeEntriesObject.status = valueRouteEntriesRouteEntry["Status"].asString();
		if(!valueRouteEntriesRouteEntry["NextHopInstanceId"].isNull())
			routeEntriesObject.nextHopInstanceId = valueRouteEntriesRouteEntry["NextHopInstanceId"].asString();
		if(!valueRouteEntriesRouteEntry["DestinationCidrBlock"].isNull())
			routeEntriesObject.destinationCidrBlock = valueRouteEntriesRouteEntry["DestinationCidrBlock"].asString();
		if(!valueRouteEntriesRouteEntry["RegionId"].isNull())
			routeEntriesObject.regionId = valueRouteEntriesRouteEntry["RegionId"].asString();
		routeEntries_.push_back(routeEntriesObject);
	}
	auto allCidrBlocks = value["CidrBlocks"]["CidrBlock"];
	for (const auto &item : allCidrBlocks)
		cidrBlocks_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string VerifyCenResult::getStatus()const
{
	return status_;
}

std::vector<std::string> VerifyCenResult::getCidrBlocks()const
{
	return cidrBlocks_;
}

std::vector<VerifyCenResult::RouteEntry> VerifyCenResult::getRouteEntries()const
{
	return routeEntries_;
}

