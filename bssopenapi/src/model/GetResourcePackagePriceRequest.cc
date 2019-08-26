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

#include <alibabacloud/bssopenapi/model/GetResourcePackagePriceRequest.h>

using AlibabaCloud::BssOpenApi::Model::GetResourcePackagePriceRequest;

GetResourcePackagePriceRequest::GetResourcePackagePriceRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "GetResourcePackagePrice")
{}

GetResourcePackagePriceRequest::~GetResourcePackagePriceRequest()
{}

int GetResourcePackagePriceRequest::getDuration()const
{
	return duration_;
}

void GetResourcePackagePriceRequest::setDuration(int duration)
{
	duration_ = duration;
	setCoreParameter("Duration", std::to_string(duration));
}

std::string GetResourcePackagePriceRequest::getProductCode()const
{
	return productCode_;
}

void GetResourcePackagePriceRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string GetResourcePackagePriceRequest::getInstanceId()const
{
	return instanceId_;
}

void GetResourcePackagePriceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetResourcePackagePriceRequest::getSpecification()const
{
	return specification_;
}

void GetResourcePackagePriceRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setCoreParameter("Specification", specification);
}

long GetResourcePackagePriceRequest::getOwnerId()const
{
	return ownerId_;
}

void GetResourcePackagePriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetResourcePackagePriceRequest::getPackageType()const
{
	return packageType_;
}

void GetResourcePackagePriceRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setCoreParameter("PackageType", packageType);
}

std::string GetResourcePackagePriceRequest::getEffectiveDate()const
{
	return effectiveDate_;
}

void GetResourcePackagePriceRequest::setEffectiveDate(const std::string& effectiveDate)
{
	effectiveDate_ = effectiveDate;
	setCoreParameter("EffectiveDate", effectiveDate);
}

std::string GetResourcePackagePriceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void GetResourcePackagePriceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

std::string GetResourcePackagePriceRequest::getOrderType()const
{
	return orderType_;
}

void GetResourcePackagePriceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

