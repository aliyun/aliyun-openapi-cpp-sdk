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

#include <alibabacloud/slb/model/SetServerCertificateNameRequest.h>

using AlibabaCloud::Slb::Model::SetServerCertificateNameRequest;

SetServerCertificateNameRequest::SetServerCertificateNameRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetServerCertificateName")
{}

SetServerCertificateNameRequest::~SetServerCertificateNameRequest()
{}

std::string SetServerCertificateNameRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetServerCertificateNameRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long SetServerCertificateNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetServerCertificateNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetServerCertificateNameRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetServerCertificateNameRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetServerCertificateNameRequest::getRegionId()const
{
	return regionId_;
}

void SetServerCertificateNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetServerCertificateNameRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetServerCertificateNameRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SetServerCertificateNameRequest::getOwnerId()const
{
	return ownerId_;
}

void SetServerCertificateNameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetServerCertificateNameRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void SetServerCertificateNameRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setCoreParameter("ServerCertificateId", serverCertificateId);
}

std::string SetServerCertificateNameRequest::getServerCertificateName()const
{
	return serverCertificateName_;
}

void SetServerCertificateNameRequest::setServerCertificateName(const std::string& serverCertificateName)
{
	serverCertificateName_ = serverCertificateName;
	setCoreParameter("ServerCertificateName", serverCertificateName);
}

std::string SetServerCertificateNameRequest::getTags()const
{
	return tags_;
}

void SetServerCertificateNameRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

