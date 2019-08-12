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

#include <alibabacloud/ccc/model/TwoPartiesCallRequest.h>

using AlibabaCloud::CCC::Model::TwoPartiesCallRequest;

TwoPartiesCallRequest::TwoPartiesCallRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "TwoPartiesCall")
{}

TwoPartiesCallRequest::~TwoPartiesCallRequest()
{}

std::string TwoPartiesCallRequest::getCaller()const
{
	return caller_;
}

void TwoPartiesCallRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setCoreParameter("Caller", caller);
}

std::string TwoPartiesCallRequest::getInstanceId()const
{
	return instanceId_;
}

void TwoPartiesCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string TwoPartiesCallRequest::getCalleeCustomer()const
{
	return calleeCustomer_;
}

void TwoPartiesCallRequest::setCalleeCustomer(const std::string& calleeCustomer)
{
	calleeCustomer_ = calleeCustomer;
	setCoreParameter("CalleeCustomer", calleeCustomer);
}

std::string TwoPartiesCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TwoPartiesCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string TwoPartiesCallRequest::getCalleeAgent()const
{
	return calleeAgent_;
}

void TwoPartiesCallRequest::setCalleeAgent(const std::string& calleeAgent)
{
	calleeAgent_ = calleeAgent;
	setCoreParameter("CalleeAgent", calleeAgent);
}

