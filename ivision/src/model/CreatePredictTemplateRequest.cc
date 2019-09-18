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

#include <alibabacloud/ivision/model/CreatePredictTemplateRequest.h>

using AlibabaCloud::Ivision::Model::CreatePredictTemplateRequest;

CreatePredictTemplateRequest::CreatePredictTemplateRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreatePredictTemplate")
{}

CreatePredictTemplateRequest::~CreatePredictTemplateRequest()
{}

std::string CreatePredictTemplateRequest::getDescription()const
{
	return description_;
}

void CreatePredictTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreatePredictTemplateRequest::getOutput()const
{
	return output_;
}

void CreatePredictTemplateRequest::setOutput(const std::string& output)
{
	output_ = output;
	setCoreParameter("Output", output);
}

std::string CreatePredictTemplateRequest::getShowLog()const
{
	return showLog_;
}

void CreatePredictTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long CreatePredictTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePredictTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePredictTemplateRequest::getModelIds()const
{
	return modelIds_;
}

void CreatePredictTemplateRequest::setModelIds(const std::string& modelIds)
{
	modelIds_ = modelIds;
	setCoreParameter("ModelIds", modelIds);
}

std::string CreatePredictTemplateRequest::getName()const
{
	return name_;
}

void CreatePredictTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int CreatePredictTemplateRequest::getInterval()const
{
	return interval_;
}

void CreatePredictTemplateRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

