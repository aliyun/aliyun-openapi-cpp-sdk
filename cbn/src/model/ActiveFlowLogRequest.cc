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

#include <alibabacloud/cbn/model/ActiveFlowLogRequest.h>

using AlibabaCloud::Cbn::Model::ActiveFlowLogRequest;

ActiveFlowLogRequest::ActiveFlowLogRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ActiveFlowLog")
{}

ActiveFlowLogRequest::~ActiveFlowLogRequest()
{}

long ActiveFlowLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ActiveFlowLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ActiveFlowLogRequest::getClientToken()const
{
	return clientToken_;
}

void ActiveFlowLogRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ActiveFlowLogRequest::getCenId()const
{
	return cenId_;
}

void ActiveFlowLogRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string ActiveFlowLogRequest::getRegionId()const
{
	return regionId_;
}

void ActiveFlowLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ActiveFlowLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ActiveFlowLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ActiveFlowLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ActiveFlowLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ActiveFlowLogRequest::getOwnerId()const
{
	return ownerId_;
}

void ActiveFlowLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ActiveFlowLogRequest::getFlowLogId()const
{
	return flowLogId_;
}

void ActiveFlowLogRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

