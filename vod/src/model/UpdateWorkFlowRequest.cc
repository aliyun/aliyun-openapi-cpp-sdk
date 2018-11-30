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

#include <alibabacloud/vod/model/UpdateWorkFlowRequest.h>

using AlibabaCloud::Vod::Model::UpdateWorkFlowRequest;

UpdateWorkFlowRequest::UpdateWorkFlowRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateWorkFlow")
{}

UpdateWorkFlowRequest::~UpdateWorkFlowRequest()
{}

long UpdateWorkFlowRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateWorkFlowRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateWorkFlowRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateWorkFlowRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateWorkFlowRequest::getName()const
{
	return name_;
}

void UpdateWorkFlowRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateWorkFlowRequest::getActionList()const
{
	return actionList_;
}

void UpdateWorkFlowRequest::setActionList(const std::string& actionList)
{
	actionList_ = actionList;
	setParameter("ActionList", actionList);
}

long UpdateWorkFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateWorkFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateWorkFlowRequest::getWorkFlowId()const
{
	return workFlowId_;
}

void UpdateWorkFlowRequest::setWorkFlowId(const std::string& workFlowId)
{
	workFlowId_ = workFlowId;
	setParameter("WorkFlowId", workFlowId);
}

