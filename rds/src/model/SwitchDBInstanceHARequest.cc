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

#include <alibabacloud/rds/model/SwitchDBInstanceHARequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

SwitchDBInstanceHARequest::SwitchDBInstanceHARequest() :
	RdsRequest("SwitchDBInstanceHA")
{}

SwitchDBInstanceHARequest::~SwitchDBInstanceHARequest()
{}

long SwitchDBInstanceHARequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchDBInstanceHARequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchDBInstanceHARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchDBInstanceHARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchDBInstanceHARequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void SwitchDBInstanceHARequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

std::string SwitchDBInstanceHARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchDBInstanceHARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SwitchDBInstanceHARequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwitchDBInstanceHARequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string SwitchDBInstanceHARequest::getForce()const
{
	return force_;
}

void SwitchDBInstanceHARequest::setForce(const std::string& force)
{
	force_ = force;
	setParameter("Force", force);
}

long SwitchDBInstanceHARequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchDBInstanceHARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SwitchDBInstanceHARequest::getNodeId()const
{
	return nodeId_;
}

void SwitchDBInstanceHARequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string SwitchDBInstanceHARequest::getOperation()const
{
	return operation_;
}

void SwitchDBInstanceHARequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

std::string SwitchDBInstanceHARequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchDBInstanceHARequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

