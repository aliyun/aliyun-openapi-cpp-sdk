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

#include <alibabacloud/live/model/AddCustomLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::AddCustomLiveStreamTranscodeRequest;

AddCustomLiveStreamTranscodeRequest::AddCustomLiveStreamTranscodeRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddCustomLiveStreamTranscode")
{}

AddCustomLiveStreamTranscodeRequest::~AddCustomLiveStreamTranscodeRequest()
{}

std::string AddCustomLiveStreamTranscodeRequest::getApp()const
{
	return app_;
}

void AddCustomLiveStreamTranscodeRequest::setApp(const std::string& app)
{
	app_ = app;
	setCoreParameter("App", std::to_string(app));
}

std::string AddCustomLiveStreamTranscodeRequest::get_Template()const
{
	return _template_;
}

void AddCustomLiveStreamTranscodeRequest::set_Template(const std::string& _template)
{
	_template_ = _template;
	setCoreParameter("_Template", std::to_string(_template));
}

int AddCustomLiveStreamTranscodeRequest::getAudioChannelNum()const
{
	return audioChannelNum_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioChannelNum(int audioChannelNum)
{
	audioChannelNum_ = audioChannelNum;
	setCoreParameter("AudioChannelNum", audioChannelNum);
}

int AddCustomLiveStreamTranscodeRequest::getProfile()const
{
	return profile_;
}

void AddCustomLiveStreamTranscodeRequest::setProfile(int profile)
{
	profile_ = profile;
	setCoreParameter("Profile", profile);
}

int AddCustomLiveStreamTranscodeRequest::getFPS()const
{
	return fPS_;
}

void AddCustomLiveStreamTranscodeRequest::setFPS(int fPS)
{
	fPS_ = fPS;
	setCoreParameter("FPS", fPS);
}

std::string AddCustomLiveStreamTranscodeRequest::getGop()const
{
	return gop_;
}

void AddCustomLiveStreamTranscodeRequest::setGop(const std::string& gop)
{
	gop_ = gop;
	setCoreParameter("Gop", std::to_string(gop));
}

long AddCustomLiveStreamTranscodeRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCustomLiveStreamTranscodeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddCustomLiveStreamTranscodeRequest::getAudioCodec()const
{
	return audioCodec_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioCodec(const std::string& audioCodec)
{
	audioCodec_ = audioCodec;
	setCoreParameter("AudioCodec", std::to_string(audioCodec));
}

int AddCustomLiveStreamTranscodeRequest::getAudioRate()const
{
	return audioRate_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioRate(int audioRate)
{
	audioRate_ = audioRate;
	setCoreParameter("AudioRate", audioRate);
}

std::string AddCustomLiveStreamTranscodeRequest::getRegionId()const
{
	return regionId_;
}

void AddCustomLiveStreamTranscodeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AddCustomLiveStreamTranscodeRequest::getTemplateType()const
{
	return templateType_;
}

void AddCustomLiveStreamTranscodeRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setCoreParameter("TemplateType", std::to_string(templateType));
}

int AddCustomLiveStreamTranscodeRequest::getAudioBitrate()const
{
	return audioBitrate_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioBitrate(int audioBitrate)
{
	audioBitrate_ = audioBitrate;
	setCoreParameter("AudioBitrate", audioBitrate);
}

std::string AddCustomLiveStreamTranscodeRequest::getDomain()const
{
	return domain_;
}

void AddCustomLiveStreamTranscodeRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", std::to_string(domain));
}

int AddCustomLiveStreamTranscodeRequest::getWidth()const
{
	return width_;
}

void AddCustomLiveStreamTranscodeRequest::setWidth(int width)
{
	width_ = width;
	setCoreParameter("Width", width);
}

int AddCustomLiveStreamTranscodeRequest::getVideoBitrate()const
{
	return videoBitrate_;
}

void AddCustomLiveStreamTranscodeRequest::setVideoBitrate(int videoBitrate)
{
	videoBitrate_ = videoBitrate;
	setCoreParameter("VideoBitrate", videoBitrate);
}

std::string AddCustomLiveStreamTranscodeRequest::getAudioProfile()const
{
	return audioProfile_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioProfile(const std::string& audioProfile)
{
	audioProfile_ = audioProfile;
	setCoreParameter("AudioProfile", std::to_string(audioProfile));
}

int AddCustomLiveStreamTranscodeRequest::getHeight()const
{
	return height_;
}

void AddCustomLiveStreamTranscodeRequest::setHeight(int height)
{
	height_ = height;
	setCoreParameter("Height", height);
}

