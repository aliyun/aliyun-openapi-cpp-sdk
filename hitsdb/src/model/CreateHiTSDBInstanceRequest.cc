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

#include <alibabacloud/hitsdb/model/CreateHiTSDBInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::CreateHiTSDBInstanceRequest;

CreateHiTSDBInstanceRequest::CreateHiTSDBInstanceRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "CreateHiTSDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateHiTSDBInstanceRequest::~CreateHiTSDBInstanceRequest()
{}

long CreateHiTSDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateHiTSDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateHiTSDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateHiTSDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateHiTSDBInstanceRequest::getInstanceClass()const
{
	return instanceClass_;
}

void CreateHiTSDBInstanceRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string CreateHiTSDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHiTSDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateHiTSDBInstanceRequest::getDuration()const
{
	return duration_;
}

void CreateHiTSDBInstanceRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setParameter("Duration", duration);
}

std::string CreateHiTSDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateHiTSDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateHiTSDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateHiTSDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateHiTSDBInstanceRequest::getMaxSeriesPerDatabase()const
{
	return maxSeriesPerDatabase_;
}

void CreateHiTSDBInstanceRequest::setMaxSeriesPerDatabase(const std::string& maxSeriesPerDatabase)
{
	maxSeriesPerDatabase_ = maxSeriesPerDatabase;
	setParameter("MaxSeriesPerDatabase", maxSeriesPerDatabase);
}

std::string CreateHiTSDBInstanceRequest::getDiskCategory()const
{
	return diskCategory_;
}

void CreateHiTSDBInstanceRequest::setDiskCategory(const std::string& diskCategory)
{
	diskCategory_ = diskCategory;
	setParameter("DiskCategory", diskCategory);
}

std::string CreateHiTSDBInstanceRequest::getMaxTimelineLimit()const
{
	return maxTimelineLimit_;
}

void CreateHiTSDBInstanceRequest::setMaxTimelineLimit(const std::string& maxTimelineLimit)
{
	maxTimelineLimit_ = maxTimelineLimit;
	setParameter("MaxTimelineLimit", maxTimelineLimit);
}

std::string CreateHiTSDBInstanceRequest::getInstanceStorage()const
{
	return instanceStorage_;
}

void CreateHiTSDBInstanceRequest::setInstanceStorage(const std::string& instanceStorage)
{
	instanceStorage_ = instanceStorage;
	setParameter("InstanceStorage", instanceStorage);
}

std::string CreateHiTSDBInstanceRequest::getEngineType()const
{
	return engineType_;
}

void CreateHiTSDBInstanceRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

std::string CreateHiTSDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateHiTSDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateHiTSDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateHiTSDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateHiTSDBInstanceRequest::getInstanceAlias()const
{
	return instanceAlias_;
}

void CreateHiTSDBInstanceRequest::setInstanceAlias(const std::string& instanceAlias)
{
	instanceAlias_ = instanceAlias;
	setParameter("InstanceAlias", instanceAlias);
}

std::string CreateHiTSDBInstanceRequest::getMaxDatabaseLimit()const
{
	return maxDatabaseLimit_;
}

void CreateHiTSDBInstanceRequest::setMaxDatabaseLimit(const std::string& maxDatabaseLimit)
{
	maxDatabaseLimit_ = maxDatabaseLimit;
	setParameter("MaxDatabaseLimit", maxDatabaseLimit);
}

long CreateHiTSDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateHiTSDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateHiTSDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateHiTSDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateHiTSDBInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateHiTSDBInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateHiTSDBInstanceRequest::getInstanceTps()const
{
	return instanceTps_;
}

void CreateHiTSDBInstanceRequest::setInstanceTps(const std::string& instanceTps)
{
	instanceTps_ = instanceTps;
	setParameter("InstanceTps", instanceTps);
}

std::string CreateHiTSDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CreateHiTSDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string CreateHiTSDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateHiTSDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateHiTSDBInstanceRequest::getTSDBVersion()const
{
	return tSDBVersion_;
}

void CreateHiTSDBInstanceRequest::setTSDBVersion(const std::string& tSDBVersion)
{
	tSDBVersion_ = tSDBVersion;
	setParameter("TSDBVersion", tSDBVersion);
}

std::string CreateHiTSDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateHiTSDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateHiTSDBInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateHiTSDBInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

