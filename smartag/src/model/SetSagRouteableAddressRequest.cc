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

#include <alibabacloud/smartag/model/SetSagRouteableAddressRequest.h>

using AlibabaCloud::Smartag::Model::SetSagRouteableAddressRequest;

SetSagRouteableAddressRequest::SetSagRouteableAddressRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "SetSagRouteableAddress")
{}

SetSagRouteableAddressRequest::~SetSagRouteableAddressRequest()
{}

std::string SetSagRouteableAddressRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetSagRouteableAddressRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long SetSagRouteableAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetSagRouteableAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetSagRouteableAddressRequest::getRegionId()const
{
	return regionId_;
}

void SetSagRouteableAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetSagRouteableAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetSagRouteableAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetSagRouteableAddressRequest::getSagId()const
{
	return sagId_;
}

void SetSagRouteableAddressRequest::setSagId(const std::string& sagId)
{
	sagId_ = sagId;
	setCoreParameter("SagId", sagId);
}

std::string SetSagRouteableAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetSagRouteableAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SetSagRouteableAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void SetSagRouteableAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetSagRouteableAddressRequest::getRouteableAddress()const
{
	return routeableAddress_;
}

void SetSagRouteableAddressRequest::setRouteableAddress(const std::string& routeableAddress)
{
	routeableAddress_ = routeableAddress;
	setCoreParameter("RouteableAddress", routeableAddress);
}

