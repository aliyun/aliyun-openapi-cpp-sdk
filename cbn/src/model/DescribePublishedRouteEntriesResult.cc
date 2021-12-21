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
	auto allPublishedRouteEntriesNode = value["PublishedRouteEntries"]["PublishedRouteEntry"];
	for (auto valuePublishedRouteEntriesPublishedRouteEntry : allPublishedRouteEntriesNode)
	{
		PublishedRouteEntry publishedRouteEntriesObject;
		if(!valuePublishedRouteEntriesPublishedRouteEntry["NextHopId"].isNull())
			publishedRouteEntriesObject.nextHopId = valuePublishedRouteEntriesPublishedRouteEntry["NextHopId"].asString();
		if(!valuePublishedRouteEntriesPublishedRouteEntry["PublishStatus"].isNull())
			publishedRouteEntriesObject.publishStatus = valuePublishedRouteEntriesPublishedRouteEntry["PublishStatus"].asString();
		if(!valuePublishedRouteEntriesPublishedRouteEntry["ChildInstanceRouteTableId"].isNull())
			publishedRouteEntriesObject.childInstanceRouteTableId = valuePublishedRouteEntriesPublishedRouteEntry["ChildInstanceRouteTableId"].asString();
		if(!valuePublishedRouteEntriesPublishedRouteEntry["NextHopType"].isNull())
			publishedRouteEntriesObject.nextHopType = valuePublishedRouteEntriesPublishedRouteEntry["NextHopType"].asString();
		if(!valuePublishedRouteEntriesPublishedRouteEntry["OperationalMode"].isNull())
			publishedRouteEntriesObject.operationalMode = valuePublishedRouteEntriesPublishedRouteEntry["OperationalMode"].asString() == "true";
		if(!valuePublishedRouteEntriesPublishedRouteEntry["DestinationCidrBlock"].isNull())
			publishedRouteEntriesObject.destinationCidrBlock = valuePublishedRouteEntriesPublishedRouteEntry["DestinationCidrBlock"].asString();
		if(!valuePublishedRouteEntriesPublishedRouteEntry["RouteType"].isNull())
			publishedRouteEntriesObject.routeType = valuePublishedRouteEntriesPublishedRouteEntry["RouteType"].asString();
		auto allConflictsNode = valuePublishedRouteEntriesPublishedRouteEntry["Conflicts"]["Conflict"];
		for (auto valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict : allConflictsNode)
		{
			PublishedRouteEntry::Conflict conflictsObject;
			if(!valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["Status"].isNull())
				conflictsObject.status = valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["Status"].asString();
			if(!valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["DestinationCidrBlock"].isNull())
				conflictsObject.destinationCidrBlock = valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["DestinationCidrBlock"].asString();
			if(!valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["InstanceId"].isNull())
				conflictsObject.instanceId = valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["InstanceId"].asString();
			if(!valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["InstanceType"].isNull())
				conflictsObject.instanceType = valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["InstanceType"].asString();
			if(!valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["RegionId"].isNull())
				conflictsObject.regionId = valuePublishedRouteEntriesPublishedRouteEntryConflictsConflict["RegionId"].asString();
			publishedRouteEntriesObject.conflicts.push_back(conflictsObject);
		}
		publishedRouteEntries_.push_back(publishedRouteEntriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

