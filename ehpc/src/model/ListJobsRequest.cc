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

#include <alibabacloud/ehpc/model/ListJobsRequest.h>

using AlibabaCloud::EHPC::Model::ListJobsRequest;

ListJobsRequest::ListJobsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListJobs")
{
	setMethod(HttpRequest::Method::Get);
}

ListJobsRequest::~ListJobsRequest()
{}

std::string ListJobsRequest::getOwner()const
{
	return owner_;
}

void ListJobsRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setCoreParameter("Owner", owner);
}

std::string ListJobsRequest::getClusterId()const
{
	return clusterId_;
}

void ListJobsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListJobsRequest::getRerunable()const
{
	return rerunable_;
}

void ListJobsRequest::setRerunable(const std::string& rerunable)
{
	rerunable_ = rerunable;
	setCoreParameter("Rerunable", rerunable);
}

int ListJobsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int ListJobsRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListJobsRequest::getState()const
{
	return state_;
}

void ListJobsRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

