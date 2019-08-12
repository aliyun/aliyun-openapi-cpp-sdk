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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsSinceMidnightRequest.h>

using AlibabaCloud::CCC::Model::ListAgentSummaryReportsSinceMidnightRequest;

ListAgentSummaryReportsSinceMidnightRequest::ListAgentSummaryReportsSinceMidnightRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentSummaryReportsSinceMidnight")
{}

ListAgentSummaryReportsSinceMidnightRequest::~ListAgentSummaryReportsSinceMidnightRequest()
{}

std::string ListAgentSummaryReportsSinceMidnightRequest::getAgentIds()const
{
	return agentIds_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setAgentIds(const std::string& agentIds)
{
	agentIds_ = agentIds;
	setCoreParameter("AgentIds", std::to_string(agentIds));
}

std::string ListAgentSummaryReportsSinceMidnightRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ListAgentSummaryReportsSinceMidnightRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", std::to_string(skillGroupId));
}

int ListAgentSummaryReportsSinceMidnightRequest::getPageSize()const
{
	return pageSize_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListAgentSummaryReportsSinceMidnightRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListAgentSummaryReportsSinceMidnightRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

