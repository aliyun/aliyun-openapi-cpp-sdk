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
{
	setMethod(HttpRequest::Method::Post);
}

QueryCallDetailByTaskIdRequest::~QueryCallDetailByTaskIdRequest()
{}

long QueryCallDetailByTaskIdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCallDetailByTaskIdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryCallDetailByTaskIdRequest::getCallee()const
{
	return callee_;
}

void QueryCallDetailByTaskIdRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setParameter("Callee", callee);
}

std::string QueryCallDetailByTaskIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCallDetailByTaskIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryCallDetailByTaskIdRequest::getTaskId()const
{
	return taskId_;
}

void QueryCallDetailByTaskIdRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

long QueryCallDetailByTaskIdRequest::getQueryDate()const
{
	return queryDate_;
}

void QueryCallDetailByTaskIdRequest::setQueryDate(long queryDate)
{
	queryDate_ = queryDate;
	setParameter("QueryDate", std::to_string(queryDate));
}

std::string QueryCallDetailByTaskIdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCallDetailByTaskIdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QueryCallDetailByTaskIdRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCallDetailByTaskIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

