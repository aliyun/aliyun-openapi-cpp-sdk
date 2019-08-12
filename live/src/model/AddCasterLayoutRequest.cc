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

#include <alibabacloud/live/model/AddCasterLayoutRequest.h>

using AlibabaCloud::Live::Model::AddCasterLayoutRequest;

AddCasterLayoutRequest::AddCasterLayoutRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddCasterLayout")
{}

AddCasterLayoutRequest::~AddCasterLayoutRequest()
{}

std::vector<std::string> AddCasterLayoutRequest::getBlendList()const
{
	return blendList_;
}

void AddCasterLayoutRequest::setBlendList(const std::vector<std::string>& blendList)
{
	blendList_ = blendList;
	for(int i = 0; i!= blendList.size(); i++)
		setCoreParameter("BlendList."+ std::to_string(i), std::to_string(blendList.at(i)));
}

std::vector<AddCasterLayoutRequest::AudioLayer> AddCasterLayoutRequest::getAudioLayer()const
{
	return audioLayer_;
}

void AddCasterLayoutRequest::setAudioLayer(const std::vector<AudioLayer>& audioLayer)
{
	audioLayer_ = audioLayer;
	int i = 0;
	for(int i = 0; i!= audioLayer.size(); i++)	{
		auto obj = audioLayer.at(i);
		std::string str ="AudioLayer."+ std::to_string(i);
		setCoreParameter(str + ".FixedDelayDuration", obj.fixedDelayDuration);
		setCoreParameter(str + ".VolumeRate", obj.volumeRate);
		setCoreParameter(str + ".ValidChannel", std::to_string(obj.validChannel));
	}
}

std::string AddCasterLayoutRequest::getRegionId()const
{
	return regionId_;
}

void AddCasterLayoutRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::vector<AddCasterLayoutRequest::VideoLayer> AddCasterLayoutRequest::getVideoLayer()const
{
	return videoLayer_;
}

void AddCasterLayoutRequest::setVideoLayer(const std::vector<VideoLayer>& videoLayer)
{
	videoLayer_ = videoLayer;
	int i = 0;
	for(int i = 0; i!= videoLayer.size(); i++)	{
		auto obj = videoLayer.at(i);
		std::string str ="VideoLayer."+ std::to_string(i);
		setCoreParameter(str + ".FillMode", std::to_string(obj.fillMode));
		setCoreParameter(str + ".WidthNormalized", obj.widthNormalized);
		setCoreParameter(str + ".FixedDelayDuration", obj.fixedDelayDuration);
		setCoreParameter(str + ".PositionRefer", std::to_string(obj.positionRefer));
		for(int i = 0; i!= obj.positionNormalized.size(); i++)				setCoreParameter(str + ".PositionNormalized."+ std::to_string(i), obj.positionNormalized.at(i));
		setCoreParameter(str + ".HeightNormalized", obj.heightNormalized);
	}
}

std::string AddCasterLayoutRequest::getCasterId()const
{
	return casterId_;
}

void AddCasterLayoutRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", std::to_string(casterId));
}

std::vector<std::string> AddCasterLayoutRequest::getMixList()const
{
	return mixList_;
}

void AddCasterLayoutRequest::setMixList(const std::vector<std::string>& mixList)
{
	mixList_ = mixList;
	for(int i = 0; i!= mixList.size(); i++)
		setCoreParameter("MixList."+ std::to_string(i), std::to_string(mixList.at(i)));
}

long AddCasterLayoutRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCasterLayoutRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

