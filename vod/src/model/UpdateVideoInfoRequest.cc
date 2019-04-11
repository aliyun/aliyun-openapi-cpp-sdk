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

#include <alibabacloud/vod/model/UpdateVideoInfoRequest.h>

using AlibabaCloud::Vod::Model::UpdateVideoInfoRequest;

UpdateVideoInfoRequest::UpdateVideoInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateVideoInfo")
{}

UpdateVideoInfoRequest::~UpdateVideoInfoRequest()
{}

long UpdateVideoInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateVideoInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateVideoInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateVideoInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateVideoInfoRequest::getDescription()const
{
	return description_;
}

void UpdateVideoInfoRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateVideoInfoRequest::getVideoId()const
{
	return videoId_;
}

void UpdateVideoInfoRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

long UpdateVideoInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateVideoInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateVideoInfoRequest::getTitle()const
{
	return title_;
}

void UpdateVideoInfoRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

std::string UpdateVideoInfoRequest::getTags()const
{
	return tags_;
}

void UpdateVideoInfoRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string UpdateVideoInfoRequest::getCoverURL()const
{
	return coverURL_;
}

void UpdateVideoInfoRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setCoreParameter("CoverURL", coverURL);
}

std::string UpdateVideoInfoRequest::getDownloadSwitch()const
{
	return downloadSwitch_;
}

void UpdateVideoInfoRequest::setDownloadSwitch(const std::string& downloadSwitch)
{
	downloadSwitch_ = downloadSwitch;
	setCoreParameter("DownloadSwitch", downloadSwitch);
}

long UpdateVideoInfoRequest::getCateId()const
{
	return cateId_;
}

void UpdateVideoInfoRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", std::to_string(cateId));
}

std::string UpdateVideoInfoRequest::getCustomMediaInfo()const
{
	return customMediaInfo_;
}

void UpdateVideoInfoRequest::setCustomMediaInfo(const std::string& customMediaInfo)
{
	customMediaInfo_ = customMediaInfo;
	setCoreParameter("CustomMediaInfo", customMediaInfo);
}

std::string UpdateVideoInfoRequest::getStatus()const
{
	return status_;
}

void UpdateVideoInfoRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

