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

#include <alibabacloud/ess/model/DetachInstancesRequest.h>

using AlibabaCloud::Ess::Model::DetachInstancesRequest;

DetachInstancesRequest::DetachInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DetachInstances")
{}

DetachInstancesRequest::~DetachInstancesRequest()
{}

std::string DetachInstancesRequest::getInstanceId10()const
{
	return instanceId10_;
}

void DetachInstancesRequest::setInstanceId10(const std::string& instanceId10)
{
	instanceId10_ = instanceId10;
	setParameter("InstanceId10", instanceId10);
}

long DetachInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachInstancesRequest::getInstanceId12()const
{
	return instanceId12_;
}

void DetachInstancesRequest::setInstanceId12(const std::string& instanceId12)
{
	instanceId12_ = instanceId12;
	setParameter("InstanceId12", instanceId12);
}

std::string DetachInstancesRequest::getInstanceId11()const
{
	return instanceId11_;
}

void DetachInstancesRequest::setInstanceId11(const std::string& instanceId11)
{
	instanceId11_ = instanceId11;
	setParameter("InstanceId11", instanceId11);
}

std::string DetachInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DetachInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DetachInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DetachInstancesRequest::getInstanceId20()const
{
	return instanceId20_;
}

void DetachInstancesRequest::setInstanceId20(const std::string& instanceId20)
{
	instanceId20_ = instanceId20;
	setParameter("InstanceId20", instanceId20);
}

std::string DetachInstancesRequest::getInstanceId1()const
{
	return instanceId1_;
}

void DetachInstancesRequest::setInstanceId1(const std::string& instanceId1)
{
	instanceId1_ = instanceId1;
	setParameter("InstanceId1", instanceId1);
}

std::string DetachInstancesRequest::getInstanceId3()const
{
	return instanceId3_;
}

void DetachInstancesRequest::setInstanceId3(const std::string& instanceId3)
{
	instanceId3_ = instanceId3;
	setParameter("InstanceId3", instanceId3);
}

std::string DetachInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachInstancesRequest::getInstanceId2()const
{
	return instanceId2_;
}

void DetachInstancesRequest::setInstanceId2(const std::string& instanceId2)
{
	instanceId2_ = instanceId2;
	setParameter("InstanceId2", instanceId2);
}

std::string DetachInstancesRequest::getInstanceId5()const
{
	return instanceId5_;
}

void DetachInstancesRequest::setInstanceId5(const std::string& instanceId5)
{
	instanceId5_ = instanceId5;
	setParameter("InstanceId5", instanceId5);
}

std::string DetachInstancesRequest::getInstanceId4()const
{
	return instanceId4_;
}

void DetachInstancesRequest::setInstanceId4(const std::string& instanceId4)
{
	instanceId4_ = instanceId4;
	setParameter("InstanceId4", instanceId4);
}

std::string DetachInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DetachInstancesRequest::getInstanceId7()const
{
	return instanceId7_;
}

void DetachInstancesRequest::setInstanceId7(const std::string& instanceId7)
{
	instanceId7_ = instanceId7;
	setParameter("InstanceId7", instanceId7);
}

std::string DetachInstancesRequest::getInstanceId6()const
{
	return instanceId6_;
}

void DetachInstancesRequest::setInstanceId6(const std::string& instanceId6)
{
	instanceId6_ = instanceId6;
	setParameter("InstanceId6", instanceId6);
}

std::string DetachInstancesRequest::getInstanceId9()const
{
	return instanceId9_;
}

void DetachInstancesRequest::setInstanceId9(const std::string& instanceId9)
{
	instanceId9_ = instanceId9;
	setParameter("InstanceId9", instanceId9);
}

std::string DetachInstancesRequest::getInstanceId8()const
{
	return instanceId8_;
}

void DetachInstancesRequest::setInstanceId8(const std::string& instanceId8)
{
	instanceId8_ = instanceId8;
	setParameter("InstanceId8", instanceId8);
}

long DetachInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DetachInstancesRequest::getInstanceId18()const
{
	return instanceId18_;
}

void DetachInstancesRequest::setInstanceId18(const std::string& instanceId18)
{
	instanceId18_ = instanceId18;
	setParameter("InstanceId18", instanceId18);
}

std::string DetachInstancesRequest::getInstanceId17()const
{
	return instanceId17_;
}

void DetachInstancesRequest::setInstanceId17(const std::string& instanceId17)
{
	instanceId17_ = instanceId17;
	setParameter("InstanceId17", instanceId17);
}

std::string DetachInstancesRequest::getInstanceId19()const
{
	return instanceId19_;
}

void DetachInstancesRequest::setInstanceId19(const std::string& instanceId19)
{
	instanceId19_ = instanceId19;
	setParameter("InstanceId19", instanceId19);
}

std::string DetachInstancesRequest::getInstanceId14()const
{
	return instanceId14_;
}

void DetachInstancesRequest::setInstanceId14(const std::string& instanceId14)
{
	instanceId14_ = instanceId14;
	setParameter("InstanceId14", instanceId14);
}

std::string DetachInstancesRequest::getInstanceId13()const
{
	return instanceId13_;
}

void DetachInstancesRequest::setInstanceId13(const std::string& instanceId13)
{
	instanceId13_ = instanceId13;
	setParameter("InstanceId13", instanceId13);
}

std::string DetachInstancesRequest::getInstanceId16()const
{
	return instanceId16_;
}

void DetachInstancesRequest::setInstanceId16(const std::string& instanceId16)
{
	instanceId16_ = instanceId16;
	setParameter("InstanceId16", instanceId16);
}

std::string DetachInstancesRequest::getInstanceId15()const
{
	return instanceId15_;
}

void DetachInstancesRequest::setInstanceId15(const std::string& instanceId15)
{
	instanceId15_ = instanceId15;
	setParameter("InstanceId15", instanceId15);
}

