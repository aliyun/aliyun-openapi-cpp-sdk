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

#include <alibabacloud/polardb/model/ModifyDBDescriptionRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBDescriptionRequest;

ModifyDBDescriptionRequest::ModifyDBDescriptionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBDescription")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBDescriptionRequest::~ModifyDBDescriptionRequest()
{}

long ModifyDBDescriptionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBDescriptionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBDescriptionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBDescriptionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBDescriptionRequest::getDBDescription()const
{
	return dBDescription_;
}

void ModifyDBDescriptionRequest::setDBDescription(const std::string& dBDescription)
{
	dBDescription_ = dBDescription;
	setCoreParameter("DBDescription", dBDescription);
}

std::string ModifyDBDescriptionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBDescriptionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBDescriptionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBDescriptionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBDescriptionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBDescriptionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyDBDescriptionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBDescriptionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBDescriptionRequest::getDBName()const
{
	return dBName_;
}

void ModifyDBDescriptionRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

