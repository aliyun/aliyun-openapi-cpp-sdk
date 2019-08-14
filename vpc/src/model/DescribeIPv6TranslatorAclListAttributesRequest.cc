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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorAclListAttributesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIPv6TranslatorAclListAttributesRequest;

DescribeIPv6TranslatorAclListAttributesRequest::DescribeIPv6TranslatorAclListAttributesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeIPv6TranslatorAclListAttributes")
{}

DescribeIPv6TranslatorAclListAttributesRequest::~DescribeIPv6TranslatorAclListAttributesRequest()
{}

std::string DescribeIPv6TranslatorAclListAttributesRequest::getAclId()const
{
	return aclId_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long DescribeIPv6TranslatorAclListAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeIPv6TranslatorAclListAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeIPv6TranslatorAclListAttributesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeIPv6TranslatorAclListAttributesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeIPv6TranslatorAclListAttributesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeIPv6TranslatorAclListAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeIPv6TranslatorAclListAttributesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIPv6TranslatorAclListAttributesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

