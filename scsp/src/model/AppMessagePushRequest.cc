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

#include <alibabacloud/scsp/model/AppMessagePushRequest.h>

using AlibabaCloud::Scsp::Model::AppMessagePushRequest;

AppMessagePushRequest::AppMessagePushRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "AppMessagePush")
{
	setMethod(HttpRequest::Method::Post);
}

AppMessagePushRequest::~AppMessagePushRequest()
{}

std::string AppMessagePushRequest::getInstanceId()const
{
	return instanceId_;
}

void AppMessagePushRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long AppMessagePushRequest::getExpirationTime()const
{
	return expirationTime_;
}

void AppMessagePushRequest::setExpirationTime(long expirationTime)
{
	expirationTime_ = expirationTime;
	setParameter("ExpirationTime", std::to_string(expirationTime));
}

std::string AppMessagePushRequest::getUserId()const
{
	return userId_;
}

void AppMessagePushRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

int AppMessagePushRequest::getStatus()const
{
	return status_;
}

void AppMessagePushRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

