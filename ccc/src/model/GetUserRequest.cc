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

#include <alibabacloud/ccc/model/GetUserRequest.h>

using AlibabaCloud::CCC::Model::GetUserRequest;

GetUserRequest::GetUserRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetUser")
{}

GetUserRequest::~GetUserRequest()
{}

std::string GetUserRequest::getInstanceId()const
{
	return instanceId_;
}

void GetUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetUserRequest::getUserId()const
{
	return userId_;
}

void GetUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string GetUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

