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
{}

ModifyQosCarRequest::~ModifyQosCarRequest()
{}

int ModifyQosCarRequest::getMaxBandwidthAbs()const
{
	return maxBandwidthAbs_;
}

void ModifyQosCarRequest::setMaxBandwidthAbs(int maxBandwidthAbs)
{
	maxBandwidthAbs_ = maxBandwidthAbs;
	setCoreParameter("MaxBandwidthAbs", maxBandwidthAbs);
}

long ModifyQosCarRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyQosCarRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyQosCarRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyQosCarRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int ModifyQosCarRequest::getMinBandwidthAbs()const
{
	return minBandwidthAbs_;
}

void ModifyQosCarRequest::setMinBandwidthAbs(int minBandwidthAbs)
{
	minBandwidthAbs_ = minBandwidthAbs;
	setCoreParameter("MinBandwidthAbs", minBandwidthAbs);
}

int ModifyQosCarRequest::getMaxBandwidthPercent()const
{
	return maxBandwidthPercent_;
}

void ModifyQosCarRequest::setMaxBandwidthPercent(int maxBandwidthPercent)
{
	maxBandwidthPercent_ = maxBandwidthPercent;
	setCoreParameter("MaxBandwidthPercent", maxBandwidthPercent);
}

std::string ModifyQosCarRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyQosCarRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyQosCarRequest::getDescription()const
{
	return description_;
}

void ModifyQosCarRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long ModifyQosCarRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyQosCarRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyQosCarRequest::getQosCarId()const
{
	return qosCarId_;
}

void ModifyQosCarRequest::setQosCarId(const std::string& qosCarId)
{
	qosCarId_ = qosCarId;
	setCoreParameter("QosCarId", std::to_string(qosCarId));
}

int ModifyQosCarRequest::getPriority()const
{
	return priority_;
}

void ModifyQosCarRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

int ModifyQosCarRequest::getMinBandwidthPercent()const
{
	return minBandwidthPercent_;
}

void ModifyQosCarRequest::setMinBandwidthPercent(int minBandwidthPercent)
{
	minBandwidthPercent_ = minBandwidthPercent;
	setCoreParameter("MinBandwidthPercent", minBandwidthPercent);
}

std::string ModifyQosCarRequest::getLimitType()const
{
	return limitType_;
}

void ModifyQosCarRequest::setLimitType(const std::string& limitType)
{
	limitType_ = limitType;
	setCoreParameter("LimitType", std::to_string(limitType));
}

std::string ModifyQosCarRequest::getRegionId()const
{
	return regionId_;
}

void ModifyQosCarRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyQosCarRequest::getPercentSourceType()const
{
	return percentSourceType_;
}

void ModifyQosCarRequest::setPercentSourceType(const std::string& percentSourceType)
{
	percentSourceType_ = percentSourceType;
	setCoreParameter("PercentSourceType", std::to_string(percentSourceType));
}

std::string ModifyQosCarRequest::getQosId()const
{
	return qosId_;
}

void ModifyQosCarRequest::setQosId(const std::string& qosId)
{
	qosId_ = qosId;
	setCoreParameter("QosId", std::to_string(qosId));
}

