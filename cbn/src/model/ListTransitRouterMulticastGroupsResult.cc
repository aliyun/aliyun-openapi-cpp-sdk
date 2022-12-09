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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterMulticastGroupsResult::ListTransitRouterMulticastGroupsResult() :
	ServiceResult()
{}

ListTransitRouterMulticastGroupsResult::ListTransitRouterMulticastGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterMulticastGroupsResult::~ListTransitRouterMulticastGroupsResult()
{}

void ListTransitRouterMulticastGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterMulticastGroupsNode = value["TransitRouterMulticastGroups"]["TransitRouterMulticastGroup"];
	for (auto valueTransitRouterMulticastGroupsTransitRouterMulticastGroup : allTransitRouterMulticastGroupsNode)
	{
		TransitRouterMulticastGroup transitRouterMulticastGroupsObject;
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["GroupIpAddress"].isNull())
			transitRouterMulticastGroupsObject.groupIpAddress = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["GroupIpAddress"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["TransitRouterAttachmentId"].isNull())
			transitRouterMulticastGroupsObject.transitRouterAttachmentId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["VSwitchId"].isNull())
			transitRouterMulticastGroupsObject.vSwitchId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["VSwitchId"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["NetworkInterfaceId"].isNull())
			transitRouterMulticastGroupsObject.networkInterfaceId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["NetworkInterfaceId"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["PeerTransitRouterMulticastDomainId"].isNull())
			transitRouterMulticastGroupsObject.peerTransitRouterMulticastDomainId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["PeerTransitRouterMulticastDomainId"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["Status"].isNull())
			transitRouterMulticastGroupsObject.status = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["Status"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["GroupSource"].isNull())
			transitRouterMulticastGroupsObject.groupSource = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["GroupSource"].asString() == "true";
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["GroupMember"].isNull())
			transitRouterMulticastGroupsObject.groupMember = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["GroupMember"].asString() == "true";
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["MemberType"].isNull())
			transitRouterMulticastGroupsObject.memberType = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["MemberType"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["SourceType"].isNull())
			transitRouterMulticastGroupsObject.sourceType = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["SourceType"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ResourceType"].isNull())
			transitRouterMulticastGroupsObject.resourceType = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ResourceType"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ResourceOwnerId"].isNull())
			transitRouterMulticastGroupsObject.resourceOwnerId = std::stol(valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ResourceOwnerId"].asString());
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ResourceId"].isNull())
			transitRouterMulticastGroupsObject.resourceId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ResourceId"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ConnectPeerId"].isNull())
			transitRouterMulticastGroupsObject.connectPeerId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["ConnectPeerId"].asString();
		if(!valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["TransitRouterMulticastDomainId"].isNull())
			transitRouterMulticastGroupsObject.transitRouterMulticastDomainId = valueTransitRouterMulticastGroupsTransitRouterMulticastGroup["TransitRouterMulticastDomainId"].asString();
		transitRouterMulticastGroups_.push_back(transitRouterMulticastGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListTransitRouterMulticastGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterMulticastGroupsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterMulticastGroupsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterMulticastGroupsResult::TransitRouterMulticastGroup> ListTransitRouterMulticastGroupsResult::getTransitRouterMulticastGroups()const
{
	return transitRouterMulticastGroups_;
}

