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

#include <alibabacloud/ess/model/DescribeScalingActivitiesRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingActivitiesRequest;

DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeScalingActivities")
{}

DescribeScalingActivitiesRequest::~DescribeScalingActivitiesRequest()
{}

std::string DescribeScalingActivitiesRequest::getScalingActivityId9()const
{
	return scalingActivityId9_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId9(const std::string& scalingActivityId9)
{
	scalingActivityId9_ = scalingActivityId9;
	setCoreParameter("ScalingActivityId9", scalingActivityId9);
}

long DescribeScalingActivitiesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingActivitiesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId5()const
{
	return scalingActivityId5_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId5(const std::string& scalingActivityId5)
{
	scalingActivityId5_ = scalingActivityId5;
	setCoreParameter("ScalingActivityId5", scalingActivityId5);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId6()const
{
	return scalingActivityId6_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId6(const std::string& scalingActivityId6)
{
	scalingActivityId6_ = scalingActivityId6;
	setCoreParameter("ScalingActivityId6", scalingActivityId6);
}

std::string DescribeScalingActivitiesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeScalingActivitiesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId7()const
{
	return scalingActivityId7_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId7(const std::string& scalingActivityId7)
{
	scalingActivityId7_ = scalingActivityId7;
	setCoreParameter("ScalingActivityId7", scalingActivityId7);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId8()const
{
	return scalingActivityId8_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId8(const std::string& scalingActivityId8)
{
	scalingActivityId8_ = scalingActivityId8;
	setCoreParameter("ScalingActivityId8", scalingActivityId8);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId1()const
{
	return scalingActivityId1_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId1(const std::string& scalingActivityId1)
{
	scalingActivityId1_ = scalingActivityId1;
	setCoreParameter("ScalingActivityId1", scalingActivityId1);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId2()const
{
	return scalingActivityId2_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId2(const std::string& scalingActivityId2)
{
	scalingActivityId2_ = scalingActivityId2;
	setCoreParameter("ScalingActivityId2", scalingActivityId2);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId3()const
{
	return scalingActivityId3_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId3(const std::string& scalingActivityId3)
{
	scalingActivityId3_ = scalingActivityId3;
	setCoreParameter("ScalingActivityId3", scalingActivityId3);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId4()const
{
	return scalingActivityId4_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId4(const std::string& scalingActivityId4)
{
	scalingActivityId4_ = scalingActivityId4;
	setCoreParameter("ScalingActivityId4", scalingActivityId4);
}

int DescribeScalingActivitiesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingActivitiesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScalingActivitiesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingActivitiesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingActivitiesRequest::getStatusCode()const
{
	return statusCode_;
}

void DescribeScalingActivitiesRequest::setStatusCode(const std::string& statusCode)
{
	statusCode_ = statusCode;
	setCoreParameter("StatusCode", statusCode);
}

std::string DescribeScalingActivitiesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingActivitiesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeScalingActivitiesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingActivitiesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId11()const
{
	return scalingActivityId11_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId11(const std::string& scalingActivityId11)
{
	scalingActivityId11_ = scalingActivityId11;
	setCoreParameter("ScalingActivityId11", scalingActivityId11);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId10()const
{
	return scalingActivityId10_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId10(const std::string& scalingActivityId10)
{
	scalingActivityId10_ = scalingActivityId10;
	setCoreParameter("ScalingActivityId10", scalingActivityId10);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId13()const
{
	return scalingActivityId13_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId13(const std::string& scalingActivityId13)
{
	scalingActivityId13_ = scalingActivityId13;
	setCoreParameter("ScalingActivityId13", scalingActivityId13);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId12()const
{
	return scalingActivityId12_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId12(const std::string& scalingActivityId12)
{
	scalingActivityId12_ = scalingActivityId12;
	setCoreParameter("ScalingActivityId12", scalingActivityId12);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId15()const
{
	return scalingActivityId15_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId15(const std::string& scalingActivityId15)
{
	scalingActivityId15_ = scalingActivityId15;
	setCoreParameter("ScalingActivityId15", scalingActivityId15);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId14()const
{
	return scalingActivityId14_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId14(const std::string& scalingActivityId14)
{
	scalingActivityId14_ = scalingActivityId14;
	setCoreParameter("ScalingActivityId14", scalingActivityId14);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId17()const
{
	return scalingActivityId17_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId17(const std::string& scalingActivityId17)
{
	scalingActivityId17_ = scalingActivityId17;
	setCoreParameter("ScalingActivityId17", scalingActivityId17);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId16()const
{
	return scalingActivityId16_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId16(const std::string& scalingActivityId16)
{
	scalingActivityId16_ = scalingActivityId16;
	setCoreParameter("ScalingActivityId16", scalingActivityId16);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId19()const
{
	return scalingActivityId19_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId19(const std::string& scalingActivityId19)
{
	scalingActivityId19_ = scalingActivityId19;
	setCoreParameter("ScalingActivityId19", scalingActivityId19);
}

std::string DescribeScalingActivitiesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScalingActivitiesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId18()const
{
	return scalingActivityId18_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId18(const std::string& scalingActivityId18)
{
	scalingActivityId18_ = scalingActivityId18;
	setCoreParameter("ScalingActivityId18", scalingActivityId18);
}

std::string DescribeScalingActivitiesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScalingActivitiesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeScalingActivitiesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScalingActivitiesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScalingActivitiesRequest::getScalingActivityId20()const
{
	return scalingActivityId20_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId20(const std::string& scalingActivityId20)
{
	scalingActivityId20_ = scalingActivityId20;
	setCoreParameter("ScalingActivityId20", scalingActivityId20);
}

