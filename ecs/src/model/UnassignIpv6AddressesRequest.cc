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

#include <alibabacloud/ecs/model/UnassignIpv6AddressesRequest.h>

using AlibabaCloud::Ecs::Model::UnassignIpv6AddressesRequest;

UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "UnassignIpv6Addresses")
{
	setMethod(HttpRequest::Method::Post);
}

UnassignIpv6AddressesRequest::~UnassignIpv6AddressesRequest()
{}

long UnassignIpv6AddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassignIpv6AddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassignIpv6AddressesRequest::getRegionId()const
{
	return regionId_;
}

void UnassignIpv6AddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassignIpv6AddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassignIpv6AddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassignIpv6AddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassignIpv6AddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnassignIpv6AddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassignIpv6AddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnassignIpv6AddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void UnassignIpv6AddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

std::vector<std::string> UnassignIpv6AddressesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void UnassignIpv6AddressesRequest::setIpv6Address(const std::vector<std::string>& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	for(int dep1 = 0; dep1!= ipv6Address.size(); dep1++) {
		setCoreParameter("Ipv6Address."+ std::to_string(dep1), ipv6Address.at(dep1));
	}
}

