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

#include <alibabacloud/vod/model/DeleteDynamicImageRequest.h>

using AlibabaCloud::Vod::Model::DeleteDynamicImageRequest;

DeleteDynamicImageRequest::DeleteDynamicImageRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteDynamicImage")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDynamicImageRequest::~DeleteDynamicImageRequest()
{}

long DeleteDynamicImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDynamicImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDynamicImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDynamicImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDynamicImageRequest::getVideoId()const
{
	return videoId_;
}

void DeleteDynamicImageRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

long DeleteDynamicImageRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDynamicImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDynamicImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDynamicImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDynamicImageRequest::getDynamicImageIds()const
{
	return dynamicImageIds_;
}

void DeleteDynamicImageRequest::setDynamicImageIds(const std::string& dynamicImageIds)
{
	dynamicImageIds_ = dynamicImageIds;
	setParameter("DynamicImageIds", dynamicImageIds);
}

