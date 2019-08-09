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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allBgpGroups = value["BgpGroups"]["BgpGroup"];
	for (auto value : allBgpGroups)
	{
		BgpGroup bgpGroupsObject;
		if(!value["Name"].isNull())
			bgpGroupsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			bgpGroupsObject.description = value["Description"].asString();
		if(!value["BgpGroupId"].isNull())
			bgpGroupsObject.bgpGroupId = value["BgpGroupId"].asString();
		if(!value["PeerAsn"].isNull())
			bgpGroupsObject.peerAsn = value["PeerAsn"].asString();
		if(!value["AuthKey"].isNull())
			bgpGroupsObject.authKey = value["AuthKey"].asString();
		if(!value["RouterId"].isNull())
			bgpGroupsObject.routerId = value["RouterId"].asString();
		if(!value["Status"].isNull())
			bgpGroupsObject.status = value["Status"].asString();
		if(!value["Keepalive"].isNull())
			bgpGroupsObject.keepalive = value["Keepalive"].asString();
		if(!value["LocalAsn"].isNull())
			bgpGroupsObject.localAsn = value["LocalAsn"].asString();
		if(!value["Hold"].isNull())
			bgpGroupsObject.hold = value["Hold"].asString();
		if(!value["IsFake"].isNull())
			bgpGroupsObject.isFake = value["IsFake"].asString();
		if(!value["RouteLimit"].isNull())
			bgpGroupsObject.routeLimit = value["RouteLimit"].asString();
		if(!value["RegionId"].isNull())
			bgpGroupsObject.regionId = value["RegionId"].asString();
		bgpGroups_.push_back(bgpGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

