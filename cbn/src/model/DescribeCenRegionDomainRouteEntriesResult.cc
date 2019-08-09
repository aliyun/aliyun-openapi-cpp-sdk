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

#include <alibabacloud/cbn/model/DescribeCenRegionDomainRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenRegionDomainRouteEntriesResult::DescribeCenRegionDomainRouteEntriesResult() :
	ServiceResult()
{}

DescribeCenRegionDomainRouteEntriesResult::DescribeCenRegionDomainRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenRegionDomainRouteEntriesResult::~DescribeCenRegionDomainRouteEntriesResult()
{}

void DescribeCenRegionDomainRouteEntriesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCenRouteEntries = value["CenRouteEntries"]["CenRouteEntry"];
	for (auto value : allCenRouteEntries)
	{
		CenRouteEntry cenRouteEntriesObject;
		if(!value["DestinationCidrBlock"].isNull())
			cenRouteEntriesObject.destinationCidrBlock = value["DestinationCidrBlock"].asString();
		if(!value["Type"].isNull())
			cenRouteEntriesObject.type = value["Type"].asString();
		if(!value["NextHopInstanceId"].isNull())
			cenRouteEntriesObject.nextHopInstanceId = value["NextHopInstanceId"].asString();
		if(!value["NextHopType"].isNull())
			cenRouteEntriesObject.nextHopType = value["NextHopType"].asString();
		if(!value["NextHopRegionId"].isNull())
			cenRouteEntriesObject.nextHopRegionId = value["NextHopRegionId"].asString();
		if(!value["Status"].isNull())
			cenRouteEntriesObject.status = value["Status"].asString();
		if(!value["ToOtherRegionStatus"].isNull())
			cenRouteEntriesObject.toOtherRegionStatus = value["ToOtherRegionStatus"].asString();
		if(!value["Preference"].isNull())
			cenRouteEntriesObject.preference = std::stoi(value["Preference"].asString());
		auto allCenRouteMapRecords = value["CenRouteMapRecords"]["CenRouteMapRecord"];
		for (auto value : allCenRouteMapRecords)
		{
			CenRouteEntry::CenRouteMapRecord cenRouteMapRecordsObject;
			if(!value["RegionId"].isNull())
				cenRouteMapRecordsObject.regionId = value["RegionId"].asString();
			if(!value["RouteMapId"].isNull())
				cenRouteMapRecordsObject.routeMapId = value["RouteMapId"].asString();
			cenRouteEntriesObject.cenRouteMapRecords.push_back(cenRouteMapRecordsObject);
		}
		auto allCenOutRouteMapRecords = value["CenOutRouteMapRecords"]["CenOutRouteMapRecord"];
		for (auto value : allCenOutRouteMapRecords)
		{
			CenRouteEntry::CenOutRouteMapRecord cenOutRouteMapRecordsObject;
			if(!value["RegionId"].isNull())
				cenOutRouteMapRecordsObject.regionId = value["RegionId"].asString();
			if(!value["RouteMapId"].isNull())
				cenOutRouteMapRecordsObject.routeMapId = value["RouteMapId"].asString();
			cenRouteEntriesObject.cenOutRouteMapRecords.push_back(cenOutRouteMapRecordsObject);
		}
		auto allAsPaths = value["AsPaths"]["AsPath"];
		for (auto value : allAsPaths)
			cenRouteEntriesObject.asPaths.push_back(value.asString());
		auto allCommunities = value["Communities"]["Community"];
		for (auto value : allCommunities)
			cenRouteEntriesObject.communities.push_back(value.asString());
		cenRouteEntries_.push_back(cenRouteEntriesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCenRegionDomainRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenRegionDomainRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenRegionDomainRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenRegionDomainRouteEntriesResult::CenRouteEntry> DescribeCenRegionDomainRouteEntriesResult::getCenRouteEntries()const
{
	return cenRouteEntries_;
}

