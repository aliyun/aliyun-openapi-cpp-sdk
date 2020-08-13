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

#include <alibabacloud/dds/model/EvaluateResourceRequest.h>

using AlibabaCloud::Dds::Model::EvaluateResourceRequest;

EvaluateResourceRequest::EvaluateResourceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "EvaluateResource")
{
	setMethod(HttpRequest::Method::Post);
}

EvaluateResourceRequest::~EvaluateResourceRequest()
{}

long EvaluateResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EvaluateResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EvaluateResourceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void EvaluateResourceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string EvaluateResourceRequest::getShardsInfo()const
{
	return shardsInfo_;
}

void EvaluateResourceRequest::setShardsInfo(const std::string& shardsInfo)
{
	shardsInfo_ = shardsInfo;
	setParameter("ShardsInfo", shardsInfo);
}

std::string EvaluateResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EvaluateResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string EvaluateResourceRequest::getSecurityToken()const
{
	return securityToken_;
}

void EvaluateResourceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string EvaluateResourceRequest::getRegionId()const
{
	return regionId_;
}

void EvaluateResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string EvaluateResourceRequest::getEngine()const
{
	return engine_;
}

void EvaluateResourceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string EvaluateResourceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void EvaluateResourceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string EvaluateResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EvaluateResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EvaluateResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EvaluateResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long EvaluateResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void EvaluateResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EvaluateResourceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void EvaluateResourceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string EvaluateResourceRequest::getZoneId()const
{
	return zoneId_;
}

void EvaluateResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

