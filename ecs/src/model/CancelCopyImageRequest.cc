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

#include <alibabacloud/ecs/model/CancelCopyImageRequest.h>

using AlibabaCloud::Ecs::Model::CancelCopyImageRequest;

CancelCopyImageRequest::CancelCopyImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CancelCopyImage")
{}

CancelCopyImageRequest::~CancelCopyImageRequest()
{}

std::string CancelCopyImageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CancelCopyImageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long CancelCopyImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelCopyImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelCopyImageRequest::getImageId()const
{
	return imageId_;
}

void CancelCopyImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string CancelCopyImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelCopyImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelCopyImageRequest::getRegionId()const
{
	return regionId_;
}

void CancelCopyImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CancelCopyImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelCopyImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CancelCopyImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelCopyImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

