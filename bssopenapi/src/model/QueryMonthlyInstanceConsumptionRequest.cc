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

#include <alibabacloud/bssopenapi/model/QueryMonthlyInstanceConsumptionRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryMonthlyInstanceConsumptionRequest;

QueryMonthlyInstanceConsumptionRequest::QueryMonthlyInstanceConsumptionRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryMonthlyInstanceConsumption")
{}

QueryMonthlyInstanceConsumptionRequest::~QueryMonthlyInstanceConsumptionRequest()
{}

std::string QueryMonthlyInstanceConsumptionRequest::getProductCode()const
{
	return productCode_;
}

void QueryMonthlyInstanceConsumptionRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", std::to_string(productCode));
}

std::string QueryMonthlyInstanceConsumptionRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void QueryMonthlyInstanceConsumptionRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", std::to_string(subscriptionType));
}

int QueryMonthlyInstanceConsumptionRequest::getPageSize()const
{
	return pageSize_;
}

void QueryMonthlyInstanceConsumptionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryMonthlyInstanceConsumptionRequest::getBillingCycle()const
{
	return billingCycle_;
}

void QueryMonthlyInstanceConsumptionRequest::setBillingCycle(const std::string& billingCycle)
{
	billingCycle_ = billingCycle;
	setCoreParameter("BillingCycle", std::to_string(billingCycle));
}

long QueryMonthlyInstanceConsumptionRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMonthlyInstanceConsumptionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int QueryMonthlyInstanceConsumptionRequest::getPageNum()const
{
	return pageNum_;
}

void QueryMonthlyInstanceConsumptionRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryMonthlyInstanceConsumptionRequest::getProductType()const
{
	return productType_;
}

void QueryMonthlyInstanceConsumptionRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", std::to_string(productType));
}

