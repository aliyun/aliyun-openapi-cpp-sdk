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

#include <alibabacloud/cbn/model/CreateTransitRouterPeerAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterPeerAttachmentRequest;

CreateTransitRouterPeerAttachmentRequest::CreateTransitRouterPeerAttachmentRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterPeerAttachment")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterPeerAttachmentRequest::~CreateTransitRouterPeerAttachmentRequest()
{}

long CreateTransitRouterPeerAttachmentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTransitRouterPeerAttachmentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterPeerAttachmentRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTransitRouterPeerAttachmentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateTransitRouterPeerAttachmentRequest::getCenId()const
{
	return cenId_;
}

void CreateTransitRouterPeerAttachmentRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

bool CreateTransitRouterPeerAttachmentRequest::getRouteTableAssociationEnabled()const
{
	return routeTableAssociationEnabled_;
}

void CreateTransitRouterPeerAttachmentRequest::setRouteTableAssociationEnabled(bool routeTableAssociationEnabled)
{
	routeTableAssociationEnabled_ = routeTableAssociationEnabled;
	setParameter("RouteTableAssociationEnabled", routeTableAssociationEnabled ? "true" : "false");
}

std::string CreateTransitRouterPeerAttachmentRequest::getTransitRouterAttachmentName()const
{
	return transitRouterAttachmentName_;
}

void CreateTransitRouterPeerAttachmentRequest::setTransitRouterAttachmentName(const std::string& transitRouterAttachmentName)
{
	transitRouterAttachmentName_ = transitRouterAttachmentName;
	setParameter("TransitRouterAttachmentName", transitRouterAttachmentName);
}

std::string CreateTransitRouterPeerAttachmentRequest::getRegionId()const
{
	return regionId_;
}

void CreateTransitRouterPeerAttachmentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateTransitRouterPeerAttachmentRequest::getAutoPublishRouteEnabled()const
{
	return autoPublishRouteEnabled_;
}

void CreateTransitRouterPeerAttachmentRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled)
{
	autoPublishRouteEnabled_ = autoPublishRouteEnabled;
	setParameter("AutoPublishRouteEnabled", autoPublishRouteEnabled ? "true" : "false");
}

bool CreateTransitRouterPeerAttachmentRequest::getRouteTablePropagationEnabled()const
{
	return routeTablePropagationEnabled_;
}

void CreateTransitRouterPeerAttachmentRequest::setRouteTablePropagationEnabled(bool routeTablePropagationEnabled)
{
	routeTablePropagationEnabled_ = routeTablePropagationEnabled;
	setParameter("RouteTablePropagationEnabled", routeTablePropagationEnabled ? "true" : "false");
}

bool CreateTransitRouterPeerAttachmentRequest::getDryRun()const
{
	return dryRun_;
}

void CreateTransitRouterPeerAttachmentRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateTransitRouterPeerAttachmentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTransitRouterPeerAttachmentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateTransitRouterPeerAttachmentRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateTransitRouterPeerAttachmentRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateTransitRouterPeerAttachmentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTransitRouterPeerAttachmentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateTransitRouterPeerAttachmentRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTransitRouterPeerAttachmentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTransitRouterPeerAttachmentRequest::getTransitRouterId()const
{
	return transitRouterId_;
}

void CreateTransitRouterPeerAttachmentRequest::setTransitRouterId(const std::string& transitRouterId)
{
	transitRouterId_ = transitRouterId;
	setParameter("TransitRouterId", transitRouterId);
}

std::string CreateTransitRouterPeerAttachmentRequest::getResourceType()const
{
	return resourceType_;
}

void CreateTransitRouterPeerAttachmentRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string CreateTransitRouterPeerAttachmentRequest::getTransitRouterAttachmentDescription()const
{
	return transitRouterAttachmentDescription_;
}

void CreateTransitRouterPeerAttachmentRequest::setTransitRouterAttachmentDescription(const std::string& transitRouterAttachmentDescription)
{
	transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
	setParameter("TransitRouterAttachmentDescription", transitRouterAttachmentDescription);
}

std::string CreateTransitRouterPeerAttachmentRequest::getPeerTransitRouterRegionId()const
{
	return peerTransitRouterRegionId_;
}

void CreateTransitRouterPeerAttachmentRequest::setPeerTransitRouterRegionId(const std::string& peerTransitRouterRegionId)
{
	peerTransitRouterRegionId_ = peerTransitRouterRegionId;
	setParameter("PeerTransitRouterRegionId", peerTransitRouterRegionId);
}

std::string CreateTransitRouterPeerAttachmentRequest::getCenBandwidthPackageId()const
{
	return cenBandwidthPackageId_;
}

void CreateTransitRouterPeerAttachmentRequest::setCenBandwidthPackageId(const std::string& cenBandwidthPackageId)
{
	cenBandwidthPackageId_ = cenBandwidthPackageId;
	setParameter("CenBandwidthPackageId", cenBandwidthPackageId);
}

std::string CreateTransitRouterPeerAttachmentRequest::getPeerTransitRouterId()const
{
	return peerTransitRouterId_;
}

void CreateTransitRouterPeerAttachmentRequest::setPeerTransitRouterId(const std::string& peerTransitRouterId)
{
	peerTransitRouterId_ = peerTransitRouterId;
	setParameter("PeerTransitRouterId", peerTransitRouterId);
}

