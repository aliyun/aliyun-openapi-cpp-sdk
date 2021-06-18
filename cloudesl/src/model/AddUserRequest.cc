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

#include <alibabacloud/cloudesl/model/AddUserRequest.h>

using AlibabaCloud::Cloudesl::Model::AddUserRequest;

AddUserRequest::AddUserRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "AddUser")
{
	setMethod(HttpRequest::Method::Post);
}

AddUserRequest::~AddUserRequest()
{}

std::string AddUserRequest::getExtraParams()const
{
	return extraParams_;
}

void AddUserRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string AddUserRequest::getClientToken()const
{
	return clientToken_;
}

void AddUserRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string AddUserRequest::getUserId()const
{
	return userId_;
}

void AddUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

