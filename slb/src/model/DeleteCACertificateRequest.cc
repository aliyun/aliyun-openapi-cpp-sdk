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

#include <alibabacloud/slb/model/DeleteCACertificateRequest.h>

using AlibabaCloud::Slb::Model::DeleteCACertificateRequest;

DeleteCACertificateRequest::DeleteCACertificateRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DeleteCACertificate")
{}

DeleteCACertificateRequest::~DeleteCACertificateRequest()
{}

std::string DeleteCACertificateRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DeleteCACertificateRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long DeleteCACertificateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteCACertificateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteCACertificateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteCACertificateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteCACertificateRequest::getRegionId()const
{
	return regionId_;
}

void DeleteCACertificateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteCACertificateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteCACertificateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteCACertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCACertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteCACertificateRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void DeleteCACertificateRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setCoreParameter("CACertificateId", cACertificateId);
}

