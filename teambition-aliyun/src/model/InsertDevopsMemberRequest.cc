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

#include <alibabacloud/teambition-aliyun/model/InsertDevopsMemberRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::InsertDevopsMemberRequest;

InsertDevopsMemberRequest::InsertDevopsMemberRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "InsertDevopsMember")
{
	setMethod(HttpRequest::Method::Post);
}

InsertDevopsMemberRequest::~InsertDevopsMemberRequest()
{}

std::string InsertDevopsMemberRequest::getPhone()const
{
	return phone_;
}

void InsertDevopsMemberRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setBodyParameter("Phone", phone);
}

std::string InsertDevopsMemberRequest::getUserPk()const
{
	return userPk_;
}

void InsertDevopsMemberRequest::setUserPk(const std::string& userPk)
{
	userPk_ = userPk;
	setBodyParameter("UserPk", userPk);
}

std::string InsertDevopsMemberRequest::getEmail()const
{
	return email_;
}

void InsertDevopsMemberRequest::setEmail(const std::string& email)
{
	email_ = email;
	setBodyParameter("Email", email);
}

std::string InsertDevopsMemberRequest::getUserName()const
{
	return userName_;
}

void InsertDevopsMemberRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setBodyParameter("UserName", userName);
}

