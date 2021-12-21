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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTableAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterRouteTableAssociationsResult::ListTransitRouterRouteTableAssociationsResult() :
	ServiceResult()
{}

ListTransitRouterRouteTableAssociationsResult::ListTransitRouterRouteTableAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterRouteTableAssociationsResult::~ListTransitRouterRouteTableAssociationsResult()
{}

void ListTransitRouterRouteTableAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterAssociationsNode = value["TransitRouterAssociations"]["TransitRouterAssociation"];
	for (auto valueTransitRouterAssociationsTransitRouterAssociation : allTransitRouterAssociationsNode)
	{
		TransitRouterAssociation transitRouterAssociationsObject;
		if(!valueTransitRouterAssociationsTransitRouterAssociation["TransitRouterAttachmentId"].isNull())
			transitRouterAssociationsObject.transitRouterAttachmentId = valueTransitRouterAssociationsTransitRouterAssociation["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterAssociationsTransitRouterAssociation["Status"].isNull())
			transitRouterAssociationsObject.status = valueTransitRouterAssociationsTransitRouterAssociation["Status"].asString();
		if(!valueTransitRouterAssociationsTransitRouterAssociation["ResourceType"].isNull())
			transitRouterAssociationsObject.resourceType = valueTransitRouterAssociationsTransitRouterAssociation["ResourceType"].asString();
		if(!valueTransitRouterAssociationsTransitRouterAssociation["ResourceId"].isNull())
			transitRouterAssociationsObject.resourceId = valueTransitRouterAssociationsTransitRouterAssociation["ResourceId"].asString();
		if(!valueTransitRouterAssociationsTransitRouterAssociation["TransitRouterRouteTableId"].isNull())
			transitRouterAssociationsObject.transitRouterRouteTableId = valueTransitRouterAssociationsTransitRouterAssociation["TransitRouterRouteTableId"].asString();
		transitRouterAssociations_.push_back(transitRouterAssociationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterRouteTableAssociationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterRouteTableAssociationsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterRouteTableAssociationsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterRouteTableAssociationsResult::TransitRouterAssociation> ListTransitRouterRouteTableAssociationsResult::getTransitRouterAssociations()const
{
	return transitRouterAssociations_;
}

