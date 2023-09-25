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

#include <alibabacloud/iot/model/ResetDeviceTimelineRequest.h>

using AlibabaCloud::Iot::Model::ResetDeviceTimelineRequest;

ResetDeviceTimelineRequest::ResetDeviceTimelineRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ResetDeviceTimeline")
{
	setMethod(HttpRequest::Method::Post);
}

ResetDeviceTimelineRequest::~ResetDeviceTimelineRequest()
{}

std::string ResetDeviceTimelineRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ResetDeviceTimelineRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string ResetDeviceTimelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetDeviceTimelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ResetDeviceTimelineRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ResetDeviceTimelineRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ResetDeviceTimelineRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ResetDeviceTimelineRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ResetDeviceTimelineRequest::getProductKey()const
{
	return productKey_;
}

void ResetDeviceTimelineRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ResetDeviceTimelineRequest::getApiProduct()const
{
	return apiProduct_;
}

void ResetDeviceTimelineRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ResetDeviceTimelineRequest::getApiRevision()const
{
	return apiRevision_;
}

void ResetDeviceTimelineRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ResetDeviceTimelineRequest::getDeviceName()const
{
	return deviceName_;
}

void ResetDeviceTimelineRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

