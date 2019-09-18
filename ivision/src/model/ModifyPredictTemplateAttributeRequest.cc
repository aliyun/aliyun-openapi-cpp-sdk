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

#include <alibabacloud/ivision/model/ModifyPredictTemplateAttributeRequest.h>

using AlibabaCloud::Ivision::Model::ModifyPredictTemplateAttributeRequest;

ModifyPredictTemplateAttributeRequest::ModifyPredictTemplateAttributeRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ModifyPredictTemplateAttribute")
{}

ModifyPredictTemplateAttributeRequest::~ModifyPredictTemplateAttributeRequest()
{}

std::string ModifyPredictTemplateAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyPredictTemplateAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyPredictTemplateAttributeRequest::getOutput()const
{
	return output_;
}

void ModifyPredictTemplateAttributeRequest::setOutput(const std::string& output)
{
	output_ = output;
	setCoreParameter("Output", output);
}

std::string ModifyPredictTemplateAttributeRequest::getShowLog()const
{
	return showLog_;
}

void ModifyPredictTemplateAttributeRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long ModifyPredictTemplateAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyPredictTemplateAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyPredictTemplateAttributeRequest::getTemplateId()const
{
	return templateId_;
}

void ModifyPredictTemplateAttributeRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string ModifyPredictTemplateAttributeRequest::getModelIds()const
{
	return modelIds_;
}

void ModifyPredictTemplateAttributeRequest::setModelIds(const std::string& modelIds)
{
	modelIds_ = modelIds;
	setCoreParameter("ModelIds", modelIds);
}

std::string ModifyPredictTemplateAttributeRequest::getName()const
{
	return name_;
}

void ModifyPredictTemplateAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int ModifyPredictTemplateAttributeRequest::getInterval()const
{
	return interval_;
}

void ModifyPredictTemplateAttributeRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

