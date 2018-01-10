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
		BgpPeer bgpPeerObject;
		bgpPeerObject.name = value["Name"].asString();
		bgpPeerObject.description = value["Description"].asString();
		bgpPeerObject.bgpPeerId = value["BgpPeerId"].asString();
		bgpPeerObject.bgpGroupId = value["BgpGroupId"].asString();
		bgpPeerObject.peerIpAddress = value["PeerIpAddress"].asString();
		bgpPeerObject.peerAsn = value["PeerAsn"].asString();
		bgpPeerObject.authKey = value["AuthKey"].asString();
		bgpPeerObject.routerId = value["RouterId"].asString();
		bgpPeerObject.bgpStatus = value["BgpStatus"].asString();
		bgpPeerObject.status = value["Status"].asString();
		bgpPeerObject.keepalive = value["Keepalive"].asString();
		bgpPeerObject.localAsn = value["LocalAsn"].asString();
		bgpPeerObject.hold = value["Hold"].asString();
		bgpPeerObject.isFake = value["IsFake"].asString();
		bgpPeerObject.routeLimit = value["RouteLimit"].asString();
		bgpPeerObject.regionId = value["RegionId"].asString();
		bgpPeers_.push_back(bgpPeerObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBgpPeersResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeBgpPeersResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeBgpPeersResult::getPageSize()const
{
	return pageSize_;
}

void DescribeBgpPeersResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeBgpPeersResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBgpPeersResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

