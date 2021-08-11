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

#include <alibabacloud/cbn/model/CreateTransitRouterVbrAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterVbrAttachmentRequest;

CreateTransitRouterVbrAttachmentRequest::CreateTransitRouterVbrAttachmentRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterVbrAttachment")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterVbrAttachmentRequest::~CreateTransitRouterVbrAttachmentRequest()
{}

long CreateTransitRouterVbrAttachmentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTransitRouterVbrAttachmentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterVbrAttachmentRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTransitRouterVbrAttachmentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateTransitRouterVbrAttachmentRequest::getCenId()const
{
	return cenId_;
}

void CreateTransitRouterVbrAttachmentRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

bool CreateTransitRouterVbrAttachmentRequest::getRouteTableAssociationEnabled()const
{
	return routeTableAssociationEnabled_;
}

void CreateTransitRouterVbrAttachmentRequest::setRouteTableAssociationEnabled(bool routeTableAssociationEnabled)
{
	routeTableAssociationEnabled_ = routeTableAssociationEnabled;
	setParameter("RouteTableAssociationEnabled", routeTableAssociationEnabled ? "true" : "false");
}

std::string CreateTransitRouterVbrAttachmentRequest::getVbrId()const
{
	return vbrId_;
}

void CreateTransitRouterVbrAttachmentRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setParameter("VbrId", vbrId);
}

std::string CreateTransitRouterVbrAttachmentRequest::getTransitRouterAttachmentName()const
{
	return transitRouterAttachmentName_;
}

void CreateTransitRouterVbrAttachmentRequest::setTransitRouterAttachmentName(const std::string& transitRouterAttachmentName)
{
	transitRouterAttachmentName_ = transitRouterAttachmentName;
	setParameter("TransitRouterAttachmentName", transitRouterAttachmentName);
}

std::string CreateTransitRouterVbrAttachmentRequest::getRegionId()const
{
	return regionId_;
}

void CreateTransitRouterVbrAttachmentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateTransitRouterVbrAttachmentRequest::getAutoPublishRouteEnabled()const
{
	return autoPublishRouteEnabled_;
}

void CreateTransitRouterVbrAttachmentRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled)
{
	autoPublishRouteEnabled_ = autoPublishRouteEnabled;
	setParameter("AutoPublishRouteEnabled", autoPublishRouteEnabled ? "true" : "false");
}

bool CreateTransitRouterVbrAttachmentRequest::getRouteTablePropagationEnabled()const
{
	return routeTablePropagationEnabled_;
}

void CreateTransitRouterVbrAttachmentRequest::setRouteTablePropagationEnabled(bool routeTablePropagationEnabled)
{
	routeTablePropagationEnabled_ = routeTablePropagationEnabled;
	setParameter("RouteTablePropagationEnabled", routeTablePropagationEnabled ? "true" : "false");
}

bool CreateTransitRouterVbrAttachmentRequest::getDryRun()const
{
	return dryRun_;
}

void CreateTransitRouterVbrAttachmentRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateTransitRouterVbrAttachmentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTransitRouterVbrAttachmentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateTransitRouterVbrAttachmentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTransitRouterVbrAttachmentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateTransitRouterVbrAttachmentRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTransitRouterVbrAttachmentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTransitRouterVbrAttachmentRequest::getTransitRouterId()const
{
	return transitRouterId_;
}

void CreateTransitRouterVbrAttachmentRequest::setTransitRouterId(const std::string& transitRouterId)
{
	transitRouterId_ = transitRouterId;
	setParameter("TransitRouterId", transitRouterId);
}

std::string CreateTransitRouterVbrAttachmentRequest::getResourceType()const
{
	return resourceType_;
}

void CreateTransitRouterVbrAttachmentRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string CreateTransitRouterVbrAttachmentRequest::getTransitRouterAttachmentDescription()const
{
	return transitRouterAttachmentDescription_;
}

void CreateTransitRouterVbrAttachmentRequest::setTransitRouterAttachmentDescription(const std::string& transitRouterAttachmentDescription)
{
	transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
	setParameter("TransitRouterAttachmentDescription", transitRouterAttachmentDescription);
}

long CreateTransitRouterVbrAttachmentRequest::getVbrOwnerId()const
{
	return vbrOwnerId_;
}

void CreateTransitRouterVbrAttachmentRequest::setVbrOwnerId(long vbrOwnerId)
{
	vbrOwnerId_ = vbrOwnerId;
	setParameter("VbrOwnerId", std::to_string(vbrOwnerId));
}

