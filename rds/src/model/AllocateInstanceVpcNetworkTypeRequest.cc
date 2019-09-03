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

#include <alibabacloud/rds/model/AllocateInstanceVpcNetworkTypeRequest.h>

using AlibabaCloud::Rds::Model::AllocateInstanceVpcNetworkTypeRequest;

AllocateInstanceVpcNetworkTypeRequest::AllocateInstanceVpcNetworkTypeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "AllocateInstanceVpcNetworkType")
{}

AllocateInstanceVpcNetworkTypeRequest::~AllocateInstanceVpcNetworkTypeRequest()
{}

long AllocateInstanceVpcNetworkTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateInstanceVpcNetworkTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AllocateInstanceVpcNetworkTypeRequest::getTargetVpcId()const
{
	return targetVpcId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setTargetVpcId(const std::string& targetVpcId)
{
	targetVpcId_ = targetVpcId;
	setCoreParameter("TargetVpcId", targetVpcId);
}

std::string AllocateInstanceVpcNetworkTypeRequest::getTargetZoneId()const
{
	return targetZoneId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setTargetZoneId(const std::string& targetZoneId)
{
	targetZoneId_ = targetZoneId;
	setCoreParameter("TargetZoneId", targetZoneId);
}

std::string AllocateInstanceVpcNetworkTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string AllocateInstanceVpcNetworkTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateInstanceVpcNetworkTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateInstanceVpcNetworkTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateInstanceVpcNetworkTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AllocateInstanceVpcNetworkTypeRequest::getTargetVSwitchId()const
{
	return targetVSwitchId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setTargetVSwitchId(const std::string& targetVSwitchId)
{
	targetVSwitchId_ = targetVSwitchId;
	setCoreParameter("TargetVSwitchId", targetVSwitchId);
}

long AllocateInstanceVpcNetworkTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AllocateInstanceVpcNetworkTypeRequest::getTargetRegionId()const
{
	return targetRegionId_;
}

void AllocateInstanceVpcNetworkTypeRequest::setTargetRegionId(const std::string& targetRegionId)
{
	targetRegionId_ = targetRegionId;
	setCoreParameter("TargetRegionId", targetRegionId);
}

