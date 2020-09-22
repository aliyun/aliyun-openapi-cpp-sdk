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

#include <alibabacloud/vs/model/UnbindTemplateRequest.h>

using AlibabaCloud::Vs::Model::UnbindTemplateRequest;

UnbindTemplateRequest::UnbindTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UnbindTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindTemplateRequest::~UnbindTemplateRequest()
{}

std::string UnbindTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void UnbindTemplateRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", templateType);
}

std::string UnbindTemplateRequest::getInstanceType()const
{
	return instanceType_;
}

void UnbindTemplateRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string UnbindTemplateRequest::getShowLog()const
{
	return showLog_;
}

void UnbindTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long UnbindTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UnbindTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UnbindTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void UnbindTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string UnbindTemplateRequest::getInstanceId()const
{
	return instanceId_;
}

void UnbindTemplateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

