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

#include <alibabacloud/vpc/model/DeleteIpv6InternetBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv6InternetBandwidthRequest;

DeleteIpv6InternetBandwidthRequest::DeleteIpv6InternetBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv6InternetBandwidth")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteIpv6InternetBandwidthRequest::~DeleteIpv6InternetBandwidthRequest()
{}

long DeleteIpv6InternetBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIpv6InternetBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteIpv6InternetBandwidthRequest::getIpv6InternetBandwidthId()const
{
	return ipv6InternetBandwidthId_;
}

void DeleteIpv6InternetBandwidthRequest::setIpv6InternetBandwidthId(const std::string& ipv6InternetBandwidthId)
{
	ipv6InternetBandwidthId_ = ipv6InternetBandwidthId;
	setCoreParameter("Ipv6InternetBandwidthId", ipv6InternetBandwidthId);
}

std::string DeleteIpv6InternetBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void DeleteIpv6InternetBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteIpv6InternetBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteIpv6InternetBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteIpv6InternetBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteIpv6InternetBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteIpv6InternetBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteIpv6InternetBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteIpv6InternetBandwidthRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void DeleteIpv6InternetBandwidthRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setCoreParameter("Ipv6AddressId", ipv6AddressId);
}

