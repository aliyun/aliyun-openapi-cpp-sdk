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

#include <alibabacloud/adb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Adb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest() :
	RpcServiceRequest("adb", "2019-03-15", "CreateDBCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBClusterRequest::~CreateDBClusterRequest()
{}

long CreateDBClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDBClusterRequest::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

void CreateDBClusterRequest::setDBClusterDescription(const std::string& dBClusterDescription)
{
	dBClusterDescription_ = dBClusterDescription;
	setCoreParameter("DBClusterDescription", dBClusterDescription);
}

std::string CreateDBClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDBClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateDBClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDBClusterRequest::getDBClusterCategory()const
{
	return dBClusterCategory_;
}

void CreateDBClusterRequest::setDBClusterCategory(const std::string& dBClusterCategory)
{
	dBClusterCategory_ = dBClusterCategory;
	setCoreParameter("DBClusterCategory", dBClusterCategory);
}

std::string CreateDBClusterRequest::getDBClusterNetworkType()const
{
	return dBClusterNetworkType_;
}

void CreateDBClusterRequest::setDBClusterNetworkType(const std::string& dBClusterNetworkType)
{
	dBClusterNetworkType_ = dBClusterNetworkType;
	setCoreParameter("DBClusterNetworkType", dBClusterNetworkType);
}

std::string CreateDBClusterRequest::getPeriod()const
{
	return period_;
}

void CreateDBClusterRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateDBClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBClusterRequest::getDBClusterVersion()const
{
	return dBClusterVersion_;
}

void CreateDBClusterRequest::setDBClusterVersion(const std::string& dBClusterVersion)
{
	dBClusterVersion_ = dBClusterVersion;
	setCoreParameter("DBClusterVersion", dBClusterVersion);
}

std::string CreateDBClusterRequest::getDBClusterClass()const
{
	return dBClusterClass_;
}

void CreateDBClusterRequest::setDBClusterClass(const std::string& dBClusterClass)
{
	dBClusterClass_ = dBClusterClass;
	setCoreParameter("DBClusterClass", dBClusterClass);
}

long CreateDBClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBClusterRequest::getDBNodeGroupCount()const
{
	return dBNodeGroupCount_;
}

void CreateDBClusterRequest::setDBNodeGroupCount(const std::string& dBNodeGroupCount)
{
	dBNodeGroupCount_ = dBNodeGroupCount;
	setCoreParameter("DBNodeGroupCount", dBNodeGroupCount);
}

std::string CreateDBClusterRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateDBClusterRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string CreateDBClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDBClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateDBClusterRequest::getDBNodeStorage()const
{
	return dBNodeStorage_;
}

void CreateDBClusterRequest::setDBNodeStorage(const std::string& dBNodeStorage)
{
	dBNodeStorage_ = dBNodeStorage;
	setCoreParameter("DBNodeStorage", dBNodeStorage);
}

std::string CreateDBClusterRequest::getVPCId()const
{
	return vPCId_;
}

void CreateDBClusterRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string CreateDBClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDBClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateDBClusterRequest::getPayType()const
{
	return payType_;
}

void CreateDBClusterRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

