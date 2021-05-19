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

#include <alibabacloud/scsp/model/FetchCallRequest.h>

using AlibabaCloud::Scsp::Model::FetchCallRequest;

FetchCallRequest::FetchCallRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "FetchCall")
{
	setMethod(HttpRequest::Method::Post);
}

FetchCallRequest::~FetchCallRequest()
{}

std::string FetchCallRequest::getClientToken()const
{
	return clientToken_;
}

void FetchCallRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string FetchCallRequest::getInstanceId()const
{
	return instanceId_;
}

void FetchCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string FetchCallRequest::getAccountName()const
{
	return accountName_;
}

void FetchCallRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string FetchCallRequest::getCallId()const
{
	return callId_;
}

void FetchCallRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setBodyParameter("CallId", callId);
}

std::string FetchCallRequest::getJobId()const
{
	return jobId_;
}

void FetchCallRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string FetchCallRequest::getConnectionId()const
{
	return connectionId_;
}

void FetchCallRequest::setConnectionId(const std::string& connectionId)
{
	connectionId_ = connectionId;
	setBodyParameter("ConnectionId", connectionId);
}

std::string FetchCallRequest::getHoldConnectionId()const
{
	return holdConnectionId_;
}

void FetchCallRequest::setHoldConnectionId(const std::string& holdConnectionId)
{
	holdConnectionId_ = holdConnectionId;
	setBodyParameter("HoldConnectionId", holdConnectionId);
}

