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

#include <alibabacloud/live/model/ModifyCasterLayoutRequest.h>

using AlibabaCloud::Live::Model::ModifyCasterLayoutRequest;

ModifyCasterLayoutRequest::ModifyCasterLayoutRequest() :
	RpcServiceRequest("live", "2016-11-01", "ModifyCasterLayout")
{}

ModifyCasterLayoutRequest::~ModifyCasterLayoutRequest()
{}

std::vector<std::string> ModifyCasterLayoutRequest::getBlendList()const
{
	return blendList_;
}

void ModifyCasterLayoutRequest::setBlendList(const std::vector<std::string>& blendList)
{
	blendList_ = blendList;
	for(int i = 0; i!= blendList.size(); i++)
		setParameter("BlendList."+ std::to_string(i), blendList.at(i));
}

std::vector<ModifyCasterLayoutRequest::AudioLayer> ModifyCasterLayoutRequest::getAudioLayer()const
{
	return audioLayer_;
}

void ModifyCasterLayoutRequest::setAudioLayer(const std::vector<AudioLayer>& audioLayer)
{
	audioLayer_ = audioLayer;
	int i = 0;
	for(int i = 0; i!= audioLayer.size(); i++)	{
		auto obj = audioLayer.at(i);
		std::string str ="AudioLayer."+ std::to_string(i);
		setParameter(str + ".FixedDelayDuration", std::to_string(obj.fixedDelayDuration));
		setParameter(str + ".VolumeRate", std::to_string(obj.volumeRate));
		setParameter(str + ".ValidChannel", obj.validChannel);
	}
}

std::vector<ModifyCasterLayoutRequest::VideoLayer> ModifyCasterLayoutRequest::getVideoLayer()const
{
	return videoLayer_;
}

void ModifyCasterLayoutRequest::setVideoLayer(const std::vector<VideoLayer>& videoLayer)
{
	videoLayer_ = videoLayer;
	int i = 0;
	for(int i = 0; i!= videoLayer.size(); i++)	{
		auto obj = videoLayer.at(i);
		std::string str ="VideoLayer."+ std::to_string(i);
		setParameter(str + ".FillMode", obj.fillMode);
		setParameter(str + ".WidthNormalized", std::to_string(obj.widthNormalized));
		setParameter(str + ".FixedDelayDuration", std::to_string(obj.fixedDelayDuration));
		setParameter(str + ".PositionRefer", obj.positionRefer);
		for(int i = 0; i!= obj.positionNormalized.size(); i++)				setParameter(str + ".PositionNormalized."+ std::to_string(i), std::to_string(obj.positionNormalized.at(i)));
		setParameter(str + ".HeightNormalized", std::to_string(obj.heightNormalized));
	}
}

std::string ModifyCasterLayoutRequest::getCasterId()const
{
	return casterId_;
}

void ModifyCasterLayoutRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setParameter("CasterId", casterId);
}

std::vector<std::string> ModifyCasterLayoutRequest::getMixList()const
{
	return mixList_;
}

void ModifyCasterLayoutRequest::setMixList(const std::vector<std::string>& mixList)
{
	mixList_ = mixList;
	for(int i = 0; i!= mixList.size(); i++)
		setParameter("MixList."+ std::to_string(i), mixList.at(i));
}

long ModifyCasterLayoutRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCasterLayoutRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyCasterLayoutRequest::getLayoutId()const
{
	return layoutId_;
}

void ModifyCasterLayoutRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setParameter("LayoutId", layoutId);
}

