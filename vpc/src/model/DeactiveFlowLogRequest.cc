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

#include <alibabacloud/vpc/model/DeactiveFlowLogRequest.h>

using AlibabaCloud::Vpc::Model::DeactiveFlowLogRequest;

DeactiveFlowLogRequest::DeactiveFlowLogRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeactiveFlowLog")
{}

DeactiveFlowLogRequest::~DeactiveFlowLogRequest()
{}

long DeactiveFlowLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeactiveFlowLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeactiveFlowLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeactiveFlowLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeactiveFlowLogRequest::getRegionId()const
{
	return regionId_;
}

void DeactiveFlowLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeactiveFlowLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeactiveFlowLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeactiveFlowLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DeactiveFlowLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeactiveFlowLogRequest::getFlowLogId()const
{
	return flowLogId_;
}

void DeactiveFlowLogRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

