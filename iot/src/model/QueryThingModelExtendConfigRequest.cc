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

#include <alibabacloud/iot/model/QueryThingModelExtendConfigRequest.h>

using AlibabaCloud::Iot::Model::QueryThingModelExtendConfigRequest;

QueryThingModelExtendConfigRequest::QueryThingModelExtendConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryThingModelExtendConfig")
{
	setMethod(HttpRequest::Method::Post);
}

QueryThingModelExtendConfigRequest::~QueryThingModelExtendConfigRequest()
{}

std::string QueryThingModelExtendConfigRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryThingModelExtendConfigRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryThingModelExtendConfigRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryThingModelExtendConfigRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryThingModelExtendConfigRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void QueryThingModelExtendConfigRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string QueryThingModelExtendConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryThingModelExtendConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryThingModelExtendConfigRequest::getProductKey()const
{
	return productKey_;
}

void QueryThingModelExtendConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryThingModelExtendConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryThingModelExtendConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryThingModelExtendConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryThingModelExtendConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryThingModelExtendConfigRequest::getModelVersion()const
{
	return modelVersion_;
}

void QueryThingModelExtendConfigRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

std::string QueryThingModelExtendConfigRequest::getFunctionBlockId()const
{
	return functionBlockId_;
}

void QueryThingModelExtendConfigRequest::setFunctionBlockId(const std::string& functionBlockId)
{
	functionBlockId_ = functionBlockId;
	setParameter("FunctionBlockId", functionBlockId);
}

