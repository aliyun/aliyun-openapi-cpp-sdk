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

#include <alibabacloud/ccc/model/ListJobsByGroupRequest.h>

using AlibabaCloud::CCC::Model::ListJobsByGroupRequest;

ListJobsByGroupRequest::ListJobsByGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListJobsByGroup")
{}

ListJobsByGroupRequest::~ListJobsByGroupRequest()
{}

std::string ListJobsByGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ListJobsByGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListJobsByGroupRequest::getJobFailureReason()const
{
	return jobFailureReason_;
}

void ListJobsByGroupRequest::setJobFailureReason(const std::string& jobFailureReason)
{
	jobFailureReason_ = jobFailureReason;
	setParameter("JobFailureReason", jobFailureReason);
}

std::string ListJobsByGroupRequest::getJobStatus()const
{
	return jobStatus_;
}

void ListJobsByGroupRequest::setJobStatus(const std::string& jobStatus)
{
	jobStatus_ = jobStatus;
	setParameter("JobStatus", jobStatus);
}

std::string ListJobsByGroupRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ListJobsByGroupRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

int ListJobsByGroupRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobsByGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListJobsByGroupRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobsByGroupRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

