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

#include <alibabacloud/scsp/model/StartChatWorkRequest.h>

using AlibabaCloud::Scsp::Model::StartChatWorkRequest;

StartChatWorkRequest::StartChatWorkRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "StartChatWork")
{
	setMethod(HttpRequest::Method::Post);
}

StartChatWorkRequest::~StartChatWorkRequest()
{}

std::string StartChatWorkRequest::getInstanceId()const
{
	return instanceId_;
}

void StartChatWorkRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string StartChatWorkRequest::getAccountName()const
{
	return accountName_;
}

void StartChatWorkRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string StartChatWorkRequest::getStationType()const
{
	return stationType_;
}

void StartChatWorkRequest::setStationType(const std::string& stationType)
{
	stationType_ = stationType;
	setBodyParameter("StationType", stationType);
}

int StartChatWorkRequest::getWorkType()const
{
	return workType_;
}

void StartChatWorkRequest::setWorkType(int workType)
{
	workType_ = workType;
	setBodyParameter("WorkType", std::to_string(workType));
}

std::string StartChatWorkRequest::getUserAgent()const
{
	return userAgent_;
}

void StartChatWorkRequest::setUserAgent(const std::string& userAgent)
{
	userAgent_ = userAgent;
	setBodyParameter("UserAgent", userAgent);
}

