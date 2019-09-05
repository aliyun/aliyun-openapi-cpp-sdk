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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsRequest.h>

using AlibabaCloud::CCC::Model::ListAgentSummaryReportsRequest;

ListAgentSummaryReportsRequest::ListAgentSummaryReportsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentSummaryReports")
{}

ListAgentSummaryReportsRequest::~ListAgentSummaryReportsRequest()
{}

std::string ListAgentSummaryReportsRequest::getAgentIds()const
{
	return agentIds_;
}

void ListAgentSummaryReportsRequest::setAgentIds(const std::string& agentIds)
{
	agentIds_ = agentIds;
	setCoreParameter("AgentIds", agentIds);
}

std::string ListAgentSummaryReportsRequest::getEndTime()const
{
	return endTime_;
}

void ListAgentSummaryReportsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ListAgentSummaryReportsRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentSummaryReportsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListAgentSummaryReportsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAgentSummaryReportsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListAgentSummaryReportsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentSummaryReportsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListAgentSummaryReportsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentSummaryReportsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListAgentSummaryReportsRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListAgentSummaryReportsRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

int ListAgentSummaryReportsRequest::getPageSize()const
{
	return pageSize_;
}

void ListAgentSummaryReportsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

