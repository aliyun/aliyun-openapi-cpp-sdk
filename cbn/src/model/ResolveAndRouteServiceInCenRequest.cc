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

#include <alibabacloud/cbn/model/ResolveAndRouteServiceInCenRequest.h>

using AlibabaCloud::Cbn::Model::ResolveAndRouteServiceInCenRequest;

ResolveAndRouteServiceInCenRequest::ResolveAndRouteServiceInCenRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ResolveAndRouteServiceInCen")
{}

ResolveAndRouteServiceInCenRequest::~ResolveAndRouteServiceInCenRequest()
{}

long ResolveAndRouteServiceInCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResolveAndRouteServiceInCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ResolveAndRouteServiceInCenRequest::getAccessRegionIds()const
{
	return accessRegionIds_;
}

void ResolveAndRouteServiceInCenRequest::setAccessRegionIds(const std::vector<std::string>& accessRegionIds)
{
	accessRegionIds_ = accessRegionIds;
	for(int i = 0; i!= accessRegionIds.size(); i++)
		setCoreParameter("AccessRegionIds."+ std::to_string(i), accessRegionIds.at(i));
}

std::string ResolveAndRouteServiceInCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResolveAndRouteServiceInCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResolveAndRouteServiceInCenRequest::getClientToken()const
{
	return clientToken_;
}

void ResolveAndRouteServiceInCenRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ResolveAndRouteServiceInCenRequest::getCenId()const
{
	return cenId_;
}

void ResolveAndRouteServiceInCenRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string ResolveAndRouteServiceInCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResolveAndRouteServiceInCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ResolveAndRouteServiceInCenRequest::getHost()const
{
	return host_;
}

void ResolveAndRouteServiceInCenRequest::setHost(const std::string& host)
{
	host_ = host;
	setCoreParameter("Host", host);
}

std::string ResolveAndRouteServiceInCenRequest::getHostRegionId()const
{
	return hostRegionId_;
}

void ResolveAndRouteServiceInCenRequest::setHostRegionId(const std::string& hostRegionId)
{
	hostRegionId_ = hostRegionId;
	setCoreParameter("HostRegionId", hostRegionId);
}

long ResolveAndRouteServiceInCenRequest::getOwnerId()const
{
	return ownerId_;
}

void ResolveAndRouteServiceInCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long ResolveAndRouteServiceInCenRequest::getUpdateInterval()const
{
	return updateInterval_;
}

void ResolveAndRouteServiceInCenRequest::setUpdateInterval(long updateInterval)
{
	updateInterval_ = updateInterval;
	setCoreParameter("UpdateInterval", std::to_string(updateInterval));
}

