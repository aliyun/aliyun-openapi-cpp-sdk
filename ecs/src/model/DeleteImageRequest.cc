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

#include <alibabacloud/ecs/model/DeleteImageRequest.h>

using AlibabaCloud::Ecs::Model::DeleteImageRequest;

DeleteImageRequest::DeleteImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteImage")
{}

DeleteImageRequest::~DeleteImageRequest()
{}

std::string DeleteImageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteImageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool DeleteImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteImageRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string DeleteImageRequest::getImageId()const
{
	return imageId_;
}

void DeleteImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string DeleteImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteImageRequest::getRegionId()const
{
	return regionId_;
}

void DeleteImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

bool DeleteImageRequest::getForce()const
{
	return force_;
}

void DeleteImageRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

bool DeleteImageRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteImageRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

