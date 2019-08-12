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

#include <alibabacloud/ccc/model/ListSkillGroupSummaryReportsByIntervalRequest.h>

using AlibabaCloud::CCC::Model::ListSkillGroupSummaryReportsByIntervalRequest;

ListSkillGroupSummaryReportsByIntervalRequest::ListSkillGroupSummaryReportsByIntervalRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListSkillGroupSummaryReportsByInterval")
{}

ListSkillGroupSummaryReportsByIntervalRequest::~ListSkillGroupSummaryReportsByIntervalRequest()
{}

std::string ListSkillGroupSummaryReportsByIntervalRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListSkillGroupSummaryReportsByIntervalRequest::getSkillGroupIds()const
{
	return skillGroupIds_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setSkillGroupIds(const std::string& skillGroupIds)
{
	skillGroupIds_ = skillGroupIds;
	setCoreParameter("SkillGroupIds", skillGroupIds);
}

int ListSkillGroupSummaryReportsByIntervalRequest::getPageSize()const
{
	return pageSize_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListSkillGroupSummaryReportsByIntervalRequest::getEndTime()const
{
	return endTime_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ListSkillGroupSummaryReportsByIntervalRequest::getInterval()const
{
	return interval_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string ListSkillGroupSummaryReportsByIntervalRequest::getStartTime()const
{
	return startTime_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListSkillGroupSummaryReportsByIntervalRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListSkillGroupSummaryReportsByIntervalRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSkillGroupSummaryReportsByIntervalRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

