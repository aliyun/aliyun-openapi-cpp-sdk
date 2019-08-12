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

#include <alibabacloud/vpc/model/ModifyCommonBandwidthPackagePayTypeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyCommonBandwidthPackagePayTypeRequest;

ModifyCommonBandwidthPackagePayTypeRequest::ModifyCommonBandwidthPackagePayTypeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyCommonBandwidthPackagePayType")
{}

ModifyCommonBandwidthPackagePayTypeRequest::~ModifyCommonBandwidthPackagePayTypeRequest()
{}

long ModifyCommonBandwidthPackagePayTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", std::to_string(bandwidthPackageId));
}

bool ModifyCommonBandwidthPackagePayTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyCommonBandwidthPackagePayTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int ModifyCommonBandwidthPackagePayTypeRequest::getDuration()const
{
	return duration_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setDuration(int duration)
{
	duration_ = duration;
	setCoreParameter("Duration", duration);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getKbpsBandwidth()const
{
	return kbpsBandwidth_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setKbpsBandwidth(const std::string& kbpsBandwidth)
{
	kbpsBandwidth_ = kbpsBandwidth;
	setCoreParameter("KbpsBandwidth", std::to_string(kbpsBandwidth));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

long ModifyCommonBandwidthPackagePayTypeRequest::getResourceUid()const
{
	return resourceUid_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceUid(long resourceUid)
{
	resourceUid_ = resourceUid;
	setCoreParameter("ResourceUid", resourceUid);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getResourceBid()const
{
	return resourceBid_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceBid(const std::string& resourceBid)
{
	resourceBid_ = resourceBid;
	setCoreParameter("ResourceBid", std::to_string(resourceBid));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getPayType()const
{
	return payType_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", std::to_string(pricingCycle));
}

