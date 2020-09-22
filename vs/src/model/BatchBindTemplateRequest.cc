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

#include <alibabacloud/vs/model/BatchBindTemplateRequest.h>

using AlibabaCloud::Vs::Model::BatchBindTemplateRequest;

BatchBindTemplateRequest::BatchBindTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchBindTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

BatchBindTemplateRequest::~BatchBindTemplateRequest()
{}

bool BatchBindTemplateRequest::getReplace()const
{
	return replace_;
}

void BatchBindTemplateRequest::setReplace(bool replace)
{
	replace_ = replace;
	setParameter("Replace", replace ? "true" : "false");
}

std::string BatchBindTemplateRequest::getInstanceType()const
{
	return instanceType_;
}

void BatchBindTemplateRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string BatchBindTemplateRequest::getShowLog()const
{
	return showLog_;
}

void BatchBindTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

bool BatchBindTemplateRequest::getApplyAll()const
{
	return applyAll_;
}

void BatchBindTemplateRequest::setApplyAll(bool applyAll)
{
	applyAll_ = applyAll;
	setParameter("ApplyAll", applyAll ? "true" : "false");
}

long BatchBindTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchBindTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchBindTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void BatchBindTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string BatchBindTemplateRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchBindTemplateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

