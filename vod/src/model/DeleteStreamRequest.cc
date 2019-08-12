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

#include <alibabacloud/vod/model/DeleteStreamRequest.h>

using AlibabaCloud::Vod::Model::DeleteStreamRequest;

DeleteStreamRequest::DeleteStreamRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteStream")
{}

DeleteStreamRequest::~DeleteStreamRequest()
{}

long DeleteStreamRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteStreamRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteStreamRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteStreamRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteStreamRequest::getJobIds()const
{
	return jobIds_;
}

void DeleteStreamRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", std::to_string(jobIds));
}

std::string DeleteStreamRequest::getVideoId()const
{
	return videoId_;
}

void DeleteStreamRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", std::to_string(videoId));
}

long DeleteStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

