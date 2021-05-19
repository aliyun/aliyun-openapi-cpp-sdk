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

#include <alibabacloud/scsp/model/GrantRolesRequest.h>

using AlibabaCloud::Scsp::Model::GrantRolesRequest;

GrantRolesRequest::GrantRolesRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GrantRoles")
{
	setMethod(HttpRequest::Method::Post);
}

GrantRolesRequest::~GrantRolesRequest()
{}

std::string GrantRolesRequest::getClientToken()const
{
	return clientToken_;
}

void GrantRolesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string GrantRolesRequest::getInstanceId()const
{
	return instanceId_;
}

void GrantRolesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GrantRolesRequest::getAccountName()const
{
	return accountName_;
}

void GrantRolesRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::vector<long> GrantRolesRequest::getRoleId()const
{
	return roleId_;
}

void GrantRolesRequest::setRoleId(const std::vector<long>& roleId)
{
	roleId_ = roleId;
	for(int dep1 = 0; dep1!= roleId.size(); dep1++) {
		setBodyParameter("RoleId."+ std::to_string(dep1), std::to_string(roleId.at(dep1)));
	}
}

std::string GrantRolesRequest::get_Operator()const
{
	return _operator_;
}

void GrantRolesRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setBodyParameter("_Operator", _operator);
}

