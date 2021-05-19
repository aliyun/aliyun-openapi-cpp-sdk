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

#include <alibabacloud/scsp/model/UpdateAgentRequest.h>

using AlibabaCloud::Scsp::Model::UpdateAgentRequest;

UpdateAgentRequest::UpdateAgentRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "UpdateAgent")
{
	setMethod(HttpRequest::Method::Put);
}

UpdateAgentRequest::~UpdateAgentRequest()
{}

std::string UpdateAgentRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAgentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string UpdateAgentRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateAgentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string UpdateAgentRequest::getAccountName()const
{
	return accountName_;
}

void UpdateAgentRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string UpdateAgentRequest::getDisplayName()const
{
	return displayName_;
}

void UpdateAgentRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setBodyParameter("DisplayName", displayName);
}

std::vector<long> UpdateAgentRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void UpdateAgentRequest::setSkillGroupId(const std::vector<long>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int dep1 = 0; dep1!= skillGroupId.size(); dep1++) {
		setBodyParameter("SkillGroupId."+ std::to_string(dep1), std::to_string(skillGroupId.at(dep1)));
	}
}

std::vector<long> UpdateAgentRequest::getSkillGroupIdList()const
{
	return skillGroupIdList_;
}

void UpdateAgentRequest::setSkillGroupIdList(const std::vector<long>& skillGroupIdList)
{
	skillGroupIdList_ = skillGroupIdList;
	for(int dep1 = 0; dep1!= skillGroupIdList.size(); dep1++) {
		setBodyParameter("SkillGroupIdList."+ std::to_string(dep1), std::to_string(skillGroupIdList.at(dep1)));
	}
}

