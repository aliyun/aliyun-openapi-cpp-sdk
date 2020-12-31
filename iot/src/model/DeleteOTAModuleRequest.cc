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

#include <alibabacloud/iot/model/DeleteOTAModuleRequest.h>

using AlibabaCloud::Iot::Model::DeleteOTAModuleRequest;

DeleteOTAModuleRequest::DeleteOTAModuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteOTAModule")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteOTAModuleRequest::~DeleteOTAModuleRequest()
{}

std::string DeleteOTAModuleRequest::getAuthConfig()const
{
	return authConfig_;
}

void DeleteOTAModuleRequest::setAuthConfig(const std::string& authConfig)
{
	authConfig_ = authConfig;
	setParameter("AuthConfig", authConfig);
}

std::string DeleteOTAModuleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteOTAModuleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteOTAModuleRequest::getModuleName()const
{
	return moduleName_;
}

void DeleteOTAModuleRequest::setModuleName(const std::string& moduleName)
{
	moduleName_ = moduleName;
	setParameter("ModuleName", moduleName);
}

std::string DeleteOTAModuleRequest::getProductKey()const
{
	return productKey_;
}

void DeleteOTAModuleRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string DeleteOTAModuleRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteOTAModuleRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteOTAModuleRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteOTAModuleRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

