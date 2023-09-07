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

#include <alibabacloud/iot/model/ListJobRequest.h>

using AlibabaCloud::Iot::Model::ListJobRequest;

ListJobRequest::ListJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListJob")
{
	setMethod(HttpRequest::Method::Post);
}

ListJobRequest::~ListJobRequest()
{}

std::string ListJobRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ListJobRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string ListJobRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ListJobRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ListJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListJobRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListJobRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListJobRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListJobRequest::getStatus()const
{
	return status_;
}

void ListJobRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

