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

#include <alibabacloud/polardb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDBCluster")
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

std::string CreateDBClusterRequest::getClusterNetworkType()const
{
	return clusterNetworkType_;
}

void CreateDBClusterRequest::setClusterNetworkType(const std::string& clusterNetworkType)
{
	clusterNetworkType_ = clusterNetworkType;
	setCoreParameter("ClusterNetworkType", clusterNetworkType);
}

std::string CreateDBClusterRequest::getDBNodeClass()const
{
	return dBNodeClass_;
}

void CreateDBClusterRequest::setDBNodeClass(const std::string& dBNodeClass)
{
	dBNodeClass_ = dBNodeClass;
	setCoreParameter("DBNodeClass", dBNodeClass);
}

std::string CreateDBClusterRequest::getEngine()const
{
	return engine_;
}

void CreateDBClusterRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string CreateDBClusterRequest::getCreationOption()const
{
	return creationOption_;
}

void CreateDBClusterRequest::setCreationOption(const std::string& creationOption)
{
	creationOption_ = creationOption;
	setCoreParameter("CreationOption", creationOption);
}

std::string CreateDBClusterRequest::getSourceResourceId()const
{
	return sourceResourceId_;
}

void CreateDBClusterRequest::setSourceResourceId(const std::string& sourceResourceId)
{
	sourceResourceId_ = sourceResourceId;
	setCoreParameter("SourceResourceId", sourceResourceId);
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

long CreateDBClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
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

bool CreateDBClusterRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateDBClusterRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
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

std::string CreateDBClusterRequest::getDBType()const
{
	return dBType_;
}

void CreateDBClusterRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setCoreParameter("DBType", dBType);
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

std::string CreateDBClusterRequest::getDBVersion()const
{
	return dBVersion_;
}

void CreateDBClusterRequest::setDBVersion(const std::string& dBVersion)
{
	dBVersion_ = dBVersion;
	setCoreParameter("DBVersion", dBVersion);
}

std::string CreateDBClusterRequest::getCloneDataPoint()const
{
	return cloneDataPoint_;
}

void CreateDBClusterRequest::setCloneDataPoint(const std::string& cloneDataPoint)
{
	cloneDataPoint_ = cloneDataPoint;
	setCoreParameter("CloneDataPoint", cloneDataPoint);
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

