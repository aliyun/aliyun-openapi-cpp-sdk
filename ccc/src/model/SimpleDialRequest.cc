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

#include <alibabacloud/ccc/model/SimpleDialRequest.h>

using AlibabaCloud::CCC::Model::SimpleDialRequest;

SimpleDialRequest::SimpleDialRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "SimpleDial")
{}

SimpleDialRequest::~SimpleDialRequest()
{}

std::string SimpleDialRequest::getCaller()const
{
	return caller_;
}

void SimpleDialRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setCoreParameter("Caller", std::to_string(caller));
}

std::string SimpleDialRequest::getInstanceId()const
{
	return instanceId_;
}

void SimpleDialRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string SimpleDialRequest::getContractFlowId()const
{
	return contractFlowId_;
}

void SimpleDialRequest::setContractFlowId(const std::string& contractFlowId)
{
	contractFlowId_ = contractFlowId;
	setCoreParameter("ContractFlowId", std::to_string(contractFlowId));
}

std::string SimpleDialRequest::getCallee()const
{
	return callee_;
}

void SimpleDialRequest::setCallee(const std::string& callee)
{
	callee_ = callee;
	setCoreParameter("Callee", std::to_string(callee));
}

std::string SimpleDialRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SimpleDialRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

