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

#include <alibabacloud/iot/model/GetThingScriptRequest.h>

using AlibabaCloud::Iot::Model::GetThingScriptRequest;

GetThingScriptRequest::GetThingScriptRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetThingScript")
{
	setMethod(HttpRequest::Method::Post);
}

GetThingScriptRequest::~GetThingScriptRequest()
{}

std::string GetThingScriptRequest::getRealTenantId()const
{
	return realTenantId_;
}

void GetThingScriptRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string GetThingScriptRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void GetThingScriptRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string GetThingScriptRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetThingScriptRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetThingScriptRequest::getProductKey()const
{
	return productKey_;
}

void GetThingScriptRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GetThingScriptRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetThingScriptRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetThingScriptRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetThingScriptRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

