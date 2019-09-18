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

#include <alibabacloud/ess/model/DescribeScalingInstancesRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingInstancesRequest;

DescribeScalingInstancesRequest::DescribeScalingInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeScalingInstances")
{}

DescribeScalingInstancesRequest::~DescribeScalingInstancesRequest()
{}

long DescribeScalingInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingInstancesRequest::getCreationType()const
{
	return creationType_;
}

void DescribeScalingInstancesRequest::setCreationType(const std::string& creationType)
{
	creationType_ = creationType;
	setCoreParameter("CreationType", creationType);
}

std::string DescribeScalingInstancesRequest::getInstanceId1()const
{
	return instanceId1_;
}

void DescribeScalingInstancesRequest::setInstanceId1(const std::string& instanceId1)
{
	instanceId1_ = instanceId1;
	setCoreParameter("InstanceId1", instanceId1);
}

std::string DescribeScalingInstancesRequest::getInstanceId3()const
{
	return instanceId3_;
}

void DescribeScalingInstancesRequest::setInstanceId3(const std::string& instanceId3)
{
	instanceId3_ = instanceId3;
	setCoreParameter("InstanceId3", instanceId3);
}

std::string DescribeScalingInstancesRequest::getInstanceId2()const
{
	return instanceId2_;
}

void DescribeScalingInstancesRequest::setInstanceId2(const std::string& instanceId2)
{
	instanceId2_ = instanceId2;
	setCoreParameter("InstanceId2", instanceId2);
}

std::string DescribeScalingInstancesRequest::getInstanceId5()const
{
	return instanceId5_;
}

void DescribeScalingInstancesRequest::setInstanceId5(const std::string& instanceId5)
{
	instanceId5_ = instanceId5;
	setCoreParameter("InstanceId5", instanceId5);
}

std::string DescribeScalingInstancesRequest::getInstanceId4()const
{
	return instanceId4_;
}

void DescribeScalingInstancesRequest::setInstanceId4(const std::string& instanceId4)
{
	instanceId4_ = instanceId4;
	setCoreParameter("InstanceId4", instanceId4);
}

std::string DescribeScalingInstancesRequest::getInstanceId7()const
{
	return instanceId7_;
}

void DescribeScalingInstancesRequest::setInstanceId7(const std::string& instanceId7)
{
	instanceId7_ = instanceId7;
	setCoreParameter("InstanceId7", instanceId7);
}

std::string DescribeScalingInstancesRequest::getInstanceId6()const
{
	return instanceId6_;
}

void DescribeScalingInstancesRequest::setInstanceId6(const std::string& instanceId6)
{
	instanceId6_ = instanceId6;
	setCoreParameter("InstanceId6", instanceId6);
}

std::string DescribeScalingInstancesRequest::getInstanceId9()const
{
	return instanceId9_;
}

void DescribeScalingInstancesRequest::setInstanceId9(const std::string& instanceId9)
{
	instanceId9_ = instanceId9;
	setCoreParameter("InstanceId9", instanceId9);
}

std::string DescribeScalingInstancesRequest::getInstanceId8()const
{
	return instanceId8_;
}

void DescribeScalingInstancesRequest::setInstanceId8(const std::string& instanceId8)
{
	instanceId8_ = instanceId8;
	setCoreParameter("InstanceId8", instanceId8);
}

long DescribeScalingInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScalingInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScalingInstancesRequest::getScalingConfigurationId()const
{
	return scalingConfigurationId_;
}

void DescribeScalingInstancesRequest::setScalingConfigurationId(const std::string& scalingConfigurationId)
{
	scalingConfigurationId_ = scalingConfigurationId;
	setCoreParameter("ScalingConfigurationId", scalingConfigurationId);
}

std::string DescribeScalingInstancesRequest::getHealthStatus()const
{
	return healthStatus_;
}

void DescribeScalingInstancesRequest::setHealthStatus(const std::string& healthStatus)
{
	healthStatus_ = healthStatus;
	setCoreParameter("HealthStatus", healthStatus);
}

std::string DescribeScalingInstancesRequest::getInstanceId10()const
{
	return instanceId10_;
}

void DescribeScalingInstancesRequest::setInstanceId10(const std::string& instanceId10)
{
	instanceId10_ = instanceId10;
	setCoreParameter("InstanceId10", instanceId10);
}

std::string DescribeScalingInstancesRequest::getInstanceId12()const
{
	return instanceId12_;
}

void DescribeScalingInstancesRequest::setInstanceId12(const std::string& instanceId12)
{
	instanceId12_ = instanceId12;
	setCoreParameter("InstanceId12", instanceId12);
}

std::string DescribeScalingInstancesRequest::getInstanceId11()const
{
	return instanceId11_;
}

void DescribeScalingInstancesRequest::setInstanceId11(const std::string& instanceId11)
{
	instanceId11_ = instanceId11;
	setCoreParameter("InstanceId11", instanceId11);
}

std::string DescribeScalingInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeScalingInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string DescribeScalingInstancesRequest::getLifecycleState()const
{
	return lifecycleState_;
}

void DescribeScalingInstancesRequest::setLifecycleState(const std::string& lifecycleState)
{
	lifecycleState_ = lifecycleState;
	setCoreParameter("LifecycleState", lifecycleState);
}

int DescribeScalingInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScalingInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeScalingInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScalingInstancesRequest::getInstanceId20()const
{
	return instanceId20_;
}

void DescribeScalingInstancesRequest::setInstanceId20(const std::string& instanceId20)
{
	instanceId20_ = instanceId20;
	setCoreParameter("InstanceId20", instanceId20);
}

std::string DescribeScalingInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScalingInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScalingInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScalingInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeScalingInstancesRequest::getInstanceId18()const
{
	return instanceId18_;
}

void DescribeScalingInstancesRequest::setInstanceId18(const std::string& instanceId18)
{
	instanceId18_ = instanceId18;
	setCoreParameter("InstanceId18", instanceId18);
}

std::string DescribeScalingInstancesRequest::getInstanceId17()const
{
	return instanceId17_;
}

void DescribeScalingInstancesRequest::setInstanceId17(const std::string& instanceId17)
{
	instanceId17_ = instanceId17;
	setCoreParameter("InstanceId17", instanceId17);
}

std::string DescribeScalingInstancesRequest::getInstanceId19()const
{
	return instanceId19_;
}

void DescribeScalingInstancesRequest::setInstanceId19(const std::string& instanceId19)
{
	instanceId19_ = instanceId19;
	setCoreParameter("InstanceId19", instanceId19);
}

std::string DescribeScalingInstancesRequest::getInstanceId14()const
{
	return instanceId14_;
}

void DescribeScalingInstancesRequest::setInstanceId14(const std::string& instanceId14)
{
	instanceId14_ = instanceId14;
	setCoreParameter("InstanceId14", instanceId14);
}

std::string DescribeScalingInstancesRequest::getInstanceId13()const
{
	return instanceId13_;
}

void DescribeScalingInstancesRequest::setInstanceId13(const std::string& instanceId13)
{
	instanceId13_ = instanceId13;
	setCoreParameter("InstanceId13", instanceId13);
}

std::string DescribeScalingInstancesRequest::getInstanceId16()const
{
	return instanceId16_;
}

void DescribeScalingInstancesRequest::setInstanceId16(const std::string& instanceId16)
{
	instanceId16_ = instanceId16;
	setCoreParameter("InstanceId16", instanceId16);
}

std::string DescribeScalingInstancesRequest::getInstanceId15()const
{
	return instanceId15_;
}

void DescribeScalingInstancesRequest::setInstanceId15(const std::string& instanceId15)
{
	instanceId15_ = instanceId15;
	setCoreParameter("InstanceId15", instanceId15);
}

