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

#include <alibabacloud/iot/model/GetDeviceShadowRequest.h>

using AlibabaCloud::Iot::Model::GetDeviceShadowRequest;

GetDeviceShadowRequest::GetDeviceShadowRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetDeviceShadow")
{
	setMethod(HttpRequest::Method::Post);
}

GetDeviceShadowRequest::~GetDeviceShadowRequest()
{}

std::string GetDeviceShadowRequest::getRealTenantId()const
{
	return realTenantId_;
}

void GetDeviceShadowRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string GetDeviceShadowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetDeviceShadowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetDeviceShadowRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void GetDeviceShadowRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string GetDeviceShadowRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetDeviceShadowRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetDeviceShadowRequest::getProductKey()const
{
	return productKey_;
}

void GetDeviceShadowRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GetDeviceShadowRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetDeviceShadowRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetDeviceShadowRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetDeviceShadowRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetDeviceShadowRequest::getDeviceName()const
{
	return deviceName_;
}

void GetDeviceShadowRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

