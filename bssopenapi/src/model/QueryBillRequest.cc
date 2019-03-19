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

#include <alibabacloud/bssopenapi/model/QueryBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryBillRequest;

QueryBillRequest::QueryBillRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryBill")
{}

QueryBillRequest::~QueryBillRequest()
{}

std::string QueryBillRequest::getProductCode()const
{
	return productCode_;
}

void QueryBillRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

bool QueryBillRequest::getIsHideZeroCharge()const
{
	return isHideZeroCharge_;
}

void QueryBillRequest::setIsHideZeroCharge(bool isHideZeroCharge)
{
	isHideZeroCharge_ = isHideZeroCharge;
	setParameter("IsHideZeroCharge", isHideZeroCharge ? "true" : "false");
}

bool QueryBillRequest::getIsDisplayLocalCurrency()const
{
	return isDisplayLocalCurrency_;
}

void QueryBillRequest::setIsDisplayLocalCurrency(bool isDisplayLocalCurrency)
{
	isDisplayLocalCurrency_ = isDisplayLocalCurrency;
	setParameter("IsDisplayLocalCurrency", isDisplayLocalCurrency ? "true" : "false");
}

std::string QueryBillRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void QueryBillRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setParameter("SubscriptionType", subscriptionType);
}

int QueryBillRequest::getPageSize()const
{
	return pageSize_;
}

void QueryBillRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryBillRequest::getBillingCycle()const
{
	return billingCycle_;
}

void QueryBillRequest::setBillingCycle(const std::string& billingCycle)
{
	billingCycle_ = billingCycle;
	setParameter("BillingCycle", billingCycle);
}

std::string QueryBillRequest::getType()const
{
	return type_;
}

void QueryBillRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long QueryBillRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryBillRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int QueryBillRequest::getPageNum()const
{
	return pageNum_;
}

void QueryBillRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string QueryBillRequest::getProductType()const
{
	return productType_;
}

void QueryBillRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

