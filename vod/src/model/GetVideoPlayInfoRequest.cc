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

#include <alibabacloud/vod/model/GetVideoPlayInfoRequest.h>

using AlibabaCloud::Vod::Model::GetVideoPlayInfoRequest;

GetVideoPlayInfoRequest::GetVideoPlayInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetVideoPlayInfo")
{}

GetVideoPlayInfoRequest::~GetVideoPlayInfoRequest()
{}

std::string GetVideoPlayInfoRequest::getSignVersion()const
{
	return signVersion_;
}

void GetVideoPlayInfoRequest::setSignVersion(const std::string& signVersion)
{
	signVersion_ = signVersion;
	setParameter("SignVersion", signVersion);
}

long GetVideoPlayInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetVideoPlayInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetVideoPlayInfoRequest::getClientVersion()const
{
	return clientVersion_;
}

void GetVideoPlayInfoRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setParameter("ClientVersion", clientVersion);
}

std::string GetVideoPlayInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetVideoPlayInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetVideoPlayInfoRequest::getChannel()const
{
	return channel_;
}

void GetVideoPlayInfoRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string GetVideoPlayInfoRequest::getPlaySign()const
{
	return playSign_;
}

void GetVideoPlayInfoRequest::setPlaySign(const std::string& playSign)
{
	playSign_ = playSign;
	setParameter("PlaySign", playSign);
}

std::string GetVideoPlayInfoRequest::getVideoId()const
{
	return videoId_;
}

void GetVideoPlayInfoRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

long GetVideoPlayInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetVideoPlayInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetVideoPlayInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetVideoPlayInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetVideoPlayInfoRequest::getClientTS()const
{
	return clientTS_;
}

void GetVideoPlayInfoRequest::setClientTS(long clientTS)
{
	clientTS_ = clientTS;
	setParameter("ClientTS", std::to_string(clientTS));
}

