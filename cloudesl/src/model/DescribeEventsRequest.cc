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

#include <alibabacloud/cloudesl/model/DescribeEventsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeEventsRequest;

DescribeEventsRequest::DescribeEventsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeEvents")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventsRequest::~DescribeEventsRequest()
{}

std::string DescribeEventsRequest::getApMac()const
{
	return apMac_;
}

void DescribeEventsRequest::setApMac(const std::string& apMac)
{
	apMac_ = apMac;
	setBodyParameter("ApMac", apMac);
}

std::string DescribeEventsRequest::getStoreId()const
{
	return storeId_;
}

void DescribeEventsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string DescribeEventsRequest::getType()const
{
	return type_;
}

void DescribeEventsRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

int DescribeEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEventsRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DescribeEventsRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

int DescribeEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEventsRequest::getStatus()const
{
	return status_;
}

void DescribeEventsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

