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

#include <alibabacloud/iot/model/CreateDataSourceItemRequest.h>

using AlibabaCloud::Iot::Model::CreateDataSourceItemRequest;

CreateDataSourceItemRequest::CreateDataSourceItemRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDataSourceItem")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDataSourceItemRequest::~CreateDataSourceItemRequest()
{}

std::string CreateDataSourceItemRequest::getScopeType()const
{
	return scopeType_;
}

void CreateDataSourceItemRequest::setScopeType(const std::string& scopeType)
{
	scopeType_ = scopeType;
	setParameter("ScopeType", scopeType);
}

std::string CreateDataSourceItemRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateDataSourceItemRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateDataSourceItemRequest::getProductKey()const
{
	return productKey_;
}

void CreateDataSourceItemRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CreateDataSourceItemRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateDataSourceItemRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

long CreateDataSourceItemRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void CreateDataSourceItemRequest::setDataSourceId(long dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string CreateDataSourceItemRequest::getTopic()const
{
	return topic_;
}

void CreateDataSourceItemRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setParameter("Topic", topic);
}

std::string CreateDataSourceItemRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateDataSourceItemRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateDataSourceItemRequest::getDeviceName()const
{
	return deviceName_;
}

void CreateDataSourceItemRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

