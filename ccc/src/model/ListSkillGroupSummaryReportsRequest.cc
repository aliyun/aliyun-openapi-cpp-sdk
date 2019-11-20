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

#include <alibabacloud/ccc/model/ListSkillGroupSummaryReportsRequest.h>

using AlibabaCloud::CCC::Model::ListSkillGroupSummaryReportsRequest;

ListSkillGroupSummaryReportsRequest::ListSkillGroupSummaryReportsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListSkillGroupSummaryReports")
{
	setMethod(HttpRequest::Method::Post);
}

ListSkillGroupSummaryReportsRequest::~ListSkillGroupSummaryReportsRequest()
{}

std::string ListSkillGroupSummaryReportsRequest::getEndTime()const
{
	return endTime_;
}

void ListSkillGroupSummaryReportsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ListSkillGroupSummaryReportsRequest::getStartTime()const
{
	return startTime_;
}

void ListSkillGroupSummaryReportsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListSkillGroupSummaryReportsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListSkillGroupSummaryReportsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListSkillGroupSummaryReportsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSkillGroupSummaryReportsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListSkillGroupSummaryReportsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSkillGroupSummaryReportsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListSkillGroupSummaryReportsRequest::getSkillGroupIds()const
{
	return skillGroupIds_;
}

void ListSkillGroupSummaryReportsRequest::setSkillGroupIds(const std::string& skillGroupIds)
{
	skillGroupIds_ = skillGroupIds;
	setCoreParameter("SkillGroupIds", skillGroupIds);
}

int ListSkillGroupSummaryReportsRequest::getPageSize()const
{
	return pageSize_;
}

void ListSkillGroupSummaryReportsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

