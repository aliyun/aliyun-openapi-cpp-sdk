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

#include <alibabacloud/iot/model/QueryThingModelPublishedRequest.h>

using AlibabaCloud::Iot::Model::QueryThingModelPublishedRequest;

QueryThingModelPublishedRequest::QueryThingModelPublishedRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryThingModelPublished")
{
	setMethod(HttpRequest::Method::Post);
}

QueryThingModelPublishedRequest::~QueryThingModelPublishedRequest()
{}

std::string QueryThingModelPublishedRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryThingModelPublishedRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryThingModelPublishedRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryThingModelPublishedRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryThingModelPublishedRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryThingModelPublishedRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryThingModelPublishedRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void QueryThingModelPublishedRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string QueryThingModelPublishedRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryThingModelPublishedRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryThingModelPublishedRequest::getProductKey()const
{
	return productKey_;
}

void QueryThingModelPublishedRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryThingModelPublishedRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryThingModelPublishedRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryThingModelPublishedRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryThingModelPublishedRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryThingModelPublishedRequest::getModelVersion()const
{
	return modelVersion_;
}

void QueryThingModelPublishedRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

std::string QueryThingModelPublishedRequest::getFunctionBlockId()const
{
	return functionBlockId_;
}

void QueryThingModelPublishedRequest::setFunctionBlockId(const std::string& functionBlockId)
{
	functionBlockId_ = functionBlockId;
	setParameter("FunctionBlockId", functionBlockId);
}

