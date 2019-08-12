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

#include <alibabacloud/ehpc/model/InvokeShellCommandRequest.h>

using AlibabaCloud::EHPC::Model::InvokeShellCommandRequest;

InvokeShellCommandRequest::InvokeShellCommandRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "InvokeShellCommand")
{}

InvokeShellCommandRequest::~InvokeShellCommandRequest()
{}

std::vector<InvokeShellCommandRequest::Instance> InvokeShellCommandRequest::getInstance()const
{
	return instance_;
}

void InvokeShellCommandRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	int i = 0;
	for(int i = 0; i!= instance.size(); i++)	{
		auto obj = instance.at(i);
		std::string str ="Instance."+ std::to_string(i);
		setCoreParameter(str + ".Id", obj.id);
	}
}

std::string InvokeShellCommandRequest::getWorkingDir()const
{
	return workingDir_;
}

void InvokeShellCommandRequest::setWorkingDir(const std::string& workingDir)
{
	workingDir_ = workingDir;
	setCoreParameter("WorkingDir", workingDir);
}

std::string InvokeShellCommandRequest::getClusterId()const
{
	return clusterId_;
}

void InvokeShellCommandRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string InvokeShellCommandRequest::getCommand()const
{
	return command_;
}

void InvokeShellCommandRequest::setCommand(const std::string& command)
{
	command_ = command;
	setCoreParameter("Command", command);
}

int InvokeShellCommandRequest::getTimeout()const
{
	return timeout_;
}

void InvokeShellCommandRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setCoreParameter("Timeout", std::to_string(timeout));
}

std::string InvokeShellCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InvokeShellCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

