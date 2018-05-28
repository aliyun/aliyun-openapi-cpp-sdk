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

#include <alibabacloud/ecs/model/DescribeKeyPairsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeKeyPairsRequest;

DescribeKeyPairsRequest::DescribeKeyPairsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeKeyPairs")
{}

DescribeKeyPairsRequest::~DescribeKeyPairsRequest()
{}

std::string DescribeKeyPairsRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeKeyPairsRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long DescribeKeyPairsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeKeyPairsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeKeyPairsRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeKeyPairsRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string DescribeKeyPairsRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeKeyPairsRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string DescribeKeyPairsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeKeyPairsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeKeyPairsRequest::getKeyPairFingerPrint()const
{
	return keyPairFingerPrint_;
}

void DescribeKeyPairsRequest::setKeyPairFingerPrint(const std::string& keyPairFingerPrint)
{
	keyPairFingerPrint_ = keyPairFingerPrint;
	setParameter("KeyPairFingerPrint", keyPairFingerPrint);
}

std::string DescribeKeyPairsRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeKeyPairsRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

std::string DescribeKeyPairsRequest::getKeyPairName()const
{
	return keyPairName_;
}

void DescribeKeyPairsRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

long DescribeKeyPairsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeKeyPairsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeKeyPairsRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeKeyPairsRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

int DescribeKeyPairsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeKeyPairsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeKeyPairsRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeKeyPairsRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string DescribeKeyPairsRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeKeyPairsRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string DescribeKeyPairsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeKeyPairsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeKeyPairsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeKeyPairsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeKeyPairsRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeKeyPairsRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

int DescribeKeyPairsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeKeyPairsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeKeyPairsRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeKeyPairsRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string DescribeKeyPairsRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeKeyPairsRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

