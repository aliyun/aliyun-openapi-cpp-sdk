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

#include <alibabacloud/scsp/model/CreateAgentRequest.h>

using AlibabaCloud::Scsp::Model::CreateAgentRequest;

CreateAgentRequest::CreateAgentRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateAgent")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAgentRequest::~CreateAgentRequest()
{}

std::string CreateAgentRequest::getClientToken()const
{
	return clientToken_;
}

void CreateAgentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateAgentRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateAgentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string CreateAgentRequest::getAccountName()const
{
	return accountName_;
}

void CreateAgentRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string CreateAgentRequest::getDisplayName()const
{
	return displayName_;
}

void CreateAgentRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setBodyParameter("DisplayName", displayName);
}

Array CreateAgentRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void CreateAgentRequest::setSkillGroupId(const Array& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int dep1 = 0; dep1!= skillGroupId.size(); dep1++) {
		auto skillGroupIdObj = skillGroupId.at(dep1);
		std::string skillGroupIdObjStr = "SkillGroupId." + std::to_string(dep1 + 1);
		setParameter(skillGroupIdObjStr + ".SkillGroupId", std::to_string(skillGroupIdObj.skillGroupId));
	}
}

Array CreateAgentRequest::getSkillGroupIdList()const
{
	return skillGroupIdList_;
}

void CreateAgentRequest::setSkillGroupIdList(const Array& skillGroupIdList)
{
	skillGroupIdList_ = skillGroupIdList;
	for(int dep1 = 0; dep1!= skillGroupIdList.size(); dep1++) {
		auto skillGroupIdListObj = skillGroupIdList.at(dep1);
		std::string skillGroupIdListObjStr = "SkillGroupIdList." + std::to_string(dep1 + 1);
		setParameter(skillGroupIdListObjStr + ".SkillGroupIdList", std::to_string(skillGroupIdListObj.skillGroupIdList));
	}
}

