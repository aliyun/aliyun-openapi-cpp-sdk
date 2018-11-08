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

#include <alibabacloud/vod/model/GetPlayInfoRequest.h>

using AlibabaCloud::Vod::Model::GetPlayInfoRequest;

GetPlayInfoRequest::GetPlayInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetPlayInfo")
{}

GetPlayInfoRequest::~GetPlayInfoRequest()
{}

long GetPlayInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetPlayInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetPlayInfoRequest::getStreamType()const
{
	return streamType_;
}

void GetPlayInfoRequest::setStreamType(const std::string& streamType)
{
	streamType_ = streamType;
	setParameter("StreamType", streamType);
}

std::string GetPlayInfoRequest::getFormats()const
{
	return formats_;
}

void GetPlayInfoRequest::setFormats(const std::string& formats)
{
	formats_ = formats;
	setParameter("Formats", formats);
}

std::string GetPlayInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetPlayInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetPlayInfoRequest::getChannel()const
{
	return channel_;
}

void GetPlayInfoRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string GetPlayInfoRequest::getVideoId()const
{
	return videoId_;
}

void GetPlayInfoRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

std::string GetPlayInfoRequest::getPlayerVersion()const
{
	return playerVersion_;
}

void GetPlayInfoRequest::setPlayerVersion(const std::string& playerVersion)
{
	playerVersion_ = playerVersion;
	setParameter("PlayerVersion", playerVersion);
}

long GetPlayInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetPlayInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetPlayInfoRequest::getResultType()const
{
	return resultType_;
}

void GetPlayInfoRequest::setResultType(const std::string& resultType)
{
	resultType_ = resultType;
	setParameter("ResultType", resultType);
}

std::string GetPlayInfoRequest::getRand()const
{
	return rand_;
}

void GetPlayInfoRequest::setRand(const std::string& rand)
{
	rand_ = rand;
	setParameter("Rand", rand);
}

std::string GetPlayInfoRequest::getReAuthInfo()const
{
	return reAuthInfo_;
}

void GetPlayInfoRequest::setReAuthInfo(const std::string& reAuthInfo)
{
	reAuthInfo_ = reAuthInfo;
	setParameter("ReAuthInfo", reAuthInfo);
}

std::string GetPlayInfoRequest::getPlayConfig()const
{
	return playConfig_;
}

void GetPlayInfoRequest::setPlayConfig(const std::string& playConfig)
{
	playConfig_ = playConfig;
	setParameter("PlayConfig", playConfig);
}

std::string GetPlayInfoRequest::getOutputType()const
{
	return outputType_;
}

void GetPlayInfoRequest::setOutputType(const std::string& outputType)
{
	outputType_ = outputType;
	setParameter("OutputType", outputType);
}

std::string GetPlayInfoRequest::getDefinition()const
{
	return definition_;
}

void GetPlayInfoRequest::setDefinition(const std::string& definition)
{
	definition_ = definition;
	setParameter("Definition", definition);
}

long GetPlayInfoRequest::getAuthTimeout()const
{
	return authTimeout_;
}

void GetPlayInfoRequest::setAuthTimeout(long authTimeout)
{
	authTimeout_ = authTimeout;
	setParameter("AuthTimeout", std::to_string(authTimeout));
}

std::string GetPlayInfoRequest::getAuthInfo()const
{
	return authInfo_;
}

void GetPlayInfoRequest::setAuthInfo(const std::string& authInfo)
{
	authInfo_ = authInfo;
	setParameter("AuthInfo", authInfo);
}

