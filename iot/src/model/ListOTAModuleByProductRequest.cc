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

#include <alibabacloud/iot/model/ListOTAModuleByProductRequest.h>

using AlibabaCloud::Iot::Model::ListOTAModuleByProductRequest;

ListOTAModuleByProductRequest::ListOTAModuleByProductRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListOTAModuleByProduct")
{
	setMethod(HttpRequest::Method::Get);
}

ListOTAModuleByProductRequest::~ListOTAModuleByProductRequest()
{}

std::string ListOTAModuleByProductRequest::getAuthConfig()const
{
	return authConfig_;
}

void ListOTAModuleByProductRequest::setAuthConfig(const std::string& authConfig)
{
	authConfig_ = authConfig;
	setParameter("AuthConfig", authConfig);
}

std::string ListOTAModuleByProductRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ListOTAModuleByProductRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string ListOTAModuleByProductRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ListOTAModuleByProductRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ListOTAModuleByProductRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListOTAModuleByProductRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListOTAModuleByProductRequest::getProductKey()const
{
	return productKey_;
}

void ListOTAModuleByProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ListOTAModuleByProductRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListOTAModuleByProductRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListOTAModuleByProductRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListOTAModuleByProductRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

