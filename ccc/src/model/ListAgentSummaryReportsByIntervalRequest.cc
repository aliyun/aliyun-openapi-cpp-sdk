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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsByIntervalRequest.h>

using AlibabaCloud::CCC::Model::ListAgentSummaryReportsByIntervalRequest;

ListAgentSummaryReportsByIntervalRequest::ListAgentSummaryReportsByIntervalRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentSummaryReportsByInterval")
{}

ListAgentSummaryReportsByIntervalRequest::~ListAgentSummaryReportsByIntervalRequest()
{}

std::string ListAgentSummaryReportsByIntervalRequest::getAgentIds()const
{
	return agentIds_;
}

void ListAgentSummaryReportsByIntervalRequest::setAgentIds(const std::string& agentIds)
{
	agentIds_ = agentIds;
	setCoreParameter("AgentIds", std::to_string(agentIds));
}

std::string ListAgentSummaryReportsByIntervalRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentSummaryReportsByIntervalRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ListAgentSummaryReportsByIntervalRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListAgentSummaryReportsByIntervalRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", std::to_string(skillGroupId));
}

int ListAgentSummaryReportsByIntervalRequest::getPageSize()const
{
	return pageSize_;
}

void ListAgentSummaryReportsByIntervalRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListAgentSummaryReportsByIntervalRequest::getEndTime()const
{
	return endTime_;
}

void ListAgentSummaryReportsByIntervalRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string ListAgentSummaryReportsByIntervalRequest::getInterval()const
{
	return interval_;
}

void ListAgentSummaryReportsByIntervalRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::string ListAgentSummaryReportsByIntervalRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentSummaryReportsByIntervalRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int ListAgentSummaryReportsByIntervalRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAgentSummaryReportsByIntervalRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListAgentSummaryReportsByIntervalRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentSummaryReportsByIntervalRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

