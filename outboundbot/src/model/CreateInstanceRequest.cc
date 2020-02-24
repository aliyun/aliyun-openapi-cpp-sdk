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

#include <alibabacloud/outboundbot/model/CreateInstanceRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "CreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest()
{}

int CreateInstanceRequest::getMaxConcurrentConversation()const
{
	return maxConcurrentConversation_;
}

void CreateInstanceRequest::setMaxConcurrentConversation(int maxConcurrentConversation)
{
	maxConcurrentConversation_ = maxConcurrentConversation;
	setParameter("MaxConcurrentConversation", std::to_string(maxConcurrentConversation));
}

std::string CreateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateInstanceRequest::getCallCenterInstanceId()const
{
	return callCenterInstanceId_;
}

void CreateInstanceRequest::setCallCenterInstanceId(const std::string& callCenterInstanceId)
{
	callCenterInstanceId_ = callCenterInstanceId;
	setParameter("CallCenterInstanceId", callCenterInstanceId);
}

std::string CreateInstanceRequest::getInstanceDescription()const
{
	return instanceDescription_;
}

void CreateInstanceRequest::setInstanceDescription(const std::string& instanceDescription)
{
	instanceDescription_ = instanceDescription;
	setParameter("InstanceDescription", instanceDescription);
}

