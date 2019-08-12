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

#include <alibabacloud/cbn/model/DeleteCenRouteMapRequest.h>

using AlibabaCloud::Cbn::Model::DeleteCenRouteMapRequest;

DeleteCenRouteMapRequest::DeleteCenRouteMapRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DeleteCenRouteMap")
{}

DeleteCenRouteMapRequest::~DeleteCenRouteMapRequest()
{}

long DeleteCenRouteMapRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteCenRouteMapRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteCenRouteMapRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteCenRouteMapRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteCenRouteMapRequest::getCenId()const
{
	return cenId_;
}

void DeleteCenRouteMapRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", std::to_string(cenId));
}

std::string DeleteCenRouteMapRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteCenRouteMapRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteCenRouteMapRequest::getCenRegionId()const
{
	return cenRegionId_;
}

void DeleteCenRouteMapRequest::setCenRegionId(const std::string& cenRegionId)
{
	cenRegionId_ = cenRegionId;
	setCoreParameter("CenRegionId", std::to_string(cenRegionId));
}

std::string DeleteCenRouteMapRequest::getRouteMapId()const
{
	return routeMapId_;
}

void DeleteCenRouteMapRequest::setRouteMapId(const std::string& routeMapId)
{
	routeMapId_ = routeMapId;
	setCoreParameter("RouteMapId", std::to_string(routeMapId));
}

long DeleteCenRouteMapRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCenRouteMapRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

