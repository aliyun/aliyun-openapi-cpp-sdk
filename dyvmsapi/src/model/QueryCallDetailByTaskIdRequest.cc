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

#include <alibabacloud/dyvmsapi/model/QueryCallDetailByTaskIdRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryCallDetailByTaskIdRequest;

QueryCallDetailByTaskIdRequest::QueryCallDetailByTaskIdRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryCallDetailByTaskId")
{}

QueryCallDetailByTaskIdRequest::~QueryCallDetailByTaskIdRequest()
{}

long QueryCallDetailByTaskIdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCallDetailByTaskIdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long QueryCallDetailByTaskIdRequest::getQueryDate()const
{
	return queryDate_;
}

void QueryCallDetailByTaskIdRequest::setQueryDate(long queryDate)
{
	queryDate_ = queryDate;
	setCoreParameter("QueryDate", queryDate);
}

std::string QueryCallDetailByTaskIdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCallDetailByTaskIdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryCallDetailByTaskIdRequest::getCallee()const
{
	return callee_;
}

void QueryCallDetailByTaskIdRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setCoreParameter("Callee", callee);
}

long QueryCallDetailByTaskIdRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCallDetailByTaskIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryCallDetailByTaskIdRequest::getTaskId()const
{
	return taskId_;
}

void QueryCallDetailByTaskIdRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string QueryCallDetailByTaskIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCallDetailByTaskIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

