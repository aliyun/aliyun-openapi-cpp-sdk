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

#include <alibabacloud/cms/model/NodeProcessCreateRequest.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

NodeProcessCreateRequest::NodeProcessCreateRequest() :
	CmsRequest("NodeProcessCreate")
{}

NodeProcessCreateRequest::~NodeProcessCreateRequest()
{}

std::string NodeProcessCreateRequest::getInstanceId()const
{
	return instanceId_;
}

void NodeProcessCreateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string NodeProcessCreateRequest::getProcessName()const
{
	return processName_;
}

void NodeProcessCreateRequest::setProcessName(const std::string& processName)
{
	processName_ = processName;
	setParameter("ProcessName", processName);
}

std::string NodeProcessCreateRequest::getName()const
{
	return name_;
}

void NodeProcessCreateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string NodeProcessCreateRequest::getProcessUser()const
{
	return processUser_;
}

void NodeProcessCreateRequest::setProcessUser(const std::string& processUser)
{
	processUser_ = processUser;
	setParameter("ProcessUser", processUser);
}

std::string NodeProcessCreateRequest::getCommand()const
{
	return command_;
}

void NodeProcessCreateRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

