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

#include <alibabacloud/ga/model/CreateAcceleratorRequest.h>

using AlibabaCloud::Ga::Model::CreateAcceleratorRequest;

CreateAcceleratorRequest::CreateAcceleratorRequest() :
	RpcServiceRequest("ga", "2019-11-20", "CreateAccelerator")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAcceleratorRequest::~CreateAcceleratorRequest()
{}

bool CreateAcceleratorRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateAcceleratorRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateAcceleratorRequest::getPromotionOptionNo()const
{
	return promotionOptionNo_;
}

void CreateAcceleratorRequest::setPromotionOptionNo(const std::string& promotionOptionNo)
{
	promotionOptionNo_ = promotionOptionNo;
	setParameter("PromotionOptionNo", promotionOptionNo);
}

std::string CreateAcceleratorRequest::getClientToken()const
{
	return clientToken_;
}

void CreateAcceleratorRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateAcceleratorRequest::getAutoUseCoupon()const
{
	return autoUseCoupon_;
}

void CreateAcceleratorRequest::setAutoUseCoupon(const std::string& autoUseCoupon)
{
	autoUseCoupon_ = autoUseCoupon;
	setParameter("AutoUseCoupon", autoUseCoupon);
}

std::string CreateAcceleratorRequest::getSpec()const
{
	return spec_;
}

void CreateAcceleratorRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

int CreateAcceleratorRequest::getDuration()const
{
	return duration_;
}

void CreateAcceleratorRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string CreateAcceleratorRequest::getRegionId()const
{
	return regionId_;
}

void CreateAcceleratorRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateAcceleratorRequest::getName()const
{
	return name_;
}

void CreateAcceleratorRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateAcceleratorRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateAcceleratorRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

