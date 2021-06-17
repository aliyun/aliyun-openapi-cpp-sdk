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

#include <alibabacloud/ga/model/CreateBandwidthPackageRequest.h>

using AlibabaCloud::Ga::Model::CreateBandwidthPackageRequest;

CreateBandwidthPackageRequest::CreateBandwidthPackageRequest() :
	RpcServiceRequest("ga", "2019-11-20", "CreateBandwidthPackage")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBandwidthPackageRequest::~CreateBandwidthPackageRequest()
{}

std::string CreateBandwidthPackageRequest::getBandwidthType()const
{
	return bandwidthType_;
}

void CreateBandwidthPackageRequest::setBandwidthType(const std::string& bandwidthType)
{
	bandwidthType_ = bandwidthType;
	setParameter("BandwidthType", bandwidthType);
}

std::string CreateBandwidthPackageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBandwidthPackageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateBandwidthPackageRequest::getAutoUseCoupon()const
{
	return autoUseCoupon_;
}

void CreateBandwidthPackageRequest::setAutoUseCoupon(const std::string& autoUseCoupon)
{
	autoUseCoupon_ = autoUseCoupon;
	setParameter("AutoUseCoupon", autoUseCoupon);
}

std::string CreateBandwidthPackageRequest::getType()const
{
	return type_;
}

void CreateBandwidthPackageRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateBandwidthPackageRequest::getDuration()const
{
	return duration_;
}

void CreateBandwidthPackageRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setParameter("Duration", duration);
}

std::string CreateBandwidthPackageRequest::getRegionId()const
{
	return regionId_;
}

void CreateBandwidthPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateBandwidthPackageRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateBandwidthPackageRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateBandwidthPackageRequest::getPromotionOptionNo()const
{
	return promotionOptionNo_;
}

void CreateBandwidthPackageRequest::setPromotionOptionNo(const std::string& promotionOptionNo)
{
	promotionOptionNo_ = promotionOptionNo;
	setParameter("PromotionOptionNo", promotionOptionNo);
}

int CreateBandwidthPackageRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateBandwidthPackageRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateBandwidthPackageRequest::getCbnGeographicRegionIdB()const
{
	return cbnGeographicRegionIdB_;
}

void CreateBandwidthPackageRequest::setCbnGeographicRegionIdB(const std::string& cbnGeographicRegionIdB)
{
	cbnGeographicRegionIdB_ = cbnGeographicRegionIdB;
	setParameter("CbnGeographicRegionIdB", cbnGeographicRegionIdB);
}

std::string CreateBandwidthPackageRequest::getCbnGeographicRegionIdA()const
{
	return cbnGeographicRegionIdA_;
}

void CreateBandwidthPackageRequest::setCbnGeographicRegionIdA(const std::string& cbnGeographicRegionIdA)
{
	cbnGeographicRegionIdA_ = cbnGeographicRegionIdA;
	setParameter("CbnGeographicRegionIdA", cbnGeographicRegionIdA);
}

std::string CreateBandwidthPackageRequest::getBillingType()const
{
	return billingType_;
}

void CreateBandwidthPackageRequest::setBillingType(const std::string& billingType)
{
	billingType_ = billingType;
	setParameter("BillingType", billingType);
}

std::string CreateBandwidthPackageRequest::getChargeType()const
{
	return chargeType_;
}

void CreateBandwidthPackageRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

std::string CreateBandwidthPackageRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateBandwidthPackageRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

int CreateBandwidthPackageRequest::getRatio()const
{
	return ratio_;
}

void CreateBandwidthPackageRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", std::to_string(ratio));
}

