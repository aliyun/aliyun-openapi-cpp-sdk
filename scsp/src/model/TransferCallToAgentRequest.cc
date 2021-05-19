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

#include <alibabacloud/scsp/model/TransferCallToAgentRequest.h>

using AlibabaCloud::Scsp::Model::TransferCallToAgentRequest;

TransferCallToAgentRequest::TransferCallToAgentRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "TransferCallToAgent")
{
	setMethod(HttpRequest::Method::Post);
}

TransferCallToAgentRequest::~TransferCallToAgentRequest()
{}

std::string TransferCallToAgentRequest::getClientToken()const
{
	return clientToken_;
}

void TransferCallToAgentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string TransferCallToAgentRequest::getInstanceId()const
{
	return instanceId_;
}

void TransferCallToAgentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string TransferCallToAgentRequest::getAccountName()const
{
	return accountName_;
}

void TransferCallToAgentRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string TransferCallToAgentRequest::getTargetAccountName()const
{
	return targetAccountName_;
}

void TransferCallToAgentRequest::setTargetAccountName(const std::string& targetAccountName)
{
	targetAccountName_ = targetAccountName;
	setBodyParameter("TargetAccountName", targetAccountName);
}

std::string TransferCallToAgentRequest::getCallId()const
{
	return callId_;
}

void TransferCallToAgentRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setBodyParameter("CallId", callId);
}

std::string TransferCallToAgentRequest::getJobId()const
{
	return jobId_;
}

void TransferCallToAgentRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string TransferCallToAgentRequest::getConnectionId()const
{
	return connectionId_;
}

void TransferCallToAgentRequest::setConnectionId(const std::string& connectionId)
{
	connectionId_ = connectionId;
	setBodyParameter("ConnectionId", connectionId);
}

std::string TransferCallToAgentRequest::getHoldConnectionId()const
{
	return holdConnectionId_;
}

void TransferCallToAgentRequest::setHoldConnectionId(const std::string& holdConnectionId)
{
	holdConnectionId_ = holdConnectionId;
	setBodyParameter("HoldConnectionId", holdConnectionId);
}

int TransferCallToAgentRequest::getType()const
{
	return type_;
}

void TransferCallToAgentRequest::setType(int type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

std::string TransferCallToAgentRequest::getIsSingleTransfer()const
{
	return isSingleTransfer_;
}

void TransferCallToAgentRequest::setIsSingleTransfer(const std::string& isSingleTransfer)
{
	isSingleTransfer_ = isSingleTransfer;
	setBodyParameter("IsSingleTransfer", isSingleTransfer);
}

