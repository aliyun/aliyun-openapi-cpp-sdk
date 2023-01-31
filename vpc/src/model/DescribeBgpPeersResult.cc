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
	auto allBgpPeersNode = value["BgpPeers"]["BgpPeer"];
	for (auto valueBgpPeersBgpPeer : allBgpPeersNode)
	{
		BgpPeer bgpPeersObject;
		if(!valueBgpPeersBgpPeer["Status"].isNull())
			bgpPeersObject.status = valueBgpPeersBgpPeer["Status"].asString();
		if(!valueBgpPeersBgpPeer["PeerIpAddress"].isNull())
			bgpPeersObject.peerIpAddress = valueBgpPeersBgpPeer["PeerIpAddress"].asString();
		if(!valueBgpPeersBgpPeer["RouterId"].isNull())
			bgpPeersObject.routerId = valueBgpPeersBgpPeer["RouterId"].asString();
		if(!valueBgpPeersBgpPeer["BgpGroupId"].isNull())
			bgpPeersObject.bgpGroupId = valueBgpPeersBgpPeer["BgpGroupId"].asString();
		if(!valueBgpPeersBgpPeer["BgpStatus"].isNull())
			bgpPeersObject.bgpStatus = valueBgpPeersBgpPeer["BgpStatus"].asString();
		if(!valueBgpPeersBgpPeer["BfdMultiHop"].isNull())
			bgpPeersObject.bfdMultiHop = std::stoi(valueBgpPeersBgpPeer["BfdMultiHop"].asString());
		if(!valueBgpPeersBgpPeer["PeerAsn"].isNull())
			bgpPeersObject.peerAsn = valueBgpPeersBgpPeer["PeerAsn"].asString();
		if(!valueBgpPeersBgpPeer["LocalAsn"].isNull())
			bgpPeersObject.localAsn = valueBgpPeersBgpPeer["LocalAsn"].asString();
		if(!valueBgpPeersBgpPeer["RegionId"].isNull())
			bgpPeersObject.regionId = valueBgpPeersBgpPeer["RegionId"].asString();
		if(!valueBgpPeersBgpPeer["BgpPeerId"].isNull())
			bgpPeersObject.bgpPeerId = valueBgpPeersBgpPeer["BgpPeerId"].asString();
		if(!valueBgpPeersBgpPeer["EnableBfd"].isNull())
			bgpPeersObject.enableBfd = valueBgpPeersBgpPeer["EnableBfd"].asString() == "true";
		if(!valueBgpPeersBgpPeer["Hold"].isNull())
			bgpPeersObject.hold = valueBgpPeersBgpPeer["Hold"].asString();
		if(!valueBgpPeersBgpPeer["IpVersion"].isNull())
			bgpPeersObject.ipVersion = valueBgpPeersBgpPeer["IpVersion"].asString();
		if(!valueBgpPeersBgpPeer["Keepalive"].isNull())
			bgpPeersObject.keepalive = valueBgpPeersBgpPeer["Keepalive"].asString();
		if(!valueBgpPeersBgpPeer["Description"].isNull())
			bgpPeersObject.description = valueBgpPeersBgpPeer["Description"].asString();
		if(!valueBgpPeersBgpPeer["RouteLimit"].isNull())
			bgpPeersObject.routeLimit = valueBgpPeersBgpPeer["RouteLimit"].asString();
		if(!valueBgpPeersBgpPeer["IsFake"].isNull())
			bgpPeersObject.isFake = valueBgpPeersBgpPeer["IsFake"].asString() == "true";
		if(!valueBgpPeersBgpPeer["AuthKey"].isNull())
			bgpPeersObject.authKey = valueBgpPeersBgpPeer["AuthKey"].asString();
		if(!valueBgpPeersBgpPeer["Name"].isNull())
			bgpPeersObject.name = valueBgpPeersBgpPeer["Name"].asString();
		if(!valueBgpPeersBgpPeer["AdvertisedRouteCount"].isNull())
			bgpPeersObject.advertisedRouteCount = std::stoi(valueBgpPeersBgpPeer["AdvertisedRouteCount"].asString());
		if(!valueBgpPeersBgpPeer["ReceivedRouteCount"].isNull())
			bgpPeersObject.receivedRouteCount = std::stoi(valueBgpPeersBgpPeer["ReceivedRouteCount"].asString());
		if(!valueBgpPeersBgpPeer["GmtModified"].isNull())
			bgpPeersObject.gmtModified = valueBgpPeersBgpPeer["GmtModified"].asString();
		bgpPeers_.push_back(bgpPeersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

