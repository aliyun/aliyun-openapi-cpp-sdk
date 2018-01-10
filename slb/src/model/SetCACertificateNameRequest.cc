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

#include <alibabacloud/slb/model/SetCACertificateNameRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

SetCACertificateNameRequest::SetCACertificateNameRequest() :
	SlbRequest("SetCACertificateName")
{}

SetCACertificateNameRequest::~SetCACertificateNameRequest()
{}

std::string SetCACertificateNameRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetCACertificateNameRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetCACertificateNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetCACertificateNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetCACertificateNameRequest::getCACertificateName()const
{
	return cACertificateName_;
}

void SetCACertificateNameRequest::setCACertificateName(const std::string& cACertificateName)
{
	cACertificateName_ = cACertificateName;
	setParameter("CACertificateName", cACertificateName);
}

std::string SetCACertificateNameRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetCACertificateNameRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetCACertificateNameRequest::getRegionId()const
{
	return regionId_;
}

void SetCACertificateNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetCACertificateNameRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetCACertificateNameRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetCACertificateNameRequest::getOwnerId()const
{
	return ownerId_;
}

void SetCACertificateNameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetCACertificateNameRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void SetCACertificateNameRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setParameter("CACertificateId", cACertificateId);
}

std::string SetCACertificateNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetCACertificateNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

