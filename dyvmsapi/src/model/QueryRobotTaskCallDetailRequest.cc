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

#include <alibabacloud/dyvmsapi/model/QueryRobotTaskCallDetailRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRobotTaskCallDetailRequest;

QueryRobotTaskCallDetailRequest::QueryRobotTaskCallDetailRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRobotTaskCallDetail")
{}

QueryRobotTaskCallDetailRequest::~QueryRobotTaskCallDetailRequest()
{}

long QueryRobotTaskCallDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRobotTaskCallDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long QueryRobotTaskCallDetailRequest::getQueryDate()const
{
	return queryDate_;
}

void QueryRobotTaskCallDetailRequest::setQueryDate(long queryDate)
{
	queryDate_ = queryDate;
	setCoreParameter("QueryDate", queryDate);
}

std::string QueryRobotTaskCallDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRobotTaskCallDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryRobotTaskCallDetailRequest::getCallee()const
{
	return callee_;
}

void QueryRobotTaskCallDetailRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setCoreParameter("Callee", callee);
}

long QueryRobotTaskCallDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRobotTaskCallDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long QueryRobotTaskCallDetailRequest::getTaskId()const
{
	return taskId_;
}

void QueryRobotTaskCallDetailRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string QueryRobotTaskCallDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRobotTaskCallDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

