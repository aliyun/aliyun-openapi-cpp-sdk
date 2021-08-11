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

#include <alibabacloud/cbn/model/ListTransitRouterVbrAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterVbrAttachmentsResult::ListTransitRouterVbrAttachmentsResult() :
	ServiceResult()
{}

ListTransitRouterVbrAttachmentsResult::ListTransitRouterVbrAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterVbrAttachmentsResult::~ListTransitRouterVbrAttachmentsResult()
{}

void ListTransitRouterVbrAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterAttachmentsNode = value["TransitRouterAttachments"]["TransitRouterAttachment"];
	for (auto valueTransitRouterAttachmentsTransitRouterAttachment : allTransitRouterAttachmentsNode)
	{
		TransitRouterAttachment transitRouterAttachmentsObject;
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentId"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["VbrRegionId"].isNull())
			transitRouterAttachmentsObject.vbrRegionId = valueTransitRouterAttachmentsTransitRouterAttachment["VbrRegionId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["VbrOwnerId"].isNull())
			transitRouterAttachmentsObject.vbrOwnerId = std::stol(valueTransitRouterAttachmentsTransitRouterAttachment["VbrOwnerId"].asString());
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["VbrId"].isNull())
			transitRouterAttachmentsObject.vbrId = valueTransitRouterAttachmentsTransitRouterAttachment["VbrId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentName = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["ResourceType"].isNull())
			transitRouterAttachmentsObject.resourceType = valueTransitRouterAttachmentsTransitRouterAttachment["ResourceType"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["Status"].isNull())
			transitRouterAttachmentsObject.status = valueTransitRouterAttachmentsTransitRouterAttachment["Status"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentDescription = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["CreationTime"].isNull())
			transitRouterAttachmentsObject.creationTime = valueTransitRouterAttachmentsTransitRouterAttachment["CreationTime"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].isNull())
			transitRouterAttachmentsObject.autoPublishRouteEnabled = valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].asString() == "true";
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterId"].isNull())
			transitRouterAttachmentsObject.transitRouterId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterId"].asString();
		transitRouterAttachments_.push_back(transitRouterAttachmentsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListTransitRouterVbrAttachmentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterVbrAttachmentsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterVbrAttachmentsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterVbrAttachmentsResult::TransitRouterAttachment> ListTransitRouterVbrAttachmentsResult::getTransitRouterAttachments()const
{
	return transitRouterAttachments_;
}

