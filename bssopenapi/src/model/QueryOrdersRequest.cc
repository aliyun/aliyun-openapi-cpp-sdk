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

#include <alibabacloud/bssopenapi/model/QueryOrdersRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryOrdersRequest;

QueryOrdersRequest::QueryOrdersRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryOrders")
{}

QueryOrdersRequest::~QueryOrdersRequest()
{}

std::string QueryOrdersRequest::getProductCode()const
{
	return productCode_;
}

void QueryOrdersRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string QueryOrdersRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void QueryOrdersRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", subscriptionType);
}

int QueryOrdersRequest::getPageSize()const
{
	return pageSize_;
}

void QueryOrdersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string QueryOrdersRequest::getPaymentStatus()const
{
	return paymentStatus_;
}

void QueryOrdersRequest::setPaymentStatus(const std::string& paymentStatus)
{
	paymentStatus_ = paymentStatus;
	setCoreParameter("PaymentStatus", paymentStatus);
}

std::string QueryOrdersRequest::getCreateTimeStart()const
{
	return createTimeStart_;
}

void QueryOrdersRequest::setCreateTimeStart(const std::string& createTimeStart)
{
	createTimeStart_ = createTimeStart;
	setCoreParameter("CreateTimeStart", createTimeStart);
}

int QueryOrdersRequest::getPageNum()const
{
	return pageNum_;
}

void QueryOrdersRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

long QueryOrdersRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryOrdersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryOrdersRequest::getCreateTimeEnd()const
{
	return createTimeEnd_;
}

void QueryOrdersRequest::setCreateTimeEnd(const std::string& createTimeEnd)
{
	createTimeEnd_ = createTimeEnd;
	setCoreParameter("CreateTimeEnd", createTimeEnd);
}

std::string QueryOrdersRequest::getProductType()const
{
	return productType_;
}

void QueryOrdersRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", productType);
}

std::string QueryOrdersRequest::getOrderType()const
{
	return orderType_;
}

void QueryOrdersRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

