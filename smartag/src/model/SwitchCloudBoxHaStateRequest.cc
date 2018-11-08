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

#include <alibabacloud/smartag/model/SwitchCloudBoxHaStateRequest.h>

using AlibabaCloud::Smartag::Model::SwitchCloudBoxHaStateRequest;

SwitchCloudBoxHaStateRequest::SwitchCloudBoxHaStateRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "SwitchCloudBoxHaState")
{}

SwitchCloudBoxHaStateRequest::~SwitchCloudBoxHaStateRequest()
{}

long SwitchCloudBoxHaStateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchCloudBoxHaStateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchCloudBoxHaStateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchCloudBoxHaStateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchCloudBoxHaStateRequest::getRegionId()const
{
	return regionId_;
}

void SwitchCloudBoxHaStateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SwitchCloudBoxHaStateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchCloudBoxHaStateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SwitchCloudBoxHaStateRequest::getSmartAGId()const
{
	return smartAGId_;
}

void SwitchCloudBoxHaStateRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

long SwitchCloudBoxHaStateRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchCloudBoxHaStateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

