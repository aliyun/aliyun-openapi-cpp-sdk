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

#include <alibabacloud/dyvmsapi/model/QueryRobotTaskDetailRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRobotTaskDetailRequest;

QueryRobotTaskDetailRequest::QueryRobotTaskDetailRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRobotTaskDetail")
{
	setMethod(HttpRequest::Method::Post);
}

QueryRobotTaskDetailRequest::~QueryRobotTaskDetailRequest()
{}

long QueryRobotTaskDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRobotTaskDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryRobotTaskDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRobotTaskDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QueryRobotTaskDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRobotTaskDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryRobotTaskDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRobotTaskDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long QueryRobotTaskDetailRequest::getId()const
{
	return id_;
}

void QueryRobotTaskDetailRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

