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

#include <alibabacloud/ess/model/RecordLifecycleActionHeartbeatRequest.h>

using AlibabaCloud::Ess::Model::RecordLifecycleActionHeartbeatRequest;

RecordLifecycleActionHeartbeatRequest::RecordLifecycleActionHeartbeatRequest() :
	RpcServiceRequest("ess", "2014-08-28", "RecordLifecycleActionHeartbeat")
{
	setMethod(HttpRequest::Method::Post);
}

RecordLifecycleActionHeartbeatRequest::~RecordLifecycleActionHeartbeatRequest()
{}

std::string RecordLifecycleActionHeartbeatRequest::getLifecycleActionToken()const
{
	return lifecycleActionToken_;
}

void RecordLifecycleActionHeartbeatRequest::setLifecycleActionToken(const std::string& lifecycleActionToken)
{
	lifecycleActionToken_ = lifecycleActionToken;
	setParameter("LifecycleActionToken", lifecycleActionToken);
}

int RecordLifecycleActionHeartbeatRequest::getHeartbeatTimeout()const
{
	return heartbeatTimeout_;
}

void RecordLifecycleActionHeartbeatRequest::setHeartbeatTimeout(int heartbeatTimeout)
{
	heartbeatTimeout_ = heartbeatTimeout;
	setParameter("HeartbeatTimeout", std::to_string(heartbeatTimeout));
}

std::string RecordLifecycleActionHeartbeatRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RecordLifecycleActionHeartbeatRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RecordLifecycleActionHeartbeatRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RecordLifecycleActionHeartbeatRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RecordLifecycleActionHeartbeatRequest::getLifecycleHookId()const
{
	return lifecycleHookId_;
}

void RecordLifecycleActionHeartbeatRequest::setLifecycleHookId(const std::string& lifecycleHookId)
{
	lifecycleHookId_ = lifecycleHookId;
	setParameter("LifecycleHookId", lifecycleHookId);
}

std::string RecordLifecycleActionHeartbeatRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RecordLifecycleActionHeartbeatRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RecordLifecycleActionHeartbeatRequest::getOwnerId()const
{
	return ownerId_;
}

void RecordLifecycleActionHeartbeatRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

