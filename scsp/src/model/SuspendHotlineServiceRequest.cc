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

#include <alibabacloud/scsp/model/SuspendHotlineServiceRequest.h>

using AlibabaCloud::Scsp::Model::SuspendHotlineServiceRequest;

SuspendHotlineServiceRequest::SuspendHotlineServiceRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "SuspendHotlineService")
{
	setMethod(HttpRequest::Method::Post);
}

SuspendHotlineServiceRequest::~SuspendHotlineServiceRequest()
{}

std::string SuspendHotlineServiceRequest::getClientToken()const
{
	return clientToken_;
}

void SuspendHotlineServiceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string SuspendHotlineServiceRequest::getInstanceId()const
{
	return instanceId_;
}

void SuspendHotlineServiceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string SuspendHotlineServiceRequest::getAccountName()const
{
	return accountName_;
}

void SuspendHotlineServiceRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

int SuspendHotlineServiceRequest::getType()const
{
	return type_;
}

void SuspendHotlineServiceRequest::setType(int type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

