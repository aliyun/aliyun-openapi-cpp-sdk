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

#include <alibabacloud/iot/model/ImportDeviceRequest.h>

using AlibabaCloud::Iot::Model::ImportDeviceRequest;

ImportDeviceRequest::ImportDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ImportDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ImportDeviceRequest::~ImportDeviceRequest()
{}

std::string ImportDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ImportDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ImportDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ImportDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ImportDeviceRequest::getNickname()const
{
	return nickname_;
}

void ImportDeviceRequest::setNickname(const std::string& nickname)
{
	nickname_ = nickname;
	setParameter("Nickname", nickname);
}

std::string ImportDeviceRequest::getSn()const
{
	return sn_;
}

void ImportDeviceRequest::setSn(const std::string& sn)
{
	sn_ = sn;
	setParameter("Sn", sn);
}

std::string ImportDeviceRequest::getDeviceSecret()const
{
	return deviceSecret_;
}

void ImportDeviceRequest::setDeviceSecret(const std::string& deviceSecret)
{
	deviceSecret_ = deviceSecret;
	setParameter("DeviceSecret", deviceSecret);
}

std::string ImportDeviceRequest::getProductKey()const
{
	return productKey_;
}

void ImportDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ImportDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void ImportDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ImportDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void ImportDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ImportDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void ImportDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

