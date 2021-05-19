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

#include <alibabacloud/scsp/model/SendHotlineHeartBeatRequest.h>

using AlibabaCloud::Scsp::Model::SendHotlineHeartBeatRequest;

SendHotlineHeartBeatRequest::SendHotlineHeartBeatRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "SendHotlineHeartBeat")
{
	setMethod(HttpRequest::Method::Post);
}

SendHotlineHeartBeatRequest::~SendHotlineHeartBeatRequest()
{}

std::string SendHotlineHeartBeatRequest::getClientToken()const
{
	return clientToken_;
}

void SendHotlineHeartBeatRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string SendHotlineHeartBeatRequest::getInstanceId()const
{
	return instanceId_;
}

void SendHotlineHeartBeatRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string SendHotlineHeartBeatRequest::getAccountName()const
{
	return accountName_;
}

void SendHotlineHeartBeatRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string SendHotlineHeartBeatRequest::getToken()const
{
	return token_;
}

void SendHotlineHeartBeatRequest::setToken(const std::string& token)
{
	token_ = token;
	setBodyParameter("Token", token);
}

