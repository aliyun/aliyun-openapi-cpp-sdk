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

#include <alibabacloud/vpc/model/CancelCommonBandwidthPackageIpBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::CancelCommonBandwidthPackageIpBandwidthRequest;

CancelCommonBandwidthPackageIpBandwidthRequest::CancelCommonBandwidthPackageIpBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CancelCommonBandwidthPackageIpBandwidth")
{}

CancelCommonBandwidthPackageIpBandwidthRequest::~CancelCommonBandwidthPackageIpBandwidthRequest()
{}

long CancelCommonBandwidthPackageIpBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CancelCommonBandwidthPackageIpBandwidthRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string CancelCommonBandwidthPackageIpBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelCommonBandwidthPackageIpBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CancelCommonBandwidthPackageIpBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CancelCommonBandwidthPackageIpBandwidthRequest::getEipId()const
{
	return eipId_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setEipId(const std::string& eipId)
{
	eipId_ = eipId;
	setCoreParameter("EipId", eipId);
}

long CancelCommonBandwidthPackageIpBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelCommonBandwidthPackageIpBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

