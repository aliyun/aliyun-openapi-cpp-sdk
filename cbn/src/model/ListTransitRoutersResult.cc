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
		if(!valueTransitRoutersTransitRouter["CreationTime"].isNull())
			transitRoutersObject.creationTime = valueTransitRoutersTransitRouter["CreationTime"].asString();
		if(!valueTransitRoutersTransitRouter["Type"].isNull())
			transitRoutersObject.type = valueTransitRoutersTransitRouter["Type"].asString();
		if(!valueTransitRoutersTransitRouter["Status"].isNull())
			transitRoutersObject.status = valueTransitRoutersTransitRouter["Status"].asString();
		if(!valueTransitRoutersTransitRouter["TransitRouterId"].isNull())
			transitRoutersObject.transitRouterId = valueTransitRoutersTransitRouter["TransitRouterId"].asString();
		if(!valueTransitRoutersTransitRouter["TransitRouterDescription"].isNull())
			transitRoutersObject.transitRouterDescription = valueTransitRoutersTransitRouter["TransitRouterDescription"].asString();
		if(!valueTransitRoutersTransitRouter["TransitRouterName"].isNull())
			transitRoutersObject.transitRouterName = valueTransitRoutersTransitRouter["TransitRouterName"].asString();
		if(!valueTransitRoutersTransitRouter["CenId"].isNull())
			transitRoutersObject.cenId = valueTransitRoutersTransitRouter["CenId"].asString();
		if(!valueTransitRoutersTransitRouter["AliUid"].isNull())
			transitRoutersObject.aliUid = std::stol(valueTransitRoutersTransitRouter["AliUid"].asString());
		if(!valueTransitRoutersTransitRouter["RegionId"].isNull())
			transitRoutersObject.regionId = valueTransitRoutersTransitRouter["RegionId"].asString();
		if(!valueTransitRoutersTransitRouter["ServiceMode"].isNull())
			transitRoutersObject.serviceMode = valueTransitRoutersTransitRouter["ServiceMode"].asString();
		if(!valueTransitRoutersTransitRouter["SupportMulticast"].isNull())
			transitRoutersObject.supportMulticast = valueTransitRoutersTransitRouter["SupportMulticast"].asString() == "true";
		auto allTransitRouterCidrListNode = valueTransitRoutersTransitRouter["TransitRouterCidrList"]["TransitRouterCidrListItem"];
		for (auto valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem : allTransitRouterCidrListNode)
		{
			TransitRouter::TransitRouterCidrListItem transitRouterCidrListObject;
			if(!valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["Cidr"].isNull())
				transitRouterCidrListObject.cidr = valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["Cidr"].asString();
			if(!valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["Name"].isNull())
				transitRouterCidrListObject.name = valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["Name"].asString();
			if(!valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["Description"].isNull())
				transitRouterCidrListObject.description = valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["Description"].asString();
			if(!valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["TransitRouterCidrId"].isNull())
				transitRouterCidrListObject.transitRouterCidrId = valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["TransitRouterCidrId"].asString();
			if(!valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["PublishCidrRoute"].isNull())
				transitRouterCidrListObject.publishCidrRoute = valueTransitRoutersTransitRouterTransitRouterCidrListTransitRouterCidrListItem["PublishCidrRoute"].asString() == "true";
			transitRoutersObject.transitRouterCidrList.push_back(transitRouterCidrListObject);
		}
		auto allTagsNode = valueTransitRoutersTransitRouter["Tags"]["Tag"];
		for (auto valueTransitRoutersTransitRouterTagsTag : allTagsNode)
		{
			TransitRouter::Tag tagsObject;
			if(!valueTransitRoutersTransitRouterTagsTag["Key"].isNull())
				tagsObject.key = valueTransitRoutersTransitRouterTagsTag["Key"].asString();
			if(!valueTransitRoutersTransitRouterTagsTag["Value"].isNull())
				tagsObject.value = valueTransitRoutersTransitRouterTagsTag["Value"].asString();
			transitRoutersObject.tags.push_back(tagsObject);
		}
		auto allTransitRouterPrimaryStandbyZoneInfoListNode = valueTransitRoutersTransitRouter["TransitRouterPrimaryStandbyZoneInfoList"]["TransitRouterPrimaryStandbyZoneInfoListItem"];
		for (auto valueTransitRoutersTransitRouterTransitRouterPrimaryStandbyZoneInfoListTransitRouterPrimaryStandbyZoneInfoListItem : allTransitRouterPrimaryStandbyZoneInfoListNode)
		{
			TransitRouter::TransitRouterPrimaryStandbyZoneInfoListItem transitRouterPrimaryStandbyZoneInfoListObject;
			if(!valueTransitRoutersTransitRouterTransitRouterPrimaryStandbyZoneInfoListTransitRouterPrimaryStandbyZoneInfoListItem["ZoneId"].isNull())
				transitRouterPrimaryStandbyZoneInfoListObject.zoneId = valueTransitRoutersTransitRouterTransitRouterPrimaryStandbyZoneInfoListTransitRouterPrimaryStandbyZoneInfoListItem["ZoneId"].asString();
			if(!valueTransitRoutersTransitRouterTransitRouterPrimaryStandbyZoneInfoListTransitRouterPrimaryStandbyZoneInfoListItem["Role"].isNull())
				transitRouterPrimaryStandbyZoneInfoListObject.role = valueTransitRoutersTransitRouterTransitRouterPrimaryStandbyZoneInfoListTransitRouterPrimaryStandbyZoneInfoListItem["Role"].asString();
			transitRoutersObject.transitRouterPrimaryStandbyZoneInfoList.push_back(transitRouterPrimaryStandbyZoneInfoListObject);
		}
		transitRouters_.push_back(transitRoutersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

