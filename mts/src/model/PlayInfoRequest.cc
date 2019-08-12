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

#include <alibabacloud/mts/model/PlayInfoRequest.h>

using AlibabaCloud::Mts::Model::PlayInfoRequest;

PlayInfoRequest::PlayInfoRequest() :
	RpcServiceRequest("mts", "2014-06-18", "PlayInfo")
{}

PlayInfoRequest::~PlayInfoRequest()
{}

std::string PlayInfoRequest::getPlayDomain()const
{
	return playDomain_;
}

void PlayInfoRequest::setPlayDomain(const std::string& playDomain)
{
	playDomain_ = playDomain;
	setCoreParameter("PlayDomain", playDomain);
}

std::string PlayInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PlayInfoRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string PlayInfoRequest::getFormats()const
{
	return formats_;
}

void PlayInfoRequest::setFormats(const std::string& formats)
{
	formats_ = formats;
	setCoreParameter("Formats", formats);
}

std::string PlayInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PlayInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PlayInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PlayInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PlayInfoRequest::getHlsUriToken()const
{
	return hlsUriToken_;
}

void PlayInfoRequest::setHlsUriToken(const std::string& hlsUriToken)
{
	hlsUriToken_ = hlsUriToken;
	setCoreParameter("HlsUriToken", hlsUriToken);
}

std::string PlayInfoRequest::getTerminal()const
{
	return terminal_;
}

void PlayInfoRequest::setTerminal(const std::string& terminal)
{
	terminal_ = terminal;
	setCoreParameter("Terminal", terminal);
}

std::string PlayInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void PlayInfoRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string PlayInfoRequest::getMediaId()const
{
	return mediaId_;
}

void PlayInfoRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string PlayInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PlayInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PlayInfoRequest::getRand()const
{
	return rand_;
}

void PlayInfoRequest::setRand(const std::string& rand)
{
	rand_ = rand;
	setCoreParameter("Rand", rand);
}

long PlayInfoRequest::getAuthTimeout()const
{
	return authTimeout_;
}

void PlayInfoRequest::setAuthTimeout(long authTimeout)
{
	authTimeout_ = authTimeout;
	setCoreParameter("AuthTimeout", authTimeout);
}

std::string PlayInfoRequest::getAuthInfo()const
{
	return authInfo_;
}

void PlayInfoRequest::setAuthInfo(const std::string& authInfo)
{
	authInfo_ = authInfo;
	setCoreParameter("AuthInfo", authInfo);
}

