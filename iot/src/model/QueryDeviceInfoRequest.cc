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

#include <alibabacloud/iot/model/QueryDeviceInfoRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceInfoRequest;

QueryDeviceInfoRequest::QueryDeviceInfoRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceInfoRequest::~QueryDeviceInfoRequest()
{}

std::string QueryDeviceInfoRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryDeviceInfoRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryDeviceInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceInfoRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryDeviceInfoRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryDeviceInfoRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceInfoRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDeviceInfoRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceInfoRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryDeviceInfoRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceInfoRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryDeviceInfoRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceInfoRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceInfoRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceInfoRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceInfoRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceInfoRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

