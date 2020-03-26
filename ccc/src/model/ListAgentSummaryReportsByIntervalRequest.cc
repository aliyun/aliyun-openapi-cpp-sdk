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
{
	setMethod(HttpRequest::Method::Post);
}

ListAgentSummaryReportsByIntervalRequest::~ListAgentSummaryReportsByIntervalRequest()
{}

std::string ListAgentSummaryReportsByIntervalRequest::getAgentIds()const
{
	return agentIds_;
}

void ListAgentSummaryReportsByIntervalRequest::setAgentIds(const std::string& agentIds)
{
	agentIds_ = agentIds;
	setParameter("AgentIds", agentIds);
}

std::string ListAgentSummaryReportsByIntervalRequest::getEndTime()const
{
	return endTime_;
}

void ListAgentSummaryReportsByIntervalRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string ListAgentSummaryReportsByIntervalRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentSummaryReportsByIntervalRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int ListAgentSummaryReportsByIntervalRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAgentSummaryReportsByIntervalRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListAgentSummaryReportsByIntervalRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentSummaryReportsByIntervalRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListAgentSummaryReportsByIntervalRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentSummaryReportsByIntervalRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListAgentSummaryReportsByIntervalRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListAgentSummaryReportsByIntervalRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

int ListAgentSummaryReportsByIntervalRequest::getPageSize()const
{
	return pageSize_;
}

void ListAgentSummaryReportsByIntervalRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListAgentSummaryReportsByIntervalRequest::getInterval()const
{
	return interval_;
}

void ListAgentSummaryReportsByIntervalRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

