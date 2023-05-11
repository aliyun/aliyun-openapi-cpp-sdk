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

#include <alibabacloud/alinlp/model/RequestDialogApiRequest.h>

using AlibabaCloud::Alinlp::Model::RequestDialogApiRequest;

RequestDialogApiRequest::RequestDialogApiRequest() :
	RpcServiceRequest("alinlp", "2020-06-29", "RequestDialogApi")
{
	setMethod(HttpRequest::Method::Post);
}

RequestDialogApiRequest::~RequestDialogApiRequest()
{}

std::string RequestDialogApiRequest::getBotProfile()const
{
	return botProfile_;
}

void RequestDialogApiRequest::setBotProfile(const std::string& botProfile)
{
	botProfile_ = botProfile;
	setBodyParameter("BotProfile", botProfile);
}

std::string RequestDialogApiRequest::getQuery()const
{
	return query_;
}

void RequestDialogApiRequest::setQuery(const std::string& query)
{
	query_ = query;
	setBodyParameter("Query", query);
}

std::string RequestDialogApiRequest::getUserProfile()const
{
	return userProfile_;
}

void RequestDialogApiRequest::setUserProfile(const std::string& userProfile)
{
	userProfile_ = userProfile;
	setBodyParameter("UserProfile", userProfile);
}

std::string RequestDialogApiRequest::getHistory()const
{
	return history_;
}

void RequestDialogApiRequest::setHistory(const std::string& history)
{
	history_ = history;
	setBodyParameter("History", history);
}

std::string RequestDialogApiRequest::getServiceCode()const
{
	return serviceCode_;
}

void RequestDialogApiRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

