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

#include <alibabacloud/rds/model/ReleaseInstancePublicConnectionRequest.h>

using AlibabaCloud::Rds::Model::ReleaseInstancePublicConnectionRequest;

ReleaseInstancePublicConnectionRequest::ReleaseInstancePublicConnectionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ReleaseInstancePublicConnection")
{}

ReleaseInstancePublicConnectionRequest::~ReleaseInstancePublicConnectionRequest()
{}

long ReleaseInstancePublicConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseInstancePublicConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReleaseInstancePublicConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleaseInstancePublicConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ReleaseInstancePublicConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReleaseInstancePublicConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ReleaseInstancePublicConnectionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ReleaseInstancePublicConnectionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long ReleaseInstancePublicConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleaseInstancePublicConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ReleaseInstancePublicConnectionRequest::getCurrentConnectionString()const
{
	return currentConnectionString_;
}

void ReleaseInstancePublicConnectionRequest::setCurrentConnectionString(const std::string& currentConnectionString)
{
	currentConnectionString_ = currentConnectionString;
	setCoreParameter("CurrentConnectionString", std::to_string(currentConnectionString));
}

std::string ReleaseInstancePublicConnectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseInstancePublicConnectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

