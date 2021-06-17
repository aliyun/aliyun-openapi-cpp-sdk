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

#include <alibabacloud/ga/model/UpdateAcceleratorRequest.h>

using AlibabaCloud::Ga::Model::UpdateAcceleratorRequest;

UpdateAcceleratorRequest::UpdateAcceleratorRequest() :
	RpcServiceRequest("ga", "2019-11-20", "UpdateAccelerator")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAcceleratorRequest::~UpdateAcceleratorRequest()
{}

bool UpdateAcceleratorRequest::getAutoPay()const
{
	return autoPay_;
}

void UpdateAcceleratorRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string UpdateAcceleratorRequest::getPromotionOptionNo()const
{
	return promotionOptionNo_;
}

void UpdateAcceleratorRequest::setPromotionOptionNo(const std::string& promotionOptionNo)
{
	promotionOptionNo_ = promotionOptionNo;
	setParameter("PromotionOptionNo", promotionOptionNo);
}

std::string UpdateAcceleratorRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAcceleratorRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateAcceleratorRequest::getDescription()const
{
	return description_;
}

void UpdateAcceleratorRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool UpdateAcceleratorRequest::getAutoUseCoupon()const
{
	return autoUseCoupon_;
}

void UpdateAcceleratorRequest::setAutoUseCoupon(bool autoUseCoupon)
{
	autoUseCoupon_ = autoUseCoupon;
	setParameter("AutoUseCoupon", autoUseCoupon ? "true" : "false");
}

std::string UpdateAcceleratorRequest::getSpec()const
{
	return spec_;
}

void UpdateAcceleratorRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

std::string UpdateAcceleratorRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAcceleratorRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateAcceleratorRequest::getName()const
{
	return name_;
}

void UpdateAcceleratorRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateAcceleratorRequest::getAcceleratorId()const
{
	return acceleratorId_;
}

void UpdateAcceleratorRequest::setAcceleratorId(const std::string& acceleratorId)
{
	acceleratorId_ = acceleratorId;
	setParameter("AcceleratorId", acceleratorId);
}

