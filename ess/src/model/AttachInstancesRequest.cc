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

#include <alibabacloud/ess/model/AttachInstancesRequest.h>

using AlibabaCloud::Ess::Model::AttachInstancesRequest;

AttachInstancesRequest::AttachInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "AttachInstances")
{
	setMethod(HttpRequest::Method::Post);
}

AttachInstancesRequest::~AttachInstancesRequest()
{}

int AttachInstancesRequest::getLoadBalancerWeight6()const
{
	return loadBalancerWeight6_;
}

void AttachInstancesRequest::setLoadBalancerWeight6(int loadBalancerWeight6)
{
	loadBalancerWeight6_ = loadBalancerWeight6;
	setParameter("LoadBalancerWeight6", std::to_string(loadBalancerWeight6));
}

int AttachInstancesRequest::getLoadBalancerWeight11()const
{
	return loadBalancerWeight11_;
}

void AttachInstancesRequest::setLoadBalancerWeight11(int loadBalancerWeight11)
{
	loadBalancerWeight11_ = loadBalancerWeight11;
	setParameter("LoadBalancerWeight11", std::to_string(loadBalancerWeight11));
}

int AttachInstancesRequest::getLoadBalancerWeight7()const
{
	return loadBalancerWeight7_;
}

void AttachInstancesRequest::setLoadBalancerWeight7(int loadBalancerWeight7)
{
	loadBalancerWeight7_ = loadBalancerWeight7;
	setParameter("LoadBalancerWeight7", std::to_string(loadBalancerWeight7));
}

int AttachInstancesRequest::getLoadBalancerWeight12()const
{
	return loadBalancerWeight12_;
}

void AttachInstancesRequest::setLoadBalancerWeight12(int loadBalancerWeight12)
{
	loadBalancerWeight12_ = loadBalancerWeight12;
	setParameter("LoadBalancerWeight12", std::to_string(loadBalancerWeight12));
}

long AttachInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int AttachInstancesRequest::getLoadBalancerWeight8()const
{
	return loadBalancerWeight8_;
}

void AttachInstancesRequest::setLoadBalancerWeight8(int loadBalancerWeight8)
{
	loadBalancerWeight8_ = loadBalancerWeight8;
	setParameter("LoadBalancerWeight8", std::to_string(loadBalancerWeight8));
}

int AttachInstancesRequest::getLoadBalancerWeight9()const
{
	return loadBalancerWeight9_;
}

void AttachInstancesRequest::setLoadBalancerWeight9(int loadBalancerWeight9)
{
	loadBalancerWeight9_ = loadBalancerWeight9;
	setParameter("LoadBalancerWeight9", std::to_string(loadBalancerWeight9));
}

int AttachInstancesRequest::getLoadBalancerWeight10()const
{
	return loadBalancerWeight10_;
}

void AttachInstancesRequest::setLoadBalancerWeight10(int loadBalancerWeight10)
{
	loadBalancerWeight10_ = loadBalancerWeight10;
	setParameter("LoadBalancerWeight10", std::to_string(loadBalancerWeight10));
}

int AttachInstancesRequest::getLoadBalancerWeight2()const
{
	return loadBalancerWeight2_;
}

void AttachInstancesRequest::setLoadBalancerWeight2(int loadBalancerWeight2)
{
	loadBalancerWeight2_ = loadBalancerWeight2;
	setParameter("LoadBalancerWeight2", std::to_string(loadBalancerWeight2));
}

int AttachInstancesRequest::getLoadBalancerWeight15()const
{
	return loadBalancerWeight15_;
}

void AttachInstancesRequest::setLoadBalancerWeight15(int loadBalancerWeight15)
{
	loadBalancerWeight15_ = loadBalancerWeight15;
	setParameter("LoadBalancerWeight15", std::to_string(loadBalancerWeight15));
}

int AttachInstancesRequest::getLoadBalancerWeight3()const
{
	return loadBalancerWeight3_;
}

void AttachInstancesRequest::setLoadBalancerWeight3(int loadBalancerWeight3)
{
	loadBalancerWeight3_ = loadBalancerWeight3;
	setParameter("LoadBalancerWeight3", std::to_string(loadBalancerWeight3));
}

int AttachInstancesRequest::getLoadBalancerWeight16()const
{
	return loadBalancerWeight16_;
}

void AttachInstancesRequest::setLoadBalancerWeight16(int loadBalancerWeight16)
{
	loadBalancerWeight16_ = loadBalancerWeight16;
	setParameter("LoadBalancerWeight16", std::to_string(loadBalancerWeight16));
}

int AttachInstancesRequest::getLoadBalancerWeight4()const
{
	return loadBalancerWeight4_;
}

void AttachInstancesRequest::setLoadBalancerWeight4(int loadBalancerWeight4)
{
	loadBalancerWeight4_ = loadBalancerWeight4;
	setParameter("LoadBalancerWeight4", std::to_string(loadBalancerWeight4));
}

int AttachInstancesRequest::getLoadBalancerWeight13()const
{
	return loadBalancerWeight13_;
}

void AttachInstancesRequest::setLoadBalancerWeight13(int loadBalancerWeight13)
{
	loadBalancerWeight13_ = loadBalancerWeight13;
	setParameter("LoadBalancerWeight13", std::to_string(loadBalancerWeight13));
}

int AttachInstancesRequest::getLoadBalancerWeight5()const
{
	return loadBalancerWeight5_;
}

void AttachInstancesRequest::setLoadBalancerWeight5(int loadBalancerWeight5)
{
	loadBalancerWeight5_ = loadBalancerWeight5;
	setParameter("LoadBalancerWeight5", std::to_string(loadBalancerWeight5));
}

int AttachInstancesRequest::getLoadBalancerWeight14()const
{
	return loadBalancerWeight14_;
}

void AttachInstancesRequest::setLoadBalancerWeight14(int loadBalancerWeight14)
{
	loadBalancerWeight14_ = loadBalancerWeight14;
	setParameter("LoadBalancerWeight14", std::to_string(loadBalancerWeight14));
}

int AttachInstancesRequest::getLoadBalancerWeight1()const
{
	return loadBalancerWeight1_;
}

void AttachInstancesRequest::setLoadBalancerWeight1(int loadBalancerWeight1)
{
	loadBalancerWeight1_ = loadBalancerWeight1;
	setParameter("LoadBalancerWeight1", std::to_string(loadBalancerWeight1));
}

std::string AttachInstancesRequest::getInstanceId1()const
{
	return instanceId1_;
}

void AttachInstancesRequest::setInstanceId1(const std::string& instanceId1)
{
	instanceId1_ = instanceId1;
	setParameter("InstanceId1", instanceId1);
}

int AttachInstancesRequest::getLoadBalancerWeight20()const
{
	return loadBalancerWeight20_;
}

void AttachInstancesRequest::setLoadBalancerWeight20(int loadBalancerWeight20)
{
	loadBalancerWeight20_ = loadBalancerWeight20;
	setParameter("LoadBalancerWeight20", std::to_string(loadBalancerWeight20));
}

std::string AttachInstancesRequest::getInstanceId3()const
{
	return instanceId3_;
}

void AttachInstancesRequest::setInstanceId3(const std::string& instanceId3)
{
	instanceId3_ = instanceId3;
	setParameter("InstanceId3", instanceId3);
}

std::string AttachInstancesRequest::getInstanceId2()const
{
	return instanceId2_;
}

void AttachInstancesRequest::setInstanceId2(const std::string& instanceId2)
{
	instanceId2_ = instanceId2;
	setParameter("InstanceId2", instanceId2);
}

std::string AttachInstancesRequest::getInstanceId5()const
{
	return instanceId5_;
}

void AttachInstancesRequest::setInstanceId5(const std::string& instanceId5)
{
	instanceId5_ = instanceId5;
	setParameter("InstanceId5", instanceId5);
}

std::string AttachInstancesRequest::getInstanceId4()const
{
	return instanceId4_;
}

void AttachInstancesRequest::setInstanceId4(const std::string& instanceId4)
{
	instanceId4_ = instanceId4;
	setParameter("InstanceId4", instanceId4);
}

std::string AttachInstancesRequest::getInstanceId7()const
{
	return instanceId7_;
}

void AttachInstancesRequest::setInstanceId7(const std::string& instanceId7)
{
	instanceId7_ = instanceId7;
	setParameter("InstanceId7", instanceId7);
}

std::string AttachInstancesRequest::getInstanceId6()const
{
	return instanceId6_;
}

void AttachInstancesRequest::setInstanceId6(const std::string& instanceId6)
{
	instanceId6_ = instanceId6;
	setParameter("InstanceId6", instanceId6);
}

std::string AttachInstancesRequest::getInstanceId9()const
{
	return instanceId9_;
}

void AttachInstancesRequest::setInstanceId9(const std::string& instanceId9)
{
	instanceId9_ = instanceId9;
	setParameter("InstanceId9", instanceId9);
}

std::string AttachInstancesRequest::getInstanceId8()const
{
	return instanceId8_;
}

void AttachInstancesRequest::setInstanceId8(const std::string& instanceId8)
{
	instanceId8_ = instanceId8;
	setParameter("InstanceId8", instanceId8);
}

long AttachInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int AttachInstancesRequest::getLoadBalancerWeight19()const
{
	return loadBalancerWeight19_;
}

void AttachInstancesRequest::setLoadBalancerWeight19(int loadBalancerWeight19)
{
	loadBalancerWeight19_ = loadBalancerWeight19;
	setParameter("LoadBalancerWeight19", std::to_string(loadBalancerWeight19));
}

int AttachInstancesRequest::getLoadBalancerWeight17()const
{
	return loadBalancerWeight17_;
}

void AttachInstancesRequest::setLoadBalancerWeight17(int loadBalancerWeight17)
{
	loadBalancerWeight17_ = loadBalancerWeight17;
	setParameter("LoadBalancerWeight17", std::to_string(loadBalancerWeight17));
}

int AttachInstancesRequest::getLoadBalancerWeight18()const
{
	return loadBalancerWeight18_;
}

void AttachInstancesRequest::setLoadBalancerWeight18(int loadBalancerWeight18)
{
	loadBalancerWeight18_ = loadBalancerWeight18;
	setParameter("LoadBalancerWeight18", std::to_string(loadBalancerWeight18));
}

std::string AttachInstancesRequest::getInstanceId10()const
{
	return instanceId10_;
}

void AttachInstancesRequest::setInstanceId10(const std::string& instanceId10)
{
	instanceId10_ = instanceId10;
	setParameter("InstanceId10", instanceId10);
}

std::string AttachInstancesRequest::getInstanceId12()const
{
	return instanceId12_;
}

void AttachInstancesRequest::setInstanceId12(const std::string& instanceId12)
{
	instanceId12_ = instanceId12;
	setParameter("InstanceId12", instanceId12);
}

std::string AttachInstancesRequest::getInstanceId11()const
{
	return instanceId11_;
}

void AttachInstancesRequest::setInstanceId11(const std::string& instanceId11)
{
	instanceId11_ = instanceId11;
	setParameter("InstanceId11", instanceId11);
}

std::string AttachInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void AttachInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string AttachInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AttachInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AttachInstancesRequest::getInstanceId20()const
{
	return instanceId20_;
}

void AttachInstancesRequest::setInstanceId20(const std::string& instanceId20)
{
	instanceId20_ = instanceId20;
	setParameter("InstanceId20", instanceId20);
}

std::string AttachInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AttachInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool AttachInstancesRequest::getEntrusted()const
{
	return entrusted_;
}

void AttachInstancesRequest::setEntrusted(bool entrusted)
{
	entrusted_ = entrusted;
	setParameter("Entrusted", entrusted ? "true" : "false");
}

std::string AttachInstancesRequest::getInstanceId18()const
{
	return instanceId18_;
}

void AttachInstancesRequest::setInstanceId18(const std::string& instanceId18)
{
	instanceId18_ = instanceId18;
	setParameter("InstanceId18", instanceId18);
}

std::string AttachInstancesRequest::getInstanceId17()const
{
	return instanceId17_;
}

void AttachInstancesRequest::setInstanceId17(const std::string& instanceId17)
{
	instanceId17_ = instanceId17;
	setParameter("InstanceId17", instanceId17);
}

std::string AttachInstancesRequest::getInstanceId19()const
{
	return instanceId19_;
}

void AttachInstancesRequest::setInstanceId19(const std::string& instanceId19)
{
	instanceId19_ = instanceId19;
	setParameter("InstanceId19", instanceId19);
}

std::string AttachInstancesRequest::getInstanceId14()const
{
	return instanceId14_;
}

void AttachInstancesRequest::setInstanceId14(const std::string& instanceId14)
{
	instanceId14_ = instanceId14;
	setParameter("InstanceId14", instanceId14);
}

std::string AttachInstancesRequest::getInstanceId13()const
{
	return instanceId13_;
}

void AttachInstancesRequest::setInstanceId13(const std::string& instanceId13)
{
	instanceId13_ = instanceId13;
	setParameter("InstanceId13", instanceId13);
}

std::string AttachInstancesRequest::getInstanceId16()const
{
	return instanceId16_;
}

void AttachInstancesRequest::setInstanceId16(const std::string& instanceId16)
{
	instanceId16_ = instanceId16;
	setParameter("InstanceId16", instanceId16);
}

std::string AttachInstancesRequest::getInstanceId15()const
{
	return instanceId15_;
}

void AttachInstancesRequest::setInstanceId15(const std::string& instanceId15)
{
	instanceId15_ = instanceId15;
	setParameter("InstanceId15", instanceId15);
}

