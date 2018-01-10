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

#include <alibabacloud/ecs/model/CopyImageRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CopyImageRequest::CopyImageRequest() :
	EcsRequest("CopyImage")
{}

CopyImageRequest::~CopyImageRequest()
{}

std::string CopyImageRequest::getTag4Value()const
{
	return tag4Value_;
}

void CopyImageRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CopyImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CopyImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CopyImageRequest::getImageId()const
{
	return imageId_;
}

void CopyImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CopyImageRequest::getTag2Key()const
{
	return tag2Key_;
}

void CopyImageRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CopyImageRequest::getTag5Key()const
{
	return tag5Key_;
}

void CopyImageRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CopyImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopyImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CopyImageRequest::getDestinationImageName()const
{
	return destinationImageName_;
}

void CopyImageRequest::setDestinationImageName(const std::string& destinationImageName)
{
	destinationImageName_ = destinationImageName;
	setParameter("DestinationImageName", destinationImageName);
}

std::string CopyImageRequest::getDestinationRegionId()const
{
	return destinationRegionId_;
}

void CopyImageRequest::setDestinationRegionId(const std::string& destinationRegionId)
{
	destinationRegionId_ = destinationRegionId;
	setParameter("DestinationRegionId", destinationRegionId);
}

std::string CopyImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CopyImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CopyImageRequest::getTag3Key()const
{
	return tag3Key_;
}

void CopyImageRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

long CopyImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CopyImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CopyImageRequest::getTag5Value()const
{
	return tag5Value_;
}

void CopyImageRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CopyImageRequest::getTag1Key()const
{
	return tag1Key_;
}

void CopyImageRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CopyImageRequest::getTag1Value()const
{
	return tag1Value_;
}

void CopyImageRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

bool CopyImageRequest::getEncrypted()const
{
	return encrypted_;
}

void CopyImageRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setParameter("Encrypted", std::to_string(encrypted));
}

std::string CopyImageRequest::getRegionId()const
{
	return regionId_;
}

void CopyImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CopyImageRequest::getTag2Value()const
{
	return tag2Value_;
}

void CopyImageRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CopyImageRequest::getTag4Key()const
{
	return tag4Key_;
}

void CopyImageRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string CopyImageRequest::getDestinationDescription()const
{
	return destinationDescription_;
}

void CopyImageRequest::setDestinationDescription(const std::string& destinationDescription)
{
	destinationDescription_ = destinationDescription;
	setParameter("DestinationDescription", destinationDescription);
}

std::string CopyImageRequest::getTag3Value()const
{
	return tag3Value_;
}

void CopyImageRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

