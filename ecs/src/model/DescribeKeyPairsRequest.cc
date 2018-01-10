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

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeKeyPairsRequest::DescribeKeyPairsRequest() :
	EcsRequest("DescribeKeyPairs")
{}

DescribeKeyPairsRequest::~DescribeKeyPairsRequest()
{}

long DescribeKeyPairsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeKeyPairsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string DescribeKeyPairsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeKeyPairsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
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

int DescribeKeyPairsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeKeyPairsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
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

int DescribeKeyPairsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeKeyPairsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

