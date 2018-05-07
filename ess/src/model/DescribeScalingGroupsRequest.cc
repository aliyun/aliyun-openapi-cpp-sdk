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

#include <alibabacloud/ess/model/DescribeScalingGroupsRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingGroupsRequest;

DescribeScalingGroupsRequest::DescribeScalingGroupsRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeScalingGroups")
{}

DescribeScalingGroupsRequest::~DescribeScalingGroupsRequest()
{}

long DescribeScalingGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingGroupsRequest::getScalingGroupId10()const
{
	return scalingGroupId10_;
}

void DescribeScalingGroupsRequest::setScalingGroupId10(const std::string& scalingGroupId10)
{
	scalingGroupId10_ = scalingGroupId10;
	setParameter("ScalingGroupId10", scalingGroupId10);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId12()const
{
	return scalingGroupId12_;
}

void DescribeScalingGroupsRequest::setScalingGroupId12(const std::string& scalingGroupId12)
{
	scalingGroupId12_ = scalingGroupId12;
	setParameter("ScalingGroupId12", scalingGroupId12);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId13()const
{
	return scalingGroupId13_;
}

void DescribeScalingGroupsRequest::setScalingGroupId13(const std::string& scalingGroupId13)
{
	scalingGroupId13_ = scalingGroupId13;
	setParameter("ScalingGroupId13", scalingGroupId13);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId14()const
{
	return scalingGroupId14_;
}

void DescribeScalingGroupsRequest::setScalingGroupId14(const std::string& scalingGroupId14)
{
	scalingGroupId14_ = scalingGroupId14;
	setParameter("ScalingGroupId14", scalingGroupId14);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId15()const
{
	return scalingGroupId15_;
}

void DescribeScalingGroupsRequest::setScalingGroupId15(const std::string& scalingGroupId15)
{
	scalingGroupId15_ = scalingGroupId15;
	setParameter("ScalingGroupId15", scalingGroupId15);
}

long DescribeScalingGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScalingGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeScalingGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScalingGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeScalingGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScalingGroupsRequest::getScalingGroupName20()const
{
	return scalingGroupName20_;
}

void DescribeScalingGroupsRequest::setScalingGroupName20(const std::string& scalingGroupName20)
{
	scalingGroupName20_ = scalingGroupName20;
	setParameter("ScalingGroupName20", scalingGroupName20);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName19()const
{
	return scalingGroupName19_;
}

void DescribeScalingGroupsRequest::setScalingGroupName19(const std::string& scalingGroupName19)
{
	scalingGroupName19_ = scalingGroupName19;
	setParameter("ScalingGroupName19", scalingGroupName19);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId20()const
{
	return scalingGroupId20_;
}

void DescribeScalingGroupsRequest::setScalingGroupId20(const std::string& scalingGroupId20)
{
	scalingGroupId20_ = scalingGroupId20;
	setParameter("ScalingGroupId20", scalingGroupId20);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName18()const
{
	return scalingGroupName18_;
}

void DescribeScalingGroupsRequest::setScalingGroupName18(const std::string& scalingGroupName18)
{
	scalingGroupName18_ = scalingGroupName18;
	setParameter("ScalingGroupName18", scalingGroupName18);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName17()const
{
	return scalingGroupName17_;
}

void DescribeScalingGroupsRequest::setScalingGroupName17(const std::string& scalingGroupName17)
{
	scalingGroupName17_ = scalingGroupName17;
	setParameter("ScalingGroupName17", scalingGroupName17);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName16()const
{
	return scalingGroupName16_;
}

void DescribeScalingGroupsRequest::setScalingGroupName16(const std::string& scalingGroupName16)
{
	scalingGroupName16_ = scalingGroupName16;
	setParameter("ScalingGroupName16", scalingGroupName16);
}

std::string DescribeScalingGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScalingGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName()const
{
	return scalingGroupName_;
}

void DescribeScalingGroupsRequest::setScalingGroupName(const std::string& scalingGroupName)
{
	scalingGroupName_ = scalingGroupName;
	setParameter("ScalingGroupName", scalingGroupName);
}

std::string DescribeScalingGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScalingGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName1()const
{
	return scalingGroupName1_;
}

void DescribeScalingGroupsRequest::setScalingGroupName1(const std::string& scalingGroupName1)
{
	scalingGroupName1_ = scalingGroupName1;
	setParameter("ScalingGroupName1", scalingGroupName1);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName2()const
{
	return scalingGroupName2_;
}

void DescribeScalingGroupsRequest::setScalingGroupName2(const std::string& scalingGroupName2)
{
	scalingGroupName2_ = scalingGroupName2;
	setParameter("ScalingGroupName2", scalingGroupName2);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId2()const
{
	return scalingGroupId2_;
}

void DescribeScalingGroupsRequest::setScalingGroupId2(const std::string& scalingGroupId2)
{
	scalingGroupId2_ = scalingGroupId2;
	setParameter("ScalingGroupId2", scalingGroupId2);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId1()const
{
	return scalingGroupId1_;
}

void DescribeScalingGroupsRequest::setScalingGroupId1(const std::string& scalingGroupId1)
{
	scalingGroupId1_ = scalingGroupId1;
	setParameter("ScalingGroupId1", scalingGroupId1);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId6()const
{
	return scalingGroupId6_;
}

void DescribeScalingGroupsRequest::setScalingGroupId6(const std::string& scalingGroupId6)
{
	scalingGroupId6_ = scalingGroupId6;
	setParameter("ScalingGroupId6", scalingGroupId6);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId16()const
{
	return scalingGroupId16_;
}

void DescribeScalingGroupsRequest::setScalingGroupId16(const std::string& scalingGroupId16)
{
	scalingGroupId16_ = scalingGroupId16;
	setParameter("ScalingGroupId16", scalingGroupId16);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName7()const
{
	return scalingGroupName7_;
}

void DescribeScalingGroupsRequest::setScalingGroupName7(const std::string& scalingGroupName7)
{
	scalingGroupName7_ = scalingGroupName7;
	setParameter("ScalingGroupName7", scalingGroupName7);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName11()const
{
	return scalingGroupName11_;
}

void DescribeScalingGroupsRequest::setScalingGroupName11(const std::string& scalingGroupName11)
{
	scalingGroupName11_ = scalingGroupName11;
	setParameter("ScalingGroupName11", scalingGroupName11);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId5()const
{
	return scalingGroupId5_;
}

void DescribeScalingGroupsRequest::setScalingGroupId5(const std::string& scalingGroupId5)
{
	scalingGroupId5_ = scalingGroupId5;
	setParameter("ScalingGroupId5", scalingGroupId5);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId17()const
{
	return scalingGroupId17_;
}

void DescribeScalingGroupsRequest::setScalingGroupId17(const std::string& scalingGroupId17)
{
	scalingGroupId17_ = scalingGroupId17;
	setParameter("ScalingGroupId17", scalingGroupId17);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName8()const
{
	return scalingGroupName8_;
}

void DescribeScalingGroupsRequest::setScalingGroupName8(const std::string& scalingGroupName8)
{
	scalingGroupName8_ = scalingGroupName8;
	setParameter("ScalingGroupName8", scalingGroupName8);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName10()const
{
	return scalingGroupName10_;
}

void DescribeScalingGroupsRequest::setScalingGroupName10(const std::string& scalingGroupName10)
{
	scalingGroupName10_ = scalingGroupName10;
	setParameter("ScalingGroupName10", scalingGroupName10);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId4()const
{
	return scalingGroupId4_;
}

void DescribeScalingGroupsRequest::setScalingGroupId4(const std::string& scalingGroupId4)
{
	scalingGroupId4_ = scalingGroupId4;
	setParameter("ScalingGroupId4", scalingGroupId4);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId18()const
{
	return scalingGroupId18_;
}

void DescribeScalingGroupsRequest::setScalingGroupId18(const std::string& scalingGroupId18)
{
	scalingGroupId18_ = scalingGroupId18;
	setParameter("ScalingGroupId18", scalingGroupId18);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName9()const
{
	return scalingGroupName9_;
}

void DescribeScalingGroupsRequest::setScalingGroupName9(const std::string& scalingGroupName9)
{
	scalingGroupName9_ = scalingGroupName9;
	setParameter("ScalingGroupName9", scalingGroupName9);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId3()const
{
	return scalingGroupId3_;
}

void DescribeScalingGroupsRequest::setScalingGroupId3(const std::string& scalingGroupId3)
{
	scalingGroupId3_ = scalingGroupId3;
	setParameter("ScalingGroupId3", scalingGroupId3);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId19()const
{
	return scalingGroupId19_;
}

void DescribeScalingGroupsRequest::setScalingGroupId19(const std::string& scalingGroupId19)
{
	scalingGroupId19_ = scalingGroupId19;
	setParameter("ScalingGroupId19", scalingGroupId19);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName3()const
{
	return scalingGroupName3_;
}

void DescribeScalingGroupsRequest::setScalingGroupName3(const std::string& scalingGroupName3)
{
	scalingGroupName3_ = scalingGroupName3;
	setParameter("ScalingGroupName3", scalingGroupName3);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName15()const
{
	return scalingGroupName15_;
}

void DescribeScalingGroupsRequest::setScalingGroupName15(const std::string& scalingGroupName15)
{
	scalingGroupName15_ = scalingGroupName15;
	setParameter("ScalingGroupName15", scalingGroupName15);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId9()const
{
	return scalingGroupId9_;
}

void DescribeScalingGroupsRequest::setScalingGroupId9(const std::string& scalingGroupId9)
{
	scalingGroupId9_ = scalingGroupId9;
	setParameter("ScalingGroupId9", scalingGroupId9);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName4()const
{
	return scalingGroupName4_;
}

void DescribeScalingGroupsRequest::setScalingGroupName4(const std::string& scalingGroupName4)
{
	scalingGroupName4_ = scalingGroupName4;
	setParameter("ScalingGroupName4", scalingGroupName4);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName14()const
{
	return scalingGroupName14_;
}

void DescribeScalingGroupsRequest::setScalingGroupName14(const std::string& scalingGroupName14)
{
	scalingGroupName14_ = scalingGroupName14;
	setParameter("ScalingGroupName14", scalingGroupName14);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId8()const
{
	return scalingGroupId8_;
}

void DescribeScalingGroupsRequest::setScalingGroupId8(const std::string& scalingGroupId8)
{
	scalingGroupId8_ = scalingGroupId8;
	setParameter("ScalingGroupId8", scalingGroupId8);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName5()const
{
	return scalingGroupName5_;
}

void DescribeScalingGroupsRequest::setScalingGroupName5(const std::string& scalingGroupName5)
{
	scalingGroupName5_ = scalingGroupName5;
	setParameter("ScalingGroupName5", scalingGroupName5);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName13()const
{
	return scalingGroupName13_;
}

void DescribeScalingGroupsRequest::setScalingGroupName13(const std::string& scalingGroupName13)
{
	scalingGroupName13_ = scalingGroupName13;
	setParameter("ScalingGroupName13", scalingGroupName13);
}

std::string DescribeScalingGroupsRequest::getScalingGroupId7()const
{
	return scalingGroupId7_;
}

void DescribeScalingGroupsRequest::setScalingGroupId7(const std::string& scalingGroupId7)
{
	scalingGroupId7_ = scalingGroupId7;
	setParameter("ScalingGroupId7", scalingGroupId7);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName6()const
{
	return scalingGroupName6_;
}

void DescribeScalingGroupsRequest::setScalingGroupName6(const std::string& scalingGroupName6)
{
	scalingGroupName6_ = scalingGroupName6;
	setParameter("ScalingGroupName6", scalingGroupName6);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName12()const
{
	return scalingGroupName12_;
}

void DescribeScalingGroupsRequest::setScalingGroupName12(const std::string& scalingGroupName12)
{
	scalingGroupName12_ = scalingGroupName12;
	setParameter("ScalingGroupName12", scalingGroupName12);
}

