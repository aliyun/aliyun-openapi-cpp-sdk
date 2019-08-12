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

#include <alibabacloud/smartag/model/RevokeSagInstanceFromCcnRequest.h>

using AlibabaCloud::Smartag::Model::RevokeSagInstanceFromCcnRequest;

RevokeSagInstanceFromCcnRequest::RevokeSagInstanceFromCcnRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "RevokeSagInstanceFromCcn")
{}

RevokeSagInstanceFromCcnRequest::~RevokeSagInstanceFromCcnRequest()
{}

long RevokeSagInstanceFromCcnRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeSagInstanceFromCcnRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeSagInstanceFromCcnRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeSagInstanceFromCcnRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeSagInstanceFromCcnRequest::getRegionId()const
{
	return regionId_;
}

void RevokeSagInstanceFromCcnRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RevokeSagInstanceFromCcnRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeSagInstanceFromCcnRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RevokeSagInstanceFromCcnRequest::getSmartAGId()const
{
	return smartAGId_;
}

void RevokeSagInstanceFromCcnRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

std::string RevokeSagInstanceFromCcnRequest::getCcnInstanceId()const
{
	return ccnInstanceId_;
}

void RevokeSagInstanceFromCcnRequest::setCcnInstanceId(const std::string& ccnInstanceId)
{
	ccnInstanceId_ = ccnInstanceId;
	setCoreParameter("CcnInstanceId", ccnInstanceId);
}

long RevokeSagInstanceFromCcnRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeSagInstanceFromCcnRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

