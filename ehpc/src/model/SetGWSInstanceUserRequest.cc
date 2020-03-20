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

#include <alibabacloud/ehpc/model/SetGWSInstanceUserRequest.h>

using AlibabaCloud::EHPC::Model::SetGWSInstanceUserRequest;

SetGWSInstanceUserRequest::SetGWSInstanceUserRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "SetGWSInstanceUser")
{
	setMethod(HttpRequest::Method::Get);
}

SetGWSInstanceUserRequest::~SetGWSInstanceUserRequest()
{}

std::string SetGWSInstanceUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetGWSInstanceUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetGWSInstanceUserRequest::getInstanceId()const
{
	return instanceId_;
}

void SetGWSInstanceUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string SetGWSInstanceUserRequest::getUserUid()const
{
	return userUid_;
}

void SetGWSInstanceUserRequest::setUserUid(const std::string& userUid)
{
	userUid_ = userUid;
	setParameter("UserUid", userUid);
}

std::string SetGWSInstanceUserRequest::getUserName()const
{
	return userName_;
}

void SetGWSInstanceUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

