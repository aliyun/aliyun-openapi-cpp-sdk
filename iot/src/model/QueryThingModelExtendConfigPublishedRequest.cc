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

#include <alibabacloud/iot/model/QueryThingModelExtendConfigPublishedRequest.h>

using AlibabaCloud::Iot::Model::QueryThingModelExtendConfigPublishedRequest;

QueryThingModelExtendConfigPublishedRequest::QueryThingModelExtendConfigPublishedRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryThingModelExtendConfigPublished")
{
	setMethod(HttpRequest::Method::Post);
}

QueryThingModelExtendConfigPublishedRequest::~QueryThingModelExtendConfigPublishedRequest()
{}

std::string QueryThingModelExtendConfigPublishedRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryThingModelExtendConfigPublishedRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryThingModelExtendConfigPublishedRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryThingModelExtendConfigPublishedRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryThingModelExtendConfigPublishedRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryThingModelExtendConfigPublishedRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryThingModelExtendConfigPublishedRequest::getProductKey()const
{
	return productKey_;
}

void QueryThingModelExtendConfigPublishedRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryThingModelExtendConfigPublishedRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryThingModelExtendConfigPublishedRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryThingModelExtendConfigPublishedRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryThingModelExtendConfigPublishedRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryThingModelExtendConfigPublishedRequest::getModelVersion()const
{
	return modelVersion_;
}

void QueryThingModelExtendConfigPublishedRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

std::string QueryThingModelExtendConfigPublishedRequest::getFunctionBlockId()const
{
	return functionBlockId_;
}

void QueryThingModelExtendConfigPublishedRequest::setFunctionBlockId(const std::string& functionBlockId)
{
	functionBlockId_ = functionBlockId;
	setParameter("FunctionBlockId", functionBlockId);
}

