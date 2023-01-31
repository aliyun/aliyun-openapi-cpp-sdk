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

#include <alibabacloud/vpc/model/DescribeBgpGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBgpGroupsResult::DescribeBgpGroupsResult() :
	ServiceResult()
{}

DescribeBgpGroupsResult::DescribeBgpGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBgpGroupsResult::~DescribeBgpGroupsResult()
{}

void DescribeBgpGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBgpGroupsNode = value["BgpGroups"]["BgpGroup"];
	for (auto valueBgpGroupsBgpGroup : allBgpGroupsNode)
	{
		BgpGroup bgpGroupsObject;
		if(!valueBgpGroupsBgpGroup["Status"].isNull())
			bgpGroupsObject.status = valueBgpGroupsBgpGroup["Status"].asString();
		if(!valueBgpGroupsBgpGroup["BgpGroupId"].isNull())
			bgpGroupsObject.bgpGroupId = valueBgpGroupsBgpGroup["BgpGroupId"].asString();
		if(!valueBgpGroupsBgpGroup["RouterId"].isNull())
			bgpGroupsObject.routerId = valueBgpGroupsBgpGroup["RouterId"].asString();
		if(!valueBgpGroupsBgpGroup["PeerAsn"].isNull())
			bgpGroupsObject.peerAsn = valueBgpGroupsBgpGroup["PeerAsn"].asString();
		if(!valueBgpGroupsBgpGroup["LocalAsn"].isNull())
			bgpGroupsObject.localAsn = valueBgpGroupsBgpGroup["LocalAsn"].asString();
		if(!valueBgpGroupsBgpGroup["RegionId"].isNull())
			bgpGroupsObject.regionId = valueBgpGroupsBgpGroup["RegionId"].asString();
		if(!valueBgpGroupsBgpGroup["Hold"].isNull())
			bgpGroupsObject.hold = valueBgpGroupsBgpGroup["Hold"].asString();
		if(!valueBgpGroupsBgpGroup["IpVersion"].isNull())
			bgpGroupsObject.ipVersion = valueBgpGroupsBgpGroup["IpVersion"].asString();
		if(!valueBgpGroupsBgpGroup["Description"].isNull())
			bgpGroupsObject.description = valueBgpGroupsBgpGroup["Description"].asString();
		if(!valueBgpGroupsBgpGroup["Keepalive"].isNull())
			bgpGroupsObject.keepalive = valueBgpGroupsBgpGroup["Keepalive"].asString();
		if(!valueBgpGroupsBgpGroup["IsFake"].isNull())
			bgpGroupsObject.isFake = valueBgpGroupsBgpGroup["IsFake"].asString();
		if(!valueBgpGroupsBgpGroup["RouteLimit"].isNull())
			bgpGroupsObject.routeLimit = valueBgpGroupsBgpGroup["RouteLimit"].asString();
		if(!valueBgpGroupsBgpGroup["RouteQuota"].isNull())
			bgpGroupsObject.routeQuota = std::stoi(valueBgpGroupsBgpGroup["RouteQuota"].asString());
		if(!valueBgpGroupsBgpGroup["Name"].isNull())
			bgpGroupsObject.name = valueBgpGroupsBgpGroup["Name"].asString();
		if(!valueBgpGroupsBgpGroup["AuthKey"].isNull())
			bgpGroupsObject.authKey = valueBgpGroupsBgpGroup["AuthKey"].asString();
		bgpGroups_.push_back(bgpGroupsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeBgpGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBgpGroupsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeBgpGroupsResult::BgpGroup> DescribeBgpGroupsResult::getBgpGroups()const
{
	return bgpGroups_;
}

int DescribeBgpGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

