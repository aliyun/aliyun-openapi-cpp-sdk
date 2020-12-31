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

#include <alibabacloud/iot/model/GetThingModelTslPublishedRequest.h>

using AlibabaCloud::Iot::Model::GetThingModelTslPublishedRequest;

GetThingModelTslPublishedRequest::GetThingModelTslPublishedRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetThingModelTslPublished")
{
	setMethod(HttpRequest::Method::Post);
}

GetThingModelTslPublishedRequest::~GetThingModelTslPublishedRequest()
{}

std::string GetThingModelTslPublishedRequest::getRealTenantId()const
{
	return realTenantId_;
}

void GetThingModelTslPublishedRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

bool GetThingModelTslPublishedRequest::getSimple()const
{
	return simple_;
}

void GetThingModelTslPublishedRequest::setSimple(bool simple)
{
	simple_ = simple;
	setParameter("Simple", simple ? "true" : "false");
}

std::string GetThingModelTslPublishedRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetThingModelTslPublishedRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetThingModelTslPublishedRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void GetThingModelTslPublishedRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string GetThingModelTslPublishedRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void GetThingModelTslPublishedRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string GetThingModelTslPublishedRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetThingModelTslPublishedRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetThingModelTslPublishedRequest::getProductKey()const
{
	return productKey_;
}

void GetThingModelTslPublishedRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GetThingModelTslPublishedRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetThingModelTslPublishedRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetThingModelTslPublishedRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetThingModelTslPublishedRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetThingModelTslPublishedRequest::getModelVersion()const
{
	return modelVersion_;
}

void GetThingModelTslPublishedRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

std::string GetThingModelTslPublishedRequest::getFunctionBlockId()const
{
	return functionBlockId_;
}

void GetThingModelTslPublishedRequest::setFunctionBlockId(const std::string& functionBlockId)
{
	functionBlockId_ = functionBlockId;
	setParameter("FunctionBlockId", functionBlockId);
}

