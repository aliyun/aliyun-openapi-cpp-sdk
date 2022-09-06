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

#include <alibabacloud/iot/model/GetShareTaskByDeviceOpenRequest.h>

using AlibabaCloud::Iot::Model::GetShareTaskByDeviceOpenRequest;

GetShareTaskByDeviceOpenRequest::GetShareTaskByDeviceOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetShareTaskByDeviceOpen")
{
	setMethod(HttpRequest::Method::Post);
}

GetShareTaskByDeviceOpenRequest::~GetShareTaskByDeviceOpenRequest()
{}

std::string GetShareTaskByDeviceOpenRequest::getIotId()const
{
	return iotId_;
}

void GetShareTaskByDeviceOpenRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string GetShareTaskByDeviceOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetShareTaskByDeviceOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string GetShareTaskByDeviceOpenRequest::getProductKey()const
{
	return productKey_;
}

void GetShareTaskByDeviceOpenRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string GetShareTaskByDeviceOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetShareTaskByDeviceOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetShareTaskByDeviceOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetShareTaskByDeviceOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetShareTaskByDeviceOpenRequest::getDeviceName()const
{
	return deviceName_;
}

void GetShareTaskByDeviceOpenRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

