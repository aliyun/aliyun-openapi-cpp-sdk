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

#include <alibabacloud/ehpc/model/ListTasksRequest.h>

using AlibabaCloud::EHPC::Model::ListTasksRequest;

ListTasksRequest::ListTasksRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListTasks")
{
	setMethod(HttpRequest::Method::Get);
}

ListTasksRequest::~ListTasksRequest()
{}

std::string ListTasksRequest::getClusterId()const
{
	return clusterId_;
}

void ListTasksRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool ListTasksRequest::getArchived()const
{
	return archived_;
}

void ListTasksRequest::setArchived(bool archived)
{
	archived_ = archived;
	setParameter("Archived", archived ? "true" : "false");
}

int ListTasksRequest::getPageSize()const
{
	return pageSize_;
}

void ListTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTasksRequest::getTaskId()const
{
	return taskId_;
}

void ListTasksRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

