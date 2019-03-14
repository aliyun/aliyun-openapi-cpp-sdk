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

#include <alibabacloud/cbn/model/DescribePublishedRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribePublishedRouteEntriesResult::DescribePublishedRouteEntriesResult() :
	ServiceResult()
{}

DescribePublishedRouteEntriesResult::DescribePublishedRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePublishedRouteEntriesResult::~DescribePublishedRouteEntriesResult()
{}

void DescribePublishedRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPublishedRouteEntries = value["PublishedRouteEntries"]["PublishedRouteEntry"];
	for (auto value : allPublishedRouteEntries)
	{
		PublishedRouteEntry publishedRouteEntriesObject;
		if(!value["DestinationCidrBlock"].isNull())
			publishedRouteEntriesObject.destinationCidrBlock = value["DestinationCidrBlock"].asString();
		if(!value["ChildInstanceRouteTableId"].isNull())
			publishedRouteEntriesObject.childInstanceRouteTableId = value["ChildInstanceRouteTableId"].asString();
		if(!value["NextHopType"].isNull())
			publishedRouteEntriesObject.nextHopType = value["NextHopType"].asString();
		if(!value["RouteType"].isNull())
			publishedRouteEntriesObject.routeType = value["RouteType"].asString();
		if(!value["NextHopId"].isNull())
			publishedRouteEntriesObject.nextHopId = value["NextHopId"].asString();
		if(!value["OperationalMode"].isNull())
			publishedRouteEntriesObject.operationalMode = value["OperationalMode"].asString() == "true";
		if(!value["PublishStatus"].isNull())
			publishedRouteEntriesObject.publishStatus = value["PublishStatus"].asString();
		auto allConflicts = value["Conflicts"]["Conflict"];
		for (auto value : allConflicts)
		{
			PublishedRouteEntry::Conflict conflictsObject;
			if(!value["DestinationCidrBlock"].isNull())
				conflictsObject.destinationCidrBlock = value["DestinationCidrBlock"].asString();
			if(!value["RegionId"].isNull())
				conflictsObject.regionId = value["RegionId"].asString();
			if(!value["InstanceId"].isNull())
				conflictsObject.instanceId = value["InstanceId"].asString();
			if(!value["InstanceType"].isNull())
				conflictsObject.instanceType = value["InstanceType"].asString();
			if(!value["Status"].isNull())
				conflictsObject.status = value["Status"].asString();
			publishedRouteEntriesObject.conflicts.push_back(conflictsObject);
		}
		publishedRouteEntries_.push_back(publishedRouteEntriesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribePublishedRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePublishedRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribePublishedRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePublishedRouteEntriesResult::PublishedRouteEntry> DescribePublishedRouteEntriesResult::getPublishedRouteEntries()const
{
	return publishedRouteEntries_;
}

