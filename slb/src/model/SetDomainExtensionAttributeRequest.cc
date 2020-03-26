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

#include <alibabacloud/slb/model/SetDomainExtensionAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetDomainExtensionAttributeRequest;

SetDomainExtensionAttributeRequest::SetDomainExtensionAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetDomainExtensionAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

SetDomainExtensionAttributeRequest::~SetDomainExtensionAttributeRequest()
{}

std::string SetDomainExtensionAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetDomainExtensionAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetDomainExtensionAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetDomainExtensionAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetDomainExtensionAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetDomainExtensionAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetDomainExtensionAttributeRequest::getDomainExtensionId()const
{
	return domainExtensionId_;
}

void SetDomainExtensionAttributeRequest::setDomainExtensionId(const std::string& domainExtensionId)
{
	domainExtensionId_ = domainExtensionId;
	setParameter("DomainExtensionId", domainExtensionId);
}

std::string SetDomainExtensionAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetDomainExtensionAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetDomainExtensionAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetDomainExtensionAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetDomainExtensionAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDomainExtensionAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetDomainExtensionAttributeRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void SetDomainExtensionAttributeRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setParameter("ServerCertificateId", serverCertificateId);
}

std::string SetDomainExtensionAttributeRequest::getTags()const
{
	return tags_;
}

void SetDomainExtensionAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

