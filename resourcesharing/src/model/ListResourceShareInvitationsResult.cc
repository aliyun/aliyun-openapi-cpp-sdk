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

#include <alibabacloud/resourcesharing/model/ListResourceShareInvitationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

ListResourceShareInvitationsResult::ListResourceShareInvitationsResult() :
	ServiceResult()
{}

ListResourceShareInvitationsResult::ListResourceShareInvitationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceShareInvitationsResult::~ListResourceShareInvitationsResult()
{}

void ListResourceShareInvitationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceShareInvitationsNode = value["ResourceShareInvitations"]["ResourceShareInvitation"];
	for (auto valueResourceShareInvitationsResourceShareInvitation : allResourceShareInvitationsNode)
	{
		ResourceShareInvitation resourceShareInvitationsObject;
		if(!valueResourceShareInvitationsResourceShareInvitation["Status"].isNull())
			resourceShareInvitationsObject.status = valueResourceShareInvitationsResourceShareInvitation["Status"].asString();
		if(!valueResourceShareInvitationsResourceShareInvitation["CreateTime"].isNull())
			resourceShareInvitationsObject.createTime = valueResourceShareInvitationsResourceShareInvitation["CreateTime"].asString();
		if(!valueResourceShareInvitationsResourceShareInvitation["ResourceShareId"].isNull())
			resourceShareInvitationsObject.resourceShareId = valueResourceShareInvitationsResourceShareInvitation["ResourceShareId"].asString();
		if(!valueResourceShareInvitationsResourceShareInvitation["ResourceShareName"].isNull())
			resourceShareInvitationsObject.resourceShareName = valueResourceShareInvitationsResourceShareInvitation["ResourceShareName"].asString();
		if(!valueResourceShareInvitationsResourceShareInvitation["SenderAccountId"].isNull())
			resourceShareInvitationsObject.senderAccountId = valueResourceShareInvitationsResourceShareInvitation["SenderAccountId"].asString();
		if(!valueResourceShareInvitationsResourceShareInvitation["ReceiverAccountId"].isNull())
			resourceShareInvitationsObject.receiverAccountId = valueResourceShareInvitationsResourceShareInvitation["ReceiverAccountId"].asString();
		if(!valueResourceShareInvitationsResourceShareInvitation["ResourceShareInvitationId"].isNull())
			resourceShareInvitationsObject.resourceShareInvitationId = valueResourceShareInvitationsResourceShareInvitation["ResourceShareInvitationId"].asString();
		auto allInvitationFailedDetailsNode = valueResourceShareInvitationsResourceShareInvitation["InvitationFailedDetails"]["InvitationFailedDetail"];
		for (auto valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail : allInvitationFailedDetailsNode)
		{
			ResourceShareInvitation::InvitationFailedDetail invitationFailedDetailsObject;
			if(!valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["Status"].isNull())
				invitationFailedDetailsObject.status = valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["Status"].asString();
			if(!valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["StatusMessage"].isNull())
				invitationFailedDetailsObject.statusMessage = valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["StatusMessage"].asString();
			if(!valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["AssociateType"].isNull())
				invitationFailedDetailsObject.associateType = valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["AssociateType"].asString();
			if(!valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["ResourceId"].isNull())
				invitationFailedDetailsObject.resourceId = valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["ResourceId"].asString();
			if(!valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["ResourceType"].isNull())
				invitationFailedDetailsObject.resourceType = valueResourceShareInvitationsResourceShareInvitationInvitationFailedDetailsInvitationFailedDetail["ResourceType"].asString();
			resourceShareInvitationsObject.invitationFailedDetails.push_back(invitationFailedDetailsObject);
		}
		resourceShareInvitations_.push_back(resourceShareInvitationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListResourceShareInvitationsResult::ResourceShareInvitation> ListResourceShareInvitationsResult::getResourceShareInvitations()const
{
	return resourceShareInvitations_;
}

std::string ListResourceShareInvitationsResult::getNextToken()const
{
	return nextToken_;
}

