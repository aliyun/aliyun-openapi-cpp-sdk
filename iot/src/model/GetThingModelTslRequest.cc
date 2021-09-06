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

#include <alibabacloud/iot/model/GetThingModelTslRequest.h>

using AlibabaCloud::Iot::Model::GetThingModelTslRequest;

GetThingModelTslRequest::GetThingModelTslRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetThingModelTsl")
{
	setMethod(HttpRequest::Method::Post);
}

GetThingModelTslRequest::~GetThingModelTslRequest()
{}

std::string GetThingModelTslRequest::getRealTenantId()const
{
	return realTenantId_;
}

void GetThingModelTslRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

bool GetThingModelTslRequest::getSimple()const
{
	return simple_;
}

void GetThingModelTslRequest::setSimple(bool simple)
{
	simple_ = simple;
	setParameter("Simple", simple ? "true" : "false");
}

std::string GetThingModelTslRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetThingModelTslRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetThingModelTslRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void GetThingModelTslRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string GetThingModelTslRequest::getDTModelId()const
{
	return dTModelId_;
}

void GetThingModelTslRequest::setDTModelId(const std::string& dTModelId)
{
	dTModelId_ = dTModelId;
	setParameter("DTModelId", dTModelId);
}

std::string GetThingModelTslRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetThingModelTslRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetThingModelTslRequest::getProductKey()const
{
	return productKey_;
}

void GetThingModelTslRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GetThingModelTslRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetThingModelTslRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetThingModelTslRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetThingModelTslRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetThingModelTslRequest::getModelVersion()const
{
	return modelVersion_;
}

void GetThingModelTslRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

std::string GetThingModelTslRequest::getFunctionBlockId()const
{
	return functionBlockId_;
}

void GetThingModelTslRequest::setFunctionBlockId(const std::string& functionBlockId)
{
	functionBlockId_ = functionBlockId;
	setParameter("FunctionBlockId", functionBlockId);
}

