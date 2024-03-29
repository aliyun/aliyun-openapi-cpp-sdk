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

#include <alibabacloud/iot/model/GetGatewayBySubDeviceRequest.h>

using AlibabaCloud::Iot::Model::GetGatewayBySubDeviceRequest;

GetGatewayBySubDeviceRequest::GetGatewayBySubDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetGatewayBySubDevice")
{
	setMethod(HttpRequest::Method::Post);
}

GetGatewayBySubDeviceRequest::~GetGatewayBySubDeviceRequest()
{}

std::string GetGatewayBySubDeviceRequest::getRealTenantId()const
{
	return realTenantId_;
}

void GetGatewayBySubDeviceRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string GetGatewayBySubDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetGatewayBySubDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetGatewayBySubDeviceRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void GetGatewayBySubDeviceRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string GetGatewayBySubDeviceRequest::getIotId()const
{
	return iotId_;
}

void GetGatewayBySubDeviceRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string GetGatewayBySubDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetGatewayBySubDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetGatewayBySubDeviceRequest::getProductKey()const
{
	return productKey_;
}

void GetGatewayBySubDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GetGatewayBySubDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetGatewayBySubDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetGatewayBySubDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetGatewayBySubDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetGatewayBySubDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void GetGatewayBySubDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

