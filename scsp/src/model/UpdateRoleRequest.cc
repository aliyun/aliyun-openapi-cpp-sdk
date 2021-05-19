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

#include <alibabacloud/scsp/model/UpdateRoleRequest.h>

using AlibabaCloud::Scsp::Model::UpdateRoleRequest;

UpdateRoleRequest::UpdateRoleRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "UpdateRole")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRoleRequest::~UpdateRoleRequest()
{}

std::string UpdateRoleRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateRoleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string UpdateRoleRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateRoleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long UpdateRoleRequest::getRoleId()const
{
	return roleId_;
}

void UpdateRoleRequest::setRoleId(long roleId)
{
	roleId_ = roleId;
	setBodyParameter("RoleId", std::to_string(roleId));
}

std::string UpdateRoleRequest::getRoleName()const
{
	return roleName_;
}

void UpdateRoleRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setBodyParameter("RoleName", roleName);
}

std::vector<long> UpdateRoleRequest::getPermissionId()const
{
	return permissionId_;
}

void UpdateRoleRequest::setPermissionId(const std::vector<long>& permissionId)
{
	permissionId_ = permissionId;
	for(int dep1 = 0; dep1!= permissionId.size(); dep1++) {
		setBodyParameter("PermissionId."+ std::to_string(dep1), std::to_string(permissionId.at(dep1)));
	}
}

std::string UpdateRoleRequest::get_Operator()const
{
	return _operator_;
}

void UpdateRoleRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setBodyParameter("_Operator", _operator);
}

