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

#include <alibabacloud/iot/model/SaveScriptRequest.h>

using AlibabaCloud::Iot::Model::SaveScriptRequest;

SaveScriptRequest::SaveScriptRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SaveScript")
{
	setMethod(HttpRequest::Method::Post);
}

SaveScriptRequest::~SaveScriptRequest()
{}

std::string SaveScriptRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SaveScriptRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string SaveScriptRequest::getScriptDraft()const
{
	return scriptDraft_;
}

void SaveScriptRequest::setScriptDraft(const std::string& scriptDraft)
{
	scriptDraft_ = scriptDraft;
	setParameter("ScriptDraft", scriptDraft);
}

long SaveScriptRequest::getParserId()const
{
	return parserId_;
}

void SaveScriptRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string SaveScriptRequest::getApiProduct()const
{
	return apiProduct_;
}

void SaveScriptRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SaveScriptRequest::getApiRevision()const
{
	return apiRevision_;
}

void SaveScriptRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

