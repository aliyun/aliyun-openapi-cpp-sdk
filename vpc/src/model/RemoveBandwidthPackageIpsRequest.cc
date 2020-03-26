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

#include <alibabacloud/vpc/model/RemoveBandwidthPackageIpsRequest.h>

using AlibabaCloud::Vpc::Model::RemoveBandwidthPackageIpsRequest;

RemoveBandwidthPackageIpsRequest::RemoveBandwidthPackageIpsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "RemoveBandwidthPackageIps")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveBandwidthPackageIpsRequest::~RemoveBandwidthPackageIpsRequest()
{}

long RemoveBandwidthPackageIpsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveBandwidthPackageIpsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveBandwidthPackageIpsRequest::getClientToken()const
{
	return clientToken_;
}

void RemoveBandwidthPackageIpsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RemoveBandwidthPackageIpsRequest::getRegionId()const
{
	return regionId_;
}

void RemoveBandwidthPackageIpsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> RemoveBandwidthPackageIpsRequest::getRemovedIpAddresses()const
{
	return removedIpAddresses_;
}

void RemoveBandwidthPackageIpsRequest::setRemovedIpAddresses(const std::vector<std::string>& removedIpAddresses)
{
	removedIpAddresses_ = removedIpAddresses;
	for(int dep1 = 0; dep1!= removedIpAddresses.size(); dep1++) {
		setParameter("RemovedIpAddresses."+ std::to_string(dep1), removedIpAddresses.at(dep1));
	}
}

std::string RemoveBandwidthPackageIpsRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void RemoveBandwidthPackageIpsRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string RemoveBandwidthPackageIpsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveBandwidthPackageIpsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RemoveBandwidthPackageIpsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveBandwidthPackageIpsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RemoveBandwidthPackageIpsRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveBandwidthPackageIpsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

