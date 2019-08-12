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

#include <alibabacloud/dds/model/ModifyNodeSpecRequest.h>

using AlibabaCloud::Dds::Model::ModifyNodeSpecRequest;

ModifyNodeSpecRequest::ModifyNodeSpecRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyNodeSpec")
{}

ModifyNodeSpecRequest::~ModifyNodeSpecRequest()
{}

long ModifyNodeSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNodeSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

bool ModifyNodeSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyNodeSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay);
}

std::string ModifyNodeSpecRequest::getFromApp()const
{
	return fromApp_;
}

void ModifyNodeSpecRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setCoreParameter("FromApp", fromApp);
}

std::string ModifyNodeSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNodeSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNodeSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNodeSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

int ModifyNodeSpecRequest::getNodeStorage()const
{
	return nodeStorage_;
}

void ModifyNodeSpecRequest::setNodeStorage(int nodeStorage)
{
	nodeStorage_ = nodeStorage;
	setCoreParameter("NodeStorage", nodeStorage);
}

std::string ModifyNodeSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNodeSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyNodeSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNodeSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyNodeSpecRequest::getNodeClass()const
{
	return nodeClass_;
}

void ModifyNodeSpecRequest::setNodeClass(const std::string& nodeClass)
{
	nodeClass_ = nodeClass;
	setCoreParameter("NodeClass", nodeClass);
}

std::string ModifyNodeSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNodeSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyNodeSpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyNodeSpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyNodeSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNodeSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyNodeSpecRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyNodeSpecRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string ModifyNodeSpecRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyNodeSpecRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyNodeSpecRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyNodeSpecRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

