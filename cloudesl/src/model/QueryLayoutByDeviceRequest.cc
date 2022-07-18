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

#include <alibabacloud/cloudesl/model/QueryLayoutByDeviceRequest.h>

using AlibabaCloud::Cloudesl::Model::QueryLayoutByDeviceRequest;

QueryLayoutByDeviceRequest::QueryLayoutByDeviceRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "QueryLayoutByDevice")
{
	setMethod(HttpRequest::Method::Post);
}

QueryLayoutByDeviceRequest::~QueryLayoutByDeviceRequest()
{}

std::string QueryLayoutByDeviceRequest::getStoreId()const
{
	return storeId_;
}

void QueryLayoutByDeviceRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int QueryLayoutByDeviceRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryLayoutByDeviceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryLayoutByDeviceRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void QueryLayoutByDeviceRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string QueryLayoutByDeviceRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void QueryLayoutByDeviceRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

int QueryLayoutByDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void QueryLayoutByDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryLayoutByDeviceRequest::getEslModelId()const
{
	return eslModelId_;
}

void QueryLayoutByDeviceRequest::setEslModelId(const std::string& eslModelId)
{
	eslModelId_ = eslModelId;
	setBodyParameter("EslModelId", eslModelId);
}

