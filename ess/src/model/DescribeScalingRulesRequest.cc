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

#include <alibabacloud/ess/model/DescribeScalingRulesRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingRulesRequest::DescribeScalingRulesRequest() :
	EssRequest("DescribeScalingRules")
{}

DescribeScalingRulesRequest::~DescribeScalingRulesRequest()
{}

std::string DescribeScalingRulesRequest::getScalingRuleName1()const
{
	return scalingRuleName1_;
}

void DescribeScalingRulesRequest::setScalingRuleName1(const std::string& scalingRuleName1)
{
	scalingRuleName1_ = scalingRuleName1;
	setParameter("ScalingRuleName1", scalingRuleName1);
}

long DescribeScalingRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingRulesRequest::getScalingRuleName2()const
{
	return scalingRuleName2_;
}

void DescribeScalingRulesRequest::setScalingRuleName2(const std::string& scalingRuleName2)
{
	scalingRuleName2_ = scalingRuleName2;
	setParameter("ScalingRuleName2", scalingRuleName2);
}

std::string DescribeScalingRulesRequest::getScalingRuleName3()const
{
	return scalingRuleName3_;
}

void DescribeScalingRulesRequest::setScalingRuleName3(const std::string& scalingRuleName3)
{
	scalingRuleName3_ = scalingRuleName3;
	setParameter("ScalingRuleName3", scalingRuleName3);
}

std::string DescribeScalingRulesRequest::getScalingRuleName4()const
{
	return scalingRuleName4_;
}

void DescribeScalingRulesRequest::setScalingRuleName4(const std::string& scalingRuleName4)
{
	scalingRuleName4_ = scalingRuleName4;
	setParameter("ScalingRuleName4", scalingRuleName4);
}

std::string DescribeScalingRulesRequest::getScalingRuleName5()const
{
	return scalingRuleName5_;
}

void DescribeScalingRulesRequest::setScalingRuleName5(const std::string& scalingRuleName5)
{
	scalingRuleName5_ = scalingRuleName5;
	setParameter("ScalingRuleName5", scalingRuleName5);
}

std::string DescribeScalingRulesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeScalingRulesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DescribeScalingRulesRequest::getScalingRuleName6()const
{
	return scalingRuleName6_;
}

void DescribeScalingRulesRequest::setScalingRuleName6(const std::string& scalingRuleName6)
{
	scalingRuleName6_ = scalingRuleName6;
	setParameter("ScalingRuleName6", scalingRuleName6);
}

std::string DescribeScalingRulesRequest::getScalingRuleName7()const
{
	return scalingRuleName7_;
}

void DescribeScalingRulesRequest::setScalingRuleName7(const std::string& scalingRuleName7)
{
	scalingRuleName7_ = scalingRuleName7;
	setParameter("ScalingRuleName7", scalingRuleName7);
}

std::string DescribeScalingRulesRequest::getScalingRuleName8()const
{
	return scalingRuleName8_;
}

void DescribeScalingRulesRequest::setScalingRuleName8(const std::string& scalingRuleName8)
{
	scalingRuleName8_ = scalingRuleName8;
	setParameter("ScalingRuleName8", scalingRuleName8);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri9()const
{
	return scalingRuleAri9_;
}

void DescribeScalingRulesRequest::setScalingRuleAri9(const std::string& scalingRuleAri9)
{
	scalingRuleAri9_ = scalingRuleAri9;
	setParameter("ScalingRuleAri9", scalingRuleAri9);
}

std::string DescribeScalingRulesRequest::getScalingRuleName9()const
{
	return scalingRuleName9_;
}

void DescribeScalingRulesRequest::setScalingRuleName9(const std::string& scalingRuleName9)
{
	scalingRuleName9_ = scalingRuleName9;
	setParameter("ScalingRuleName9", scalingRuleName9);
}

int DescribeScalingRulesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingRulesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScalingRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingRulesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeScalingRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScalingRulesRequest::getScalingRuleId10()const
{
	return scalingRuleId10_;
}

void DescribeScalingRulesRequest::setScalingRuleId10(const std::string& scalingRuleId10)
{
	scalingRuleId10_ = scalingRuleId10;
	setParameter("ScalingRuleId10", scalingRuleId10);
}

std::string DescribeScalingRulesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScalingRulesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScalingRulesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScalingRulesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeScalingRulesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScalingRulesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScalingRulesRequest::getScalingRuleAri1()const
{
	return scalingRuleAri1_;
}

void DescribeScalingRulesRequest::setScalingRuleAri1(const std::string& scalingRuleAri1)
{
	scalingRuleAri1_ = scalingRuleAri1;
	setParameter("ScalingRuleAri1", scalingRuleAri1);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri2()const
{
	return scalingRuleAri2_;
}

void DescribeScalingRulesRequest::setScalingRuleAri2(const std::string& scalingRuleAri2)
{
	scalingRuleAri2_ = scalingRuleAri2;
	setParameter("ScalingRuleAri2", scalingRuleAri2);
}

std::string DescribeScalingRulesRequest::getScalingRuleName10()const
{
	return scalingRuleName10_;
}

void DescribeScalingRulesRequest::setScalingRuleName10(const std::string& scalingRuleName10)
{
	scalingRuleName10_ = scalingRuleName10;
	setParameter("ScalingRuleName10", scalingRuleName10);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri3()const
{
	return scalingRuleAri3_;
}

void DescribeScalingRulesRequest::setScalingRuleAri3(const std::string& scalingRuleAri3)
{
	scalingRuleAri3_ = scalingRuleAri3;
	setParameter("ScalingRuleAri3", scalingRuleAri3);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri4()const
{
	return scalingRuleAri4_;
}

void DescribeScalingRulesRequest::setScalingRuleAri4(const std::string& scalingRuleAri4)
{
	scalingRuleAri4_ = scalingRuleAri4;
	setParameter("ScalingRuleAri4", scalingRuleAri4);
}

std::string DescribeScalingRulesRequest::getScalingRuleId8()const
{
	return scalingRuleId8_;
}

void DescribeScalingRulesRequest::setScalingRuleId8(const std::string& scalingRuleId8)
{
	scalingRuleId8_ = scalingRuleId8;
	setParameter("ScalingRuleId8", scalingRuleId8);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri5()const
{
	return scalingRuleAri5_;
}

void DescribeScalingRulesRequest::setScalingRuleAri5(const std::string& scalingRuleAri5)
{
	scalingRuleAri5_ = scalingRuleAri5;
	setParameter("ScalingRuleAri5", scalingRuleAri5);
}

std::string DescribeScalingRulesRequest::getScalingRuleId9()const
{
	return scalingRuleId9_;
}

void DescribeScalingRulesRequest::setScalingRuleId9(const std::string& scalingRuleId9)
{
	scalingRuleId9_ = scalingRuleId9;
	setParameter("ScalingRuleId9", scalingRuleId9);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri6()const
{
	return scalingRuleAri6_;
}

void DescribeScalingRulesRequest::setScalingRuleAri6(const std::string& scalingRuleAri6)
{
	scalingRuleAri6_ = scalingRuleAri6;
	setParameter("ScalingRuleAri6", scalingRuleAri6);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri7()const
{
	return scalingRuleAri7_;
}

void DescribeScalingRulesRequest::setScalingRuleAri7(const std::string& scalingRuleAri7)
{
	scalingRuleAri7_ = scalingRuleAri7;
	setParameter("ScalingRuleAri7", scalingRuleAri7);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri10()const
{
	return scalingRuleAri10_;
}

void DescribeScalingRulesRequest::setScalingRuleAri10(const std::string& scalingRuleAri10)
{
	scalingRuleAri10_ = scalingRuleAri10;
	setParameter("ScalingRuleAri10", scalingRuleAri10);
}

std::string DescribeScalingRulesRequest::getScalingRuleAri8()const
{
	return scalingRuleAri8_;
}

void DescribeScalingRulesRequest::setScalingRuleAri8(const std::string& scalingRuleAri8)
{
	scalingRuleAri8_ = scalingRuleAri8;
	setParameter("ScalingRuleAri8", scalingRuleAri8);
}

std::string DescribeScalingRulesRequest::getScalingRuleId4()const
{
	return scalingRuleId4_;
}

void DescribeScalingRulesRequest::setScalingRuleId4(const std::string& scalingRuleId4)
{
	scalingRuleId4_ = scalingRuleId4;
	setParameter("ScalingRuleId4", scalingRuleId4);
}

std::string DescribeScalingRulesRequest::getScalingRuleId5()const
{
	return scalingRuleId5_;
}

void DescribeScalingRulesRequest::setScalingRuleId5(const std::string& scalingRuleId5)
{
	scalingRuleId5_ = scalingRuleId5;
	setParameter("ScalingRuleId5", scalingRuleId5);
}

std::string DescribeScalingRulesRequest::getScalingRuleId6()const
{
	return scalingRuleId6_;
}

void DescribeScalingRulesRequest::setScalingRuleId6(const std::string& scalingRuleId6)
{
	scalingRuleId6_ = scalingRuleId6;
	setParameter("ScalingRuleId6", scalingRuleId6);
}

std::string DescribeScalingRulesRequest::getScalingRuleId7()const
{
	return scalingRuleId7_;
}

void DescribeScalingRulesRequest::setScalingRuleId7(const std::string& scalingRuleId7)
{
	scalingRuleId7_ = scalingRuleId7;
	setParameter("ScalingRuleId7", scalingRuleId7);
}

std::string DescribeScalingRulesRequest::getScalingRuleId1()const
{
	return scalingRuleId1_;
}

void DescribeScalingRulesRequest::setScalingRuleId1(const std::string& scalingRuleId1)
{
	scalingRuleId1_ = scalingRuleId1;
	setParameter("ScalingRuleId1", scalingRuleId1);
}

std::string DescribeScalingRulesRequest::getScalingRuleId2()const
{
	return scalingRuleId2_;
}

void DescribeScalingRulesRequest::setScalingRuleId2(const std::string& scalingRuleId2)
{
	scalingRuleId2_ = scalingRuleId2;
	setParameter("ScalingRuleId2", scalingRuleId2);
}

std::string DescribeScalingRulesRequest::getScalingRuleId3()const
{
	return scalingRuleId3_;
}

void DescribeScalingRulesRequest::setScalingRuleId3(const std::string& scalingRuleId3)
{
	scalingRuleId3_ = scalingRuleId3;
	setParameter("ScalingRuleId3", scalingRuleId3);
}

