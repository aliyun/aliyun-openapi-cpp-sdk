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

#include <alibabacloud/vs/model/BatchBindTemplatesRequest.h>

using AlibabaCloud::Vs::Model::BatchBindTemplatesRequest;

BatchBindTemplatesRequest::BatchBindTemplatesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchBindTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

BatchBindTemplatesRequest::~BatchBindTemplatesRequest()
{}

bool BatchBindTemplatesRequest::getReplace()const
{
	return replace_;
}

void BatchBindTemplatesRequest::setReplace(bool replace)
{
	replace_ = replace;
	setParameter("Replace", replace ? "true" : "false");
}

std::string BatchBindTemplatesRequest::getTemplateType()const
{
	return templateType_;
}

void BatchBindTemplatesRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", templateType);
}

std::string BatchBindTemplatesRequest::getInstanceType()const
{
	return instanceType_;
}

void BatchBindTemplatesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string BatchBindTemplatesRequest::getShowLog()const
{
	return showLog_;
}

void BatchBindTemplatesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

bool BatchBindTemplatesRequest::getApplyAll()const
{
	return applyAll_;
}

void BatchBindTemplatesRequest::setApplyAll(bool applyAll)
{
	applyAll_ = applyAll;
	setParameter("ApplyAll", applyAll ? "true" : "false");
}

long BatchBindTemplatesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchBindTemplatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchBindTemplatesRequest::getTemplateId()const
{
	return templateId_;
}

void BatchBindTemplatesRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string BatchBindTemplatesRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchBindTemplatesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

