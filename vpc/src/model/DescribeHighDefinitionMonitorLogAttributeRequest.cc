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

#include <alibabacloud/vpc/model/DescribeHighDefinitionMonitorLogAttributeRequest.h>

using AlibabaCloud::Vpc::Model::DescribeHighDefinitionMonitorLogAttributeRequest;

DescribeHighDefinitionMonitorLogAttributeRequest::DescribeHighDefinitionMonitorLogAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeHighDefinitionMonitorLogAttribute")
{}

DescribeHighDefinitionMonitorLogAttributeRequest::~DescribeHighDefinitionMonitorLogAttributeRequest()
{}

long DescribeHighDefinitionMonitorLogAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeHighDefinitionMonitorLogAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeHighDefinitionMonitorLogAttributeRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeHighDefinitionMonitorLogAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeHighDefinitionMonitorLogAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeHighDefinitionMonitorLogAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeHighDefinitionMonitorLogAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeHighDefinitionMonitorLogAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

