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

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyCommonBandwidthPackagePayTypeRequest::ModifyCommonBandwidthPackagePayTypeRequest() :
	VpcRequest("ModifyCommonBandwidthPackagePayType")
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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

bool ModifyCommonBandwidthPackagePayTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", std::to_string(autoPay));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyCommonBandwidthPackagePayTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ModifyCommonBandwidthPackagePayTypeRequest::getDuration()const
{
	return duration_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getKbpsBandwidth()const
{
	return kbpsBandwidth_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setKbpsBandwidth(const std::string& kbpsBandwidth)
{
	kbpsBandwidth_ = kbpsBandwidth;
	setParameter("KbpsBandwidth", kbpsBandwidth);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long ModifyCommonBandwidthPackagePayTypeRequest::getResourceUid()const
{
	return resourceUid_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceUid(long resourceUid)
{
	resourceUid_ = resourceUid;
	setParameter("ResourceUid", std::to_string(resourceUid));
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getResourceBid()const
{
	return resourceBid_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setResourceBid(const std::string& resourceBid)
{
	resourceBid_ = resourceBid;
	setParameter("ResourceBid", resourceBid);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getPayType()const
{
	return payType_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string ModifyCommonBandwidthPackagePayTypeRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void ModifyCommonBandwidthPackagePayTypeRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

