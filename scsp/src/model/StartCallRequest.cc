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

#include <alibabacloud/scsp/model/StartCallRequest.h>

using AlibabaCloud::Scsp::Model::StartCallRequest;

StartCallRequest::StartCallRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "StartCall")
{
	setMethod(HttpRequest::Method::Post);
}

StartCallRequest::~StartCallRequest()
{}

std::string StartCallRequest::getClientToken()const
{
	return clientToken_;
}

void StartCallRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string StartCallRequest::getInstanceId()const
{
	return instanceId_;
}

void StartCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string StartCallRequest::getAccountName()const
{
	return accountName_;
}

void StartCallRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string StartCallRequest::getCaller()const
{
	return caller_;
}

void StartCallRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setBodyParameter("Caller", caller);
}

std::string StartCallRequest::getCallee()const
{
	return callee_;
}

void StartCallRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setBodyParameter("Callee", callee);
}

