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

#include <alibabacloud/slb/model/UploadCACertificateRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

UploadCACertificateRequest::UploadCACertificateRequest() :
	SlbRequest("UploadCACertificate")
{}

UploadCACertificateRequest::~UploadCACertificateRequest()
{}

std::string UploadCACertificateRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void UploadCACertificateRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

std::string UploadCACertificateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UploadCACertificateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

long UploadCACertificateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UploadCACertificateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UploadCACertificateRequest::getCACertificate()const
{
	return cACertificate_;
}

void UploadCACertificateRequest::setCACertificate(const std::string& cACertificate)
{
	cACertificate_ = cACertificate;
	setParameter("CACertificate", cACertificate);
}

std::string UploadCACertificateRequest::getCACertificateName()const
{
	return cACertificateName_;
}

void UploadCACertificateRequest::setCACertificateName(const std::string& cACertificateName)
{
	cACertificateName_ = cACertificateName;
	setParameter("CACertificateName", cACertificateName);
}

std::string UploadCACertificateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UploadCACertificateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UploadCACertificateRequest::getRegionId()const
{
	return regionId_;
}

void UploadCACertificateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UploadCACertificateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UploadCACertificateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UploadCACertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void UploadCACertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UploadCACertificateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UploadCACertificateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

