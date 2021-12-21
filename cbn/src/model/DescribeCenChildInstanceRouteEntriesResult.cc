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

#include <alibabacloud/cbn/model/DescribeCenChildInstanceRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenChildInstanceRouteEntriesResult::DescribeCenChildInstanceRouteEntriesResult() :
	ServiceResult()
{}

DescribeCenChildInstanceRouteEntriesResult::DescribeCenChildInstanceRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenChildInstanceRouteEntriesResult::~DescribeCenChildInstanceRouteEntriesResult()
{}

void DescribeCenChildInstanceRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCenRouteEntriesNode = value["CenRouteEntries"]["CenRouteEntry"];
	for (auto valueCenRouteEntriesCenRouteEntry : allCenRouteEntriesNode)
	{
		CenRouteEntry cenRouteEntriesObject;
		if(!valueCenRouteEntriesCenRouteEntry["Status"].isNull())
			cenRouteEntriesObject.status = valueCenRouteEntriesCenRouteEntry["Status"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["Type"].isNull())
			cenRouteEntriesObject.type = valueCenRouteEntriesCenRouteEntry["Type"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["PublishStatus"].isNull())
			cenRouteEntriesObject.publishStatus = valueCenRouteEntriesCenRouteEntry["PublishStatus"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["NextHopType"].isNull())
			cenRouteEntriesObject.nextHopType = valueCenRouteEntriesCenRouteEntry["NextHopType"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["OperationalMode"].isNull())
			cenRouteEntriesObject.operationalMode = valueCenRouteEntriesCenRouteEntry["OperationalMode"].asString() == "true";
		if(!valueCenRouteEntriesCenRouteEntry["NextHopRegionId"].isNull())
			cenRouteEntriesObject.nextHopRegionId = valueCenRouteEntriesCenRouteEntry["NextHopRegionId"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["NextHopInstanceId"].isNull())
			cenRouteEntriesObject.nextHopInstanceId = valueCenRouteEntriesCenRouteEntry["NextHopInstanceId"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["DestinationCidrBlock"].isNull())
			cenRouteEntriesObject.destinationCidrBlock = valueCenRouteEntriesCenRouteEntry["DestinationCidrBlock"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["RouteTableId"].isNull())
			cenRouteEntriesObject.routeTableId = valueCenRouteEntriesCenRouteEntry["RouteTableId"].asString();
		auto allCenRouteMapRecordsNode = valueCenRouteEntriesCenRouteEntry["CenRouteMapRecords"]["CenRouteMapRecord"];
		for (auto valueCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord : allCenRouteMapRecordsNode)
		{
			CenRouteEntry::CenRouteMapRecord cenRouteMapRecordsObject;
			if(!valueCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord["RouteMapId"].isNull())
				cenRouteMapRecordsObject.routeMapId = valueCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord["RouteMapId"].asString();
			if(!valueCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord["RegionId"].isNull())
				cenRouteMapRecordsObject.regionId = valueCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord["RegionId"].asString();
			cenRouteEntriesObject.cenRouteMapRecords.push_back(cenRouteMapRecordsObject);
		}
		auto allConflictsNode = valueCenRouteEntriesCenRouteEntry["Conflicts"]["Conflict"];
		for (auto valueCenRouteEntriesCenRouteEntryConflictsConflict : allConflictsNode)
		{
			CenRouteEntry::Conflict conflictsObject;
			if(!valueCenRouteEntriesCenRouteEntryConflictsConflict["Status"].isNull())
				conflictsObject.status = valueCenRouteEntriesCenRouteEntryConflictsConflict["Status"].asString();
			if(!valueCenRouteEntriesCenRouteEntryConflictsConflict["DestinationCidrBlock"].isNull())
				conflictsObject.destinationCidrBlock = valueCenRouteEntriesCenRouteEntryConflictsConflict["DestinationCidrBlock"].asString();
			if(!valueCenRouteEntriesCenRouteEntryConflictsConflict["InstanceId"].isNull())
				conflictsObject.instanceId = valueCenRouteEntriesCenRouteEntryConflictsConflict["InstanceId"].asString();
			if(!valueCenRouteEntriesCenRouteEntryConflictsConflict["InstanceType"].isNull())
				conflictsObject.instanceType = valueCenRouteEntriesCenRouteEntryConflictsConflict["InstanceType"].asString();
			if(!valueCenRouteEntriesCenRouteEntryConflictsConflict["RegionId"].isNull())
				conflictsObject.regionId = valueCenRouteEntriesCenRouteEntryConflictsConflict["RegionId"].asString();
			cenRouteEntriesObject.conflicts.push_back(conflictsObject);
		}
		auto allCommunities = value["Communities"]["Community"];
		for (auto value : allCommunities)
			cenRouteEntriesObject.communities.push_back(value.asString());
		auto allAsPaths = value["AsPaths"]["AsPath"];
		for (auto value : allAsPaths)
			cenRouteEntriesObject.asPaths.push_back(value.asString());
		cenRouteEntries_.push_back(cenRouteEntriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCenChildInstanceRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenChildInstanceRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenChildInstanceRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenChildInstanceRouteEntriesResult::CenRouteEntry> DescribeCenChildInstanceRouteEntriesResult::getCenRouteEntries()const
{
	return cenRouteEntries_;
}

