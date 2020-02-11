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

#include <alibabacloud/ecs/model/AssignPrivateIpAddressesRequest.h>

using AlibabaCloud::Ecs::Model::AssignPrivateIpAddressesRequest;

AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AssignPrivateIpAddresses")
{
	setMethod(HttpRequest::Method::Post);
}

AssignPrivateIpAddressesRequest::~AssignPrivateIpAddressesRequest()
{}

long AssignPrivateIpAddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssignPrivateIpAddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int AssignPrivateIpAddressesRequest::getSecondaryPrivateIpAddressCount()const
{
	return secondaryPrivateIpAddressCount_;
}

void AssignPrivateIpAddressesRequest::setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount)
{
	secondaryPrivateIpAddressCount_ = secondaryPrivateIpAddressCount;
	setParameter("SecondaryPrivateIpAddressCount", std::to_string(secondaryPrivateIpAddressCount));
}

std::string AssignPrivateIpAddressesRequest::getRegionId()const
{
	return regionId_;
}

void AssignPrivateIpAddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssignPrivateIpAddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssignPrivateIpAddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssignPrivateIpAddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssignPrivateIpAddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AssignPrivateIpAddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void AssignPrivateIpAddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> AssignPrivateIpAddressesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void AssignPrivateIpAddressesRequest::setPrivateIpAddress(const std::vector<std::string>& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	for(int dep1 = 0; dep1!= privateIpAddress.size(); dep1++) {
		setParameter("PrivateIpAddress."+ std::to_string(dep1), privateIpAddress.at(dep1));
	}
}

std::string AssignPrivateIpAddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void AssignPrivateIpAddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

