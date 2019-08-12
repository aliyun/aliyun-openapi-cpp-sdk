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

#include <alibabacloud/slb/model/CreateDomainExtensionRequest.h>

using AlibabaCloud::Slb::Model::CreateDomainExtensionRequest;

CreateDomainExtensionRequest::CreateDomainExtensionRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateDomainExtension")
{}

CreateDomainExtensionRequest::~CreateDomainExtensionRequest()
{}

std::string CreateDomainExtensionRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateDomainExtensionRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long CreateDomainExtensionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDomainExtensionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateDomainExtensionRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateDomainExtensionRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateDomainExtensionRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateDomainExtensionRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateDomainExtensionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDomainExtensionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDomainExtensionRequest::getRegionId()const
{
	return regionId_;
}

void CreateDomainExtensionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDomainExtensionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDomainExtensionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateDomainExtensionRequest::getDomain()const
{
	return domain_;
}

void CreateDomainExtensionRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

long CreateDomainExtensionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDomainExtensionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDomainExtensionRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void CreateDomainExtensionRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setCoreParameter("ServerCertificateId", serverCertificateId);
}

std::string CreateDomainExtensionRequest::getTags()const
{
	return tags_;
}

void CreateDomainExtensionRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

