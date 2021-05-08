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

#include <alibabacloud/iot/model/RefreshDeviceTunnelSharePasswordRequest.h>

using AlibabaCloud::Iot::Model::RefreshDeviceTunnelSharePasswordRequest;

RefreshDeviceTunnelSharePasswordRequest::RefreshDeviceTunnelSharePasswordRequest() :
	RpcServiceRequest("iot", "2018-01-20", "RefreshDeviceTunnelSharePassword")
{
	setMethod(HttpRequest::Method::Post);
}

RefreshDeviceTunnelSharePasswordRequest::~RefreshDeviceTunnelSharePasswordRequest()
{}

std::string RefreshDeviceTunnelSharePasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshDeviceTunnelSharePasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RefreshDeviceTunnelSharePasswordRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void RefreshDeviceTunnelSharePasswordRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string RefreshDeviceTunnelSharePasswordRequest::getProductKey()const
{
	return productKey_;
}

void RefreshDeviceTunnelSharePasswordRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string RefreshDeviceTunnelSharePasswordRequest::getApiProduct()const
{
	return apiProduct_;
}

void RefreshDeviceTunnelSharePasswordRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string RefreshDeviceTunnelSharePasswordRequest::getApiRevision()const
{
	return apiRevision_;
}

void RefreshDeviceTunnelSharePasswordRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string RefreshDeviceTunnelSharePasswordRequest::getDeviceName()const
{
	return deviceName_;
}

void RefreshDeviceTunnelSharePasswordRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

