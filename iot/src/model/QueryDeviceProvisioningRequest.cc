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

#include <alibabacloud/iot/model/QueryDeviceProvisioningRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceProvisioningRequest;

QueryDeviceProvisioningRequest::QueryDeviceProvisioningRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceProvisioning")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceProvisioningRequest::~QueryDeviceProvisioningRequest()
{}

std::string QueryDeviceProvisioningRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceProvisioningRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string QueryDeviceProvisioningRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceProvisioningRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceProvisioningRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceProvisioningRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceProvisioningRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceProvisioningRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

