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

#include <alibabacloud/mts/model/AddMediaWorkflowRequest.h>

using AlibabaCloud::Mts::Model::AddMediaWorkflowRequest;

AddMediaWorkflowRequest::AddMediaWorkflowRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddMediaWorkflow")
{}

AddMediaWorkflowRequest::~AddMediaWorkflowRequest()
{}

long AddMediaWorkflowRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddMediaWorkflowRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddMediaWorkflowRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddMediaWorkflowRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddMediaWorkflowRequest::getTopology()const
{
	return topology_;
}

void AddMediaWorkflowRequest::setTopology(const std::string& topology)
{
	topology_ = topology;
	setCoreParameter("Topology", topology);
}

std::string AddMediaWorkflowRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddMediaWorkflowRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddMediaWorkflowRequest::getName()const
{
	return name_;
}

void AddMediaWorkflowRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long AddMediaWorkflowRequest::getOwnerId()const
{
	return ownerId_;
}

void AddMediaWorkflowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddMediaWorkflowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddMediaWorkflowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddMediaWorkflowRequest::getTriggerMode()const
{
	return triggerMode_;
}

void AddMediaWorkflowRequest::setTriggerMode(const std::string& triggerMode)
{
	triggerMode_ = triggerMode;
	setCoreParameter("TriggerMode", triggerMode);
}

