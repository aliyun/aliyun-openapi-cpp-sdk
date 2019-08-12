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

#include <alibabacloud/bssopenapi/model/CreateResourcePackageRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateResourcePackageRequest;

CreateResourcePackageRequest::CreateResourcePackageRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "CreateResourcePackage")
{}

CreateResourcePackageRequest::~CreateResourcePackageRequest()
{}

int CreateResourcePackageRequest::getDuration()const
{
	return duration_;
}

void CreateResourcePackageRequest::setDuration(int duration)
{
	duration_ = duration;
	setCoreParameter("Duration", std::to_string(duration));
}

std::string CreateResourcePackageRequest::getProductCode()const
{
	return productCode_;
}

void CreateResourcePackageRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string CreateResourcePackageRequest::getSpecification()const
{
	return specification_;
}

void CreateResourcePackageRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setCoreParameter("Specification", specification);
}

long CreateResourcePackageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateResourcePackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateResourcePackageRequest::getPackageType()const
{
	return packageType_;
}

void CreateResourcePackageRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setCoreParameter("PackageType", packageType);
}

std::string CreateResourcePackageRequest::getEffectiveDate()const
{
	return effectiveDate_;
}

void CreateResourcePackageRequest::setEffectiveDate(const std::string& effectiveDate)
{
	effectiveDate_ = effectiveDate;
	setCoreParameter("EffectiveDate", effectiveDate);
}

std::string CreateResourcePackageRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateResourcePackageRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

