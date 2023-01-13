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

#include <alibabacloud/iot/model/UpdateThingScriptRequest.h>

using AlibabaCloud::Iot::Model::UpdateThingScriptRequest;

UpdateThingScriptRequest::UpdateThingScriptRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateThingScript")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateThingScriptRequest::~UpdateThingScriptRequest()
{}

std::string UpdateThingScriptRequest::getRealTenantId()const
{
	return realTenantId_;
}

void UpdateThingScriptRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string UpdateThingScriptRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void UpdateThingScriptRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string UpdateThingScriptRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateThingScriptRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateThingScriptRequest::getScriptType()const
{
	return scriptType_;
}

void UpdateThingScriptRequest::setScriptType(const std::string& scriptType)
{
	scriptType_ = scriptType;
	setParameter("ScriptType", scriptType);
}

std::string UpdateThingScriptRequest::getProductKey()const
{
	return productKey_;
}

void UpdateThingScriptRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UpdateThingScriptRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateThingScriptRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateThingScriptRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateThingScriptRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateThingScriptRequest::getScriptContent()const
{
	return scriptContent_;
}

void UpdateThingScriptRequest::setScriptContent(const std::string& scriptContent)
{
	scriptContent_ = scriptContent;
	setParameter("ScriptContent", scriptContent);
}

