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

#include <alibabacloud/bssopenapi/model/DescribePricingModuleRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribePricingModuleRequest;

DescribePricingModuleRequest::DescribePricingModuleRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "DescribePricingModule")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePricingModuleRequest::~DescribePricingModuleRequest()
{}

std::string DescribePricingModuleRequest::getProductCode()const
{
	return productCode_;
}

void DescribePricingModuleRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string DescribePricingModuleRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void DescribePricingModuleRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setParameter("SubscriptionType", subscriptionType);
}

long DescribePricingModuleRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePricingModuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePricingModuleRequest::getProductType()const
{
	return productType_;
}

void DescribePricingModuleRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

