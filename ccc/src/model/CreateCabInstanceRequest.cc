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

#include <alibabacloud/ccc/model/CreateCabInstanceRequest.h>

using AlibabaCloud::CCC::Model::CreateCabInstanceRequest;

CreateCabInstanceRequest::CreateCabInstanceRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateCabInstance")
{}

CreateCabInstanceRequest::~CreateCabInstanceRequest()
{}

int CreateCabInstanceRequest::getMaxConcurrentConversation()const
{
	return maxConcurrentConversation_;
}

void CreateCabInstanceRequest::setMaxConcurrentConversation(int maxConcurrentConversation)
{
	maxConcurrentConversation_ = maxConcurrentConversation;
	setCoreParameter("MaxConcurrentConversation", std::to_string(maxConcurrentConversation));
}

std::string CreateCabInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateCabInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string CreateCabInstanceRequest::getCallCenterInstanceId()const
{
	return callCenterInstanceId_;
}

void CreateCabInstanceRequest::setCallCenterInstanceId(const std::string& callCenterInstanceId)
{
	callCenterInstanceId_ = callCenterInstanceId;
	setCoreParameter("CallCenterInstanceId", callCenterInstanceId);
}

std::string CreateCabInstanceRequest::getInstanceDescription()const
{
	return instanceDescription_;
}

void CreateCabInstanceRequest::setInstanceDescription(const std::string& instanceDescription)
{
	instanceDescription_ = instanceDescription;
	setCoreParameter("InstanceDescription", instanceDescription);
}

