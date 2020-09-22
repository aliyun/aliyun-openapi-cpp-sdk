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

#include <alibabacloud/vs/model/BindTemplateRequest.h>

using AlibabaCloud::Vs::Model::BindTemplateRequest;

BindTemplateRequest::BindTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BindTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

BindTemplateRequest::~BindTemplateRequest()
{}

bool BindTemplateRequest::getReplace()const
{
	return replace_;
}

void BindTemplateRequest::setReplace(bool replace)
{
	replace_ = replace;
	setParameter("Replace", replace ? "true" : "false");
}

std::string BindTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void BindTemplateRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", templateType);
}

std::string BindTemplateRequest::getInstanceType()const
{
	return instanceType_;
}

void BindTemplateRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string BindTemplateRequest::getShowLog()const
{
	return showLog_;
}

void BindTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

bool BindTemplateRequest::getApplyAll()const
{
	return applyAll_;
}

void BindTemplateRequest::setApplyAll(bool applyAll)
{
	applyAll_ = applyAll;
	setParameter("ApplyAll", applyAll ? "true" : "false");
}

long BindTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void BindTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void BindTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string BindTemplateRequest::getInstanceId()const
{
	return instanceId_;
}

void BindTemplateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

