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

#include <alibabacloud/ccc/model/ModifyCabInstanceRequest.h>

using AlibabaCloud::CCC::Model::ModifyCabInstanceRequest;

ModifyCabInstanceRequest::ModifyCabInstanceRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyCabInstance")
{}

ModifyCabInstanceRequest::~ModifyCabInstanceRequest()
{}

int ModifyCabInstanceRequest::getMaxConcurrentConversation()const
{
	return maxConcurrentConversation_;
}

void ModifyCabInstanceRequest::setMaxConcurrentConversation(int maxConcurrentConversation)
{
	maxConcurrentConversation_ = maxConcurrentConversation;
	setCoreParameter("MaxConcurrentConversation", std::to_string(maxConcurrentConversation));
}

std::string ModifyCabInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyCabInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyCabInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void ModifyCabInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string ModifyCabInstanceRequest::getCallCenterInstanceId()const
{
	return callCenterInstanceId_;
}

void ModifyCabInstanceRequest::setCallCenterInstanceId(const std::string& callCenterInstanceId)
{
	callCenterInstanceId_ = callCenterInstanceId;
	setCoreParameter("CallCenterInstanceId", callCenterInstanceId);
}

std::string ModifyCabInstanceRequest::getInstanceDescription()const
{
	return instanceDescription_;
}

void ModifyCabInstanceRequest::setInstanceDescription(const std::string& instanceDescription)
{
	instanceDescription_ = instanceDescription;
	setCoreParameter("InstanceDescription", instanceDescription);
}

