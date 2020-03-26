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

#include <alibabacloud/slb/model/UploadServerCertificateRequest.h>

using AlibabaCloud::Slb::Model::UploadServerCertificateRequest;

UploadServerCertificateRequest::UploadServerCertificateRequest() :
	RpcServiceRequest("slb", "2014-05-15", "UploadServerCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

UploadServerCertificateRequest::~UploadServerCertificateRequest()
{}

std::string UploadServerCertificateRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void UploadServerCertificateRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long UploadServerCertificateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UploadServerCertificateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UploadServerCertificateRequest::getServerCertificate()const
{
	return serverCertificate_;
}

void UploadServerCertificateRequest::setServerCertificate(const std::string& serverCertificate)
{
	serverCertificate_ = serverCertificate;
	setParameter("ServerCertificate", serverCertificate);
}

std::string UploadServerCertificateRequest::getAliCloudCertificateName()const
{
	return aliCloudCertificateName_;
}

void UploadServerCertificateRequest::setAliCloudCertificateName(const std::string& aliCloudCertificateName)
{
	aliCloudCertificateName_ = aliCloudCertificateName;
	setParameter("AliCloudCertificateName", aliCloudCertificateName);
}

std::string UploadServerCertificateRequest::getAliCloudCertificateId()const
{
	return aliCloudCertificateId_;
}

void UploadServerCertificateRequest::setAliCloudCertificateId(const std::string& aliCloudCertificateId)
{
	aliCloudCertificateId_ = aliCloudCertificateId;
	setParameter("AliCloudCertificateId", aliCloudCertificateId);
}

std::string UploadServerCertificateRequest::getPrivateKey()const
{
	return privateKey_;
}

void UploadServerCertificateRequest::setPrivateKey(const std::string& privateKey)
{
	privateKey_ = privateKey;
	setParameter("PrivateKey", privateKey);
}

std::string UploadServerCertificateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UploadServerCertificateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UploadServerCertificateRequest::getRegionId()const
{
	return regionId_;
}

void UploadServerCertificateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UploadServerCertificateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UploadServerCertificateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UploadServerCertificateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UploadServerCertificateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UploadServerCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void UploadServerCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UploadServerCertificateRequest::getTags()const
{
	return tags_;
}

void UploadServerCertificateRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string UploadServerCertificateRequest::getAliCloudCertificateRegionId()const
{
	return aliCloudCertificateRegionId_;
}

void UploadServerCertificateRequest::setAliCloudCertificateRegionId(const std::string& aliCloudCertificateRegionId)
{
	aliCloudCertificateRegionId_ = aliCloudCertificateRegionId;
	setParameter("AliCloudCertificateRegionId", aliCloudCertificateRegionId);
}

std::string UploadServerCertificateRequest::getServerCertificateName()const
{
	return serverCertificateName_;
}

void UploadServerCertificateRequest::setServerCertificateName(const std::string& serverCertificateName)
{
	serverCertificateName_ = serverCertificateName;
	setParameter("ServerCertificateName", serverCertificateName);
}

