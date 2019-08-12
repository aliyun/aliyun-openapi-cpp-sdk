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

#include <alibabacloud/ess/model/DescribeScheduledTasksRequest.h>

using AlibabaCloud::Ess::Model::DescribeScheduledTasksRequest;

DescribeScheduledTasksRequest::DescribeScheduledTasksRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeScheduledTasks")
{}

DescribeScheduledTasksRequest::~DescribeScheduledTasksRequest()
{}

long DescribeScheduledTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScheduledTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeScheduledTasksRequest::getScheduledAction2()const
{
	return scheduledAction2_;
}

void DescribeScheduledTasksRequest::setScheduledAction2(const std::string& scheduledAction2)
{
	scheduledAction2_ = scheduledAction2;
	setCoreParameter("ScheduledAction2", scheduledAction2);
}

std::string DescribeScheduledTasksRequest::getScheduledAction1()const
{
	return scheduledAction1_;
}

void DescribeScheduledTasksRequest::setScheduledAction1(const std::string& scheduledAction1)
{
	scheduledAction1_ = scheduledAction1;
	setCoreParameter("ScheduledAction1", scheduledAction1);
}

std::string DescribeScheduledTasksRequest::getScheduledAction6()const
{
	return scheduledAction6_;
}

void DescribeScheduledTasksRequest::setScheduledAction6(const std::string& scheduledAction6)
{
	scheduledAction6_ = scheduledAction6;
	setCoreParameter("ScheduledAction6", scheduledAction6);
}

std::string DescribeScheduledTasksRequest::getScheduledAction5()const
{
	return scheduledAction5_;
}

void DescribeScheduledTasksRequest::setScheduledAction5(const std::string& scheduledAction5)
{
	scheduledAction5_ = scheduledAction5;
	setCoreParameter("ScheduledAction5", scheduledAction5);
}

std::string DescribeScheduledTasksRequest::getScheduledAction4()const
{
	return scheduledAction4_;
}

void DescribeScheduledTasksRequest::setScheduledAction4(const std::string& scheduledAction4)
{
	scheduledAction4_ = scheduledAction4;
	setCoreParameter("ScheduledAction4", scheduledAction4);
}

std::string DescribeScheduledTasksRequest::getScheduledAction3()const
{
	return scheduledAction3_;
}

void DescribeScheduledTasksRequest::setScheduledAction3(const std::string& scheduledAction3)
{
	scheduledAction3_ = scheduledAction3;
	setCoreParameter("ScheduledAction3", scheduledAction3);
}

std::string DescribeScheduledTasksRequest::getScheduledAction9()const
{
	return scheduledAction9_;
}

void DescribeScheduledTasksRequest::setScheduledAction9(const std::string& scheduledAction9)
{
	scheduledAction9_ = scheduledAction9;
	setCoreParameter("ScheduledAction9", scheduledAction9);
}

std::string DescribeScheduledTasksRequest::getScheduledAction8()const
{
	return scheduledAction8_;
}

void DescribeScheduledTasksRequest::setScheduledAction8(const std::string& scheduledAction8)
{
	scheduledAction8_ = scheduledAction8;
	setCoreParameter("ScheduledAction8", scheduledAction8);
}

std::string DescribeScheduledTasksRequest::getScheduledAction7()const
{
	return scheduledAction7_;
}

void DescribeScheduledTasksRequest::setScheduledAction7(const std::string& scheduledAction7)
{
	scheduledAction7_ = scheduledAction7;
	setCoreParameter("ScheduledAction7", scheduledAction7);
}

long DescribeScheduledTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScheduledTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName20()const
{
	return scheduledTaskName20_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName20(const std::string& scheduledTaskName20)
{
	scheduledTaskName20_ = scheduledTaskName20;
	setCoreParameter("ScheduledTaskName20", scheduledTaskName20);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName19()const
{
	return scheduledTaskName19_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName19(const std::string& scheduledTaskName19)
{
	scheduledTaskName19_ = scheduledTaskName19;
	setCoreParameter("ScheduledTaskName19", scheduledTaskName19);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName18()const
{
	return scheduledTaskName18_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName18(const std::string& scheduledTaskName18)
{
	scheduledTaskName18_ = scheduledTaskName18;
	setCoreParameter("ScheduledTaskName18", scheduledTaskName18);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId20()const
{
	return scheduledTaskId20_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId20(const std::string& scheduledTaskId20)
{
	scheduledTaskId20_ = scheduledTaskId20;
	setCoreParameter("ScheduledTaskId20", scheduledTaskId20);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName13()const
{
	return scheduledTaskName13_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName13(const std::string& scheduledTaskName13)
{
	scheduledTaskName13_ = scheduledTaskName13;
	setCoreParameter("ScheduledTaskName13", scheduledTaskName13);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName12()const
{
	return scheduledTaskName12_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName12(const std::string& scheduledTaskName12)
{
	scheduledTaskName12_ = scheduledTaskName12;
	setCoreParameter("ScheduledTaskName12", scheduledTaskName12);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName11()const
{
	return scheduledTaskName11_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName11(const std::string& scheduledTaskName11)
{
	scheduledTaskName11_ = scheduledTaskName11;
	setCoreParameter("ScheduledTaskName11", scheduledTaskName11);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName10()const
{
	return scheduledTaskName10_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName10(const std::string& scheduledTaskName10)
{
	scheduledTaskName10_ = scheduledTaskName10;
	setCoreParameter("ScheduledTaskName10", scheduledTaskName10);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName17()const
{
	return scheduledTaskName17_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName17(const std::string& scheduledTaskName17)
{
	scheduledTaskName17_ = scheduledTaskName17;
	setCoreParameter("ScheduledTaskName17", scheduledTaskName17);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName16()const
{
	return scheduledTaskName16_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName16(const std::string& scheduledTaskName16)
{
	scheduledTaskName16_ = scheduledTaskName16;
	setCoreParameter("ScheduledTaskName16", scheduledTaskName16);
}

int DescribeScheduledTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScheduledTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName15()const
{
	return scheduledTaskName15_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName15(const std::string& scheduledTaskName15)
{
	scheduledTaskName15_ = scheduledTaskName15;
	setCoreParameter("ScheduledTaskName15", scheduledTaskName15);
}

std::string DescribeScheduledTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScheduledTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName14()const
{
	return scheduledTaskName14_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName14(const std::string& scheduledTaskName14)
{
	scheduledTaskName14_ = scheduledTaskName14;
	setCoreParameter("ScheduledTaskName14", scheduledTaskName14);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId2()const
{
	return scheduledTaskId2_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId2(const std::string& scheduledTaskId2)
{
	scheduledTaskId2_ = scheduledTaskId2;
	setCoreParameter("ScheduledTaskId2", scheduledTaskId2);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId1()const
{
	return scheduledTaskId1_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId1(const std::string& scheduledTaskId1)
{
	scheduledTaskId1_ = scheduledTaskId1;
	setCoreParameter("ScheduledTaskId1", scheduledTaskId1);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId4()const
{
	return scheduledTaskId4_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId4(const std::string& scheduledTaskId4)
{
	scheduledTaskId4_ = scheduledTaskId4;
	setCoreParameter("ScheduledTaskId4", scheduledTaskId4);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId18()const
{
	return scheduledTaskId18_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId18(const std::string& scheduledTaskId18)
{
	scheduledTaskId18_ = scheduledTaskId18;
	setCoreParameter("ScheduledTaskId18", scheduledTaskId18);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId3()const
{
	return scheduledTaskId3_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId3(const std::string& scheduledTaskId3)
{
	scheduledTaskId3_ = scheduledTaskId3;
	setCoreParameter("ScheduledTaskId3", scheduledTaskId3);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId19()const
{
	return scheduledTaskId19_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId19(const std::string& scheduledTaskId19)
{
	scheduledTaskId19_ = scheduledTaskId19;
	setCoreParameter("ScheduledTaskId19", scheduledTaskId19);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId6()const
{
	return scheduledTaskId6_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId6(const std::string& scheduledTaskId6)
{
	scheduledTaskId6_ = scheduledTaskId6;
	setCoreParameter("ScheduledTaskId6", scheduledTaskId6);
}

std::string DescribeScheduledTasksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScheduledTasksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId5()const
{
	return scheduledTaskId5_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId5(const std::string& scheduledTaskId5)
{
	scheduledTaskId5_ = scheduledTaskId5;
	setCoreParameter("ScheduledTaskId5", scheduledTaskId5);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId8()const
{
	return scheduledTaskId8_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId8(const std::string& scheduledTaskId8)
{
	scheduledTaskId8_ = scheduledTaskId8;
	setCoreParameter("ScheduledTaskId8", scheduledTaskId8);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName9()const
{
	return scheduledTaskName9_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName9(const std::string& scheduledTaskName9)
{
	scheduledTaskName9_ = scheduledTaskName9;
	setCoreParameter("ScheduledTaskName9", scheduledTaskName9);
}

std::string DescribeScheduledTasksRequest::getScheduledAction20()const
{
	return scheduledAction20_;
}

void DescribeScheduledTasksRequest::setScheduledAction20(const std::string& scheduledAction20)
{
	scheduledAction20_ = scheduledAction20;
	setCoreParameter("ScheduledAction20", scheduledAction20);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId7()const
{
	return scheduledTaskId7_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId7(const std::string& scheduledTaskId7)
{
	scheduledTaskId7_ = scheduledTaskId7;
	setCoreParameter("ScheduledTaskId7", scheduledTaskId7);
}

int DescribeScheduledTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScheduledTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId12()const
{
	return scheduledTaskId12_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId12(const std::string& scheduledTaskId12)
{
	scheduledTaskId12_ = scheduledTaskId12;
	setCoreParameter("ScheduledTaskId12", scheduledTaskId12);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName7()const
{
	return scheduledTaskName7_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName7(const std::string& scheduledTaskName7)
{
	scheduledTaskName7_ = scheduledTaskName7;
	setCoreParameter("ScheduledTaskName7", scheduledTaskName7);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId9()const
{
	return scheduledTaskId9_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId9(const std::string& scheduledTaskId9)
{
	scheduledTaskId9_ = scheduledTaskId9;
	setCoreParameter("ScheduledTaskId9", scheduledTaskId9);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId13()const
{
	return scheduledTaskId13_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId13(const std::string& scheduledTaskId13)
{
	scheduledTaskId13_ = scheduledTaskId13;
	setCoreParameter("ScheduledTaskId13", scheduledTaskId13);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName8()const
{
	return scheduledTaskName8_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName8(const std::string& scheduledTaskName8)
{
	scheduledTaskName8_ = scheduledTaskName8;
	setCoreParameter("ScheduledTaskName8", scheduledTaskName8);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId10()const
{
	return scheduledTaskId10_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId10(const std::string& scheduledTaskId10)
{
	scheduledTaskId10_ = scheduledTaskId10;
	setCoreParameter("ScheduledTaskId10", scheduledTaskId10);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName5()const
{
	return scheduledTaskName5_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName5(const std::string& scheduledTaskName5)
{
	scheduledTaskName5_ = scheduledTaskName5;
	setCoreParameter("ScheduledTaskName5", scheduledTaskName5);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId11()const
{
	return scheduledTaskId11_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId11(const std::string& scheduledTaskId11)
{
	scheduledTaskId11_ = scheduledTaskId11;
	setCoreParameter("ScheduledTaskId11", scheduledTaskId11);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName6()const
{
	return scheduledTaskName6_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName6(const std::string& scheduledTaskName6)
{
	scheduledTaskName6_ = scheduledTaskName6;
	setCoreParameter("ScheduledTaskName6", scheduledTaskName6);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId16()const
{
	return scheduledTaskId16_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId16(const std::string& scheduledTaskId16)
{
	scheduledTaskId16_ = scheduledTaskId16;
	setCoreParameter("ScheduledTaskId16", scheduledTaskId16);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName3()const
{
	return scheduledTaskName3_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName3(const std::string& scheduledTaskName3)
{
	scheduledTaskName3_ = scheduledTaskName3;
	setCoreParameter("ScheduledTaskName3", scheduledTaskName3);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId17()const
{
	return scheduledTaskId17_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId17(const std::string& scheduledTaskId17)
{
	scheduledTaskId17_ = scheduledTaskId17;
	setCoreParameter("ScheduledTaskId17", scheduledTaskId17);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName4()const
{
	return scheduledTaskName4_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName4(const std::string& scheduledTaskName4)
{
	scheduledTaskName4_ = scheduledTaskName4;
	setCoreParameter("ScheduledTaskName4", scheduledTaskName4);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId14()const
{
	return scheduledTaskId14_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId14(const std::string& scheduledTaskId14)
{
	scheduledTaskId14_ = scheduledTaskId14;
	setCoreParameter("ScheduledTaskId14", scheduledTaskId14);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName1()const
{
	return scheduledTaskName1_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName1(const std::string& scheduledTaskName1)
{
	scheduledTaskName1_ = scheduledTaskName1;
	setCoreParameter("ScheduledTaskName1", scheduledTaskName1);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskId15()const
{
	return scheduledTaskId15_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId15(const std::string& scheduledTaskId15)
{
	scheduledTaskId15_ = scheduledTaskId15;
	setCoreParameter("ScheduledTaskId15", scheduledTaskId15);
}

std::string DescribeScheduledTasksRequest::getScheduledTaskName2()const
{
	return scheduledTaskName2_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName2(const std::string& scheduledTaskName2)
{
	scheduledTaskName2_ = scheduledTaskName2;
	setCoreParameter("ScheduledTaskName2", scheduledTaskName2);
}

std::string DescribeScheduledTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScheduledTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScheduledTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScheduledTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeScheduledTasksRequest::getScheduledAction18()const
{
	return scheduledAction18_;
}

void DescribeScheduledTasksRequest::setScheduledAction18(const std::string& scheduledAction18)
{
	scheduledAction18_ = scheduledAction18;
	setCoreParameter("ScheduledAction18", scheduledAction18);
}

std::string DescribeScheduledTasksRequest::getScheduledAction19()const
{
	return scheduledAction19_;
}

void DescribeScheduledTasksRequest::setScheduledAction19(const std::string& scheduledAction19)
{
	scheduledAction19_ = scheduledAction19;
	setCoreParameter("ScheduledAction19", scheduledAction19);
}

std::string DescribeScheduledTasksRequest::getScheduledAction16()const
{
	return scheduledAction16_;
}

void DescribeScheduledTasksRequest::setScheduledAction16(const std::string& scheduledAction16)
{
	scheduledAction16_ = scheduledAction16;
	setCoreParameter("ScheduledAction16", scheduledAction16);
}

std::string DescribeScheduledTasksRequest::getScheduledAction17()const
{
	return scheduledAction17_;
}

void DescribeScheduledTasksRequest::setScheduledAction17(const std::string& scheduledAction17)
{
	scheduledAction17_ = scheduledAction17;
	setCoreParameter("ScheduledAction17", scheduledAction17);
}

std::string DescribeScheduledTasksRequest::getScheduledAction14()const
{
	return scheduledAction14_;
}

void DescribeScheduledTasksRequest::setScheduledAction14(const std::string& scheduledAction14)
{
	scheduledAction14_ = scheduledAction14;
	setCoreParameter("ScheduledAction14", scheduledAction14);
}

std::string DescribeScheduledTasksRequest::getScheduledAction15()const
{
	return scheduledAction15_;
}

void DescribeScheduledTasksRequest::setScheduledAction15(const std::string& scheduledAction15)
{
	scheduledAction15_ = scheduledAction15;
	setCoreParameter("ScheduledAction15", scheduledAction15);
}

std::string DescribeScheduledTasksRequest::getScheduledAction12()const
{
	return scheduledAction12_;
}

void DescribeScheduledTasksRequest::setScheduledAction12(const std::string& scheduledAction12)
{
	scheduledAction12_ = scheduledAction12;
	setCoreParameter("ScheduledAction12", scheduledAction12);
}

std::string DescribeScheduledTasksRequest::getScheduledAction13()const
{
	return scheduledAction13_;
}

void DescribeScheduledTasksRequest::setScheduledAction13(const std::string& scheduledAction13)
{
	scheduledAction13_ = scheduledAction13;
	setCoreParameter("ScheduledAction13", scheduledAction13);
}

std::string DescribeScheduledTasksRequest::getScheduledAction10()const
{
	return scheduledAction10_;
}

void DescribeScheduledTasksRequest::setScheduledAction10(const std::string& scheduledAction10)
{
	scheduledAction10_ = scheduledAction10;
	setCoreParameter("ScheduledAction10", scheduledAction10);
}

std::string DescribeScheduledTasksRequest::getScheduledAction11()const
{
	return scheduledAction11_;
}

void DescribeScheduledTasksRequest::setScheduledAction11(const std::string& scheduledAction11)
{
	scheduledAction11_ = scheduledAction11;
	setCoreParameter("ScheduledAction11", scheduledAction11);
}

