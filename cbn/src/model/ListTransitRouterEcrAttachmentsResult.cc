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

#include <alibabacloud/cbn/model/ListTransitRouterEcrAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterEcrAttachmentsResult::ListTransitRouterEcrAttachmentsResult() :
	ServiceResult()
{}

ListTransitRouterEcrAttachmentsResult::ListTransitRouterEcrAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterEcrAttachmentsResult::~ListTransitRouterEcrAttachmentsResult()
{}

void ListTransitRouterEcrAttachmentsResult::parse(const std::string &payload)
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
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterRegionId"].isNull())
			transitRouterAttachmentsObject.transitRouterRegionId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterRegionId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentDescription = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["EcrOwnerId"].isNull())
			transitRouterAttachmentsObject.ecrOwnerId = std::stol(valueTransitRouterAttachmentsTransitRouterAttachment["EcrOwnerId"].asString());
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].isNull())
			transitRouterAttachmentsObject.autoPublishRouteEnabled = valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].asString() == "true";
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["EcrId"].isNull())
			transitRouterAttachmentsObject.ecrId = valueTransitRouterAttachmentsTransitRouterAttachment["EcrId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentName = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["CenId"].isNull())
			transitRouterAttachmentsObject.cenId = valueTransitRouterAttachmentsTransitRouterAttachment["CenId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["OrderType"].isNull())
			transitRouterAttachmentsObject.orderType = valueTransitRouterAttachmentsTransitRouterAttachment["OrderType"].asString();
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

int ListTransitRouterEcrAttachmentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterEcrAttachmentsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterEcrAttachmentsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterEcrAttachmentsResult::TransitRouterAttachment> ListTransitRouterEcrAttachmentsResult::getTransitRouterAttachments()const
{
	return transitRouterAttachments_;
}

