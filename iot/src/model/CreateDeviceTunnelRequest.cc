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

#include <alibabacloud/iot/model/CreateDeviceTunnelRequest.h>

using AlibabaCloud::Iot::Model::CreateDeviceTunnelRequest;

CreateDeviceTunnelRequest::CreateDeviceTunnelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDeviceTunnel")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeviceTunnelRequest::~CreateDeviceTunnelRequest()
{}

std::string CreateDeviceTunnelRequest::getDescription()const
{
	return description_;
}

void CreateDeviceTunnelRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDeviceTunnelRequest::getIotId()const
{
	return iotId_;
}

void CreateDeviceTunnelRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string CreateDeviceTunnelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateDeviceTunnelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateDeviceTunnelRequest::getProductKey()const
{
	return productKey_;
}

void CreateDeviceTunnelRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CreateDeviceTunnelRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateDeviceTunnelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateDeviceTunnelRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateDeviceTunnelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateDeviceTunnelRequest::getDeviceName()const
{
	return deviceName_;
}

void CreateDeviceTunnelRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string CreateDeviceTunnelRequest::getUdi()const
{
	return udi_;
}

void CreateDeviceTunnelRequest::setUdi(const std::string& udi)
{
	udi_ = udi;
	setParameter("Udi", udi);
}

