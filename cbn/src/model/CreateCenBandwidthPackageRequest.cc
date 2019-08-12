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

#include <alibabacloud/cbn/model/CreateCenBandwidthPackageRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenBandwidthPackageRequest;

CreateCenBandwidthPackageRequest::CreateCenBandwidthPackageRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateCenBandwidthPackage")
{}

CreateCenBandwidthPackageRequest::~CreateCenBandwidthPackageRequest()
{}

std::string CreateCenBandwidthPackageRequest::getGeographicRegionBId()const
{
	return geographicRegionBId_;
}

void CreateCenBandwidthPackageRequest::setGeographicRegionBId(const std::string& geographicRegionBId)
{
	geographicRegionBId_ = geographicRegionBId;
	setCoreParameter("GeographicRegionBId", geographicRegionBId);
}

long CreateCenBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCenBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int CreateCenBandwidthPackageRequest::getPeriod()const
{
	return period_;
}

void CreateCenBandwidthPackageRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateCenBandwidthPackageRequest::getGeographicRegionAId()const
{
	return geographicRegionAId_;
}

void CreateCenBandwidthPackageRequest::setGeographicRegionAId(const std::string& geographicRegionAId)
{
	geographicRegionAId_ = geographicRegionAId;
	setCoreParameter("GeographicRegionAId", geographicRegionAId);
}

bool CreateCenBandwidthPackageRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateCenBandwidthPackageRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay);
}

std::string CreateCenBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCenBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCenBandwidthPackageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCenBandwidthPackageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

int CreateCenBandwidthPackageRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateCenBandwidthPackageRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string CreateCenBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCenBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateCenBandwidthPackageRequest::getDescription()const
{
	return description_;
}

void CreateCenBandwidthPackageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateCenBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCenBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateCenBandwidthPackageRequest::getBandwidthPackageChargeType()const
{
	return bandwidthPackageChargeType_;
}

void CreateCenBandwidthPackageRequest::setBandwidthPackageChargeType(const std::string& bandwidthPackageChargeType)
{
	bandwidthPackageChargeType_ = bandwidthPackageChargeType;
	setCoreParameter("BandwidthPackageChargeType", bandwidthPackageChargeType);
}

std::string CreateCenBandwidthPackageRequest::getName()const
{
	return name_;
}

void CreateCenBandwidthPackageRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateCenBandwidthPackageRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateCenBandwidthPackageRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

