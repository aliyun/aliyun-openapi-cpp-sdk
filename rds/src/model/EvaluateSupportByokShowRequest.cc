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

#include <alibabacloud/rds/model/EvaluateSupportByokShowRequest.h>

using AlibabaCloud::Rds::Model::EvaluateSupportByokShowRequest;

EvaluateSupportByokShowRequest::EvaluateSupportByokShowRequest() :
	RpcServiceRequest("rds", "2014-08-15", "EvaluateSupportByokShow")
{}

EvaluateSupportByokShowRequest::~EvaluateSupportByokShowRequest()
{}

long EvaluateSupportByokShowRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EvaluateSupportByokShowRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EvaluateSupportByokShowRequest::getNodeType()const
{
	return nodeType_;
}

void EvaluateSupportByokShowRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

std::string EvaluateSupportByokShowRequest::getEngineVersion()const
{
	return engineVersion_;
}

void EvaluateSupportByokShowRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string EvaluateSupportByokShowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EvaluateSupportByokShowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string EvaluateSupportByokShowRequest::getSecurityToken()const
{
	return securityToken_;
}

void EvaluateSupportByokShowRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string EvaluateSupportByokShowRequest::getRegionId()const
{
	return regionId_;
}

void EvaluateSupportByokShowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string EvaluateSupportByokShowRequest::getEngine()const
{
	return engine_;
}

void EvaluateSupportByokShowRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string EvaluateSupportByokShowRequest::getDbInstanceStorageType()const
{
	return dbInstanceStorageType_;
}

void EvaluateSupportByokShowRequest::setDbInstanceStorageType(const std::string& dbInstanceStorageType)
{
	dbInstanceStorageType_ = dbInstanceStorageType;
	setCoreParameter("DbInstanceStorageType", dbInstanceStorageType);
}

std::string EvaluateSupportByokShowRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EvaluateSupportByokShowRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EvaluateSupportByokShowRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EvaluateSupportByokShowRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long EvaluateSupportByokShowRequest::getOwnerId()const
{
	return ownerId_;
}

void EvaluateSupportByokShowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string EvaluateSupportByokShowRequest::getTargetRegionId()const
{
	return targetRegionId_;
}

void EvaluateSupportByokShowRequest::setTargetRegionId(const std::string& targetRegionId)
{
	targetRegionId_ = targetRegionId;
	setCoreParameter("TargetRegionId", targetRegionId);
}

