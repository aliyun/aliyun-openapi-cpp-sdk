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

#include <alibabacloud/ram/model/AddUserToGroupRequest.h>

using AlibabaCloud::Ram::Model::AddUserToGroupRequest;

AddUserToGroupRequest::AddUserToGroupRequest() :
	RpcServiceRequest("ram", "2015-05-01", "AddUserToGroup")
{
	setMethod(HttpRequest::Method::Post);
}

AddUserToGroupRequest::~AddUserToGroupRequest()
{}

std::string AddUserToGroupRequest::getGroupName()const
{
	return groupName_;
}

void AddUserToGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string AddUserToGroupRequest::getUserName()const
{
	return userName_;
}

void AddUserToGroupRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

