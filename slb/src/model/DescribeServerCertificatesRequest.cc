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

#include <alibabacloud/slb/model/DescribeServerCertificatesRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeServerCertificatesRequest::DescribeServerCertificatesRequest() :
	SlbRequest("DescribeServerCertificates")
{}

DescribeServerCertificatesRequest::~DescribeServerCertificatesRequest()
{}

std::string DescribeServerCertificatesRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeServerCertificatesRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

std::string DescribeServerCertificatesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeServerCertificatesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

long DescribeServerCertificatesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeServerCertificatesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeServerCertificatesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeServerCertificatesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeServerCertificatesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeServerCertificatesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeServerCertificatesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeServerCertificatesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeServerCertificatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeServerCertificatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeServerCertificatesRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void DescribeServerCertificatesRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setParameter("ServerCertificateId", serverCertificateId);
}

std::string DescribeServerCertificatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeServerCertificatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeServerCertificatesRequest::getTags()const
{
	return tags_;
}

void DescribeServerCertificatesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

