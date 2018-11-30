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

#include <alibabacloud/vod/model/GetWorkFlowRequest.h>

using AlibabaCloud::Vod::Model::GetWorkFlowRequest;

GetWorkFlowRequest::GetWorkFlowRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetWorkFlow")
{}

GetWorkFlowRequest::~GetWorkFlowRequest()
{}

long GetWorkFlowRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetWorkFlowRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetWorkFlowRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetWorkFlowRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetWorkFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void GetWorkFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetWorkFlowRequest::getWorkFlowId()const
{
	return workFlowId_;
}

void GetWorkFlowRequest::setWorkFlowId(const std::string& workFlowId)
{
	workFlowId_ = workFlowId;
	setParameter("WorkFlowId", workFlowId);
}

