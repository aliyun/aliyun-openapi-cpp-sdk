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

#include <alibabacloud/resourcesharing/model/AcceptResourceShareInvitationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

AcceptResourceShareInvitationResult::AcceptResourceShareInvitationResult() :
	ServiceResult()
{}

AcceptResourceShareInvitationResult::AcceptResourceShareInvitationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AcceptResourceShareInvitationResult::~AcceptResourceShareInvitationResult()
{}

void AcceptResourceShareInvitationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceShareInvitationNode = value["ResourceShareInvitation"];
	if(!resourceShareInvitationNode["ResourceShareInvitationId"].isNull())
		resourceShareInvitation_.resourceShareInvitationId = resourceShareInvitationNode["ResourceShareInvitationId"].asString();
	if(!resourceShareInvitationNode["ResourceShareId"].isNull())
		resourceShareInvitation_.resourceShareId = resourceShareInvitationNode["ResourceShareId"].asString();
	if(!resourceShareInvitationNode["ResourceShareName"].isNull())
		resourceShareInvitation_.resourceShareName = resourceShareInvitationNode["ResourceShareName"].asString();
	if(!resourceShareInvitationNode["SenderAccountId"].isNull())
		resourceShareInvitation_.senderAccountId = resourceShareInvitationNode["SenderAccountId"].asString();
	if(!resourceShareInvitationNode["ReceiverAccountId"].isNull())
		resourceShareInvitation_.receiverAccountId = resourceShareInvitationNode["ReceiverAccountId"].asString();
	if(!resourceShareInvitationNode["CreateTime"].isNull())
		resourceShareInvitation_.createTime = resourceShareInvitationNode["CreateTime"].asString();
	if(!resourceShareInvitationNode["Status"].isNull())
		resourceShareInvitation_.status = resourceShareInvitationNode["Status"].asString();
	auto allAcceptInvitationFailedDetailsNode = resourceShareInvitationNode["AcceptInvitationFailedDetails"]["AcceptInvitationFailedDetail"];
	for (auto resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail : allAcceptInvitationFailedDetailsNode)
	{
		ResourceShareInvitation::AcceptInvitationFailedDetail acceptInvitationFailedDetailObject;
		if(!resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["Status"].isNull())
			acceptInvitationFailedDetailObject.status = resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["Status"].asString();
		if(!resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["StatusMessage"].isNull())
			acceptInvitationFailedDetailObject.statusMessage = resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["StatusMessage"].asString();
		if(!resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["AssociateType"].isNull())
			acceptInvitationFailedDetailObject.associateType = resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["AssociateType"].asString();
		if(!resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["ResourceId"].isNull())
			acceptInvitationFailedDetailObject.resourceId = resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["ResourceId"].asString();
		if(!resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["ResourceType"].isNull())
			acceptInvitationFailedDetailObject.resourceType = resourceShareInvitationNodeAcceptInvitationFailedDetailsAcceptInvitationFailedDetail["ResourceType"].asString();
		resourceShareInvitation_.acceptInvitationFailedDetails.push_back(acceptInvitationFailedDetailObject);
	}

}

AcceptResourceShareInvitationResult::ResourceShareInvitation AcceptResourceShareInvitationResult::getResourceShareInvitation()const
{
	return resourceShareInvitation_;
}

