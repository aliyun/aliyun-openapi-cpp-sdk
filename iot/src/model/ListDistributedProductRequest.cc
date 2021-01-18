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

#include <alibabacloud/iot/model/ListDistributedProductRequest.h>

using AlibabaCloud::Iot::Model::ListDistributedProductRequest;

ListDistributedProductRequest::ListDistributedProductRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListDistributedProduct")
{
	setMethod(HttpRequest::Method::Post);
}

ListDistributedProductRequest::~ListDistributedProductRequest()
{}

int ListDistributedProductRequest::getPageSize()const
{
	return pageSize_;
}

void ListDistributedProductRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDistributedProductRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void ListDistributedProductRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setParameter("SourceInstanceId", sourceInstanceId);
}

int ListDistributedProductRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListDistributedProductRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListDistributedProductRequest::getProductKey()const
{
	return productKey_;
}

void ListDistributedProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ListDistributedProductRequest::getTargetInstanceId()const
{
	return targetInstanceId_;
}

void ListDistributedProductRequest::setTargetInstanceId(const std::string& targetInstanceId)
{
	targetInstanceId_ = targetInstanceId;
	setParameter("TargetInstanceId", targetInstanceId);
}

std::string ListDistributedProductRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListDistributedProductRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListDistributedProductRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListDistributedProductRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListDistributedProductRequest::getTargetUid()const
{
	return targetUid_;
}

void ListDistributedProductRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

