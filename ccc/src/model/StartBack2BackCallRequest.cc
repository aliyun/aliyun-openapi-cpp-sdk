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

#include <alibabacloud/ccc/model/StartBack2BackCallRequest.h>

using AlibabaCloud::CCC::Model::StartBack2BackCallRequest;

StartBack2BackCallRequest::StartBack2BackCallRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "StartBack2BackCall")
{}

StartBack2BackCallRequest::~StartBack2BackCallRequest()
{}

std::string StartBack2BackCallRequest::getCaller()const
{
	return caller_;
}

void StartBack2BackCallRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setCoreParameter("Caller", caller);
}

std::string StartBack2BackCallRequest::getInstanceId()const
{
	return instanceId_;
}

void StartBack2BackCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string StartBack2BackCallRequest::getCallCenterNumber()const
{
	return callCenterNumber_;
}

void StartBack2BackCallRequest::setCallCenterNumber(const std::string& callCenterNumber)
{
	callCenterNumber_ = callCenterNumber;
	setCoreParameter("CallCenterNumber", callCenterNumber);
}

std::string StartBack2BackCallRequest::getCallee()const
{
	return callee_;
}

void StartBack2BackCallRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setCoreParameter("Callee", callee);
}

std::string StartBack2BackCallRequest::getWorkflowId()const
{
	return workflowId_;
}

void StartBack2BackCallRequest::setWorkflowId(const std::string& workflowId)
{
	workflowId_ = workflowId;
	setCoreParameter("WorkflowId", workflowId);
}

std::string StartBack2BackCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartBack2BackCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

