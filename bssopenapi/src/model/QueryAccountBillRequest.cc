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

#include <alibabacloud/bssopenapi/model/QueryAccountBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryAccountBillRequest;

QueryAccountBillRequest::QueryAccountBillRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryAccountBill")
{
	setMethod(HttpRequest::Method::Post);
}

QueryAccountBillRequest::~QueryAccountBillRequest()
{}

std::string QueryAccountBillRequest::getProductCode()const
{
	return productCode_;
}

void QueryAccountBillRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string QueryAccountBillRequest::getBillingCycle()const
{
	return billingCycle_;
}

void QueryAccountBillRequest::setBillingCycle(const std::string& billingCycle)
{
	billingCycle_ = billingCycle;
	setParameter("BillingCycle", billingCycle);
}

int QueryAccountBillRequest::getPageNum()const
{
	return pageNum_;
}

void QueryAccountBillRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long QueryAccountBillRequest::getOwnerID()const
{
	return ownerID_;
}

void QueryAccountBillRequest::setOwnerID(long ownerID)
{
	ownerID_ = ownerID;
	setParameter("OwnerID", std::to_string(ownerID));
}

long QueryAccountBillRequest::getBillOwnerId()const
{
	return billOwnerId_;
}

void QueryAccountBillRequest::setBillOwnerId(long billOwnerId)
{
	billOwnerId_ = billOwnerId;
	setParameter("BillOwnerId", std::to_string(billOwnerId));
}

bool QueryAccountBillRequest::getIsGroupByProduct()const
{
	return isGroupByProduct_;
}

void QueryAccountBillRequest::setIsGroupByProduct(bool isGroupByProduct)
{
	isGroupByProduct_ = isGroupByProduct;
	setParameter("IsGroupByProduct", isGroupByProduct ? "true" : "false");
}

int QueryAccountBillRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAccountBillRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

