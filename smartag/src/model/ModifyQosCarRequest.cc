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

#include <alibabacloud/smartag/model/ModifyQosCarRequest.h>

using AlibabaCloud::Smartag::Model::ModifyQosCarRequest;

ModifyQosCarRequest::ModifyQosCarRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifyQosCar")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyQosCarRequest::~ModifyQosCarRequest()
{}

long ModifyQosCarRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyQosCarRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyQosCarRequest::getMinBandwidthAbs()const
{
	return minBandwidthAbs_;
}

void ModifyQosCarRequest::setMinBandwidthAbs(int minBandwidthAbs)
{
	minBandwidthAbs_ = minBandwidthAbs;
	setParameter("MinBandwidthAbs", std::to_string(minBandwidthAbs));
}

std::string ModifyQosCarRequest::getDescription()const
{
	return description_;
}

void ModifyQosCarRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyQosCarRequest::getRegionId()const
{
	return regionId_;
}

void ModifyQosCarRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyQosCarRequest::getPercentSourceType()const
{
	return percentSourceType_;
}

void ModifyQosCarRequest::setPercentSourceType(const std::string& percentSourceType)
{
	percentSourceType_ = percentSourceType;
	setParameter("PercentSourceType", percentSourceType);
}

std::string ModifyQosCarRequest::getQosId()const
{
	return qosId_;
}

void ModifyQosCarRequest::setQosId(const std::string& qosId)
{
	qosId_ = qosId;
	setParameter("QosId", qosId);
}

int ModifyQosCarRequest::getMaxBandwidthAbs()const
{
	return maxBandwidthAbs_;
}

void ModifyQosCarRequest::setMaxBandwidthAbs(int maxBandwidthAbs)
{
	maxBandwidthAbs_ = maxBandwidthAbs;
	setParameter("MaxBandwidthAbs", std::to_string(maxBandwidthAbs));
}

std::string ModifyQosCarRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyQosCarRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyQosCarRequest::getMaxBandwidthPercent()const
{
	return maxBandwidthPercent_;
}

void ModifyQosCarRequest::setMaxBandwidthPercent(int maxBandwidthPercent)
{
	maxBandwidthPercent_ = maxBandwidthPercent;
	setParameter("MaxBandwidthPercent", std::to_string(maxBandwidthPercent));
}

std::string ModifyQosCarRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyQosCarRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyQosCarRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyQosCarRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyQosCarRequest::getQosCarId()const
{
	return qosCarId_;
}

void ModifyQosCarRequest::setQosCarId(const std::string& qosCarId)
{
	qosCarId_ = qosCarId;
	setParameter("QosCarId", qosCarId);
}

int ModifyQosCarRequest::getPriority()const
{
	return priority_;
}

void ModifyQosCarRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

int ModifyQosCarRequest::getMinBandwidthPercent()const
{
	return minBandwidthPercent_;
}

void ModifyQosCarRequest::setMinBandwidthPercent(int minBandwidthPercent)
{
	minBandwidthPercent_ = minBandwidthPercent;
	setParameter("MinBandwidthPercent", std::to_string(minBandwidthPercent));
}

std::string ModifyQosCarRequest::getLimitType()const
{
	return limitType_;
}

void ModifyQosCarRequest::setLimitType(const std::string& limitType)
{
	limitType_ = limitType;
	setParameter("LimitType", limitType);
}

std::string ModifyQosCarRequest::getName()const
{
	return name_;
}

void ModifyQosCarRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

