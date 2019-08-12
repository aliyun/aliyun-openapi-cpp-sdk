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

#include <alibabacloud/emr/model/ListJobExecutionPlanHierarchyRequest.h>

using AlibabaCloud::Emr::Model::ListJobExecutionPlanHierarchyRequest;

ListJobExecutionPlanHierarchyRequest::ListJobExecutionPlanHierarchyRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListJobExecutionPlanHierarchy")
{}

ListJobExecutionPlanHierarchyRequest::~ListJobExecutionPlanHierarchyRequest()
{}

long ListJobExecutionPlanHierarchyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListJobExecutionPlanHierarchyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ListJobExecutionPlanHierarchyRequest::getCurrentId()const
{
	return currentId_;
}

void ListJobExecutionPlanHierarchyRequest::setCurrentId(long currentId)
{
	currentId_ = currentId;
	setCoreParameter("CurrentId", currentId);
}

int ListJobExecutionPlanHierarchyRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobExecutionPlanHierarchyRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListJobExecutionPlanHierarchyRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobExecutionPlanHierarchyRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListJobExecutionPlanHierarchyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobExecutionPlanHierarchyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

