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

#include <alibabacloud/cloudesl/model/DescribeStoresRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeStoresRequest;

DescribeStoresRequest::DescribeStoresRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeStores")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStoresRequest::~DescribeStoresRequest()
{}

std::string DescribeStoresRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeStoresRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribeStoresRequest::getStoreName()const
{
	return storeName_;
}

void DescribeStoresRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setBodyParameter("StoreName", storeName);
}

std::string DescribeStoresRequest::getStoreId()const
{
	return storeId_;
}

void DescribeStoresRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribeStoresRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeStoresRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeStoresRequest::getFromDate()const
{
	return fromDate_;
}

void DescribeStoresRequest::setFromDate(const std::string& fromDate)
{
	fromDate_ = fromDate;
	setBodyParameter("FromDate", fromDate);
}

std::string DescribeStoresRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void DescribeStoresRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string DescribeStoresRequest::getToDate()const
{
	return toDate_;
}

void DescribeStoresRequest::setToDate(const std::string& toDate)
{
	toDate_ = toDate;
	setBodyParameter("ToDate", toDate);
}

int DescribeStoresRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStoresRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeStoresRequest::getUserStoreCode()const
{
	return userStoreCode_;
}

void DescribeStoresRequest::setUserStoreCode(const std::string& userStoreCode)
{
	userStoreCode_ = userStoreCode;
	setBodyParameter("UserStoreCode", userStoreCode);
}

