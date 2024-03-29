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

#include <alibabacloud/dyvmsapi/model/ListCallTaskDetailRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ListCallTaskDetailRequest;

ListCallTaskDetailRequest::ListCallTaskDetailRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ListCallTaskDetail")
{
	setMethod(HttpRequest::Method::Post);
}

ListCallTaskDetailRequest::~ListCallTaskDetailRequest()
{}

long ListCallTaskDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListCallTaskDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListCallTaskDetailRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCallTaskDetailRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCallTaskDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCallTaskDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListCallTaskDetailRequest::getPageSize()const
{
	return pageSize_;
}

void ListCallTaskDetailRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListCallTaskDetailRequest::getCalledNum()const
{
	return calledNum_;
}

void ListCallTaskDetailRequest::setCalledNum(const std::string& calledNum)
{
	calledNum_ = calledNum;
	setParameter("CalledNum", calledNum);
}

long ListCallTaskDetailRequest::getTaskId()const
{
	return taskId_;
}

void ListCallTaskDetailRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

std::string ListCallTaskDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListCallTaskDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ListCallTaskDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void ListCallTaskDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListCallTaskDetailRequest::getStatus()const
{
	return status_;
}

void ListCallTaskDetailRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

