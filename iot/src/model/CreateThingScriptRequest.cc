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

#include <alibabacloud/iot/model/CreateThingScriptRequest.h>

using AlibabaCloud::Iot::Model::CreateThingScriptRequest;

CreateThingScriptRequest::CreateThingScriptRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateThingScript")
{
	setMethod(HttpRequest::Method::Post);
}

CreateThingScriptRequest::~CreateThingScriptRequest()
{}

std::string CreateThingScriptRequest::getRealTenantId()const
{
	return realTenantId_;
}

void CreateThingScriptRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string CreateThingScriptRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void CreateThingScriptRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string CreateThingScriptRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateThingScriptRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateThingScriptRequest::getScriptType()const
{
	return scriptType_;
}

void CreateThingScriptRequest::setScriptType(const std::string& scriptType)
{
	scriptType_ = scriptType;
	setParameter("ScriptType", scriptType);
}

std::string CreateThingScriptRequest::getProductKey()const
{
	return productKey_;
}

void CreateThingScriptRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CreateThingScriptRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateThingScriptRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateThingScriptRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateThingScriptRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateThingScriptRequest::getScriptContent()const
{
	return scriptContent_;
}

void CreateThingScriptRequest::setScriptContent(const std::string& scriptContent)
{
	scriptContent_ = scriptContent;
	setParameter("ScriptContent", scriptContent);
}

