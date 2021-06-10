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

#include <alibabacloud/vpc/model/ModifyCommonBandwidthPackageInternetChargeTypeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyCommonBandwidthPackageInternetChargeTypeRequest;

ModifyCommonBandwidthPackageInternetChargeTypeRequest::ModifyCommonBandwidthPackageInternetChargeTypeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyCommonBandwidthPackageInternetChargeType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyCommonBandwidthPackageInternetChargeTypeRequest::~ModifyCommonBandwidthPackageInternetChargeTypeRequest()
{}

long ModifyCommonBandwidthPackageInternetChargeTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyCommonBandwidthPackageInternetChargeTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyCommonBandwidthPackageInternetChargeTypeRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string ModifyCommonBandwidthPackageInternetChargeTypeRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

bool ModifyCommonBandwidthPackageInternetChargeTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyCommonBandwidthPackageInternetChargeTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyCommonBandwidthPackageInternetChargeTypeRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string ModifyCommonBandwidthPackageInternetChargeTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyCommonBandwidthPackageInternetChargeTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyCommonBandwidthPackageInternetChargeTypeRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

int ModifyCommonBandwidthPackageInternetChargeTypeRequest::getRatio()const
{
	return ratio_;
}

void ModifyCommonBandwidthPackageInternetChargeTypeRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", std::to_string(ratio));
}

