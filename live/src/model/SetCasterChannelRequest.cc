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

#include <alibabacloud/live/model/SetCasterChannelRequest.h>

using AlibabaCloud::Live::Model::SetCasterChannelRequest;

SetCasterChannelRequest::SetCasterChannelRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetCasterChannel")
{}

SetCasterChannelRequest::~SetCasterChannelRequest()
{}

std::string SetCasterChannelRequest::getResourceId()const
{
	return resourceId_;
}

void SetCasterChannelRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

int SetCasterChannelRequest::getPlayStatus()const
{
	return playStatus_;
}

void SetCasterChannelRequest::setPlayStatus(int playStatus)
{
	playStatus_ = playStatus;
	setCoreParameter("PlayStatus", std::to_string(playStatus));
}

std::string SetCasterChannelRequest::getRegionId()const
{
	return regionId_;
}

void SetCasterChannelRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetCasterChannelRequest::getCasterId()const
{
	return casterId_;
}

void SetCasterChannelRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

long SetCasterChannelRequest::getOwnerId()const
{
	return ownerId_;
}

void SetCasterChannelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int SetCasterChannelRequest::getSeekOffset()const
{
	return seekOffset_;
}

void SetCasterChannelRequest::setSeekOffset(int seekOffset)
{
	seekOffset_ = seekOffset;
	setCoreParameter("SeekOffset", std::to_string(seekOffset));
}

std::string SetCasterChannelRequest::getChannelId()const
{
	return channelId_;
}

void SetCasterChannelRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

