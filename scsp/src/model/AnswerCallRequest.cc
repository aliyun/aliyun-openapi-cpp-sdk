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

#include <alibabacloud/scsp/model/AnswerCallRequest.h>

using AlibabaCloud::Scsp::Model::AnswerCallRequest;

AnswerCallRequest::AnswerCallRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "AnswerCall")
{
	setMethod(HttpRequest::Method::Post);
}

AnswerCallRequest::~AnswerCallRequest()
{}

std::string AnswerCallRequest::getClientToken()const
{
	return clientToken_;
}

void AnswerCallRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string AnswerCallRequest::getInstanceId()const
{
	return instanceId_;
}

void AnswerCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string AnswerCallRequest::getAccountName()const
{
	return accountName_;
}

void AnswerCallRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string AnswerCallRequest::getCallId()const
{
	return callId_;
}

void AnswerCallRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setBodyParameter("CallId", callId);
}

std::string AnswerCallRequest::getJobId()const
{
	return jobId_;
}

void AnswerCallRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string AnswerCallRequest::getConnectionId()const
{
	return connectionId_;
}

void AnswerCallRequest::setConnectionId(const std::string& connectionId)
{
	connectionId_ = connectionId;
	setBodyParameter("ConnectionId", connectionId);
}

