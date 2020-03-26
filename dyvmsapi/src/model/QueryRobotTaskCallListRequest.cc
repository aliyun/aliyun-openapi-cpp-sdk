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

#include <alibabacloud/dyvmsapi/model/QueryRobotTaskCallListRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRobotTaskCallListRequest;

QueryRobotTaskCallListRequest::QueryRobotTaskCallListRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRobotTaskCallList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryRobotTaskCallListRequest::~QueryRobotTaskCallListRequest()
{}

long QueryRobotTaskCallListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRobotTaskCallListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryRobotTaskCallListRequest::getCalled()const
{
	return called_;
}

void QueryRobotTaskCallListRequest::setCalled(const std::string& called)
{
	called_ = called;
	setParameter("Called", called);
}

std::string QueryRobotTaskCallListRequest::getDialogCountTo()const
{
	return dialogCountTo_;
}

void QueryRobotTaskCallListRequest::setDialogCountTo(const std::string& dialogCountTo)
{
	dialogCountTo_ = dialogCountTo;
	setParameter("DialogCountTo", dialogCountTo);
}

std::string QueryRobotTaskCallListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRobotTaskCallListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryRobotTaskCallListRequest::getDurationFrom()const
{
	return durationFrom_;
}

void QueryRobotTaskCallListRequest::setDurationFrom(const std::string& durationFrom)
{
	durationFrom_ = durationFrom;
	setParameter("DurationFrom", durationFrom);
}

int QueryRobotTaskCallListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryRobotTaskCallListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryRobotTaskCallListRequest::getTaskId()const
{
	return taskId_;
}

void QueryRobotTaskCallListRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string QueryRobotTaskCallListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRobotTaskCallListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryRobotTaskCallListRequest::getDialogCountFrom()const
{
	return dialogCountFrom_;
}

void QueryRobotTaskCallListRequest::setDialogCountFrom(const std::string& dialogCountFrom)
{
	dialogCountFrom_ = dialogCountFrom;
	setParameter("DialogCountFrom", dialogCountFrom);
}

std::string QueryRobotTaskCallListRequest::getDurationTo()const
{
	return durationTo_;
}

void QueryRobotTaskCallListRequest::setDurationTo(const std::string& durationTo)
{
	durationTo_ = durationTo;
	setParameter("DurationTo", durationTo);
}

std::string QueryRobotTaskCallListRequest::getHangupDirection()const
{
	return hangupDirection_;
}

void QueryRobotTaskCallListRequest::setHangupDirection(const std::string& hangupDirection)
{
	hangupDirection_ = hangupDirection;
	setParameter("HangupDirection", hangupDirection);
}

long QueryRobotTaskCallListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRobotTaskCallListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int QueryRobotTaskCallListRequest::getPageNo()const
{
	return pageNo_;
}

void QueryRobotTaskCallListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string QueryRobotTaskCallListRequest::getCallResult()const
{
	return callResult_;
}

void QueryRobotTaskCallListRequest::setCallResult(const std::string& callResult)
{
	callResult_ = callResult;
	setParameter("CallResult", callResult);
}

