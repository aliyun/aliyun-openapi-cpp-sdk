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

#include <alibabacloud/scsp/model/TransferCallToSkillGroupRequest.h>

using AlibabaCloud::Scsp::Model::TransferCallToSkillGroupRequest;

TransferCallToSkillGroupRequest::TransferCallToSkillGroupRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "TransferCallToSkillGroup")
{
	setMethod(HttpRequest::Method::Post);
}

TransferCallToSkillGroupRequest::~TransferCallToSkillGroupRequest()
{}

std::string TransferCallToSkillGroupRequest::getClientToken()const
{
	return clientToken_;
}

void TransferCallToSkillGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string TransferCallToSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void TransferCallToSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string TransferCallToSkillGroupRequest::getAccountName()const
{
	return accountName_;
}

void TransferCallToSkillGroupRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

long TransferCallToSkillGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void TransferCallToSkillGroupRequest::setSkillGroupId(long skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setBodyParameter("SkillGroupId", std::to_string(skillGroupId));
}

std::string TransferCallToSkillGroupRequest::getCallId()const
{
	return callId_;
}

void TransferCallToSkillGroupRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setBodyParameter("CallId", callId);
}

std::string TransferCallToSkillGroupRequest::getJobId()const
{
	return jobId_;
}

void TransferCallToSkillGroupRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string TransferCallToSkillGroupRequest::getConnectionId()const
{
	return connectionId_;
}

void TransferCallToSkillGroupRequest::setConnectionId(const std::string& connectionId)
{
	connectionId_ = connectionId;
	setBodyParameter("ConnectionId", connectionId);
}

std::string TransferCallToSkillGroupRequest::getHoldConnectionId()const
{
	return holdConnectionId_;
}

void TransferCallToSkillGroupRequest::setHoldConnectionId(const std::string& holdConnectionId)
{
	holdConnectionId_ = holdConnectionId;
	setBodyParameter("HoldConnectionId", holdConnectionId);
}

int TransferCallToSkillGroupRequest::getType()const
{
	return type_;
}

void TransferCallToSkillGroupRequest::setType(int type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

bool TransferCallToSkillGroupRequest::getIsSingleTransfer()const
{
	return isSingleTransfer_;
}

void TransferCallToSkillGroupRequest::setIsSingleTransfer(bool isSingleTransfer)
{
	isSingleTransfer_ = isSingleTransfer;
	setBodyParameter("IsSingleTransfer", isSingleTransfer ? "true" : "false");
}

