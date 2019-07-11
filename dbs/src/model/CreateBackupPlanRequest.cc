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

#include <alibabacloud/dbs/model/CreateBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::CreateBackupPlanRequest;

CreateBackupPlanRequest::CreateBackupPlanRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "CreateBackupPlan")
{}

CreateBackupPlanRequest::~CreateBackupPlanRequest()
{}

std::string CreateBackupPlanRequest::getDatabaseType()const
{
	return databaseType_;
}

void CreateBackupPlanRequest::setDatabaseType(const std::string& databaseType)
{
	databaseType_ = databaseType;
	setCoreParameter("DatabaseType", databaseType);
}

std::string CreateBackupPlanRequest::getPeriod()const
{
	return period_;
}

void CreateBackupPlanRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateBackupPlanRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBackupPlanRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateBackupPlanRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBackupPlanRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int CreateBackupPlanRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateBackupPlanRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", std::to_string(usedTime));
}

std::string CreateBackupPlanRequest::getInstanceClass()const
{
	return instanceClass_;
}

void CreateBackupPlanRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

std::string CreateBackupPlanRequest::getStorageType()const
{
	return storageType_;
}

void CreateBackupPlanRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setCoreParameter("StorageType", storageType);
}

std::string CreateBackupPlanRequest::getBackupMethod()const
{
	return backupMethod_;
}

void CreateBackupPlanRequest::setBackupMethod(const std::string& backupMethod)
{
	backupMethod_ = backupMethod;
	setCoreParameter("BackupMethod", backupMethod);
}

std::string CreateBackupPlanRequest::getDatabaseRegion()const
{
	return databaseRegion_;
}

void CreateBackupPlanRequest::setDatabaseRegion(const std::string& databaseRegion)
{
	databaseRegion_ = databaseRegion;
	setCoreParameter("DatabaseRegion", databaseRegion);
}

std::string CreateBackupPlanRequest::getStorageRegion()const
{
	return storageRegion_;
}

void CreateBackupPlanRequest::setStorageRegion(const std::string& storageRegion)
{
	storageRegion_ = storageRegion;
	setCoreParameter("StorageRegion", storageRegion);
}

std::string CreateBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBackupPlanRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateBackupPlanRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string CreateBackupPlanRequest::getRegion()const
{
	return region_;
}

void CreateBackupPlanRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

std::string CreateBackupPlanRequest::getPayType()const
{
	return payType_;
}

void CreateBackupPlanRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

