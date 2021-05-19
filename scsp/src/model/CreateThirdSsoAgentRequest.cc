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

#include <alibabacloud/scsp/model/CreateThirdSsoAgentRequest.h>

using AlibabaCloud::Scsp::Model::CreateThirdSsoAgentRequest;

CreateThirdSsoAgentRequest::CreateThirdSsoAgentRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateThirdSsoAgent")
{
	setMethod(HttpRequest::Method::Post);
}

CreateThirdSsoAgentRequest::~CreateThirdSsoAgentRequest()
{}

std::string CreateThirdSsoAgentRequest::getClientToken()const
{
	return clientToken_;
}

void CreateThirdSsoAgentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateThirdSsoAgentRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateThirdSsoAgentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string CreateThirdSsoAgentRequest::getClientId()const
{
	return clientId_;
}

void CreateThirdSsoAgentRequest::setClientId(const std::string& clientId)
{
	clientId_ = clientId;
	setBodyParameter("ClientId", clientId);
}

std::string CreateThirdSsoAgentRequest::getAccountId()const
{
	return accountId_;
}

void CreateThirdSsoAgentRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setBodyParameter("AccountId", accountId);
}

std::string CreateThirdSsoAgentRequest::getAccountName()const
{
	return accountName_;
}

void CreateThirdSsoAgentRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string CreateThirdSsoAgentRequest::getDisplayName()const
{
	return displayName_;
}

void CreateThirdSsoAgentRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setBodyParameter("DisplayName", displayName);
}

Array CreateThirdSsoAgentRequest::getSkillGroupIds()const
{
	return skillGroupIds_;
}

void CreateThirdSsoAgentRequest::setSkillGroupIds(const Array& skillGroupIds)
{
	skillGroupIds_ = skillGroupIds;
	for(int dep1 = 0; dep1!= skillGroupIds.size(); dep1++) {
		auto skillGroupIdsObj = skillGroupIds.at(dep1);
		std::string skillGroupIdsObjStr = "SkillGroupIds." + std::to_string(dep1 + 1);
		setParameter(skillGroupIdsObjStr + ".SkillGroupIds", std::to_string(skillGroupIdsObj.skillGroupIds));
	}
}

Array CreateThirdSsoAgentRequest::getRoleIds()const
{
	return roleIds_;
}

void CreateThirdSsoAgentRequest::setRoleIds(const Array& roleIds)
{
	roleIds_ = roleIds;
	for(int dep1 = 0; dep1!= roleIds.size(); dep1++) {
		auto roleIdsObj = roleIds.at(dep1);
		std::string roleIdsObjStr = "RoleIds." + std::to_string(dep1 + 1);
		setParameter(roleIdsObjStr + ".RoleIds", std::to_string(roleIdsObj.roleIds));
	}
}

