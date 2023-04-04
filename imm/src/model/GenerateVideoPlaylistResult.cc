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

#include <alibabacloud/imm/model/GenerateVideoPlaylistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GenerateVideoPlaylistResult::GenerateVideoPlaylistResult() :
	ServiceResult()
{}

GenerateVideoPlaylistResult::GenerateVideoPlaylistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateVideoPlaylistResult::~GenerateVideoPlaylistResult()
{}

void GenerateVideoPlaylistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVideoPlaylistNode = value["VideoPlaylist"]["VideoPlaylistItem"];
	for (auto valueVideoPlaylistVideoPlaylistItem : allVideoPlaylistNode)
	{
		VideoPlaylistItem videoPlaylistObject;
		if(!valueVideoPlaylistVideoPlaylistItem["Token"].isNull())
			videoPlaylistObject.token = valueVideoPlaylistVideoPlaylistItem["Token"].asString();
		if(!valueVideoPlaylistVideoPlaylistItem["URI"].isNull())
			videoPlaylistObject.uRI = valueVideoPlaylistVideoPlaylistItem["URI"].asString();
		videoPlaylist_.push_back(videoPlaylistObject);
	}
	auto allAudioPlaylistNode = value["AudioPlaylist"]["AudioPlaylistItem"];
	for (auto valueAudioPlaylistAudioPlaylistItem : allAudioPlaylistNode)
	{
		AudioPlaylistItem audioPlaylistObject;
		if(!valueAudioPlaylistAudioPlaylistItem["Token"].isNull())
			audioPlaylistObject.token = valueAudioPlaylistAudioPlaylistItem["Token"].asString();
		if(!valueAudioPlaylistAudioPlaylistItem["URI"].isNull())
			audioPlaylistObject.uRI = valueAudioPlaylistAudioPlaylistItem["URI"].asString();
		audioPlaylist_.push_back(audioPlaylistObject);
	}
	auto allSubtitlePlaylistNode = value["SubtitlePlaylist"]["SubtitlePlaylistItem"];
	for (auto valueSubtitlePlaylistSubtitlePlaylistItem : allSubtitlePlaylistNode)
	{
		SubtitlePlaylistItem subtitlePlaylistObject;
		if(!valueSubtitlePlaylistSubtitlePlaylistItem["Token"].isNull())
			subtitlePlaylistObject.token = valueSubtitlePlaylistSubtitlePlaylistItem["Token"].asString();
		if(!valueSubtitlePlaylistSubtitlePlaylistItem["URI"].isNull())
			subtitlePlaylistObject.uRI = valueSubtitlePlaylistSubtitlePlaylistItem["URI"].asString();
		if(!valueSubtitlePlaylistSubtitlePlaylistItem["Language"].isNull())
			subtitlePlaylistObject.language = valueSubtitlePlaylistSubtitlePlaylistItem["Language"].asString();
		if(!valueSubtitlePlaylistSubtitlePlaylistItem["Index"].isNull())
			subtitlePlaylistObject.index = std::stoi(valueSubtitlePlaylistSubtitlePlaylistItem["Index"].asString());
		subtitlePlaylist_.push_back(subtitlePlaylistObject);
	}
	if(!value["Token"].isNull())
		token_ = value["Token"].asString();
	if(!value["URI"].isNull())
		uRI_ = value["URI"].asString();

}

std::vector<GenerateVideoPlaylistResult::VideoPlaylistItem> GenerateVideoPlaylistResult::getVideoPlaylist()const
{
	return videoPlaylist_;
}

std::vector<GenerateVideoPlaylistResult::SubtitlePlaylistItem> GenerateVideoPlaylistResult::getSubtitlePlaylist()const
{
	return subtitlePlaylist_;
}

std::string GenerateVideoPlaylistResult::getToken()const
{
	return token_;
}

std::string GenerateVideoPlaylistResult::getURI()const
{
	return uRI_;
}

std::vector<GenerateVideoPlaylistResult::AudioPlaylistItem> GenerateVideoPlaylistResult::getAudioPlaylist()const
{
	return audioPlaylist_;
}

