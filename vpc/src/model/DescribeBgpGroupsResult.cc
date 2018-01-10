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
	auto allBgpGroups = value["BgpGroups"]["BgpGroup"];
	for (auto value : allBgpGroups)
	{
		BgpGroup bgpGroupObject;
		bgpGroupObject.name = value["Name"].asString();
		bgpGroupObject.description = value["Description"].asString();
		bgpGroupObject.bgpGroupId = value["BgpGroupId"].asString();
		bgpGroupObject.peerAsn = value["PeerAsn"].asString();
		bgpGroupObject.authKey = value["AuthKey"].asString();
		bgpGroupObject.routerId = value["RouterId"].asString();
		bgpGroupObject.status = value["Status"].asString();
		bgpGroupObject.keepalive = value["Keepalive"].asString();
		bgpGroupObject.localAsn = value["LocalAsn"].asString();
		bgpGroupObject.hold = value["Hold"].asString();
		bgpGroupObject.isFake = value["IsFake"].asString();
		bgpGroupObject.routeLimit = value["RouteLimit"].asString();
		bgpGroupObject.regionId = value["RegionId"].asString();
		bgpGroups_.push_back(bgpGroupObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBgpGroupsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeBgpGroupsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeBgpGroupsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeBgpGroupsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeBgpGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBgpGroupsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

