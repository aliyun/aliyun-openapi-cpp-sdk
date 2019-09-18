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

#include <alibabacloud/cbn/model/RoutePrivateZoneInCenToVpcRequest.h>

using AlibabaCloud::Cbn::Model::RoutePrivateZoneInCenToVpcRequest;

RoutePrivateZoneInCenToVpcRequest::RoutePrivateZoneInCenToVpcRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "RoutePrivateZoneInCenToVpc")
{}

RoutePrivateZoneInCenToVpcRequest::~RoutePrivateZoneInCenToVpcRequest()
{}

long RoutePrivateZoneInCenToVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RoutePrivateZoneInCenToVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RoutePrivateZoneInCenToVpcRequest::getCenId()const
{
	return cenId_;
}

void RoutePrivateZoneInCenToVpcRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getAccessRegionId()const
{
	return accessRegionId_;
}

void RoutePrivateZoneInCenToVpcRequest::setAccessRegionId(const std::string& accessRegionId)
{
	accessRegionId_ = accessRegionId;
	setCoreParameter("AccessRegionId", accessRegionId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getHostRegionId()const
{
	return hostRegionId_;
}

void RoutePrivateZoneInCenToVpcRequest::setHostRegionId(const std::string& hostRegionId)
{
	hostRegionId_ = hostRegionId;
	setCoreParameter("HostRegionId", hostRegionId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getHostVpcId()const
{
	return hostVpcId_;
}

void RoutePrivateZoneInCenToVpcRequest::setHostVpcId(const std::string& hostVpcId)
{
	hostVpcId_ = hostVpcId;
	setCoreParameter("HostVpcId", hostVpcId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RoutePrivateZoneInCenToVpcRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RoutePrivateZoneInCenToVpcRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RoutePrivateZoneInCenToVpcRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RoutePrivateZoneInCenToVpcRequest::getOwnerId()const
{
	return ownerId_;
}

void RoutePrivateZoneInCenToVpcRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

