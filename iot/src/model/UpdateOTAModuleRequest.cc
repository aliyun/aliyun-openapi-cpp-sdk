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

#include <alibabacloud/iot/model/UpdateOTAModuleRequest.h>

using AlibabaCloud::Iot::Model::UpdateOTAModuleRequest;

UpdateOTAModuleRequest::UpdateOTAModuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateOTAModule")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOTAModuleRequest::~UpdateOTAModuleRequest()
{}

std::string UpdateOTAModuleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateOTAModuleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateOTAModuleRequest::getModuleName()const
{
	return moduleName_;
}

void UpdateOTAModuleRequest::setModuleName(const std::string& moduleName)
{
	moduleName_ = moduleName;
	setParameter("ModuleName", moduleName);
}

std::string UpdateOTAModuleRequest::getProductKey()const
{
	return productKey_;
}

void UpdateOTAModuleRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UpdateOTAModuleRequest::getAliasName()const
{
	return aliasName_;
}

void UpdateOTAModuleRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

std::string UpdateOTAModuleRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateOTAModuleRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateOTAModuleRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateOTAModuleRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateOTAModuleRequest::getDesc()const
{
	return desc_;
}

void UpdateOTAModuleRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setParameter("Desc", desc);
}

