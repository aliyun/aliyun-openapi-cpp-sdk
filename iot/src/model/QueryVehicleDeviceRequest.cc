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

#include <alibabacloud/iot/model/QueryVehicleDeviceRequest.h>

using AlibabaCloud::Iot::Model::QueryVehicleDeviceRequest;

QueryVehicleDeviceRequest::QueryVehicleDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryVehicleDevice")
{
	setMethod(HttpRequest::Method::Post);
}

QueryVehicleDeviceRequest::~QueryVehicleDeviceRequest()
{}

std::string QueryVehicleDeviceRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryVehicleDeviceRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryVehicleDeviceRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryVehicleDeviceRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryVehicleDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryVehicleDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryVehicleDeviceRequest::getProductKey()const
{
	return productKey_;
}

void QueryVehicleDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryVehicleDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryVehicleDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryVehicleDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryVehicleDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryVehicleDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryVehicleDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

