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

#include <alibabacloud/rds/model/MigrateSecurityIPModeRequest.h>

using AlibabaCloud::Rds::Model::MigrateSecurityIPModeRequest;

MigrateSecurityIPModeRequest::MigrateSecurityIPModeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "MigrateSecurityIPMode")
{}

MigrateSecurityIPModeRequest::~MigrateSecurityIPModeRequest()
{}

long MigrateSecurityIPModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateSecurityIPModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MigrateSecurityIPModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MigrateSecurityIPModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string MigrateSecurityIPModeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateSecurityIPModeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long MigrateSecurityIPModeRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateSecurityIPModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string MigrateSecurityIPModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateSecurityIPModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

