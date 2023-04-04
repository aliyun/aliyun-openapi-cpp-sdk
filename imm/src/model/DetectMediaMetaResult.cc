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

#include <alibabacloud/imm/model/DetectMediaMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectMediaMetaResult::DetectMediaMetaResult() :
	ServiceResult()
{}

DetectMediaMetaResult::DetectMediaMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectMediaMetaResult::~DetectMediaMetaResult()
{}

void DetectMediaMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVideoStreamsNode = value["VideoStreams"]["VideoStreamsItem"];
	for (auto valueVideoStreamsVideoStreamsItem : allVideoStreamsNode)
	{
		VideoStreamsItem videoStreamsObject;
		if(!valueVideoStreamsVideoStreamsItem["Index"].isNull())
			videoStreamsObject.index = std::stol(valueVideoStreamsVideoStreamsItem["Index"].asString());
		if(!valueVideoStreamsVideoStreamsItem["Language"].isNull())
			videoStreamsObject.language = valueVideoStreamsVideoStreamsItem["Language"].asString();
		if(!valueVideoStreamsVideoStreamsItem["CodecName"].isNull())
			videoStreamsObject.codecName = valueVideoStreamsVideoStreamsItem["CodecName"].asString();
		if(!valueVideoStreamsVideoStreamsItem["CodecLongName"].isNull())
			videoStreamsObject.codecLongName = valueVideoStreamsVideoStreamsItem["CodecLongName"].asString();
		if(!valueVideoStreamsVideoStreamsItem["Profile"].isNull())
			videoStreamsObject.profile = valueVideoStreamsVideoStreamsItem["Profile"].asString();
		if(!valueVideoStreamsVideoStreamsItem["CodecTimeBase"].isNull())
			videoStreamsObject.codecTimeBase = valueVideoStreamsVideoStreamsItem["CodecTimeBase"].asString();
		if(!valueVideoStreamsVideoStreamsItem["CodecTagString"].isNull())
			videoStreamsObject.codecTagString = valueVideoStreamsVideoStreamsItem["CodecTagString"].asString();
		if(!valueVideoStreamsVideoStreamsItem["CodecTag"].isNull())
			videoStreamsObject.codecTag = valueVideoStreamsVideoStreamsItem["CodecTag"].asString();
		if(!valueVideoStreamsVideoStreamsItem["Width"].isNull())
			videoStreamsObject.width = std::stol(valueVideoStreamsVideoStreamsItem["Width"].asString());
		if(!valueVideoStreamsVideoStreamsItem["Height"].isNull())
			videoStreamsObject.height = std::stol(valueVideoStreamsVideoStreamsItem["Height"].asString());
		if(!valueVideoStreamsVideoStreamsItem["HasBFrames"].isNull())
			videoStreamsObject.hasBFrames = std::stol(valueVideoStreamsVideoStreamsItem["HasBFrames"].asString());
		if(!valueVideoStreamsVideoStreamsItem["SampleAspectRatio"].isNull())
			videoStreamsObject.sampleAspectRatio = valueVideoStreamsVideoStreamsItem["SampleAspectRatio"].asString();
		if(!valueVideoStreamsVideoStreamsItem["DisplayAspectRatio"].isNull())
			videoStreamsObject.displayAspectRatio = valueVideoStreamsVideoStreamsItem["DisplayAspectRatio"].asString();
		if(!valueVideoStreamsVideoStreamsItem["PixelFormat"].isNull())
			videoStreamsObject.pixelFormat = valueVideoStreamsVideoStreamsItem["PixelFormat"].asString();
		if(!valueVideoStreamsVideoStreamsItem["Level"].isNull())
			videoStreamsObject.level = std::stol(valueVideoStreamsVideoStreamsItem["Level"].asString());
		if(!valueVideoStreamsVideoStreamsItem["FrameRate"].isNull())
			videoStreamsObject.frameRate = valueVideoStreamsVideoStreamsItem["FrameRate"].asString();
		if(!valueVideoStreamsVideoStreamsItem["AverageFrameRate"].isNull())
			videoStreamsObject.averageFrameRate = valueVideoStreamsVideoStreamsItem["AverageFrameRate"].asString();
		if(!valueVideoStreamsVideoStreamsItem["TimeBase"].isNull())
			videoStreamsObject.timeBase = valueVideoStreamsVideoStreamsItem["TimeBase"].asString();
		if(!valueVideoStreamsVideoStreamsItem["StartTime"].isNull())
			videoStreamsObject.startTime = valueVideoStreamsVideoStreamsItem["StartTime"].asString();
		if(!valueVideoStreamsVideoStreamsItem["Duration"].isNull())
			videoStreamsObject.duration = valueVideoStreamsVideoStreamsItem["Duration"].asString();
		if(!valueVideoStreamsVideoStreamsItem["Bitrate"].isNull())
			videoStreamsObject.bitrate = std::stol(valueVideoStreamsVideoStreamsItem["Bitrate"].asString());
		if(!valueVideoStreamsVideoStreamsItem["FrameCount"].isNull())
			videoStreamsObject.frameCount = std::stol(valueVideoStreamsVideoStreamsItem["FrameCount"].asString());
		if(!valueVideoStreamsVideoStreamsItem["Rotate"].isNull())
			videoStreamsObject.rotate = valueVideoStreamsVideoStreamsItem["Rotate"].asString();
		if(!valueVideoStreamsVideoStreamsItem["BitDepth"].isNull())
			videoStreamsObject.bitDepth = std::stol(valueVideoStreamsVideoStreamsItem["BitDepth"].asString());
		if(!valueVideoStreamsVideoStreamsItem["ColorSpace"].isNull())
			videoStreamsObject.colorSpace = valueVideoStreamsVideoStreamsItem["ColorSpace"].asString();
		if(!valueVideoStreamsVideoStreamsItem["ColorRange"].isNull())
			videoStreamsObject.colorRange = valueVideoStreamsVideoStreamsItem["ColorRange"].asString();
		if(!valueVideoStreamsVideoStreamsItem["ColorTransfer"].isNull())
			videoStreamsObject.colorTransfer = valueVideoStreamsVideoStreamsItem["ColorTransfer"].asString();
		if(!valueVideoStreamsVideoStreamsItem["ColorPrimaries"].isNull())
			videoStreamsObject.colorPrimaries = valueVideoStreamsVideoStreamsItem["ColorPrimaries"].asString();
		videoStreams_.push_back(videoStreamsObject);
	}
	auto allAudioStreamsNode = value["AudioStreams"]["AudioStreamsItem"];
	for (auto valueAudioStreamsAudioStreamsItem : allAudioStreamsNode)
	{
		AudioStreamsItem audioStreamsObject;
		if(!valueAudioStreamsAudioStreamsItem["Index"].isNull())
			audioStreamsObject.index = std::stol(valueAudioStreamsAudioStreamsItem["Index"].asString());
		if(!valueAudioStreamsAudioStreamsItem["Language"].isNull())
			audioStreamsObject.language = valueAudioStreamsAudioStreamsItem["Language"].asString();
		if(!valueAudioStreamsAudioStreamsItem["CodecName"].isNull())
			audioStreamsObject.codecName = valueAudioStreamsAudioStreamsItem["CodecName"].asString();
		if(!valueAudioStreamsAudioStreamsItem["CodecLongName"].isNull())
			audioStreamsObject.codecLongName = valueAudioStreamsAudioStreamsItem["CodecLongName"].asString();
		if(!valueAudioStreamsAudioStreamsItem["CodecTimeBase"].isNull())
			audioStreamsObject.codecTimeBase = valueAudioStreamsAudioStreamsItem["CodecTimeBase"].asString();
		if(!valueAudioStreamsAudioStreamsItem["CodecTagString"].isNull())
			audioStreamsObject.codecTagString = valueAudioStreamsAudioStreamsItem["CodecTagString"].asString();
		if(!valueAudioStreamsAudioStreamsItem["CodecTag"].isNull())
			audioStreamsObject.codecTag = valueAudioStreamsAudioStreamsItem["CodecTag"].asString();
		if(!valueAudioStreamsAudioStreamsItem["TimeBase"].isNull())
			audioStreamsObject.timeBase = valueAudioStreamsAudioStreamsItem["TimeBase"].asString();
		if(!valueAudioStreamsAudioStreamsItem["StartTime"].isNull())
			audioStreamsObject.startTime = valueAudioStreamsAudioStreamsItem["StartTime"].asString();
		if(!valueAudioStreamsAudioStreamsItem["Duration"].isNull())
			audioStreamsObject.duration = valueAudioStreamsAudioStreamsItem["Duration"].asString();
		if(!valueAudioStreamsAudioStreamsItem["Bitrate"].isNull())
			audioStreamsObject.bitrate = std::stol(valueAudioStreamsAudioStreamsItem["Bitrate"].asString());
		if(!valueAudioStreamsAudioStreamsItem["FrameCount"].isNull())
			audioStreamsObject.frameCount = std::stol(valueAudioStreamsAudioStreamsItem["FrameCount"].asString());
		if(!valueAudioStreamsAudioStreamsItem["Lyric"].isNull())
			audioStreamsObject.lyric = valueAudioStreamsAudioStreamsItem["Lyric"].asString();
		if(!valueAudioStreamsAudioStreamsItem["SampleFormat"].isNull())
			audioStreamsObject.sampleFormat = valueAudioStreamsAudioStreamsItem["SampleFormat"].asString();
		if(!valueAudioStreamsAudioStreamsItem["SampleRate"].isNull())
			audioStreamsObject.sampleRate = std::stol(valueAudioStreamsAudioStreamsItem["SampleRate"].asString());
		if(!valueAudioStreamsAudioStreamsItem["Channels"].isNull())
			audioStreamsObject.channels = std::stol(valueAudioStreamsAudioStreamsItem["Channels"].asString());
		if(!valueAudioStreamsAudioStreamsItem["ChannelLayout"].isNull())
			audioStreamsObject.channelLayout = valueAudioStreamsAudioStreamsItem["ChannelLayout"].asString();
		audioStreams_.push_back(audioStreamsObject);
	}
	auto allSubtitlesNode = value["Subtitles"]["SubtitlesItem"];
	for (auto valueSubtitlesSubtitlesItem : allSubtitlesNode)
	{
		SubtitlesItem subtitlesObject;
		if(!valueSubtitlesSubtitlesItem["Index"].isNull())
			subtitlesObject.index = std::stol(valueSubtitlesSubtitlesItem["Index"].asString());
		if(!valueSubtitlesSubtitlesItem["Language"].isNull())
			subtitlesObject.language = valueSubtitlesSubtitlesItem["Language"].asString();
		if(!valueSubtitlesSubtitlesItem["CodecName"].isNull())
			subtitlesObject.codecName = valueSubtitlesSubtitlesItem["CodecName"].asString();
		if(!valueSubtitlesSubtitlesItem["CodecLongName"].isNull())
			subtitlesObject.codecLongName = valueSubtitlesSubtitlesItem["CodecLongName"].asString();
		if(!valueSubtitlesSubtitlesItem["CodecTagString"].isNull())
			subtitlesObject.codecTagString = valueSubtitlesSubtitlesItem["CodecTagString"].asString();
		if(!valueSubtitlesSubtitlesItem["CodecTag"].isNull())
			subtitlesObject.codecTag = valueSubtitlesSubtitlesItem["CodecTag"].asString();
		if(!valueSubtitlesSubtitlesItem["StartTime"].isNull())
			subtitlesObject.startTime = valueSubtitlesSubtitlesItem["StartTime"].asString();
		if(!valueSubtitlesSubtitlesItem["Duration"].isNull())
			subtitlesObject.duration = valueSubtitlesSubtitlesItem["Duration"].asString();
		if(!valueSubtitlesSubtitlesItem["Bitrate"].isNull())
			subtitlesObject.bitrate = std::stol(valueSubtitlesSubtitlesItem["Bitrate"].asString());
		if(!valueSubtitlesSubtitlesItem["Content"].isNull())
			subtitlesObject.content = valueSubtitlesSubtitlesItem["Content"].asString();
		if(!valueSubtitlesSubtitlesItem["Width"].isNull())
			subtitlesObject.width = std::stol(valueSubtitlesSubtitlesItem["Width"].asString());
		if(!valueSubtitlesSubtitlesItem["Height"].isNull())
			subtitlesObject.height = std::stol(valueSubtitlesSubtitlesItem["Height"].asString());
		subtitles_.push_back(subtitlesObject);
	}
	auto allAddressesNode = value["Addresses"]["AddressesItem"];
	for (auto valueAddressesAddressesItem : allAddressesNode)
	{
		AddressesItem addressesObject;
		if(!valueAddressesAddressesItem["Language"].isNull())
			addressesObject.language = valueAddressesAddressesItem["Language"].asString();
		if(!valueAddressesAddressesItem["AddressLine"].isNull())
			addressesObject.addressLine = valueAddressesAddressesItem["AddressLine"].asString();
		if(!valueAddressesAddressesItem["Country"].isNull())
			addressesObject.country = valueAddressesAddressesItem["Country"].asString();
		if(!valueAddressesAddressesItem["Province"].isNull())
			addressesObject.province = valueAddressesAddressesItem["Province"].asString();
		if(!valueAddressesAddressesItem["City"].isNull())
			addressesObject.city = valueAddressesAddressesItem["City"].asString();
		if(!valueAddressesAddressesItem["District"].isNull())
			addressesObject.district = valueAddressesAddressesItem["District"].asString();
		if(!valueAddressesAddressesItem["Township"].isNull())
			addressesObject.township = valueAddressesAddressesItem["Township"].asString();
		addresses_.push_back(addressesObject);
	}
	if(!value["Language"].isNull())
		language_ = value["Language"].asString();
	if(!value["Title"].isNull())
		title_ = value["Title"].asString();
	if(!value["StreamCount"].isNull())
		streamCount_ = std::stol(value["StreamCount"].asString());
	if(!value["ProgramCount"].isNull())
		programCount_ = std::stol(value["ProgramCount"].asString());
	if(!value["FormatName"].isNull())
		formatName_ = value["FormatName"].asString();
	if(!value["FormatLongName"].isNull())
		formatLongName_ = value["FormatLongName"].asString();
	if(!value["Size"].isNull())
		size_ = std::stol(value["Size"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Bitrate"].isNull())
		bitrate_ = std::stol(value["Bitrate"].asString());
	if(!value["Artist"].isNull())
		artist_ = value["Artist"].asString();
	if(!value["AlbumArtist"].isNull())
		albumArtist_ = value["AlbumArtist"].asString();
	if(!value["Composer"].isNull())
		composer_ = value["Composer"].asString();
	if(!value["Performer"].isNull())
		performer_ = value["Performer"].asString();
	if(!value["Album"].isNull())
		album_ = value["Album"].asString();
	if(!value["Duration"].isNull())
		duration_ = value["Duration"].asString();
	if(!value["ProduceTime"].isNull())
		produceTime_ = value["ProduceTime"].asString();
	if(!value["LatLong"].isNull())
		latLong_ = value["LatLong"].asString();
	if(!value["VideoWidth"].isNull())
		videoWidth_ = std::stol(value["VideoWidth"].asString());
	if(!value["VideoHeight"].isNull())
		videoHeight_ = std::stol(value["VideoHeight"].asString());

}

std::string DetectMediaMetaResult::getArtist()const
{
	return artist_;
}

std::string DetectMediaMetaResult::getProduceTime()const
{
	return produceTime_;
}

std::string DetectMediaMetaResult::getComposer()const
{
	return composer_;
}

std::vector<DetectMediaMetaResult::VideoStreamsItem> DetectMediaMetaResult::getVideoStreams()const
{
	return videoStreams_;
}

long DetectMediaMetaResult::getSize()const
{
	return size_;
}

long DetectMediaMetaResult::getVideoWidth()const
{
	return videoWidth_;
}

std::string DetectMediaMetaResult::getFormatLongName()const
{
	return formatLongName_;
}

long DetectMediaMetaResult::getProgramCount()const
{
	return programCount_;
}

double DetectMediaMetaResult::getStartTime()const
{
	return startTime_;
}

std::string DetectMediaMetaResult::getTitle()const
{
	return title_;
}

std::string DetectMediaMetaResult::getAlbum()const
{
	return album_;
}

double DetectMediaMetaResult::getDuration()const
{
	return duration_;
}

long DetectMediaMetaResult::getBitrate()const
{
	return bitrate_;
}

std::string DetectMediaMetaResult::getAlbumArtist()const
{
	return albumArtist_;
}

std::vector<DetectMediaMetaResult::AudioStreamsItem> DetectMediaMetaResult::getAudioStreams()const
{
	return audioStreams_;
}

std::vector<DetectMediaMetaResult::AddressesItem> DetectMediaMetaResult::getAddresses()const
{
	return addresses_;
}

long DetectMediaMetaResult::getStreamCount()const
{
	return streamCount_;
}

std::string DetectMediaMetaResult::getPerformer()const
{
	return performer_;
}

std::string DetectMediaMetaResult::getLanguage()const
{
	return language_;
}

long DetectMediaMetaResult::getVideoHeight()const
{
	return videoHeight_;
}

std::vector<DetectMediaMetaResult::SubtitlesItem> DetectMediaMetaResult::getSubtitles()const
{
	return subtitles_;
}

std::string DetectMediaMetaResult::getFormatName()const
{
	return formatName_;
}

std::string DetectMediaMetaResult::getLatLong()const
{
	return latLong_;
}

