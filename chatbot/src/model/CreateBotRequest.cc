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

#include <alibabacloud/chatbot/model/CreateBotRequest.h>

using AlibabaCloud::Chatbot::Model::CreateBotRequest;

CreateBotRequest::CreateBotRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "CreateBot")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBotRequest::~CreateBotRequest()
{}

std::string CreateBotRequest::getRobotType()const
{
	return robotType_;
}

void CreateBotRequest::setRobotType(const std::string& robotType)
{
	robotType_ = robotType;
	setParameter("RobotType", robotType);
}

std::string CreateBotRequest::getTimeZone()const
{
	return timeZone_;
}

void CreateBotRequest::setTimeZone(const std::string& timeZone)
{
	timeZone_ = timeZone;
	setParameter("TimeZone", timeZone);
}

std::string CreateBotRequest::getAvatar()const
{
	return avatar_;
}

void CreateBotRequest::setAvatar(const std::string& avatar)
{
	avatar_ = avatar;
	setParameter("Avatar", avatar);
}

std::string CreateBotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateBotRequest::getLanguageCode()const
{
	return languageCode_;
}

void CreateBotRequest::setLanguageCode(const std::string& languageCode)
{
	languageCode_ = languageCode;
	setParameter("LanguageCode", languageCode);
}

std::string CreateBotRequest::getName()const
{
	return name_;
}

void CreateBotRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateBotRequest::getIntroduction()const
{
	return introduction_;
}

void CreateBotRequest::setIntroduction(const std::string& introduction)
{
	introduction_ = introduction;
	setParameter("Introduction", introduction);
}

