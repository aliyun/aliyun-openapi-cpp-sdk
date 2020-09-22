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

#include <alibabacloud/vs/model/BatchUnbindTemplateRequest.h>

using AlibabaCloud::Vs::Model::BatchUnbindTemplateRequest;

BatchUnbindTemplateRequest::BatchUnbindTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchUnbindTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

BatchUnbindTemplateRequest::~BatchUnbindTemplateRequest()
{}

std::string BatchUnbindTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void BatchUnbindTemplateRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", templateType);
}

std::string BatchUnbindTemplateRequest::getInstanceType()const
{
	return instanceType_;
}

void BatchUnbindTemplateRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string BatchUnbindTemplateRequest::getShowLog()const
{
	return showLog_;
}

void BatchUnbindTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchUnbindTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchUnbindTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchUnbindTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void BatchUnbindTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string BatchUnbindTemplateRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchUnbindTemplateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

