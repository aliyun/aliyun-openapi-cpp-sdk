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

#include <alibabacloud/rds/model/ModifyParameterRequest.h>

using AlibabaCloud::Rds::Model::ModifyParameterRequest;

ModifyParameterRequest::ModifyParameterRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyParameter")
{}

ModifyParameterRequest::~ModifyParameterRequest()
{}

long ModifyParameterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyParameterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyParameterRequest::getParameterGroupId()const
{
	return parameterGroupId_;
}

void ModifyParameterRequest::setParameterGroupId(const std::string& parameterGroupId)
{
	parameterGroupId_ = parameterGroupId;
	setCoreParameter("ParameterGroupId", parameterGroupId);
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

std::string ModifyParameterRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyParameterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
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

std::string ModifyParameterRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyParameterRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

bool ModifyParameterRequest::getForcerestart()const
{
	return forcerestart_;
}

void ModifyParameterRequest::setForcerestart(bool forcerestart)
{
	forcerestart_ = forcerestart;
	setCoreParameter("Forcerestart", forcerestart);
}

long ModifyParameterRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyParameterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
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

std::string ModifyParameterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyParameterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

