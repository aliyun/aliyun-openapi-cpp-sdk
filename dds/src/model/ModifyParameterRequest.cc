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

#include <alibabacloud/dds/model/ModifyParameterRequest.h>

using AlibabaCloud::Dds::Model::ModifyParameterRequest;

ModifyParameterRequest::ModifyParameterRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyParameter")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyParameterRequest::~ModifyParameterRequest()
{}

long ModifyParameterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyParameterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyParameterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyParameterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyParameterRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyParameterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyParameterRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyParameterRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyParameterRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyParameterRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string ModifyParameterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyParameterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyParameterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyParameterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyParameterRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyParameterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyParameterRequest::getParameters()const
{
	return parameters_;
}

void ModifyParameterRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setCoreParameter("Parameters", parameters);
}

