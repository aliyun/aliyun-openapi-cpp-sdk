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

#include <alibabacloud/idrsservice/model/CreateDepartmentRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateDepartmentRequest;

CreateDepartmentRequest::CreateDepartmentRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateDepartment")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDepartmentRequest::~CreateDepartmentRequest()
{}

std::string CreateDepartmentRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDepartmentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDepartmentRequest::getDescription()const
{
	return description_;
}

void CreateDepartmentRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDepartmentRequest::getLabel()const
{
	return label_;
}

void CreateDepartmentRequest::setLabel(const std::string& label)
{
	label_ = label;
	setParameter("Label", label);
}

std::string CreateDepartmentRequest::getName()const
{
	return name_;
}

void CreateDepartmentRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

