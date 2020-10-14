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

#include <alibabacloud/ecs/model/CreateElasticityAssuranceRequest.h>

using AlibabaCloud::Ecs::Model::CreateElasticityAssuranceRequest;

CreateElasticityAssuranceRequest::CreateElasticityAssuranceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateElasticityAssurance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateElasticityAssuranceRequest::~CreateElasticityAssuranceRequest()
{}

long CreateElasticityAssuranceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateElasticityAssuranceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateElasticityAssuranceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateElasticityAssuranceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateElasticityAssuranceRequest::getDescription()const
{
	return description_;
}

void CreateElasticityAssuranceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateElasticityAssuranceRequest::getStartTime()const
{
	return startTime_;
}

void CreateElasticityAssuranceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string CreateElasticityAssuranceRequest::getPlatform()const
{
	return platform_;
}

void CreateElasticityAssuranceRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string CreateElasticityAssuranceRequest::getPrivatePoolOptionsMatchCriteria()const
{
	return privatePoolOptionsMatchCriteria_;
}

void CreateElasticityAssuranceRequest::setPrivatePoolOptionsMatchCriteria(const std::string& privatePoolOptionsMatchCriteria)
{
	privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
	setParameter("PrivatePoolOptionsMatchCriteria", privatePoolOptionsMatchCriteria);
}

std::string CreateElasticityAssuranceRequest::getRegionId()const
{
	return regionId_;
}

void CreateElasticityAssuranceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> CreateElasticityAssuranceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateElasticityAssuranceRequest::setInstanceType(const std::vector<std::string>& instanceType)
{
	instanceType_ = instanceType;
	for(int dep1 = 0; dep1!= instanceType.size(); dep1++) {
		setParameter("InstanceType."+ std::to_string(dep1), instanceType.at(dep1));
	}
}

std::string CreateElasticityAssuranceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateElasticityAssuranceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

int CreateElasticityAssuranceRequest::getPeriod()const
{
	return period_;
}

void CreateElasticityAssuranceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateElasticityAssuranceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateElasticityAssuranceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateElasticityAssuranceRequest::getPrivatePoolOptionsName()const
{
	return privatePoolOptionsName_;
}

void CreateElasticityAssuranceRequest::setPrivatePoolOptionsName(const std::string& privatePoolOptionsName)
{
	privatePoolOptionsName_ = privatePoolOptionsName;
	setParameter("PrivatePoolOptionsName", privatePoolOptionsName);
}

std::string CreateElasticityAssuranceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateElasticityAssuranceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateElasticityAssuranceRequest::getAssuranceTimes()const
{
	return assuranceTimes_;
}

void CreateElasticityAssuranceRequest::setAssuranceTimes(const std::string& assuranceTimes)
{
	assuranceTimes_ = assuranceTimes;
	setParameter("AssuranceTimes", assuranceTimes);
}

long CreateElasticityAssuranceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateElasticityAssuranceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateElasticityAssuranceRequest::getResourceType()const
{
	return resourceType_;
}

void CreateElasticityAssuranceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

int CreateElasticityAssuranceRequest::getInstanceCpuCoreCount()const
{
	return instanceCpuCoreCount_;
}

void CreateElasticityAssuranceRequest::setInstanceCpuCoreCount(int instanceCpuCoreCount)
{
	instanceCpuCoreCount_ = instanceCpuCoreCount;
	setParameter("InstanceCpuCoreCount", std::to_string(instanceCpuCoreCount));
}

std::string CreateElasticityAssuranceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateElasticityAssuranceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::vector<std::string> CreateElasticityAssuranceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateElasticityAssuranceRequest::setZoneId(const std::vector<std::string>& zoneId)
{
	zoneId_ = zoneId;
	for(int dep1 = 0; dep1!= zoneId.size(); dep1++) {
		setParameter("ZoneId."+ std::to_string(dep1), zoneId.at(dep1));
	}
}

std::string CreateElasticityAssuranceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateElasticityAssuranceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

std::string CreateElasticityAssuranceRequest::getPackageType()const
{
	return packageType_;
}

void CreateElasticityAssuranceRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setParameter("PackageType", packageType);
}

int CreateElasticityAssuranceRequest::getInstanceAmount()const
{
	return instanceAmount_;
}

void CreateElasticityAssuranceRequest::setInstanceAmount(int instanceAmount)
{
	instanceAmount_ = instanceAmount;
	setParameter("InstanceAmount", std::to_string(instanceAmount));
}

