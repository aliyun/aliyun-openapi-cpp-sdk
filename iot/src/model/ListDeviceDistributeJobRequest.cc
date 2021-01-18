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

#include <alibabacloud/iot/model/ListDeviceDistributeJobRequest.h>

using AlibabaCloud::Iot::Model::ListDeviceDistributeJobRequest;

ListDeviceDistributeJobRequest::ListDeviceDistributeJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListDeviceDistributeJob")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceDistributeJobRequest::~ListDeviceDistributeJobRequest()
{}

int ListDeviceDistributeJobRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeviceDistributeJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListDeviceDistributeJobRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListDeviceDistributeJobRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListDeviceDistributeJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListDeviceDistributeJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListDeviceDistributeJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListDeviceDistributeJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListDeviceDistributeJobRequest::getTargetUid()const
{
	return targetUid_;
}

void ListDeviceDistributeJobRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

int ListDeviceDistributeJobRequest::getStatus()const
{
	return status_;
}

void ListDeviceDistributeJobRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

