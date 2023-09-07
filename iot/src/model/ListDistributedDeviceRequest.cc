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

#include <alibabacloud/iot/model/ListDistributedDeviceRequest.h>

using AlibabaCloud::Iot::Model::ListDistributedDeviceRequest;

ListDistributedDeviceRequest::ListDistributedDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListDistributedDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ListDistributedDeviceRequest::~ListDistributedDeviceRequest()
{}

std::string ListDistributedDeviceRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ListDistributedDeviceRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setBodyParameter("RealTenantId", realTenantId);
}

std::string ListDistributedDeviceRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ListDistributedDeviceRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setBodyParameter("RealTripartiteKey", realTripartiteKey);
}

int ListDistributedDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void ListDistributedDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDistributedDeviceRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void ListDistributedDeviceRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setParameter("SourceInstanceId", sourceInstanceId);
}

int ListDistributedDeviceRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListDistributedDeviceRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListDistributedDeviceRequest::getProductKey()const
{
	return productKey_;
}

void ListDistributedDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ListDistributedDeviceRequest::getTargetInstanceId()const
{
	return targetInstanceId_;
}

void ListDistributedDeviceRequest::setTargetInstanceId(const std::string& targetInstanceId)
{
	targetInstanceId_ = targetInstanceId;
	setParameter("TargetInstanceId", targetInstanceId);
}

std::string ListDistributedDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListDistributedDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListDistributedDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListDistributedDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListDistributedDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void ListDistributedDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string ListDistributedDeviceRequest::getTargetUid()const
{
	return targetUid_;
}

void ListDistributedDeviceRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

