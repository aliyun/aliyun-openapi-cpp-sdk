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

#include <alibabacloud/bssopenapi/model/QueryPriceListRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryPriceListRequest;

QueryPriceListRequest::QueryPriceListRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryPriceList")
{}

QueryPriceListRequest::~QueryPriceListRequest()
{}

std::string QueryPriceListRequest::getModuleCode()const
{
	return moduleCode_;
}

void QueryPriceListRequest::setModuleCode(const std::string& moduleCode)
{
	moduleCode_ = moduleCode;
	setParameter("ModuleCode", moduleCode);
}

std::string QueryPriceListRequest::getProductCode()const
{
	return productCode_;
}

void QueryPriceListRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string QueryPriceListRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void QueryPriceListRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setParameter("SubscriptionType", subscriptionType);
}

long QueryPriceListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryPriceListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryPriceListRequest::getProductType()const
{
	return productType_;
}

void QueryPriceListRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

