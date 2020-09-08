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

#include <alibabacloud/tdsr/model/CreateProjectRequest.h>

using AlibabaCloud::Tdsr::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RpcServiceRequest("tdsr", "2020-01-01", "CreateProject")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest()
{}

std::string CreateProjectRequest::getBusinessUserIdList()const
{
	return businessUserIdList_;
}

void CreateProjectRequest::setBusinessUserIdList(const std::string& businessUserIdList)
{
	businessUserIdList_ = businessUserIdList;
	setParameter("BusinessUserIdList", businessUserIdList);
}

std::string CreateProjectRequest::getBuilderUserIdList()const
{
	return builderUserIdList_;
}

void CreateProjectRequest::setBuilderUserIdList(const std::string& builderUserIdList)
{
	builderUserIdList_ = builderUserIdList;
	setParameter("BuilderUserIdList", builderUserIdList);
}

std::string CreateProjectRequest::getName()const
{
	return name_;
}

void CreateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateProjectRequest::getBusinessId()const
{
	return businessId_;
}

void CreateProjectRequest::setBusinessId(const std::string& businessId)
{
	businessId_ = businessId;
	setParameter("BusinessId", businessId);
}

std::string CreateProjectRequest::getGatherUserIdList()const
{
	return gatherUserIdList_;
}

void CreateProjectRequest::setGatherUserIdList(const std::string& gatherUserIdList)
{
	gatherUserIdList_ = gatherUserIdList;
	setParameter("GatherUserIdList", gatherUserIdList);
}

