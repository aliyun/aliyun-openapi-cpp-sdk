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

#include <alibabacloud/cbn/model/ListTransitRouterVpcAttachmentsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterVpcAttachmentsRequest;

ListTransitRouterVpcAttachmentsRequest::ListTransitRouterVpcAttachmentsRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterVpcAttachments")
{
	setMethod(HttpRequest::Method::Post);
}

ListTransitRouterVpcAttachmentsRequest::~ListTransitRouterVpcAttachmentsRequest()
{}

long ListTransitRouterVpcAttachmentsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTransitRouterVpcAttachmentsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTransitRouterVpcAttachmentsRequest::getCenId()const
{
	return cenId_;
}

void ListTransitRouterVpcAttachmentsRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getRegionId()const
{
	return regionId_;
}

void ListTransitRouterVpcAttachmentsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getNextToken()const
{
	return nextToken_;
}

void ListTransitRouterVpcAttachmentsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTransitRouterVpcAttachmentsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTransitRouterVpcAttachmentsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTransitRouterVpcAttachmentsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTransitRouterVpcAttachmentsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListTransitRouterVpcAttachmentsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTransitRouterVpcAttachmentsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTransitRouterVpcAttachmentsRequest::getTransitRouterId()const
{
	return transitRouterId_;
}

void ListTransitRouterVpcAttachmentsRequest::setTransitRouterId(const std::string& transitRouterId)
{
	transitRouterId_ = transitRouterId;
	setParameter("TransitRouterId", transitRouterId);
}

std::string ListTransitRouterVpcAttachmentsRequest::getResourceType()const
{
	return resourceType_;
}

void ListTransitRouterVpcAttachmentsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListTransitRouterVpcAttachmentsRequest::getTransitRouterAttachmentId()const
{
	return transitRouterAttachmentId_;
}

void ListTransitRouterVpcAttachmentsRequest::setTransitRouterAttachmentId(const std::string& transitRouterAttachmentId)
{
	transitRouterAttachmentId_ = transitRouterAttachmentId;
	setParameter("TransitRouterAttachmentId", transitRouterAttachmentId);
}

int ListTransitRouterVpcAttachmentsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListTransitRouterVpcAttachmentsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

