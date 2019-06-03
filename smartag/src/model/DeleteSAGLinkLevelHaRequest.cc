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

#include <alibabacloud/smartag/model/DeleteSAGLinkLevelHaRequest.h>

using AlibabaCloud::Smartag::Model::DeleteSAGLinkLevelHaRequest;

DeleteSAGLinkLevelHaRequest::DeleteSAGLinkLevelHaRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteSAGLinkLevelHa")
{}

DeleteSAGLinkLevelHaRequest::~DeleteSAGLinkLevelHaRequest()
{}

long DeleteSAGLinkLevelHaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSAGLinkLevelHaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSAGLinkLevelHaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSAGLinkLevelHaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteSAGLinkLevelHaRequest::getRegionId()const
{
	return regionId_;
}

void DeleteSAGLinkLevelHaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteSAGLinkLevelHaRequest::getHaType()const
{
	return haType_;
}

void DeleteSAGLinkLevelHaRequest::setHaType(const std::string& haType)
{
	haType_ = haType;
	setCoreParameter("HaType", haType);
}

std::string DeleteSAGLinkLevelHaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteSAGLinkLevelHaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteSAGLinkLevelHaRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DeleteSAGLinkLevelHaRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long DeleteSAGLinkLevelHaRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSAGLinkLevelHaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

