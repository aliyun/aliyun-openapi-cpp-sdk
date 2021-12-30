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

#include <alibabacloud/ccc/model/GetTURNCredentialsRequest.h>

using AlibabaCloud::CCC::Model::GetTURNCredentialsRequest;

GetTURNCredentialsRequest::GetTURNCredentialsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetTURNCredentials")
{
	setMethod(HttpRequest::Method::Post);
}

GetTURNCredentialsRequest::~GetTURNCredentialsRequest()
{}

std::string GetTURNCredentialsRequest::getInstanceId()const
{
	return instanceId_;
}

void GetTURNCredentialsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetTURNCredentialsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTURNCredentialsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetTURNCredentialsRequest::getUserName()const
{
	return userName_;
}

void GetTURNCredentialsRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

