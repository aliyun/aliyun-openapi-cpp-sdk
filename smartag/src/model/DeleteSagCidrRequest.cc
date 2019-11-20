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

#include <alibabacloud/smartag/model/DeleteSagCidrRequest.h>

using AlibabaCloud::Smartag::Model::DeleteSagCidrRequest;

DeleteSagCidrRequest::DeleteSagCidrRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteSagCidr")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSagCidrRequest::~DeleteSagCidrRequest()
{}

long DeleteSagCidrRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSagCidrRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSagCidrRequest::getRegionId()const
{
	return regionId_;
}

void DeleteSagCidrRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteSagCidrRequest::getCidr()const
{
	return cidr_;
}

void DeleteSagCidrRequest::setCidr(const std::string& cidr)
{
	cidr_ = cidr;
	setCoreParameter("Cidr", cidr);
}

std::string DeleteSagCidrRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSagCidrRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteSagCidrRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteSagCidrRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteSagCidrRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSagCidrRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteSagCidrRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DeleteSagCidrRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

