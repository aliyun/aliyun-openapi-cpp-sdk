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

#include <alibabacloud/ecs/model/ModifyInstanceNetworkSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceNetworkSpecRequest;

ModifyInstanceNetworkSpecRequest::ModifyInstanceNetworkSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceNetworkSpec")
{}

ModifyInstanceNetworkSpecRequest::~ModifyInstanceNetworkSpecRequest()
{}

long ModifyInstanceNetworkSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceNetworkSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

bool ModifyInstanceNetworkSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyInstanceNetworkSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay);
}

std::string ModifyInstanceNetworkSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceNetworkSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceNetworkSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceNetworkSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyInstanceNetworkSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceNetworkSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int ModifyInstanceNetworkSpecRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void ModifyInstanceNetworkSpecRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", internetMaxBandwidthOut);
}

std::string ModifyInstanceNetworkSpecRequest::getEndTime()const
{
	return endTime_;
}

void ModifyInstanceNetworkSpecRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ModifyInstanceNetworkSpecRequest::getStartTime()const
{
	return startTime_;
}

void ModifyInstanceNetworkSpecRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long ModifyInstanceNetworkSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceNetworkSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyInstanceNetworkSpecRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceNetworkSpecRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyInstanceNetworkSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceNetworkSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceNetworkSpecRequest::getNetworkChargeType()const
{
	return networkChargeType_;
}

void ModifyInstanceNetworkSpecRequest::setNetworkChargeType(const std::string& networkChargeType)
{
	networkChargeType_ = networkChargeType;
	setCoreParameter("NetworkChargeType", networkChargeType);
}

int ModifyInstanceNetworkSpecRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void ModifyInstanceNetworkSpecRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", internetMaxBandwidthIn);
}

bool ModifyInstanceNetworkSpecRequest::getAllocatePublicIp()const
{
	return allocatePublicIp_;
}

void ModifyInstanceNetworkSpecRequest::setAllocatePublicIp(bool allocatePublicIp)
{
	allocatePublicIp_ = allocatePublicIp;
	setCoreParameter("AllocatePublicIp", allocatePublicIp);
}

