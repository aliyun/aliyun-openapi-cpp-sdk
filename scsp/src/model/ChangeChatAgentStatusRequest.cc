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

#include <alibabacloud/scsp/model/ChangeChatAgentStatusRequest.h>

using AlibabaCloud::Scsp::Model::ChangeChatAgentStatusRequest;

ChangeChatAgentStatusRequest::ChangeChatAgentStatusRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "ChangeChatAgentStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ChangeChatAgentStatusRequest::~ChangeChatAgentStatusRequest()
{}

std::string ChangeChatAgentStatusRequest::getClientToken()const
{
	return clientToken_;
}

void ChangeChatAgentStatusRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string ChangeChatAgentStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ChangeChatAgentStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string ChangeChatAgentStatusRequest::getAccountName()const
{
	return accountName_;
}

void ChangeChatAgentStatusRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string ChangeChatAgentStatusRequest::getMethod()const
{
	return method_;
}

void ChangeChatAgentStatusRequest::setMethod(const std::string& method)
{
	method_ = method;
	setBodyParameter("Method", method);
}

