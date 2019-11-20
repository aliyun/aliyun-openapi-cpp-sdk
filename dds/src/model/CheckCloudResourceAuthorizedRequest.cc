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

#include <alibabacloud/dds/model/CheckCloudResourceAuthorizedRequest.h>

using AlibabaCloud::Dds::Model::CheckCloudResourceAuthorizedRequest;

CheckCloudResourceAuthorizedRequest::CheckCloudResourceAuthorizedRequest() :
	RpcServiceRequest("dds", "2015-12-01", "CheckCloudResourceAuthorized")
{
	setMethod(HttpRequest::Method::Post);
}

CheckCloudResourceAuthorizedRequest::~CheckCloudResourceAuthorizedRequest()
{}

long CheckCloudResourceAuthorizedRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckCloudResourceAuthorizedRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckCloudResourceAuthorizedRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckCloudResourceAuthorizedRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CheckCloudResourceAuthorizedRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckCloudResourceAuthorizedRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CheckCloudResourceAuthorizedRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CheckCloudResourceAuthorizedRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string CheckCloudResourceAuthorizedRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckCloudResourceAuthorizedRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CheckCloudResourceAuthorizedRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckCloudResourceAuthorizedRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CheckCloudResourceAuthorizedRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckCloudResourceAuthorizedRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckCloudResourceAuthorizedRequest::getTargetRegionId()const
{
	return targetRegionId_;
}

void CheckCloudResourceAuthorizedRequest::setTargetRegionId(const std::string& targetRegionId)
{
	targetRegionId_ = targetRegionId;
	setCoreParameter("TargetRegionId", targetRegionId);
}

