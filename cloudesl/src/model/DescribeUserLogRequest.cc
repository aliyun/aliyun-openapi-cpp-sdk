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

#include <alibabacloud/cloudesl/model/DescribeUserLogRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeUserLogRequest;

DescribeUserLogRequest::DescribeUserLogRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeUserLog")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserLogRequest::~DescribeUserLogRequest()
{}

std::string DescribeUserLogRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeUserLogRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribeUserLogRequest::getStoreId()const
{
	return storeId_;
}

void DescribeUserLogRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string DescribeUserLogRequest::getUserId()const
{
	return userId_;
}

void DescribeUserLogRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

int DescribeUserLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserLogRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeUserLogRequest::getFromDate()const
{
	return fromDate_;
}

void DescribeUserLogRequest::setFromDate(const std::string& fromDate)
{
	fromDate_ = fromDate;
	setBodyParameter("FromDate", fromDate);
}

std::string DescribeUserLogRequest::getOperationStatus()const
{
	return operationStatus_;
}

void DescribeUserLogRequest::setOperationStatus(const std::string& operationStatus)
{
	operationStatus_ = operationStatus;
	setBodyParameter("OperationStatus", operationStatus);
}

std::string DescribeUserLogRequest::getToDate()const
{
	return toDate_;
}

void DescribeUserLogRequest::setToDate(const std::string& toDate)
{
	toDate_ = toDate;
	setBodyParameter("ToDate", toDate);
}

std::string DescribeUserLogRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DescribeUserLogRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

int DescribeUserLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUserLogRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeUserLogRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void DescribeUserLogRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setBodyParameter("ItemBarCode", itemBarCode);
}

std::string DescribeUserLogRequest::getItemShortTitle()const
{
	return itemShortTitle_;
}

void DescribeUserLogRequest::setItemShortTitle(const std::string& itemShortTitle)
{
	itemShortTitle_ = itemShortTitle;
	setBodyParameter("ItemShortTitle", itemShortTitle);
}

std::string DescribeUserLogRequest::getOperationType()const
{
	return operationType_;
}

void DescribeUserLogRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setBodyParameter("OperationType", operationType);
}

std::string DescribeUserLogRequest::getLogId()const
{
	return logId_;
}

void DescribeUserLogRequest::setLogId(const std::string& logId)
{
	logId_ = logId;
	setBodyParameter("LogId", logId);
}

