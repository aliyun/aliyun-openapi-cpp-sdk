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

#include <alibabacloud/live/model/UpdateCasterSceneAudioRequest.h>

using AlibabaCloud::Live::Model::UpdateCasterSceneAudioRequest;

UpdateCasterSceneAudioRequest::UpdateCasterSceneAudioRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateCasterSceneAudio")
{}

UpdateCasterSceneAudioRequest::~UpdateCasterSceneAudioRequest()
{}

std::vector<UpdateCasterSceneAudioRequest::AudioLayer> UpdateCasterSceneAudioRequest::getAudioLayer()const
{
	return audioLayer_;
}

void UpdateCasterSceneAudioRequest::setAudioLayer(const std::vector<AudioLayer>& audioLayer)
{
	audioLayer_ = audioLayer;
	int i = 0;
	for(int i = 0; i!= audioLayer.size(); i++)	{
		auto obj = audioLayer.at(i);
		std::string str ="AudioLayer."+ std::to_string(i);
		setCoreParameter(str + ".FixedDelayDuration", std::to_string(obj.fixedDelayDuration));
		setCoreParameter(str + ".VolumeRate", std::to_string(obj.volumeRate));
		setCoreParameter(str + ".ValidChannel", obj.validChannel);
	}
}

std::string UpdateCasterSceneAudioRequest::getRegionId()const
{
	return regionId_;
}

void UpdateCasterSceneAudioRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateCasterSceneAudioRequest::getCasterId()const
{
	return casterId_;
}

void UpdateCasterSceneAudioRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

std::string UpdateCasterSceneAudioRequest::getSceneId()const
{
	return sceneId_;
}

void UpdateCasterSceneAudioRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setCoreParameter("SceneId", sceneId);
}

std::vector<std::string> UpdateCasterSceneAudioRequest::getMixList()const
{
	return mixList_;
}

void UpdateCasterSceneAudioRequest::setMixList(const std::vector<std::string>& mixList)
{
	mixList_ = mixList;
	for(int i = 0; i!= mixList.size(); i++)
		setCoreParameter("MixList."+ std::to_string(i), mixList.at(i));
}

long UpdateCasterSceneAudioRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCasterSceneAudioRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int UpdateCasterSceneAudioRequest::getFollowEnable()const
{
	return followEnable_;
}

void UpdateCasterSceneAudioRequest::setFollowEnable(int followEnable)
{
	followEnable_ = followEnable;
	setCoreParameter("FollowEnable", std::to_string(followEnable));
}

