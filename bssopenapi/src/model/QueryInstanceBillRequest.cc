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

#include <alibabacloud/bssopenapi/model/QueryInstanceBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryInstanceBillRequest;

QueryInstanceBillRequest::QueryInstanceBillRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryInstanceBill")
{}

QueryInstanceBillRequest::~QueryInstanceBillRequest()
{}

bool QueryInstanceBillRequest::getIsBillingItem()const
{
	return isBillingItem_;
}

void QueryInstanceBillRequest::setIsBillingItem(bool isBillingItem)
{
	isBillingItem_ = isBillingItem;
	setCoreParameter("IsBillingItem", isBillingItem);
}

std::string QueryInstanceBillRequest::getProductCode()const
{
	return productCode_;
}

void QueryInstanceBillRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

bool QueryInstanceBillRequest::getIsHideZeroCharge()const
{
	return isHideZeroCharge_;
}

void QueryInstanceBillRequest::setIsHideZeroCharge(bool isHideZeroCharge)
{
	isHideZeroCharge_ = isHideZeroCharge;
	setCoreParameter("IsHideZeroCharge", isHideZeroCharge);
}

std::string QueryInstanceBillRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void QueryInstanceBillRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", subscriptionType);
}

int QueryInstanceBillRequest::getPageSize()const
{
	return pageSize_;
}

void QueryInstanceBillRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryInstanceBillRequest::getBillingCycle()const
{
	return billingCycle_;
}

void QueryInstanceBillRequest::setBillingCycle(const std::string& billingCycle)
{
	billingCycle_ = billingCycle;
	setCoreParameter("BillingCycle", billingCycle);
}

long QueryInstanceBillRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryInstanceBillRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int QueryInstanceBillRequest::getPageNum()const
{
	return pageNum_;
}

void QueryInstanceBillRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryInstanceBillRequest::getProductType()const
{
	return productType_;
}

void QueryInstanceBillRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", productType);
}

