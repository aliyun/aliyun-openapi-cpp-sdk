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

#include <alibabacloud/cloudesl/model/DeleteRoleActionsRequest.h>

using AlibabaCloud::Cloudesl::Model::DeleteRoleActionsRequest;

DeleteRoleActionsRequest::DeleteRoleActionsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DeleteRoleActions")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteRoleActionsRequest::~DeleteRoleActionsRequest()
{}

std::string DeleteRoleActionsRequest::getRoleCode()const
{
	return roleCode_;
}

void DeleteRoleActionsRequest::setRoleCode(const std::string& roleCode)
{
	roleCode_ = roleCode;
	setBodyParameter("RoleCode", roleCode);
}

std::string DeleteRoleActionsRequest::getExtraParams()const
{
	return extraParams_;
}

void DeleteRoleActionsRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DeleteRoleActionsRequest::getAccessControlLists()const
{
	return accessControlLists_;
}

void DeleteRoleActionsRequest::setAccessControlLists(const std::string& accessControlLists)
{
	accessControlLists_ = accessControlLists;
	setBodyParameter("AccessControlLists", accessControlLists);
}

