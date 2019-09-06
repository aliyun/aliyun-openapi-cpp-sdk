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

#include <alibabacloud/vpc/model/DescribeBgpPeersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBgpPeersResult::DescribeBgpPeersResult() :
	ServiceResult()
{}

DescribeBgpPeersResult::DescribeBgpPeersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBgpPeersResult::~DescribeBgpPeersResult()
{}

void DescribeBgpPeersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBgpPeers = value["BgpPeers"]["BgpPeer"];
	for (auto value : allBgpPeers)
	{
		BgpPeer bgpPeersObject;
		if(!value["Name"].isNull())
			bgpPeersObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			bgpPeersObject.description = value["Description"].asString();
		if(!value["BgpPeerId"].isNull())
			bgpPeersObject.bgpPeerId = value["BgpPeerId"].asString();
		if(!value["BgpGroupId"].isNull())
			bgpPeersObject.bgpGroupId = value["BgpGroupId"].asString();
		if(!value["PeerIpAddress"].isNull())
			bgpPeersObject.peerIpAddress = value["PeerIpAddress"].asString();
		if(!value["PeerAsn"].isNull())
			bgpPeersObject.peerAsn = value["PeerAsn"].asString();
		if(!value["AuthKey"].isNull())
			bgpPeersObject.authKey = value["AuthKey"].asString();
		if(!value["RouterId"].isNull())
			bgpPeersObject.routerId = value["RouterId"].asString();
		if(!value["BgpStatus"].isNull())
			bgpPeersObject.bgpStatus = value["BgpStatus"].asString();
		if(!value["Status"].isNull())
			bgpPeersObject.status = value["Status"].asString();
		if(!value["Keepalive"].isNull())
			bgpPeersObject.keepalive = value["Keepalive"].asString();
		if(!value["LocalAsn"].isNull())
			bgpPeersObject.localAsn = value["LocalAsn"].asString();
		if(!value["Hold"].isNull())
			bgpPeersObject.hold = value["Hold"].asString();
		if(!value["IsFake"].isNull())
			bgpPeersObject.isFake = value["IsFake"].asString();
		if(!value["RouteLimit"].isNull())
			bgpPeersObject.routeLimit = value["RouteLimit"].asString();
		if(!value["RegionId"].isNull())
			bgpPeersObject.regionId = value["RegionId"].asString();
		if(!value["EnableBfd"].isNull())
			bgpPeersObject.enableBfd = value["EnableBfd"].asString() == "true";
		bgpPeers_.push_back(bgpPeersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeBgpPeersResult::BgpPeer> DescribeBgpPeersResult::getBgpPeers()const
{
	return bgpPeers_;
}

int DescribeBgpPeersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBgpPeersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBgpPeersResult::getPageNumber()const
{
	return pageNumber_;
}

