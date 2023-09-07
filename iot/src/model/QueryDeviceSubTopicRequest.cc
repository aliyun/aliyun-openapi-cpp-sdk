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

#include <alibabacloud/iot/model/QueryDeviceSubTopicRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceSubTopicRequest;

QueryDeviceSubTopicRequest::QueryDeviceSubTopicRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceSubTopic")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceSubTopicRequest::~QueryDeviceSubTopicRequest()
{}

std::string QueryDeviceSubTopicRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryDeviceSubTopicRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryDeviceSubTopicRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryDeviceSubTopicRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryDeviceSubTopicRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceSubTopicRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryDeviceSubTopicRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceSubTopicRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryDeviceSubTopicRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceSubTopicRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceSubTopicRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceSubTopicRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceSubTopicRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceSubTopicRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

