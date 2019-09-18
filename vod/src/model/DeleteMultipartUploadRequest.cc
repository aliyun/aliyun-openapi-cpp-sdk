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

#include <alibabacloud/vod/model/DeleteMultipartUploadRequest.h>

using AlibabaCloud::Vod::Model::DeleteMultipartUploadRequest;

DeleteMultipartUploadRequest::DeleteMultipartUploadRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteMultipartUpload")
{}

DeleteMultipartUploadRequest::~DeleteMultipartUploadRequest()
{}

std::string DeleteMultipartUploadRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMultipartUploadRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DeleteMultipartUploadRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void DeleteMultipartUploadRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

std::string DeleteMultipartUploadRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMultipartUploadRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteMultipartUploadRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMultipartUploadRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteMultipartUploadRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMultipartUploadRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteMultipartUploadRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMultipartUploadRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteMultipartUploadRequest::getMediaId()const
{
	return mediaId_;
}

void DeleteMultipartUploadRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string DeleteMultipartUploadRequest::getMediaType()const
{
	return mediaType_;
}

void DeleteMultipartUploadRequest::setMediaType(const std::string& mediaType)
{
	mediaType_ = mediaType;
	setCoreParameter("MediaType", mediaType);
}

