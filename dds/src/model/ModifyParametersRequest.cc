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

#include <alibabacloud/dds/model/ModifyParametersRequest.h>

using AlibabaCloud::Dds::Model::ModifyParametersRequest;

ModifyParametersRequest::ModifyParametersRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyParameters")
{}

ModifyParametersRequest::~ModifyParametersRequest()
{}

long ModifyParametersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyParametersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyParametersRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyParametersRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyParametersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyParametersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyParametersRequest::getRegionId()const
{
	return regionId_;
}

void ModifyParametersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyParametersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyParametersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyParametersRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyParametersRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long ModifyParametersRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyParametersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyParametersRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyParametersRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string ModifyParametersRequest::getParameters()const
{
	return parameters_;
}

void ModifyParametersRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setCoreParameter("Parameters", std::to_string(parameters));
}

std::string ModifyParametersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyParametersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

