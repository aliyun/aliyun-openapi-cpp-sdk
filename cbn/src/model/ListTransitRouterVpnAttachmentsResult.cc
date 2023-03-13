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

#include <alibabacloud/cbn/model/ListTransitRouterVpnAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterVpnAttachmentsResult::ListTransitRouterVpnAttachmentsResult() :
	ServiceResult()
{}

ListTransitRouterVpnAttachmentsResult::ListTransitRouterVpnAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterVpnAttachmentsResult::~ListTransitRouterVpnAttachmentsResult()
{}

void ListTransitRouterVpnAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterAttachmentsNode = value["TransitRouterAttachments"]["TransitRouterAttachment"];
	for (auto valueTransitRouterAttachmentsTransitRouterAttachment : allTransitRouterAttachmentsNode)
	{
		TransitRouterAttachment transitRouterAttachmentsObject;
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["CreationTime"].isNull())
			transitRouterAttachmentsObject.creationTime = valueTransitRouterAttachmentsTransitRouterAttachment["CreationTime"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["Status"].isNull())
			transitRouterAttachmentsObject.status = valueTransitRouterAttachmentsTransitRouterAttachment["Status"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentId"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterId"].isNull())
			transitRouterAttachmentsObject.transitRouterId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["ResourceType"].isNull())
			transitRouterAttachmentsObject.resourceType = valueTransitRouterAttachmentsTransitRouterAttachment["ResourceType"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["VpnOwnerId"].isNull())
			transitRouterAttachmentsObject.vpnOwnerId = std::stol(valueTransitRouterAttachmentsTransitRouterAttachment["VpnOwnerId"].asString());
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["VpnId"].isNull())
			transitRouterAttachmentsObject.vpnId = valueTransitRouterAttachmentsTransitRouterAttachment["VpnId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentDescription = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["VpnRegionId"].isNull())
			transitRouterAttachmentsObject.vpnRegionId = valueTransitRouterAttachmentsTransitRouterAttachment["VpnRegionId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].isNull())
			transitRouterAttachmentsObject.autoPublishRouteEnabled = valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].asString() == "true";
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentName = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["ChargeType"].isNull())
			transitRouterAttachmentsObject.chargeType = valueTransitRouterAttachmentsTransitRouterAttachment["ChargeType"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["CenId"].isNull())
			transitRouterAttachmentsObject.cenId = valueTransitRouterAttachmentsTransitRouterAttachment["CenId"].asString();
		auto allZonesNode = valueTransitRouterAttachmentsTransitRouterAttachment["Zones"]["ZoneMapping"];
		for (auto valueTransitRouterAttachmentsTransitRouterAttachmentZonesZoneMapping : allZonesNode)
		{
			TransitRouterAttachment::ZoneMapping zonesObject;
			if(!valueTransitRouterAttachmentsTransitRouterAttachmentZonesZoneMapping["ZoneId"].isNull())
				zonesObject.zoneId = valueTransitRouterAttachmentsTransitRouterAttachmentZonesZoneMapping["ZoneId"].asString();
			transitRouterAttachmentsObject.zones.push_back(zonesObject);
		}
		auto allTagsNode = valueTransitRouterAttachmentsTransitRouterAttachment["Tags"]["Tag"];
		for (auto valueTransitRouterAttachmentsTransitRouterAttachmentTagsTag : allTagsNode)
		{
			TransitRouterAttachment::Tag tagsObject;
			if(!valueTransitRouterAttachmentsTransitRouterAttachmentTagsTag["Key"].isNull())
				tagsObject.key = valueTransitRouterAttachmentsTransitRouterAttachmentTagsTag["Key"].asString();
			if(!valueTransitRouterAttachmentsTransitRouterAttachmentTagsTag["Value"].isNull())
				tagsObject.value = valueTransitRouterAttachmentsTransitRouterAttachmentTagsTag["Value"].asString();
			transitRouterAttachmentsObject.tags.push_back(tagsObject);
		}
		transitRouterAttachments_.push_back(transitRouterAttachmentsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterVpnAttachmentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterVpnAttachmentsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterVpnAttachmentsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterVpnAttachmentsResult::TransitRouterAttachment> ListTransitRouterVpnAttachmentsResult::getTransitRouterAttachments()const
{
	return transitRouterAttachments_;
}

