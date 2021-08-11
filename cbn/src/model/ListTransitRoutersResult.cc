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

#include <alibabacloud/cbn/model/ListTransitRoutersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRoutersResult::ListTransitRoutersResult() :
	ServiceResult()
{}

ListTransitRoutersResult::ListTransitRoutersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRoutersResult::~ListTransitRoutersResult()
{}

void ListTransitRoutersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRoutersNode = value["TransitRouters"]["TransitRouter"];
	for (auto valueTransitRoutersTransitRouter : allTransitRoutersNode)
	{
		TransitRouter transitRoutersObject;
		if(!valueTransitRoutersTransitRouter["TransitRouterId"].isNull())
			transitRoutersObject.transitRouterId = valueTransitRoutersTransitRouter["TransitRouterId"].asString();
		if(!valueTransitRoutersTransitRouter["Status"].isNull())
			transitRoutersObject.status = valueTransitRoutersTransitRouter["Status"].asString();
		if(!valueTransitRoutersTransitRouter["CenId"].isNull())
			transitRoutersObject.cenId = valueTransitRoutersTransitRouter["CenId"].asString();
		if(!valueTransitRoutersTransitRouter["RegionId"].isNull())
			transitRoutersObject.regionId = valueTransitRoutersTransitRouter["RegionId"].asString();
		if(!valueTransitRoutersTransitRouter["AliUid"].isNull())
			transitRoutersObject.aliUid = std::stol(valueTransitRoutersTransitRouter["AliUid"].asString());
		if(!valueTransitRoutersTransitRouter["Type"].isNull())
			transitRoutersObject.type = valueTransitRoutersTransitRouter["Type"].asString();
		if(!valueTransitRoutersTransitRouter["CreationTime"].isNull())
			transitRoutersObject.creationTime = valueTransitRoutersTransitRouter["CreationTime"].asString();
		if(!valueTransitRoutersTransitRouter["TransitRouterName"].isNull())
			transitRoutersObject.transitRouterName = valueTransitRoutersTransitRouter["TransitRouterName"].asString();
		if(!valueTransitRoutersTransitRouter["TransitRouterDescription"].isNull())
			transitRoutersObject.transitRouterDescription = valueTransitRoutersTransitRouter["TransitRouterDescription"].asString();
		transitRouters_.push_back(transitRoutersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListTransitRoutersResult::getTotalCount()const
{
	return totalCount_;
}

int ListTransitRoutersResult::getPageSize()const
{
	return pageSize_;
}

int ListTransitRoutersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTransitRoutersResult::TransitRouter> ListTransitRoutersResult::getTransitRouters()const
{
	return transitRouters_;
}

