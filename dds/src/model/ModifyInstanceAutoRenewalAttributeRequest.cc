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

#include <alibabacloud/dds/model/ModifyInstanceAutoRenewalAttributeRequest.h>

using AlibabaCloud::Dds::Model::ModifyInstanceAutoRenewalAttributeRequest;

ModifyInstanceAutoRenewalAttributeRequest::ModifyInstanceAutoRenewalAttributeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyInstanceAutoRenewalAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAutoRenewalAttributeRequest::~ModifyInstanceAutoRenewalAttributeRequest()
{}

long ModifyInstanceAutoRenewalAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getDuration()const
{
	return duration_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setParameter("Duration", duration);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceAutoRenewalAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

