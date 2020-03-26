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

#include <alibabacloud/slb/model/DeleteServerCertificateRequest.h>

using AlibabaCloud::Slb::Model::DeleteServerCertificateRequest;

DeleteServerCertificateRequest::DeleteServerCertificateRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DeleteServerCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteServerCertificateRequest::~DeleteServerCertificateRequest()
{}

std::string DeleteServerCertificateRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DeleteServerCertificateRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DeleteServerCertificateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteServerCertificateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteServerCertificateRequest::getRegionId()const
{
	return regionId_;
}

void DeleteServerCertificateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteServerCertificateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteServerCertificateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteServerCertificateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteServerCertificateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteServerCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteServerCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteServerCertificateRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void DeleteServerCertificateRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setParameter("ServerCertificateId", serverCertificateId);
}

std::string DeleteServerCertificateRequest::getTags()const
{
	return tags_;
}

void DeleteServerCertificateRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

