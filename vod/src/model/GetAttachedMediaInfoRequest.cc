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

#include <alibabacloud/vod/model/GetAttachedMediaInfoRequest.h>

using AlibabaCloud::Vod::Model::GetAttachedMediaInfoRequest;

GetAttachedMediaInfoRequest::GetAttachedMediaInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetAttachedMediaInfo")
{}

GetAttachedMediaInfoRequest::~GetAttachedMediaInfoRequest()
{}

long GetAttachedMediaInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAttachedMediaInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetAttachedMediaInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAttachedMediaInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string GetAttachedMediaInfoRequest::getOutputType()const
{
	return outputType_;
}

void GetAttachedMediaInfoRequest::setOutputType(const std::string& outputType)
{
	outputType_ = outputType;
	setCoreParameter("OutputType", std::to_string(outputType));
}

std::string GetAttachedMediaInfoRequest::getMediaIds()const
{
	return mediaIds_;
}

void GetAttachedMediaInfoRequest::setMediaIds(const std::string& mediaIds)
{
	mediaIds_ = mediaIds;
	setCoreParameter("MediaIds", std::to_string(mediaIds));
}

long GetAttachedMediaInfoRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void GetAttachedMediaInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", resourceRealOwnerId);
}

long GetAttachedMediaInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAttachedMediaInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long GetAttachedMediaInfoRequest::getAuthTimeout()const
{
	return authTimeout_;
}

void GetAttachedMediaInfoRequest::setAuthTimeout(long authTimeout)
{
	authTimeout_ = authTimeout;
	setCoreParameter("AuthTimeout", authTimeout);
}

std::string GetAttachedMediaInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAttachedMediaInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

