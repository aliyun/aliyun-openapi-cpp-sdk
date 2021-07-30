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

#include <alibabacloud/dyvmsapi/model/ListRobotTaskCallsRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ListRobotTaskCallsRequest;

ListRobotTaskCallsRequest::ListRobotTaskCallsRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ListRobotTaskCalls")
{
	setMethod(HttpRequest::Method::Post);
}

ListRobotTaskCallsRequest::~ListRobotTaskCallsRequest()
{}

long ListRobotTaskCallsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListRobotTaskCallsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListRobotTaskCallsRequest::getCalled()const
{
	return called_;
}

void ListRobotTaskCallsRequest::setCalled(const std::string& called)
{
	called_ = called;
	setParameter("Called", called);
}

std::string ListRobotTaskCallsRequest::getDialogCountTo()const
{
	return dialogCountTo_;
}

void ListRobotTaskCallsRequest::setDialogCountTo(const std::string& dialogCountTo)
{
	dialogCountTo_ = dialogCountTo;
	setParameter("DialogCountTo", dialogCountTo);
}

std::string ListRobotTaskCallsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRobotTaskCallsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListRobotTaskCallsRequest::getDurationFrom()const
{
	return durationFrom_;
}

void ListRobotTaskCallsRequest::setDurationFrom(const std::string& durationFrom)
{
	durationFrom_ = durationFrom;
	setParameter("DurationFrom", durationFrom);
}

int ListRobotTaskCallsRequest::getPageSize()const
{
	return pageSize_;
}

void ListRobotTaskCallsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListRobotTaskCallsRequest::getTaskId()const
{
	return taskId_;
}

void ListRobotTaskCallsRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string ListRobotTaskCallsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListRobotTaskCallsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListRobotTaskCallsRequest::getDialogCountFrom()const
{
	return dialogCountFrom_;
}

void ListRobotTaskCallsRequest::setDialogCountFrom(const std::string& dialogCountFrom)
{
	dialogCountFrom_ = dialogCountFrom;
	setParameter("DialogCountFrom", dialogCountFrom);
}

std::string ListRobotTaskCallsRequest::getDurationTo()const
{
	return durationTo_;
}

void ListRobotTaskCallsRequest::setDurationTo(const std::string& durationTo)
{
	durationTo_ = durationTo;
	setParameter("DurationTo", durationTo);
}

std::string ListRobotTaskCallsRequest::getHangupDirection()const
{
	return hangupDirection_;
}

void ListRobotTaskCallsRequest::setHangupDirection(const std::string& hangupDirection)
{
	hangupDirection_ = hangupDirection;
	setParameter("HangupDirection", hangupDirection);
}

long ListRobotTaskCallsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListRobotTaskCallsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ListRobotTaskCallsRequest::getPageNo()const
{
	return pageNo_;
}

void ListRobotTaskCallsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string ListRobotTaskCallsRequest::getCallResult()const
{
	return callResult_;
}

void ListRobotTaskCallsRequest::setCallResult(const std::string& callResult)
{
	callResult_ = callResult;
	setParameter("CallResult", callResult);
}

