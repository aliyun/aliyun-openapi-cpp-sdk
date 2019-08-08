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

#include <alibabacloud/vod/model/GetVideoPlayAuthRequest.h>

using AlibabaCloud::Vod::Model::GetVideoPlayAuthRequest;

GetVideoPlayAuthRequest::GetVideoPlayAuthRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetVideoPlayAuth")
{}

GetVideoPlayAuthRequest::~GetVideoPlayAuthRequest()
{}

long GetVideoPlayAuthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetVideoPlayAuthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetVideoPlayAuthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetVideoPlayAuthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetVideoPlayAuthRequest::getReAuthInfo()const
{
	return reAuthInfo_;
}

void GetVideoPlayAuthRequest::setReAuthInfo(const std::string& reAuthInfo)
{
	reAuthInfo_ = reAuthInfo;
	setCoreParameter("ReAuthInfo", reAuthInfo);
}

std::string GetVideoPlayAuthRequest::getPlayConfig()const
{
	return playConfig_;
}

void GetVideoPlayAuthRequest::setPlayConfig(const std::string& playConfig)
{
	playConfig_ = playConfig;
	setCoreParameter("PlayConfig", playConfig);
}

long GetVideoPlayAuthRequest::getAuthInfoTimeout()const
{
	return authInfoTimeout_;
}

void GetVideoPlayAuthRequest::setAuthInfoTimeout(long authInfoTimeout)
{
	authInfoTimeout_ = authInfoTimeout;
	setCoreParameter("AuthInfoTimeout", std::to_string(authInfoTimeout));
}

std::string GetVideoPlayAuthRequest::getVideoId()const
{
	return videoId_;
}

void GetVideoPlayAuthRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

long GetVideoPlayAuthRequest::getOwnerId()const
{
	return ownerId_;
}

void GetVideoPlayAuthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

