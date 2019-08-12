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

#include <alibabacloud/imm/model/IndexTagRequest.h>

using AlibabaCloud::Imm::Model::IndexTagRequest;

IndexTagRequest::IndexTagRequest() :
	RpcServiceRequest("imm", "2017-09-06", "IndexTag")
{}

IndexTagRequest::~IndexTagRequest()
{}

std::string IndexTagRequest::getSrcUris()const
{
	return srcUris_;
}

void IndexTagRequest::setSrcUris(const std::string& srcUris)
{
	srcUris_ = srcUris;
	setCoreParameter("SrcUris", std::to_string(srcUris));
}

std::string IndexTagRequest::getRegionId()const
{
	return regionId_;
}

void IndexTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string IndexTagRequest::getModelId()const
{
	return modelId_;
}

void IndexTagRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", std::to_string(modelId));
}

std::string IndexTagRequest::getProject()const
{
	return project_;
}

void IndexTagRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string IndexTagRequest::getSetId()const
{
	return setId_;
}

void IndexTagRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string IndexTagRequest::getForce()const
{
	return force_;
}

void IndexTagRequest::setForce(const std::string& force)
{
	force_ = force;
	setCoreParameter("Force", std::to_string(force));
}

std::string IndexTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void IndexTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

