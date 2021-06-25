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

#include <alibabacloud/outboundbot/model/QueryJobsWithResultRequest.h>

using AlibabaCloud::OutboundBot::Model::QueryJobsWithResultRequest;

QueryJobsWithResultRequest::QueryJobsWithResultRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "QueryJobsWithResult")
{
	setMethod(HttpRequest::Method::Post);
}

QueryJobsWithResultRequest::~QueryJobsWithResultRequest()
{}

bool QueryJobsWithResultRequest::getHasReachedEndOfFlowFilter()const
{
	return hasReachedEndOfFlowFilter_;
}

void QueryJobsWithResultRequest::setHasReachedEndOfFlowFilter(bool hasReachedEndOfFlowFilter)
{
	hasReachedEndOfFlowFilter_ = hasReachedEndOfFlowFilter;
	setParameter("HasReachedEndOfFlowFilter", hasReachedEndOfFlowFilter ? "true" : "false");
}

bool QueryJobsWithResultRequest::getHasAnsweredFilter()const
{
	return hasAnsweredFilter_;
}

void QueryJobsWithResultRequest::setHasAnsweredFilter(bool hasAnsweredFilter)
{
	hasAnsweredFilter_ = hasAnsweredFilter;
	setParameter("HasAnsweredFilter", hasAnsweredFilter ? "true" : "false");
}

int QueryJobsWithResultRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryJobsWithResultRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryJobsWithResultRequest::getQueryText()const
{
	return queryText_;
}

void QueryJobsWithResultRequest::setQueryText(const std::string& queryText)
{
	queryText_ = queryText;
	setParameter("QueryText", queryText);
}

bool QueryJobsWithResultRequest::getHasHangUpByRejectionFilter()const
{
	return hasHangUpByRejectionFilter_;
}

void QueryJobsWithResultRequest::setHasHangUpByRejectionFilter(bool hasHangUpByRejectionFilter)
{
	hasHangUpByRejectionFilter_ = hasHangUpByRejectionFilter;
	setParameter("HasHangUpByRejectionFilter", hasHangUpByRejectionFilter ? "true" : "false");
}

std::string QueryJobsWithResultRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryJobsWithResultRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryJobsWithResultRequest::getJobStatusFilter()const
{
	return jobStatusFilter_;
}

void QueryJobsWithResultRequest::setJobStatusFilter(const std::string& jobStatusFilter)
{
	jobStatusFilter_ = jobStatusFilter;
	setParameter("JobStatusFilter", jobStatusFilter);
}

int QueryJobsWithResultRequest::getPageSize()const
{
	return pageSize_;
}

void QueryJobsWithResultRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryJobsWithResultRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void QueryJobsWithResultRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

