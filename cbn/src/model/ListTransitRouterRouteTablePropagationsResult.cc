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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTablePropagationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterRouteTablePropagationsResult::ListTransitRouterRouteTablePropagationsResult() :
	ServiceResult()
{}

ListTransitRouterRouteTablePropagationsResult::ListTransitRouterRouteTablePropagationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterRouteTablePropagationsResult::~ListTransitRouterRouteTablePropagationsResult()
{}

void ListTransitRouterRouteTablePropagationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterPropagationsNode = value["TransitRouterPropagations"]["TransitRouterPropagation"];
	for (auto valueTransitRouterPropagationsTransitRouterPropagation : allTransitRouterPropagationsNode)
	{
		TransitRouterPropagation transitRouterPropagationsObject;
		if(!valueTransitRouterPropagationsTransitRouterPropagation["TransitRouterAttachmentId"].isNull())
			transitRouterPropagationsObject.transitRouterAttachmentId = valueTransitRouterPropagationsTransitRouterPropagation["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterPropagationsTransitRouterPropagation["Status"].isNull())
			transitRouterPropagationsObject.status = valueTransitRouterPropagationsTransitRouterPropagation["Status"].asString();
		if(!valueTransitRouterPropagationsTransitRouterPropagation["ResourceType"].isNull())
			transitRouterPropagationsObject.resourceType = valueTransitRouterPropagationsTransitRouterPropagation["ResourceType"].asString();
		if(!valueTransitRouterPropagationsTransitRouterPropagation["ResourceId"].isNull())
			transitRouterPropagationsObject.resourceId = valueTransitRouterPropagationsTransitRouterPropagation["ResourceId"].asString();
		if(!valueTransitRouterPropagationsTransitRouterPropagation["TransitRouterRouteTableId"].isNull())
			transitRouterPropagationsObject.transitRouterRouteTableId = valueTransitRouterPropagationsTransitRouterPropagation["TransitRouterRouteTableId"].asString();
		transitRouterPropagations_.push_back(transitRouterPropagationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterRouteTablePropagationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterRouteTablePropagationsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterRouteTablePropagationsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterRouteTablePropagationsResult::TransitRouterPropagation> ListTransitRouterRouteTablePropagationsResult::getTransitRouterPropagations()const
{
	return transitRouterPropagations_;
}

