<<<<<<< HEAD
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

using AlibabaCloud::Ecs::Model::CopyImageRequest;

CopyImageRequest::CopyImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CopyImage")
{}

CopyImageRequest::~CopyImageRequest()
{}

long CopyImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CopyImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CopyImageRequest::getImageId()const
{
	return imageId_;
}

void CopyImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string CopyImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopyImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CopyImageRequest::getDestinationImageName()const
{
	return destinationImageName_;
}

void CopyImageRequest::setDestinationImageName(const std::string& destinationImageName)
{
	destinationImageName_ = destinationImageName;
	setCoreParameter("DestinationImageName", destinationImageName);
}

std::string CopyImageRequest::getDestinationRegionId()const
{
	return destinationRegionId_;
}

void CopyImageRequest::setDestinationRegionId(const std::string& destinationRegionId)
{
	destinationRegionId_ = destinationRegionId;
	setCoreParameter("DestinationRegionId", destinationRegionId);
}

std::string CopyImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CopyImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CopyImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CopyImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CopyImageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CopyImageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool CopyImageRequest::getEncrypted()const
{
	return encrypted_;
}

void CopyImageRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setCoreParameter("Encrypted", encrypted ? "true" : "false");
}

std::string CopyImageRequest::getRegionId()const
{
	return regionId_;
}

void CopyImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<CopyImageRequest::Tag> CopyImageRequest::getTag()const
{
	return tag_;
}

void CopyImageRequest::setTag(const std::vector<Tag>& tag)
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

std::string CopyImageRequest::getKMSKeyId()const
{
	return kMSKeyId_;
}

void CopyImageRequest::setKMSKeyId(const std::string& kMSKeyId)
{
	kMSKeyId_ = kMSKeyId;
	setCoreParameter("KMSKeyId", kMSKeyId);
}

std::string CopyImageRequest::getDestinationDescription()const
{
	return destinationDescription_;
}

void CopyImageRequest::setDestinationDescription(const std::string& destinationDescription)
{
	destinationDescription_ = destinationDescription;
	setCoreParameter("DestinationDescription", destinationDescription);
}

=======
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

using AlibabaCloud::Ecs::Model::CopyImageRequest;

CopyImageRequest::CopyImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CopyImage")
{}

CopyImageRequest::~CopyImageRequest()
{}

long CopyImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CopyImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CopyImageRequest::getImageId()const
{
	return imageId_;
}

void CopyImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string CopyImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopyImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CopyImageRequest::getDestinationImageName()const
{
	return destinationImageName_;
}

void CopyImageRequest::setDestinationImageName(const std::string& destinationImageName)
{
	destinationImageName_ = destinationImageName;
	setCoreParameter("DestinationImageName", destinationImageName);
}

std::string CopyImageRequest::getDestinationRegionId()const
{
	return destinationRegionId_;
}

void CopyImageRequest::setDestinationRegionId(const std::string& destinationRegionId)
{
	destinationRegionId_ = destinationRegionId;
	setCoreParameter("DestinationRegionId", destinationRegionId);
}

std::string CopyImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CopyImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CopyImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CopyImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CopyImageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CopyImageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool CopyImageRequest::getEncrypted()const
{
	return encrypted_;
}

void CopyImageRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setCoreParameter("Encrypted", encrypted ? "true" : "false");
}

std::string CopyImageRequest::getRegionId()const
{
	return regionId_;
}

void CopyImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<CopyImageRequest::Tag> CopyImageRequest::getTag()const
{
	return tag_;
}

void CopyImageRequest::setTag(const std::vector<Tag>& tag)
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

std::string CopyImageRequest::getKMSKeyId()const
{
	return kMSKeyId_;
}

void CopyImageRequest::setKMSKeyId(const std::string& kMSKeyId)
{
	kMSKeyId_ = kMSKeyId;
	setCoreParameter("KMSKeyId", kMSKeyId);
}

std::string CopyImageRequest::getDestinationDescription()const
{
	return destinationDescription_;
}

void CopyImageRequest::setDestinationDescription(const std::string& destinationDescription)
{
	destinationDescription_ = destinationDescription;
	setCoreParameter("DestinationDescription", destinationDescription);
}

>>>>>>> master
