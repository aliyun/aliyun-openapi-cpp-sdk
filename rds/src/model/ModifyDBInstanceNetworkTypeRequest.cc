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

#include <alibabacloud/rds/model/ModifyDBInstanceNetworkTypeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceNetworkTypeRequest;

ModifyDBInstanceNetworkTypeRequest::ModifyDBInstanceNetworkTypeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceNetworkType")
{}

ModifyDBInstanceNetworkTypeRequest::~ModifyDBInstanceNetworkTypeRequest()
{}

long ModifyDBInstanceNetworkTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceNetworkTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceNetworkTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceNetworkTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceNetworkTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyDBInstanceNetworkTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceNetworkTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceNetworkTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void ModifyDBInstanceNetworkTypeRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string ModifyDBInstanceNetworkTypeRequest::getRetainClassic()const
{
	return retainClassic_;
}

void ModifyDBInstanceNetworkTypeRequest::setRetainClassic(const std::string& retainClassic)
{
	retainClassic_ = retainClassic;
	setCoreParameter("RetainClassic", retainClassic);
}

std::string ModifyDBInstanceNetworkTypeRequest::getClassicExpiredDays()const
{
	return classicExpiredDays_;
}

void ModifyDBInstanceNetworkTypeRequest::setClassicExpiredDays(const std::string& classicExpiredDays)
{
	classicExpiredDays_ = classicExpiredDays;
	setCoreParameter("ClassicExpiredDays", classicExpiredDays);
}

std::string ModifyDBInstanceNetworkTypeRequest::getVPCId()const
{
	return vPCId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceNetworkTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getReadWriteSplittingPrivateIpAddress()const
{
	return readWriteSplittingPrivateIpAddress_;
}

void ModifyDBInstanceNetworkTypeRequest::setReadWriteSplittingPrivateIpAddress(const std::string& readWriteSplittingPrivateIpAddress)
{
	readWriteSplittingPrivateIpAddress_ = readWriteSplittingPrivateIpAddress;
	setCoreParameter("ReadWriteSplittingPrivateIpAddress", readWriteSplittingPrivateIpAddress);
}

std::string ModifyDBInstanceNetworkTypeRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void ModifyDBInstanceNetworkTypeRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

int ModifyDBInstanceNetworkTypeRequest::getReadWriteSplittingClassicExpiredDays()const
{
	return readWriteSplittingClassicExpiredDays_;
}

void ModifyDBInstanceNetworkTypeRequest::setReadWriteSplittingClassicExpiredDays(int readWriteSplittingClassicExpiredDays)
{
	readWriteSplittingClassicExpiredDays_ = readWriteSplittingClassicExpiredDays;
	setCoreParameter("ReadWriteSplittingClassicExpiredDays", readWriteSplittingClassicExpiredDays);
}

