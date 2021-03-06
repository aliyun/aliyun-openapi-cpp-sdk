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

#include <alibabacloud/scsp/model/ListAgentBySkillGroupIdRequest.h>

using AlibabaCloud::Scsp::Model::ListAgentBySkillGroupIdRequest;

ListAgentBySkillGroupIdRequest::ListAgentBySkillGroupIdRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "ListAgentBySkillGroupId")
{
	setMethod(HttpRequest::Method::Get);
}

ListAgentBySkillGroupIdRequest::~ListAgentBySkillGroupIdRequest()
{}

std::string ListAgentBySkillGroupIdRequest::getClientToken()const
{
	return clientToken_;
}

void ListAgentBySkillGroupIdRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListAgentBySkillGroupIdRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentBySkillGroupIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long ListAgentBySkillGroupIdRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListAgentBySkillGroupIdRequest::setSkillGroupId(long skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", std::to_string(skillGroupId));
}

