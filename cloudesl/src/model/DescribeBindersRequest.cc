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

#include <alibabacloud/cloudesl/model/DescribeBindersRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeBindersRequest;

DescribeBindersRequest::DescribeBindersRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeBinders")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBindersRequest::~DescribeBindersRequest()
{}

std::string DescribeBindersRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeBindersRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribeBindersRequest::getStoreId()const
{
	return storeId_;
}

void DescribeBindersRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribeBindersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBindersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBindersRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DescribeBindersRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

int DescribeBindersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBindersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBindersRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void DescribeBindersRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setBodyParameter("ItemBarCode", itemBarCode);
}

std::string DescribeBindersRequest::getItemTitle()const
{
	return itemTitle_;
}

void DescribeBindersRequest::setItemTitle(const std::string& itemTitle)
{
	itemTitle_ = itemTitle;
	setBodyParameter("ItemTitle", itemTitle);
}

