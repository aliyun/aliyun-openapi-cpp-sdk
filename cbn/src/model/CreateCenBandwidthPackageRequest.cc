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
{
	setMethod(HttpRequest::Method::Post);
}

CreateCenBandwidthPackageRequest::~CreateCenBandwidthPackageRequest()
{}

long CreateCenBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCenBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCenBandwidthPackageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCenBandwidthPackageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateCenBandwidthPackageRequest::getDescription()const
{
	return description_;
}

void CreateCenBandwidthPackageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateCenBandwidthPackageRequest::getBandwidthPackageChargeType()const
{
	return bandwidthPackageChargeType_;
}

void CreateCenBandwidthPackageRequest::setBandwidthPackageChargeType(const std::string& bandwidthPackageChargeType)
{
	bandwidthPackageChargeType_ = bandwidthPackageChargeType;
	setParameter("BandwidthPackageChargeType", bandwidthPackageChargeType);
}

std::string CreateCenBandwidthPackageRequest::getGeographicRegionBId()const
{
	return geographicRegionBId_;
}

void CreateCenBandwidthPackageRequest::setGeographicRegionBId(const std::string& geographicRegionBId)
{
	geographicRegionBId_ = geographicRegionBId;
	setParameter("GeographicRegionBId", geographicRegionBId);
}

int CreateCenBandwidthPackageRequest::getPeriod()const
{
	return period_;
}

void CreateCenBandwidthPackageRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateCenBandwidthPackageRequest::getGeographicRegionAId()const
{
	return geographicRegionAId_;
}

void CreateCenBandwidthPackageRequest::setGeographicRegionAId(const std::string& geographicRegionAId)
{
	geographicRegionAId_ = geographicRegionAId;
	setParameter("GeographicRegionAId", geographicRegionAId);
}

bool CreateCenBandwidthPackageRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateCenBandwidthPackageRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateCenBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCenBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateCenBandwidthPackageRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateCenBandwidthPackageRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateCenBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCenBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateCenBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCenBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateCenBandwidthPackageRequest::getName()const
{
	return name_;
}

void CreateCenBandwidthPackageRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateCenBandwidthPackageRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateCenBandwidthPackageRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

