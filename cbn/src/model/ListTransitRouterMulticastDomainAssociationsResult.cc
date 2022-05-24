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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastDomainAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterMulticastDomainAssociationsResult::ListTransitRouterMulticastDomainAssociationsResult() :
	ServiceResult()
{}

ListTransitRouterMulticastDomainAssociationsResult::ListTransitRouterMulticastDomainAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterMulticastDomainAssociationsResult::~ListTransitRouterMulticastDomainAssociationsResult()
{}

void ListTransitRouterMulticastDomainAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterMulticastAssociationsNode = value["TransitRouterMulticastAssociations"]["TransitRouterMulticastAssociation"];
	for (auto valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation : allTransitRouterMulticastAssociationsNode)
	{
		TransitRouterMulticastAssociation transitRouterMulticastAssociationsObject;
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["TransitRouterMulticastDomainId"].isNull())
			transitRouterMulticastAssociationsObject.transitRouterMulticastDomainId = valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["TransitRouterMulticastDomainId"].asString();
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["TransitRouterAttachmentId"].isNull())
			transitRouterMulticastAssociationsObject.transitRouterAttachmentId = valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["VSwitchId"].isNull())
			transitRouterMulticastAssociationsObject.vSwitchId = valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["VSwitchId"].asString();
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["Status"].isNull())
			transitRouterMulticastAssociationsObject.status = valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["Status"].asString();
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["ResourceType"].isNull())
			transitRouterMulticastAssociationsObject.resourceType = valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["ResourceType"].asString();
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["ResourceOwnerId"].isNull())
			transitRouterMulticastAssociationsObject.resourceOwnerId = std::stol(valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["ResourceOwnerId"].asString());
		if(!valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["ResourceId"].isNull())
			transitRouterMulticastAssociationsObject.resourceId = valueTransitRouterMulticastAssociationsTransitRouterMulticastAssociation["ResourceId"].asString();
		transitRouterMulticastAssociations_.push_back(transitRouterMulticastAssociationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListTransitRouterMulticastDomainAssociationsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTransitRouterMulticastDomainAssociationsResult::TransitRouterMulticastAssociation> ListTransitRouterMulticastDomainAssociationsResult::getTransitRouterMulticastAssociations()const
{
	return transitRouterMulticastAssociations_;
}

std::string ListTransitRouterMulticastDomainAssociationsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterMulticastDomainAssociationsResult::getMaxResults()const
{
	return maxResults_;
}

