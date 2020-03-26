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

#include <alibabacloud/ccc/model/GetJobListRequest.h>

using AlibabaCloud::CCC::Model::GetJobListRequest;

GetJobListRequest::GetJobListRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetJobList")
{
	setMethod(HttpRequest::Method::Post);
}

GetJobListRequest::~GetJobListRequest()
{}

int GetJobListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetJobListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

bool GetJobListRequest::getQueryAll()const
{
	return queryAll_;
}

void GetJobListRequest::setQueryAll(bool queryAll)
{
	queryAll_ = queryAll;
	setParameter("QueryAll", queryAll ? "true" : "false");
}

std::string GetJobListRequest::getInstanceId()const
{
	return instanceId_;
}

void GetJobListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetJobListRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void GetJobListRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

int GetJobListRequest::getPageSize()const
{
	return pageSize_;
}

void GetJobListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int GetJobListRequest::getStatus()const
{
	return status_;
}

void GetJobListRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

