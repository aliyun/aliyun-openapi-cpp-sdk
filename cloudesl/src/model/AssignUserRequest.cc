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

#include <alibabacloud/cloudesl/model/AssignUserRequest.h>

using AlibabaCloud::Cloudesl::Model::AssignUserRequest;

AssignUserRequest::AssignUserRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "AssignUser")
{
	setMethod(HttpRequest::Method::Post);
}

AssignUserRequest::~AssignUserRequest()
{}

std::string AssignUserRequest::getExtraParams()const
{
	return extraParams_;
}

void AssignUserRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string AssignUserRequest::getStores()const
{
	return stores_;
}

void AssignUserRequest::setStores(const std::string& stores)
{
	stores_ = stores;
	setBodyParameter("Stores", stores);
}

std::string AssignUserRequest::getUserType()const
{
	return userType_;
}

void AssignUserRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setBodyParameter("UserType", userType);
}

std::string AssignUserRequest::getUserId()const
{
	return userId_;
}

void AssignUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

