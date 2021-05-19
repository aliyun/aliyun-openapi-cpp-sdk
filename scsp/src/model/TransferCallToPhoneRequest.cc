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

#include <alibabacloud/scsp/model/TransferCallToPhoneRequest.h>

using AlibabaCloud::Scsp::Model::TransferCallToPhoneRequest;

TransferCallToPhoneRequest::TransferCallToPhoneRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "TransferCallToPhone")
{
	setMethod(HttpRequest::Method::Post);
}

TransferCallToPhoneRequest::~TransferCallToPhoneRequest()
{}

std::string TransferCallToPhoneRequest::getClientToken()const
{
	return clientToken_;
}

void TransferCallToPhoneRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string TransferCallToPhoneRequest::getInstanceId()const
{
	return instanceId_;
}

void TransferCallToPhoneRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string TransferCallToPhoneRequest::getAccountName()const
{
	return accountName_;
}

void TransferCallToPhoneRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string TransferCallToPhoneRequest::getCaller()const
{
	return caller_;
}

void TransferCallToPhoneRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setBodyParameter("Caller", caller);
}

std::string TransferCallToPhoneRequest::getCallee()const
{
	return callee_;
}

void TransferCallToPhoneRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setBodyParameter("Callee", callee);
}

std::string TransferCallToPhoneRequest::getCallId()const
{
	return callId_;
}

void TransferCallToPhoneRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setBodyParameter("CallId", callId);
}

std::string TransferCallToPhoneRequest::getJobId()const
{
	return jobId_;
}

void TransferCallToPhoneRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string TransferCallToPhoneRequest::getConnectionId()const
{
	return connectionId_;
}

void TransferCallToPhoneRequest::setConnectionId(const std::string& connectionId)
{
	connectionId_ = connectionId;
	setBodyParameter("ConnectionId", connectionId);
}

std::string TransferCallToPhoneRequest::getHoldConnectionId()const
{
	return holdConnectionId_;
}

void TransferCallToPhoneRequest::setHoldConnectionId(const std::string& holdConnectionId)
{
	holdConnectionId_ = holdConnectionId;
	setBodyParameter("HoldConnectionId", holdConnectionId);
}

int TransferCallToPhoneRequest::getType()const
{
	return type_;
}

void TransferCallToPhoneRequest::setType(int type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

bool TransferCallToPhoneRequest::getIsSingleTransfer()const
{
	return isSingleTransfer_;
}

void TransferCallToPhoneRequest::setIsSingleTransfer(bool isSingleTransfer)
{
	isSingleTransfer_ = isSingleTransfer;
	setBodyParameter("IsSingleTransfer", isSingleTransfer ? "true" : "false");
}

std::string TransferCallToPhoneRequest::getCallerPhone()const
{
	return callerPhone_;
}

void TransferCallToPhoneRequest::setCallerPhone(const std::string& callerPhone)
{
	callerPhone_ = callerPhone;
	setBodyParameter("CallerPhone", callerPhone);
}

std::string TransferCallToPhoneRequest::getCalleePhone()const
{
	return calleePhone_;
}

void TransferCallToPhoneRequest::setCalleePhone(const std::string& calleePhone)
{
	calleePhone_ = calleePhone;
	setBodyParameter("CalleePhone", calleePhone);
}

