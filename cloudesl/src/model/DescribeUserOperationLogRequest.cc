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

#include <alibabacloud/cloudesl/model/DescribeUserOperationLogRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeUserOperationLogRequest;

DescribeUserOperationLogRequest::DescribeUserOperationLogRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "DescribeUserOperationLog")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserOperationLogRequest::~DescribeUserOperationLogRequest()
{}

long DescribeUserOperationLogRequest::getOperateUserId()const
{
	return operateUserId_;
}

void DescribeUserOperationLogRequest::setOperateUserId(long operateUserId)
{
	operateUserId_ = operateUserId;
	setParameter("OperateUserId", std::to_string(operateUserId));
}

std::string DescribeUserOperationLogRequest::getStoreId()const
{
	return storeId_;
}

void DescribeUserOperationLogRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

int DescribeUserOperationLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserOperationLogRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeUserOperationLogRequest::getFromDate()const
{
	return fromDate_;
}

void DescribeUserOperationLogRequest::setFromDate(const std::string& fromDate)
{
	fromDate_ = fromDate;
	setParameter("FromDate", fromDate);
}

long DescribeUserOperationLogRequest::getItemId()const
{
	return itemId_;
}

void DescribeUserOperationLogRequest::setItemId(long itemId)
{
	itemId_ = itemId;
	setParameter("ItemId", std::to_string(itemId));
}

std::string DescribeUserOperationLogRequest::getToDate()const
{
	return toDate_;
}

void DescribeUserOperationLogRequest::setToDate(const std::string& toDate)
{
	toDate_ = toDate;
	setParameter("ToDate", toDate);
}

std::string DescribeUserOperationLogRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DescribeUserOperationLogRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setParameter("EslBarCode", eslBarCode);
}

int DescribeUserOperationLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUserOperationLogRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeUserOperationLogRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void DescribeUserOperationLogRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setParameter("ItemBarCode", itemBarCode);
}

std::string DescribeUserOperationLogRequest::getItemTitle()const
{
	return itemTitle_;
}

void DescribeUserOperationLogRequest::setItemTitle(const std::string& itemTitle)
{
	itemTitle_ = itemTitle;
	setParameter("ItemTitle", itemTitle);
}

std::string DescribeUserOperationLogRequest::getOperateStatus()const
{
	return operateStatus_;
}

void DescribeUserOperationLogRequest::setOperateStatus(const std::string& operateStatus)
{
	operateStatus_ = operateStatus;
	setParameter("OperateStatus", operateStatus);
}

bool DescribeUserOperationLogRequest::getReverse()const
{
	return reverse_;
}

void DescribeUserOperationLogRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setParameter("Reverse", reverse ? "true" : "false");
}

std::string DescribeUserOperationLogRequest::getOperateType()const
{
	return operateType_;
}

void DescribeUserOperationLogRequest::setOperateType(const std::string& operateType)
{
	operateType_ = operateType;
	setParameter("OperateType", operateType);
}

