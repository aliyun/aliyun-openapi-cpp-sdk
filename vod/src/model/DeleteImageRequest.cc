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

#include <alibabacloud/vod/model/DeleteImageRequest.h>

using AlibabaCloud::Vod::Model::DeleteImageRequest;

DeleteImageRequest::DeleteImageRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteImage")
{}

DeleteImageRequest::~DeleteImageRequest()
{}

long DeleteImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteImageRequest::getImageType()const
{
	return imageType_;
}

void DeleteImageRequest::setImageType(const std::string& imageType)
{
	imageType_ = imageType;
	setCoreParameter("ImageType", imageType);
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

std::string DeleteImageRequest::getImageURLs()const
{
	return imageURLs_;
}

void DeleteImageRequest::setImageURLs(const std::string& imageURLs)
{
	imageURLs_ = imageURLs;
	setCoreParameter("ImageURLs", imageURLs);
}

std::string DeleteImageRequest::getVideoId()const
{
	return videoId_;
}

void DeleteImageRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

long DeleteImageRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteImageRequest::getDeleteImageType()const
{
	return deleteImageType_;
}

void DeleteImageRequest::setDeleteImageType(const std::string& deleteImageType)
{
	deleteImageType_ = deleteImageType;
	setCoreParameter("DeleteImageType", deleteImageType);
}

std::string DeleteImageRequest::getImageIds()const
{
	return imageIds_;
}

void DeleteImageRequest::setImageIds(const std::string& imageIds)
{
	imageIds_ = imageIds;
	setCoreParameter("ImageIds", imageIds);
}

std::string DeleteImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

