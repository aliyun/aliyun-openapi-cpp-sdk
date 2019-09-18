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

#include <alibabacloud/smartag/model/CreateQosCarRequest.h>

using AlibabaCloud::Smartag::Model::CreateQosCarRequest;

CreateQosCarRequest::CreateQosCarRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "CreateQosCar")
{}

CreateQosCarRequest::~CreateQosCarRequest()
{}

long CreateQosCarRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateQosCarRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateQosCarRequest::getMinBandwidthAbs()const
{
	return minBandwidthAbs_;
}

void CreateQosCarRequest::setMinBandwidthAbs(int minBandwidthAbs)
{
	minBandwidthAbs_ = minBandwidthAbs;
	setCoreParameter("MinBandwidthAbs", std::to_string(minBandwidthAbs));
}

std::string CreateQosCarRequest::getDescription()const
{
	return description_;
}

void CreateQosCarRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateQosCarRequest::getRegionId()const
{
	return regionId_;
}

void CreateQosCarRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateQosCarRequest::getPercentSourceType()const
{
	return percentSourceType_;
}

void CreateQosCarRequest::setPercentSourceType(const std::string& percentSourceType)
{
	percentSourceType_ = percentSourceType;
	setCoreParameter("PercentSourceType", percentSourceType);
}

std::string CreateQosCarRequest::getQosId()const
{
	return qosId_;
}

void CreateQosCarRequest::setQosId(const std::string& qosId)
{
	qosId_ = qosId;
	setCoreParameter("QosId", qosId);
}

int CreateQosCarRequest::getMaxBandwidthAbs()const
{
	return maxBandwidthAbs_;
}

void CreateQosCarRequest::setMaxBandwidthAbs(int maxBandwidthAbs)
{
	maxBandwidthAbs_ = maxBandwidthAbs;
	setCoreParameter("MaxBandwidthAbs", std::to_string(maxBandwidthAbs));
}

std::string CreateQosCarRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateQosCarRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateQosCarRequest::getMaxBandwidthPercent()const
{
	return maxBandwidthPercent_;
}

void CreateQosCarRequest::setMaxBandwidthPercent(int maxBandwidthPercent)
{
	maxBandwidthPercent_ = maxBandwidthPercent;
	setCoreParameter("MaxBandwidthPercent", std::to_string(maxBandwidthPercent));
}

std::string CreateQosCarRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateQosCarRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateQosCarRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateQosCarRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int CreateQosCarRequest::getPriority()const
{
	return priority_;
}

void CreateQosCarRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

int CreateQosCarRequest::getMinBandwidthPercent()const
{
	return minBandwidthPercent_;
}

void CreateQosCarRequest::setMinBandwidthPercent(int minBandwidthPercent)
{
	minBandwidthPercent_ = minBandwidthPercent;
	setCoreParameter("MinBandwidthPercent", std::to_string(minBandwidthPercent));
}

std::string CreateQosCarRequest::getLimitType()const
{
	return limitType_;
}

void CreateQosCarRequest::setLimitType(const std::string& limitType)
{
	limitType_ = limitType;
	setCoreParameter("LimitType", limitType);
}

