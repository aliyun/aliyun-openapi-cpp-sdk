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

#include <alibabacloud/vod/model/ListTranscodeTaskRequest.h>

using AlibabaCloud::Vod::Model::ListTranscodeTaskRequest;

ListTranscodeTaskRequest::ListTranscodeTaskRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListTranscodeTask")
{}

ListTranscodeTaskRequest::~ListTranscodeTaskRequest()
{}

long ListTranscodeTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTranscodeTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTranscodeTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTranscodeTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ListTranscodeTaskRequest::getPageNo()const
{
	return pageNo_;
}

void ListTranscodeTaskRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

int ListTranscodeTaskRequest::getPageSize()const
{
	return pageSize_;
}

void ListTranscodeTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListTranscodeTaskRequest::getEndTime()const
{
	return endTime_;
}

void ListTranscodeTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ListTranscodeTaskRequest::getVideoId()const
{
	return videoId_;
}

void ListTranscodeTaskRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

std::string ListTranscodeTaskRequest::getStartTime()const
{
	return startTime_;
}

void ListTranscodeTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long ListTranscodeTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTranscodeTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTranscodeTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTranscodeTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

