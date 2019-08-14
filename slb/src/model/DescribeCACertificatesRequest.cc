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

#include <alibabacloud/slb/model/DescribeCACertificatesRequest.h>

using AlibabaCloud::Slb::Model::DescribeCACertificatesRequest;

DescribeCACertificatesRequest::DescribeCACertificatesRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeCACertificates")
{}

DescribeCACertificatesRequest::~DescribeCACertificatesRequest()
{}

std::string DescribeCACertificatesRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeCACertificatesRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string DescribeCACertificatesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCACertificatesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

long DescribeCACertificatesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCACertificatesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCACertificatesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCACertificatesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCACertificatesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCACertificatesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeCACertificatesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCACertificatesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::vector<DescribeCACertificatesRequest::Tag> DescribeCACertificatesRequest::getTag()const
{
	return tag_;
}

void DescribeCACertificatesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

long DescribeCACertificatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCACertificatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCACertificatesRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void DescribeCACertificatesRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setCoreParameter("CACertificateId", cACertificateId);
}

