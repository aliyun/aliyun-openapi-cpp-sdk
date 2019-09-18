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

#include <alibabacloud/ivision/model/CreatePredictModelRequest.h>

using AlibabaCloud::Ivision::Model::CreatePredictModelRequest;

CreatePredictModelRequest::CreatePredictModelRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreatePredictModel")
{}

CreatePredictModelRequest::~CreatePredictModelRequest()
{}

std::string CreatePredictModelRequest::getRegions()const
{
	return regions_;
}

void CreatePredictModelRequest::setRegions(const std::string& regions)
{
	regions_ = regions;
	setCoreParameter("Regions", regions);
}

std::string CreatePredictModelRequest::getDescription()const
{
	return description_;
}

void CreatePredictModelRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreatePredictModelRequest::getSource()const
{
	return source_;
}

void CreatePredictModelRequest::setSource(const std::string& source)
{
	source_ = source;
	setCoreParameter("Source", source);
}

std::string CreatePredictModelRequest::getProjectId()const
{
	return projectId_;
}

void CreatePredictModelRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreatePredictModelRequest::getShowLog()const
{
	return showLog_;
}

void CreatePredictModelRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreatePredictModelRequest::getModelId()const
{
	return modelId_;
}

void CreatePredictModelRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

long CreatePredictModelRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePredictModelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePredictModelRequest::getName()const
{
	return name_;
}

void CreatePredictModelRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreatePredictModelRequest::getIterationId()const
{
	return iterationId_;
}

void CreatePredictModelRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

