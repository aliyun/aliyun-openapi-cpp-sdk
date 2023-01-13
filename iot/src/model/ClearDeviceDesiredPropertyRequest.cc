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

#include <alibabacloud/iot/model/ClearDeviceDesiredPropertyRequest.h>

using AlibabaCloud::Iot::Model::ClearDeviceDesiredPropertyRequest;

ClearDeviceDesiredPropertyRequest::ClearDeviceDesiredPropertyRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ClearDeviceDesiredProperty")
{
	setMethod(HttpRequest::Method::Post);
}

ClearDeviceDesiredPropertyRequest::~ClearDeviceDesiredPropertyRequest()
{}

std::string ClearDeviceDesiredPropertyRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ClearDeviceDesiredPropertyRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string ClearDeviceDesiredPropertyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ClearDeviceDesiredPropertyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ClearDeviceDesiredPropertyRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ClearDeviceDesiredPropertyRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ClearDeviceDesiredPropertyRequest::getIotId()const
{
	return iotId_;
}

void ClearDeviceDesiredPropertyRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string ClearDeviceDesiredPropertyRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ClearDeviceDesiredPropertyRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> ClearDeviceDesiredPropertyRequest::getIdentifies()const
{
	return identifies_;
}

void ClearDeviceDesiredPropertyRequest::setIdentifies(const std::vector<std::string>& identifies)
{
	identifies_ = identifies;
	for(int dep1 = 0; dep1!= identifies.size(); dep1++) {
		setBodyParameter("Identifies."+ std::to_string(dep1), identifies.at(dep1));
	}
}

std::string ClearDeviceDesiredPropertyRequest::getProductKey()const
{
	return productKey_;
}

void ClearDeviceDesiredPropertyRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ClearDeviceDesiredPropertyRequest::getApiProduct()const
{
	return apiProduct_;
}

void ClearDeviceDesiredPropertyRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ClearDeviceDesiredPropertyRequest::getApiRevision()const
{
	return apiRevision_;
}

void ClearDeviceDesiredPropertyRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ClearDeviceDesiredPropertyRequest::getDeviceName()const
{
	return deviceName_;
}

void ClearDeviceDesiredPropertyRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

