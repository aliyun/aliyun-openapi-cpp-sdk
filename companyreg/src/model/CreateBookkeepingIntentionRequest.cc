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

#include <alibabacloud/companyreg/model/CreateBookkeepingIntentionRequest.h>

using AlibabaCloud::Companyreg::Model::CreateBookkeepingIntentionRequest;

CreateBookkeepingIntentionRequest::CreateBookkeepingIntentionRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "CreateBookkeepingIntention")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBookkeepingIntentionRequest::~CreateBookkeepingIntentionRequest()
{}

std::string CreateBookkeepingIntentionRequest::getArea()const
{
	return area_;
}

void CreateBookkeepingIntentionRequest::setArea(const std::string& area)
{
	area_ = area;
	setParameter("Area", area);
}

std::string CreateBookkeepingIntentionRequest::getMobile()const
{
	return mobile_;
}

void CreateBookkeepingIntentionRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

std::string CreateBookkeepingIntentionRequest::getChannel()const
{
	return channel_;
}

void CreateBookkeepingIntentionRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string CreateBookkeepingIntentionRequest::getDescription()const
{
	return description_;
}

void CreateBookkeepingIntentionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateBookkeepingIntentionRequest::getToken()const
{
	return token_;
}

void CreateBookkeepingIntentionRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string CreateBookkeepingIntentionRequest::getVerifyCode()const
{
	return verifyCode_;
}

void CreateBookkeepingIntentionRequest::setVerifyCode(const std::string& verifyCode)
{
	verifyCode_ = verifyCode;
	setParameter("VerifyCode", verifyCode);
}

std::string CreateBookkeepingIntentionRequest::getUserName()const
{
	return userName_;
}

void CreateBookkeepingIntentionRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

