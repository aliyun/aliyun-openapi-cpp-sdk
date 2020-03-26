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

#include <alibabacloud/ccc/model/ListAgentStatesRequest.h>

using AlibabaCloud::CCC::Model::ListAgentStatesRequest;

ListAgentStatesRequest::ListAgentStatesRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentStates")
{
	setMethod(HttpRequest::Method::Post);
}

ListAgentStatesRequest::~ListAgentStatesRequest()
{}

std::string ListAgentStatesRequest::getAgentIds()const
{
	return agentIds_;
}

void ListAgentStatesRequest::setAgentIds(const std::string& agentIds)
{
	agentIds_ = agentIds;
	setParameter("AgentIds", agentIds);
}

int ListAgentStatesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAgentStatesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListAgentStatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentStatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListAgentStatesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentStatesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListAgentStatesRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListAgentStatesRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

int ListAgentStatesRequest::getPageSize()const
{
	return pageSize_;
}

void ListAgentStatesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListAgentStatesRequest::getState()const
{
	return state_;
}

void ListAgentStatesRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

