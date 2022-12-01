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

#include <alibabacloud/iot/model/WriteDevicesHotStorageDataRequest.h>

using AlibabaCloud::Iot::Model::WriteDevicesHotStorageDataRequest;

WriteDevicesHotStorageDataRequest::WriteDevicesHotStorageDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "WriteDevicesHotStorageData")
{
	setMethod(HttpRequest::Method::Post);
}

WriteDevicesHotStorageDataRequest::~WriteDevicesHotStorageDataRequest()
{}

std::string WriteDevicesHotStorageDataRequest::getRealTenantId()const
{
	return realTenantId_;
}

void WriteDevicesHotStorageDataRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string WriteDevicesHotStorageDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void WriteDevicesHotStorageDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string WriteDevicesHotStorageDataRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void WriteDevicesHotStorageDataRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string WriteDevicesHotStorageDataRequest::getIotId()const
{
	return iotId_;
}

void WriteDevicesHotStorageDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string WriteDevicesHotStorageDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void WriteDevicesHotStorageDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string WriteDevicesHotStorageDataRequest::getUserTopic()const
{
	return userTopic_;
}

void WriteDevicesHotStorageDataRequest::setUserTopic(const std::string& userTopic)
{
	userTopic_ = userTopic;
	setParameter("UserTopic", userTopic);
}

std::string WriteDevicesHotStorageDataRequest::getProductKey()const
{
	return productKey_;
}

void WriteDevicesHotStorageDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string WriteDevicesHotStorageDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void WriteDevicesHotStorageDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string WriteDevicesHotStorageDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void WriteDevicesHotStorageDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string WriteDevicesHotStorageDataRequest::getDeviceName()const
{
	return deviceName_;
}

void WriteDevicesHotStorageDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string WriteDevicesHotStorageDataRequest::getItems()const
{
	return items_;
}

void WriteDevicesHotStorageDataRequest::setItems(const std::string& items)
{
	items_ = items;
	setParameter("Items", items);
}

