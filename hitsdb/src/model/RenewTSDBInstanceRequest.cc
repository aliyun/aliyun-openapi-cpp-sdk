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

#include <alibabacloud/hitsdb/model/RenewTSDBInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::RenewTSDBInstanceRequest;

RenewTSDBInstanceRequest::RenewTSDBInstanceRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "RenewTSDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewTSDBInstanceRequest::~RenewTSDBInstanceRequest()
{}

long RenewTSDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewTSDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewTSDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewTSDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int RenewTSDBInstanceRequest::getDuration()const
{
	return duration_;
}

void RenewTSDBInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string RenewTSDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RenewTSDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RenewTSDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RenewTSDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RenewTSDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewTSDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewTSDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewTSDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RenewTSDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewTSDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewTSDBInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewTSDBInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RenewTSDBInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void RenewTSDBInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

