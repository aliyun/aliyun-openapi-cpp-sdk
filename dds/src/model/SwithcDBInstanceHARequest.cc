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

#include <alibabacloud/dds/model/SwithcDBInstanceHARequest.h>

using AlibabaCloud::Dds::Model::SwithcDBInstanceHARequest;

SwithcDBInstanceHARequest::SwithcDBInstanceHARequest() :
	RpcServiceRequest("dds", "2015-12-01", "SwithcDBInstanceHA")
{}

SwithcDBInstanceHARequest::~SwithcDBInstanceHARequest()
{}

long SwithcDBInstanceHARequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwithcDBInstanceHARequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SwithcDBInstanceHARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwithcDBInstanceHARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SwithcDBInstanceHARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwithcDBInstanceHARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long SwithcDBInstanceHARequest::getOwnerId()const
{
	return ownerId_;
}

void SwithcDBInstanceHARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SwithcDBInstanceHARequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwithcDBInstanceHARequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int SwithcDBInstanceHARequest::getTargetInstanceId()const
{
	return targetInstanceId_;
}

void SwithcDBInstanceHARequest::setTargetInstanceId(int targetInstanceId)
{
	targetInstanceId_ = targetInstanceId;
	setCoreParameter("TargetInstanceId", targetInstanceId);
}

std::string SwithcDBInstanceHARequest::getSecurityToken()const
{
	return securityToken_;
}

void SwithcDBInstanceHARequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SwithcDBInstanceHARequest::getRegionId()const
{
	return regionId_;
}

void SwithcDBInstanceHARequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int SwithcDBInstanceHARequest::getSwitchType()const
{
	return switchType_;
}

void SwithcDBInstanceHARequest::setSwitchType(int switchType)
{
	switchType_ = switchType;
	setCoreParameter("SwitchType", switchType);
}

std::string SwithcDBInstanceHARequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwithcDBInstanceHARequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

int SwithcDBInstanceHARequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void SwithcDBInstanceHARequest::setSourceInstanceId(int sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setCoreParameter("SourceInstanceId", sourceInstanceId);
}

std::string SwithcDBInstanceHARequest::getNodeId()const
{
	return nodeId_;
}

void SwithcDBInstanceHARequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

