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

#include <alibabacloud/polardb/model/ModifyAutoRenewAttributeRequest.h>

using AlibabaCloud::Polardb::Model::ModifyAutoRenewAttributeRequest;

ModifyAutoRenewAttributeRequest::ModifyAutoRenewAttributeRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyAutoRenewAttribute")
{}

ModifyAutoRenewAttributeRequest::~ModifyAutoRenewAttributeRequest()
{}

std::string ModifyAutoRenewAttributeRequest::getDuration()const
{
	return duration_;
}

void ModifyAutoRenewAttributeRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setCoreParameter("Duration", duration);
}

long ModifyAutoRenewAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAutoRenewAttributeRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void ModifyAutoRenewAttributeRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string ModifyAutoRenewAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAutoRenewAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAutoRenewAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyAutoRenewAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAutoRenewAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyAutoRenewAttributeRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void ModifyAutoRenewAttributeRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setCoreParameter("RenewalStatus", renewalStatus);
}

long ModifyAutoRenewAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAutoRenewAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAutoRenewAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAutoRenewAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAutoRenewAttributeRequest::getDBClusterIds()const
{
	return dBClusterIds_;
}

void ModifyAutoRenewAttributeRequest::setDBClusterIds(const std::string& dBClusterIds)
{
	dBClusterIds_ = dBClusterIds;
	setCoreParameter("DBClusterIds", dBClusterIds);
}

