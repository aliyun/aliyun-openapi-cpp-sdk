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

#include <alibabacloud/teambition-aliyun/model/CreateProjectRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "CreateProject")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest()
{}

std::string CreateProjectRequest::getName()const
{
	return name_;
}

void CreateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateProjectRequest::getDescription()const
{
	return description_;
}

void CreateProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateProjectRequest::getOrgId()const
{
	return orgId_;
}

void CreateProjectRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

