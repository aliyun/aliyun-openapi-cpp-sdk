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

#include <alibabacloud/rds/model/CreateReadOnlyDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateReadOnlyDBInstanceRequest;

CreateReadOnlyDBInstanceRequest::CreateReadOnlyDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateReadOnlyDBInstance")
{}

CreateReadOnlyDBInstanceRequest::~CreateReadOnlyDBInstanceRequest()
{}

long CreateReadOnlyDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateReadOnlyDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateReadOnlyDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CreateReadOnlyDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateReadOnlyDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateReadOnlyDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateReadOnlyDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateReadOnlyDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateReadOnlyDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateReadOnlyDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateReadOnlyDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateReadOnlyDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateReadOnlyDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string CreateReadOnlyDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateReadOnlyDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateReadOnlyDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateReadOnlyDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateReadOnlyDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateReadOnlyDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string CreateReadOnlyDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateReadOnlyDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateReadOnlyDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateReadOnlyDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateReadOnlyDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CreateReadOnlyDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string CreateReadOnlyDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateReadOnlyDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateReadOnlyDBInstanceRequest::getCategory()const
{
	return category_;
}

void CreateReadOnlyDBInstanceRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string CreateReadOnlyDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateReadOnlyDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string CreateReadOnlyDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CreateReadOnlyDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

