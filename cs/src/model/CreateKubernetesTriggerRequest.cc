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

#include <alibabacloud/cs/model/CreateKubernetesTriggerRequest.h>

using AlibabaCloud::CS::Model::CreateKubernetesTriggerRequest;

CreateKubernetesTriggerRequest::CreateKubernetesTriggerRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/triggers");
	setMethod(HttpRequest::Method::Post);
}

CreateKubernetesTriggerRequest::~CreateKubernetesTriggerRequest()
{}

std::string CreateKubernetesTriggerRequest::getRegionId()const
{
	return regionId_;
}

void CreateKubernetesTriggerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string CreateKubernetesTriggerRequest::getAction()const
{
	return action_;
}

void CreateKubernetesTriggerRequest::setAction(const std::string& action)
{
	action_ = action;
	setBodyParameter("Action", action);
}

std::string CreateKubernetesTriggerRequest::getClusterId()const
{
	return clusterId_;
}

void CreateKubernetesTriggerRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

std::string CreateKubernetesTriggerRequest::getType()const
{
	return type_;
}

void CreateKubernetesTriggerRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string CreateKubernetesTriggerRequest::getProjectId()const
{
	return projectId_;
}

void CreateKubernetesTriggerRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

