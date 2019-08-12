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

using AlibabaCloud::Rds::Model::SwitchDBInstanceHARequest;

SwitchDBInstanceHARequest::SwitchDBInstanceHARequest() :
	RpcServiceRequest("rds", "2014-08-15", "SwitchDBInstanceHA")
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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SwitchDBInstanceHARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchDBInstanceHARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SwitchDBInstanceHARequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void SwitchDBInstanceHARequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", std::to_string(effectiveTime));
}

std::string SwitchDBInstanceHARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchDBInstanceHARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SwitchDBInstanceHARequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwitchDBInstanceHARequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string SwitchDBInstanceHARequest::getForce()const
{
	return force_;
}

void SwitchDBInstanceHARequest::setForce(const std::string& force)
{
	force_ = force;
	setCoreParameter("Force", std::to_string(force));
}

long SwitchDBInstanceHARequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchDBInstanceHARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SwitchDBInstanceHARequest::getNodeId()const
{
	return nodeId_;
}

void SwitchDBInstanceHARequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string SwitchDBInstanceHARequest::getOperation()const
{
	return operation_;
}

void SwitchDBInstanceHARequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setCoreParameter("Operation", std::to_string(operation));
}

std::string SwitchDBInstanceHARequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchDBInstanceHARequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

