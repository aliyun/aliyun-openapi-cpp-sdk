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

#include <alibabacloud/iot/model/ListOTAModuleVersionsByDeviceRequest.h>

using AlibabaCloud::Iot::Model::ListOTAModuleVersionsByDeviceRequest;

ListOTAModuleVersionsByDeviceRequest::ListOTAModuleVersionsByDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListOTAModuleVersionsByDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ListOTAModuleVersionsByDeviceRequest::~ListOTAModuleVersionsByDeviceRequest()
{}

std::string ListOTAModuleVersionsByDeviceRequest::getIotId()const
{
	return iotId_;
}

void ListOTAModuleVersionsByDeviceRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string ListOTAModuleVersionsByDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListOTAModuleVersionsByDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListOTAModuleVersionsByDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void ListOTAModuleVersionsByDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListOTAModuleVersionsByDeviceRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListOTAModuleVersionsByDeviceRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListOTAModuleVersionsByDeviceRequest::getProductKey()const
{
	return productKey_;
}

void ListOTAModuleVersionsByDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ListOTAModuleVersionsByDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListOTAModuleVersionsByDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListOTAModuleVersionsByDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListOTAModuleVersionsByDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListOTAModuleVersionsByDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void ListOTAModuleVersionsByDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

