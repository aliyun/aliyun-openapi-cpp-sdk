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

#include <alibabacloud/ram/model/UpdateRoleRequest.h>

using AlibabaCloud::Ram::Model::UpdateRoleRequest;

UpdateRoleRequest::UpdateRoleRequest() :
	RpcServiceRequest("ram", "2015-05-01", "UpdateRole")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRoleRequest::~UpdateRoleRequest()
{}

std::string UpdateRoleRequest::getNewAssumeRolePolicyDocument()const
{
	return newAssumeRolePolicyDocument_;
}

void UpdateRoleRequest::setNewAssumeRolePolicyDocument(const std::string& newAssumeRolePolicyDocument)
{
	newAssumeRolePolicyDocument_ = newAssumeRolePolicyDocument;
	setParameter("NewAssumeRolePolicyDocument", newAssumeRolePolicyDocument);
}

std::string UpdateRoleRequest::getRoleName()const
{
	return roleName_;
}

void UpdateRoleRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

long UpdateRoleRequest::getNewMaxSessionDuration()const
{
	return newMaxSessionDuration_;
}

void UpdateRoleRequest::setNewMaxSessionDuration(long newMaxSessionDuration)
{
	newMaxSessionDuration_ = newMaxSessionDuration;
	setParameter("NewMaxSessionDuration", std::to_string(newMaxSessionDuration));
}

