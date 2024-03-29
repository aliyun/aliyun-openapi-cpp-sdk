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

#include <alibabacloud/iot/model/UpdateDeviceShadowRequest.h>

using AlibabaCloud::Iot::Model::UpdateDeviceShadowRequest;

UpdateDeviceShadowRequest::UpdateDeviceShadowRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateDeviceShadow")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDeviceShadowRequest::~UpdateDeviceShadowRequest()
{}

std::string UpdateDeviceShadowRequest::getShadowMessage()const
{
	return shadowMessage_;
}

void UpdateDeviceShadowRequest::setShadowMessage(const std::string& shadowMessage)
{
	shadowMessage_ = shadowMessage;
	setParameter("ShadowMessage", shadowMessage);
}

std::string UpdateDeviceShadowRequest::getRealTenantId()const
{
	return realTenantId_;
}

void UpdateDeviceShadowRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string UpdateDeviceShadowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateDeviceShadowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateDeviceShadowRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void UpdateDeviceShadowRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string UpdateDeviceShadowRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateDeviceShadowRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateDeviceShadowRequest::getProductKey()const
{
	return productKey_;
}

void UpdateDeviceShadowRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

bool UpdateDeviceShadowRequest::getDeltaUpdate()const
{
	return deltaUpdate_;
}

void UpdateDeviceShadowRequest::setDeltaUpdate(bool deltaUpdate)
{
	deltaUpdate_ = deltaUpdate;
	setParameter("DeltaUpdate", deltaUpdate ? "true" : "false");
}

std::string UpdateDeviceShadowRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateDeviceShadowRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateDeviceShadowRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateDeviceShadowRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateDeviceShadowRequest::getDeviceName()const
{
	return deviceName_;
}

void UpdateDeviceShadowRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

