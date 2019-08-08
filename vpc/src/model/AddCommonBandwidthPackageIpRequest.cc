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

#include <alibabacloud/vpc/model/AddCommonBandwidthPackageIpRequest.h>

using AlibabaCloud::Vpc::Model::AddCommonBandwidthPackageIpRequest;

AddCommonBandwidthPackageIpRequest::AddCommonBandwidthPackageIpRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AddCommonBandwidthPackageIp")
{}

AddCommonBandwidthPackageIpRequest::~AddCommonBandwidthPackageIpRequest()
{}

long AddCommonBandwidthPackageIpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddCommonBandwidthPackageIpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddCommonBandwidthPackageIpRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void AddCommonBandwidthPackageIpRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string AddCommonBandwidthPackageIpRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddCommonBandwidthPackageIpRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddCommonBandwidthPackageIpRequest::getRegionId()const
{
	return regionId_;
}

void AddCommonBandwidthPackageIpRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddCommonBandwidthPackageIpRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddCommonBandwidthPackageIpRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddCommonBandwidthPackageIpRequest::getIpInstanceId()const
{
	return ipInstanceId_;
}

void AddCommonBandwidthPackageIpRequest::setIpInstanceId(const std::string& ipInstanceId)
{
	ipInstanceId_ = ipInstanceId;
	setCoreParameter("IpInstanceId", ipInstanceId);
}

long AddCommonBandwidthPackageIpRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCommonBandwidthPackageIpRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

