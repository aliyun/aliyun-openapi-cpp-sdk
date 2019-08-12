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

#include <alibabacloud/cms/model/NodeProcessDeleteRequest.h>

using AlibabaCloud::Cms::Model::NodeProcessDeleteRequest;

NodeProcessDeleteRequest::NodeProcessDeleteRequest() :
	RpcServiceRequest("cms", "2018-03-08", "NodeProcessDelete")
{}

NodeProcessDeleteRequest::~NodeProcessDeleteRequest()
{}

std::string NodeProcessDeleteRequest::getInstanceId()const
{
	return instanceId_;
}

void NodeProcessDeleteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string NodeProcessDeleteRequest::getName()const
{
	return name_;
}

void NodeProcessDeleteRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string NodeProcessDeleteRequest::getId()const
{
	return id_;
}

void NodeProcessDeleteRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

