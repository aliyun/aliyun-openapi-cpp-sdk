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

#include <alibabacloud/scsp/model/JoinThirdCallRequest.h>

using AlibabaCloud::Scsp::Model::JoinThirdCallRequest;

JoinThirdCallRequest::JoinThirdCallRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "JoinThirdCall")
{
	setMethod(HttpRequest::Method::Post);
}

JoinThirdCallRequest::~JoinThirdCallRequest()
{}

std::string JoinThirdCallRequest::getClientToken()const
{
	return clientToken_;
}

void JoinThirdCallRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string JoinThirdCallRequest::getInstanceId()const
{
	return instanceId_;
}

void JoinThirdCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string JoinThirdCallRequest::getAccountName()const
{
	return accountName_;
}

void JoinThirdCallRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string JoinThirdCallRequest::getCallId()const
{
	return callId_;
}

void JoinThirdCallRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setBodyParameter("CallId", callId);
}

std::string JoinThirdCallRequest::getJobId()const
{
	return jobId_;
}

void JoinThirdCallRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string JoinThirdCallRequest::getConnectionId()const
{
	return connectionId_;
}

void JoinThirdCallRequest::setConnectionId(const std::string& connectionId)
{
	connectionId_ = connectionId;
	setBodyParameter("ConnectionId", connectionId);
}

std::string JoinThirdCallRequest::getHoldConnectionId()const
{
	return holdConnectionId_;
}

void JoinThirdCallRequest::setHoldConnectionId(const std::string& holdConnectionId)
{
	holdConnectionId_ = holdConnectionId;
	setBodyParameter("HoldConnectionId", holdConnectionId);
}

