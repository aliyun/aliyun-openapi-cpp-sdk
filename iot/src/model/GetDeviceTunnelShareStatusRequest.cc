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

#include <alibabacloud/iot/model/GetDeviceTunnelShareStatusRequest.h>

using AlibabaCloud::Iot::Model::GetDeviceTunnelShareStatusRequest;

GetDeviceTunnelShareStatusRequest::GetDeviceTunnelShareStatusRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetDeviceTunnelShareStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetDeviceTunnelShareStatusRequest::~GetDeviceTunnelShareStatusRequest()
{}

std::string GetDeviceTunnelShareStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetDeviceTunnelShareStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetDeviceTunnelShareStatusRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetDeviceTunnelShareStatusRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetDeviceTunnelShareStatusRequest::getProductKey()const
{
	return productKey_;
}

void GetDeviceTunnelShareStatusRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GetDeviceTunnelShareStatusRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetDeviceTunnelShareStatusRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetDeviceTunnelShareStatusRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetDeviceTunnelShareStatusRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetDeviceTunnelShareStatusRequest::getDeviceName()const
{
	return deviceName_;
}

void GetDeviceTunnelShareStatusRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

