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

#include <alibabacloud/ess/model/DescribeScalingConfigurationsRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingConfigurationsRequest::DescribeScalingConfigurationsRequest() :
	EssRequest("DescribeScalingConfigurations")
{}

DescribeScalingConfigurationsRequest::~DescribeScalingConfigurationsRequest()
{}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId6()const
{
	return scalingConfigurationId6_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId6(const std::string& scalingConfigurationId6)
{
	scalingConfigurationId6_ = scalingConfigurationId6;
	setParameter("ScalingConfigurationId6", scalingConfigurationId6);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId7()const
{
	return scalingConfigurationId7_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId7(const std::string& scalingConfigurationId7)
{
	scalingConfigurationId7_ = scalingConfigurationId7;
	setParameter("ScalingConfigurationId7", scalingConfigurationId7);
}

long DescribeScalingConfigurationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingConfigurationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId4()const
{
	return scalingConfigurationId4_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId4(const std::string& scalingConfigurationId4)
{
	scalingConfigurationId4_ = scalingConfigurationId4;
	setParameter("ScalingConfigurationId4", scalingConfigurationId4);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId5()const
{
	return scalingConfigurationId5_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId5(const std::string& scalingConfigurationId5)
{
	scalingConfigurationId5_ = scalingConfigurationId5;
	setParameter("ScalingConfigurationId5", scalingConfigurationId5);
}

std::string DescribeScalingConfigurationsRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeScalingConfigurationsRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId8()const
{
	return scalingConfigurationId8_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId8(const std::string& scalingConfigurationId8)
{
	scalingConfigurationId8_ = scalingConfigurationId8;
	setParameter("ScalingConfigurationId8", scalingConfigurationId8);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId9()const
{
	return scalingConfigurationId9_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId9(const std::string& scalingConfigurationId9)
{
	scalingConfigurationId9_ = scalingConfigurationId9;
	setParameter("ScalingConfigurationId9", scalingConfigurationId9);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId10()const
{
	return scalingConfigurationId10_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId10(const std::string& scalingConfigurationId10)
{
	scalingConfigurationId10_ = scalingConfigurationId10;
	setParameter("ScalingConfigurationId10", scalingConfigurationId10);
}

int DescribeScalingConfigurationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingConfigurationsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScalingConfigurationsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingConfigurationsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName2()const
{
	return scalingConfigurationName2_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName2(const std::string& scalingConfigurationName2)
{
	scalingConfigurationName2_ = scalingConfigurationName2;
	setParameter("ScalingConfigurationName2", scalingConfigurationName2);
}

std::string DescribeScalingConfigurationsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingConfigurationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName3()const
{
	return scalingConfigurationName3_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName3(const std::string& scalingConfigurationName3)
{
	scalingConfigurationName3_ = scalingConfigurationName3;
	setParameter("ScalingConfigurationName3", scalingConfigurationName3);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName1()const
{
	return scalingConfigurationName1_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName1(const std::string& scalingConfigurationName1)
{
	scalingConfigurationName1_ = scalingConfigurationName1;
	setParameter("ScalingConfigurationName1", scalingConfigurationName1);
}

int DescribeScalingConfigurationsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingConfigurationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId2()const
{
	return scalingConfigurationId2_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId2(const std::string& scalingConfigurationId2)
{
	scalingConfigurationId2_ = scalingConfigurationId2;
	setParameter("ScalingConfigurationId2", scalingConfigurationId2);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId3()const
{
	return scalingConfigurationId3_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId3(const std::string& scalingConfigurationId3)
{
	scalingConfigurationId3_ = scalingConfigurationId3;
	setParameter("ScalingConfigurationId3", scalingConfigurationId3);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationId1()const
{
	return scalingConfigurationId1_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId1(const std::string& scalingConfigurationId1)
{
	scalingConfigurationId1_ = scalingConfigurationId1;
	setParameter("ScalingConfigurationId1", scalingConfigurationId1);
}

std::string DescribeScalingConfigurationsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScalingConfigurationsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScalingConfigurationsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScalingConfigurationsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName6()const
{
	return scalingConfigurationName6_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName6(const std::string& scalingConfigurationName6)
{
	scalingConfigurationName6_ = scalingConfigurationName6;
	setParameter("ScalingConfigurationName6", scalingConfigurationName6);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName7()const
{
	return scalingConfigurationName7_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName7(const std::string& scalingConfigurationName7)
{
	scalingConfigurationName7_ = scalingConfigurationName7;
	setParameter("ScalingConfigurationName7", scalingConfigurationName7);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName4()const
{
	return scalingConfigurationName4_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName4(const std::string& scalingConfigurationName4)
{
	scalingConfigurationName4_ = scalingConfigurationName4;
	setParameter("ScalingConfigurationName4", scalingConfigurationName4);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName5()const
{
	return scalingConfigurationName5_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName5(const std::string& scalingConfigurationName5)
{
	scalingConfigurationName5_ = scalingConfigurationName5;
	setParameter("ScalingConfigurationName5", scalingConfigurationName5);
}

long DescribeScalingConfigurationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScalingConfigurationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName8()const
{
	return scalingConfigurationName8_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName8(const std::string& scalingConfigurationName8)
{
	scalingConfigurationName8_ = scalingConfigurationName8;
	setParameter("ScalingConfigurationName8", scalingConfigurationName8);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName9()const
{
	return scalingConfigurationName9_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName9(const std::string& scalingConfigurationName9)
{
	scalingConfigurationName9_ = scalingConfigurationName9;
	setParameter("ScalingConfigurationName9", scalingConfigurationName9);
}

std::string DescribeScalingConfigurationsRequest::getScalingConfigurationName10()const
{
	return scalingConfigurationName10_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName10(const std::string& scalingConfigurationName10)
{
	scalingConfigurationName10_ = scalingConfigurationName10;
	setParameter("ScalingConfigurationName10", scalingConfigurationName10);
}

