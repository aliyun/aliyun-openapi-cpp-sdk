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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTablePropagationsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterRouteTablePropagationsRequest;

ListTransitRouterRouteTablePropagationsRequest::ListTransitRouterRouteTablePropagationsRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterRouteTablePropagations")
{
	setMethod(HttpRequest::Method::Post);
}

ListTransitRouterRouteTablePropagationsRequest::~ListTransitRouterRouteTablePropagationsRequest()
{}

long ListTransitRouterRouteTablePropagationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTransitRouterRouteTablePropagationsRequest::getTransitRouterRouteTableId()const
{
	return transitRouterRouteTableId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterRouteTableId(const std::string& transitRouterRouteTableId)
{
	transitRouterRouteTableId_ = transitRouterRouteTableId;
	setParameter("TransitRouterRouteTableId", transitRouterRouteTableId);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getNextToken()const
{
	return nextToken_;
}

void ListTransitRouterRouteTablePropagationsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTransitRouterRouteTablePropagationsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTransitRouterRouteTablePropagationsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListTransitRouterRouteTablePropagationsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTransitRouterRouteTablePropagationsRequest::getTransitRouterAttachmentId()const
{
	return transitRouterAttachmentId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterAttachmentId(const std::string& transitRouterAttachmentId)
{
	transitRouterAttachmentId_ = transitRouterAttachmentId;
	setParameter("TransitRouterAttachmentId", transitRouterAttachmentId);
}

int ListTransitRouterRouteTablePropagationsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListTransitRouterRouteTablePropagationsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::vector<std::string> ListTransitRouterRouteTablePropagationsRequest::getTransitRouterAttachmentIds()const
{
	return transitRouterAttachmentIds_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterAttachmentIds(const std::vector<std::string>& transitRouterAttachmentIds)
{
	transitRouterAttachmentIds_ = transitRouterAttachmentIds;
	for(int dep1 = 0; dep1!= transitRouterAttachmentIds.size(); dep1++) {
		setParameter("TransitRouterAttachmentIds."+ std::to_string(dep1), transitRouterAttachmentIds.at(dep1));
	}
}

