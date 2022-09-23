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

#include <alibabacloud/cbn/model/ListTransitRouterPrefixListAssociationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterPrefixListAssociationResult::ListTransitRouterPrefixListAssociationResult() :
	ServiceResult()
{}

ListTransitRouterPrefixListAssociationResult::ListTransitRouterPrefixListAssociationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterPrefixListAssociationResult::~ListTransitRouterPrefixListAssociationResult()
{}

void ListTransitRouterPrefixListAssociationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrefixListsNode = value["PrefixLists"]["PrefixList"];
	for (auto valuePrefixListsPrefixList : allPrefixListsNode)
	{
		PrefixList prefixListsObject;
		if(!valuePrefixListsPrefixList["PrefixListId"].isNull())
			prefixListsObject.prefixListId = valuePrefixListsPrefixList["PrefixListId"].asString();
		if(!valuePrefixListsPrefixList["OwnerUid"].isNull())
			prefixListsObject.ownerUid = std::stol(valuePrefixListsPrefixList["OwnerUid"].asString());
		if(!valuePrefixListsPrefixList["Status"].isNull())
			prefixListsObject.status = valuePrefixListsPrefixList["Status"].asString();
		if(!valuePrefixListsPrefixList["NextHop"].isNull())
			prefixListsObject.nextHop = valuePrefixListsPrefixList["NextHop"].asString();
		if(!valuePrefixListsPrefixList["NextHopInstanceId"].isNull())
			prefixListsObject.nextHopInstanceId = valuePrefixListsPrefixList["NextHopInstanceId"].asString();
		if(!valuePrefixListsPrefixList["NextHopType"].isNull())
			prefixListsObject.nextHopType = valuePrefixListsPrefixList["NextHopType"].asString();
		if(!valuePrefixListsPrefixList["TransitRouterTableId"].isNull())
			prefixListsObject.transitRouterTableId = valuePrefixListsPrefixList["TransitRouterTableId"].asString();
		if(!valuePrefixListsPrefixList["TransitRouterId"].isNull())
			prefixListsObject.transitRouterId = valuePrefixListsPrefixList["TransitRouterId"].asString();
		prefixLists_.push_back(prefixListsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListTransitRouterPrefixListAssociationResult::getTotalCount()const
{
	return totalCount_;
}

int ListTransitRouterPrefixListAssociationResult::getPageSize()const
{
	return pageSize_;
}

int ListTransitRouterPrefixListAssociationResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTransitRouterPrefixListAssociationResult::PrefixList> ListTransitRouterPrefixListAssociationResult::getPrefixLists()const
{
	return prefixLists_;
}

