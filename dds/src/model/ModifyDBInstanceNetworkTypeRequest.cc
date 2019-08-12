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

#include <alibabacloud/dds/model/ModifyDBInstanceNetworkTypeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceNetworkTypeRequest;

ModifyDBInstanceNetworkTypeRequest::ModifyDBInstanceNetworkTypeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceNetworkType")
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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string ModifyDBInstanceNetworkTypeRequest::getNetworkType()const
{
	return networkType_;
}

void ModifyDBInstanceNetworkTypeRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

long ModifyDBInstanceNetworkTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceNetworkTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
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

std::string ModifyDBInstanceNetworkTypeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceNetworkTypeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDBInstanceNetworkTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBInstanceNetworkTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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

int ModifyDBInstanceNetworkTypeRequest::getClassicExpiredDays()const
{
	return classicExpiredDays_;
}

void ModifyDBInstanceNetworkTypeRequest::setClassicExpiredDays(int classicExpiredDays)
{
	classicExpiredDays_ = classicExpiredDays;
	setCoreParameter("ClassicExpiredDays", std::to_string(classicExpiredDays));
}

std::string ModifyDBInstanceNetworkTypeRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
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

