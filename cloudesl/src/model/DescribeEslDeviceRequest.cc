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

#include <alibabacloud/cloudesl/model/DescribeEslDeviceRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeEslDeviceRequest;

DescribeEslDeviceRequest::DescribeEslDeviceRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeEslDevice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEslDeviceRequest::~DescribeEslDeviceRequest()
{}

std::string DescribeEslDeviceRequest::getStoreId()const
{
	return storeId_;
}

void DescribeEslDeviceRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

long DescribeEslDeviceRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEslDeviceRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEslDeviceRequest::getFromDate()const
{
	return fromDate_;
}

void DescribeEslDeviceRequest::setFromDate(const std::string& fromDate)
{
	fromDate_ = fromDate;
	setBodyParameter("FromDate", fromDate);
}

std::string DescribeEslDeviceRequest::getToDate()const
{
	return toDate_;
}

void DescribeEslDeviceRequest::setToDate(const std::string& toDate)
{
	toDate_ = toDate;
	setBodyParameter("ToDate", toDate);
}

long DescribeEslDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEslDeviceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

