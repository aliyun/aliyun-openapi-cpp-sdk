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

#include <alibabacloud/rds/model/CheckResourceRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CheckResourceRequest::CheckResourceRequest() :
	RdsRequest("CheckResource")
{}

CheckResourceRequest::~CheckResourceRequest()
{}

long CheckResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CheckResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CheckResourceRequest::getSpecifyCount()const
{
	return specifyCount_;
}

void CheckResourceRequest::setSpecifyCount(const std::string& specifyCount)
{
	specifyCount_ = specifyCount;
	setParameter("SpecifyCount", specifyCount);
}

std::string CheckResourceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CheckResourceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

long CheckResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckResourceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CheckResourceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string CheckResourceRequest::getEngine()const
{
	return engine_;
}

void CheckResourceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string CheckResourceRequest::getRegionId()const
{
	return regionId_;
}

void CheckResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CheckResourceRequest::getZoneId()const
{
	return zoneId_;
}

void CheckResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CheckResourceRequest::getDBInstanceUseType()const
{
	return dBInstanceUseType_;
}

void CheckResourceRequest::setDBInstanceUseType(const std::string& dBInstanceUseType)
{
	dBInstanceUseType_ = dBInstanceUseType;
	setParameter("DBInstanceUseType", dBInstanceUseType);
}

std::string CheckResourceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CheckResourceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

