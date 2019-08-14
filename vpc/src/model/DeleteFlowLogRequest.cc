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

#include <alibabacloud/vpc/model/DeleteFlowLogRequest.h>

using AlibabaCloud::Vpc::Model::DeleteFlowLogRequest;

DeleteFlowLogRequest::DeleteFlowLogRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteFlowLog")
{}

DeleteFlowLogRequest::~DeleteFlowLogRequest()
{}

long DeleteFlowLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteFlowLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteFlowLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteFlowLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteFlowLogRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFlowLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteFlowLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteFlowLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteFlowLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFlowLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteFlowLogRequest::getFlowLogId()const
{
	return flowLogId_;
}

void DeleteFlowLogRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

