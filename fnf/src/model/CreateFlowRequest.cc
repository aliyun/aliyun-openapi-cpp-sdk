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

#include <alibabacloud/fnf/model/CreateFlowRequest.h>

using AlibabaCloud::Fnf::Model::CreateFlowRequest;

CreateFlowRequest::CreateFlowRequest() :
	RpcServiceRequest("fnf", "2019-03-15", "CreateFlow")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFlowRequest::~CreateFlowRequest()
{}

std::string CreateFlowRequest::getDescription()const
{
	return description_;
}

void CreateFlowRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateFlowRequest::getType()const
{
	return type_;
}

void CreateFlowRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateFlowRequest::getRequestId()const
{
	return requestId_;
}

void CreateFlowRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateFlowRequest::getRoleArn()const
{
	return roleArn_;
}

void CreateFlowRequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setCoreParameter("RoleArn", roleArn);
}

std::string CreateFlowRequest::getName()const
{
	return name_;
}

void CreateFlowRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateFlowRequest::getDefinition()const
{
	return definition_;
}

void CreateFlowRequest::setDefinition(const std::string& definition)
{
	definition_ = definition;
	setCoreParameter("Definition", definition);
}

