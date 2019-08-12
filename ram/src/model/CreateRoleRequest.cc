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

#include <alibabacloud/ram/model/CreateRoleRequest.h>

using AlibabaCloud::Ram::Model::CreateRoleRequest;

CreateRoleRequest::CreateRoleRequest() :
	RpcServiceRequest("ram", "2015-05-01", "CreateRole")
{}

CreateRoleRequest::~CreateRoleRequest()
{}

std::string CreateRoleRequest::getRoleName()const
{
	return roleName_;
}

void CreateRoleRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setCoreParameter("RoleName", roleName);
}

std::string CreateRoleRequest::getDescription()const
{
	return description_;
}

void CreateRoleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateRoleRequest::getAssumeRolePolicyDocument()const
{
	return assumeRolePolicyDocument_;
}

void CreateRoleRequest::setAssumeRolePolicyDocument(const std::string& assumeRolePolicyDocument)
{
	assumeRolePolicyDocument_ = assumeRolePolicyDocument;
	setCoreParameter("AssumeRolePolicyDocument", assumeRolePolicyDocument);
}

