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

#include <alibabacloud/rds/model/ModifyLicenseInfoRequest.h>

using AlibabaCloud::Rds::Model::ModifyLicenseInfoRequest;

ModifyLicenseInfoRequest::ModifyLicenseInfoRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyLicenseInfo")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyLicenseInfoRequest::~ModifyLicenseInfoRequest()
{}

long ModifyLicenseInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyLicenseInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyLicenseInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyLicenseInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyLicenseInfoRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyLicenseInfoRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long ModifyLicenseInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLicenseInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyLicenseInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLicenseInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyLicenseInfoRequest::getLicense()const
{
	return license_;
}

void ModifyLicenseInfoRequest::setLicense(const std::string& license)
{
	license_ = license;
	setParameter("License", license);
}

std::string ModifyLicenseInfoRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyLicenseInfoRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

