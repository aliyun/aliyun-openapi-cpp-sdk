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

#include <alibabacloud/cbn/model/DeleteRouteServiceInCenRequest.h>

using AlibabaCloud::Cbn::Model::DeleteRouteServiceInCenRequest;

DeleteRouteServiceInCenRequest::DeleteRouteServiceInCenRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DeleteRouteServiceInCen")
{}

DeleteRouteServiceInCenRequest::~DeleteRouteServiceInCenRequest()
{}

long DeleteRouteServiceInCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRouteServiceInCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteRouteServiceInCenRequest::getCenId()const
{
	return cenId_;
}

void DeleteRouteServiceInCenRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string DeleteRouteServiceInCenRequest::getAccessRegionId()const
{
	return accessRegionId_;
}

void DeleteRouteServiceInCenRequest::setAccessRegionId(const std::string& accessRegionId)
{
	accessRegionId_ = accessRegionId;
	setCoreParameter("AccessRegionId", accessRegionId);
}

std::string DeleteRouteServiceInCenRequest::getHost()const
{
	return host_;
}

void DeleteRouteServiceInCenRequest::setHost(const std::string& host)
{
	host_ = host;
	setCoreParameter("Host", host);
}

std::string DeleteRouteServiceInCenRequest::getHostRegionId()const
{
	return hostRegionId_;
}

void DeleteRouteServiceInCenRequest::setHostRegionId(const std::string& hostRegionId)
{
	hostRegionId_ = hostRegionId;
	setCoreParameter("HostRegionId", hostRegionId);
}

std::string DeleteRouteServiceInCenRequest::getHostVpcId()const
{
	return hostVpcId_;
}

void DeleteRouteServiceInCenRequest::setHostVpcId(const std::string& hostVpcId)
{
	hostVpcId_ = hostVpcId;
	setCoreParameter("HostVpcId", hostVpcId);
}

std::string DeleteRouteServiceInCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRouteServiceInCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRouteServiceInCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRouteServiceInCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteRouteServiceInCenRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRouteServiceInCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

