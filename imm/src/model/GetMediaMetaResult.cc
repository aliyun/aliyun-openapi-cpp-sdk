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

#include <alibabacloud/imm/model/GetMediaMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetMediaMetaResult::GetMediaMetaResult() :
	ServiceResult()
{}

GetMediaMetaResult::GetMediaMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaMetaResult::~GetMediaMetaResult()
{}

void GetMediaMetaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto mediaMetaNode = value["MediaMeta"];
	auto mediaFormatNode = mediaMetaNode["MediaFormat"];
	if(!mediaFormatNode["NumberStreams"].isNull())
		mediaMeta_.mediaFormat.numberStreams = std::stoi(mediaFormatNode["NumberStreams"].asString());
	if(!mediaFormatNode["NumberPrograms"].isNull())
		mediaMeta_.mediaFormat.numberPrograms = std::stoi(mediaFormatNode["NumberPrograms"].asString());
	if(!mediaFormatNode["FormatName"].isNull())
		mediaMeta_.mediaFormat.formatName = mediaFormatNode["FormatName"].asString();
	if(!mediaFormatNode["FormatLongName"].isNull())
		mediaMeta_.mediaFormat.formatLongName = mediaFormatNode["FormatLongName"].asString();
	if(!mediaFormatNode["Size"].isNull())
		mediaMeta_.mediaFormat.size = mediaFormatNode["Size"].asString();
	if(!mediaFormatNode["Duration"].isNull())
		mediaMeta_.mediaFormat.duration = mediaFormatNode["Duration"].asString();
	if(!mediaFormatNode["StartTime"].isNull())
		mediaMeta_.mediaFormat.startTime = mediaFormatNode["StartTime"].asString();
	if(!mediaFormatNode["Bitrate"].isNull())
		mediaMeta_.mediaFormat.bitrate = mediaFormatNode["Bitrate"].asString();
	if(!mediaFormatNode["CreationTime"].isNull())
		mediaMeta_.mediaFormat.creationTime = mediaFormatNode["CreationTime"].asString();
	if(!mediaFormatNode["Location"].isNull())
		mediaMeta_.mediaFormat.location = mediaFormatNode["Location"].asString();
	auto mediaStreamsNode = mediaMetaNode["MediaStreams"];
	auto allVideoStreams = value["VideoStreams"]["VideoStream"];
	for (auto value : allVideoStreams)
	{
		MediaMeta::MediaStreams::VideoStream videoStreamObject;
		if(!value["Index"].isNull())
			videoStreamObject.index = std::stoi(value["Index"].asString());
		if(!value["Language"].isNull())
			videoStreamObject.language = value["Language"].asString();
		if(!value["CodecName"].isNull())
			videoStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecLongName"].isNull())
			videoStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["Profile"].isNull())
			videoStreamObject.profile = value["Profile"].asString();
		if(!value["CodecTimeBase"].isNull())
			videoStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecTagString"].isNull())
			videoStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			videoStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["Width"].isNull())
			videoStreamObject.width = std::stoi(value["Width"].asString());
		if(!value["Height"].isNull())
			videoStreamObject.height = std::stoi(value["Height"].asString());
		if(!value["HasBFrames"].isNull())
			videoStreamObject.hasBFrames = std::stoi(value["HasBFrames"].asString());
		if(!value["SampleAspectRatio"].isNull())
			videoStreamObject.sampleAspectRatio = value["SampleAspectRatio"].asString();
		if(!value["DisplayAspectRatio"].isNull())
			videoStreamObject.displayAspectRatio = value["DisplayAspectRatio"].asString();
		if(!value["PixelFormat"].isNull())
			videoStreamObject.pixelFormat = value["PixelFormat"].asString();
		if(!value["Level"].isNull())
			videoStreamObject.level = std::stoi(value["Level"].asString());
		if(!value["FrameRrate"].isNull())
			videoStreamObject.frameRrate = value["FrameRrate"].asString();
		if(!value["AverageFrameRate"].isNull())
			videoStreamObject.averageFrameRate = value["AverageFrameRate"].asString();
		if(!value["TimeBase"].isNull())
			videoStreamObject.timeBase = value["TimeBase"].asString();
		if(!value["StartTime"].isNull())
			videoStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			videoStreamObject.duration = value["Duration"].asString();
		if(!value["Bitrate"].isNull())
			videoStreamObject.bitrate = value["Bitrate"].asString();
		if(!value["Frames"].isNull())
			videoStreamObject.frames = value["Frames"].asString();
		mediaMeta_.mediaStreams.videoStreams.push_back(videoStreamObject);
	}
	auto allAudioStreams = value["AudioStreams"]["AudioStream"];
	for (auto value : allAudioStreams)
	{
		MediaMeta::MediaStreams::AudioStream audioStreamObject;
		if(!value["Index"].isNull())
			audioStreamObject.index = std::stoi(value["Index"].asString());
		if(!value["CodecName"].isNull())
			audioStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecLongName"].isNull())
			audioStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["CodecTimeBase"].isNull())
			audioStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecTagString"].isNull())
			audioStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			audioStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["SampleFormat"].isNull())
			audioStreamObject.sampleFormat = value["SampleFormat"].asString();
		if(!value["SampleRate"].isNull())
			audioStreamObject.sampleRate = value["SampleRate"].asString();
		if(!value["Channels"].isNull())
			audioStreamObject.channels = std::stoi(value["Channels"].asString());
		if(!value["ChannelLayout"].isNull())
			audioStreamObject.channelLayout = value["ChannelLayout"].asString();
		if(!value["TimeBase"].isNull())
			audioStreamObject.timeBase = value["TimeBase"].asString();
		if(!value["StartTime"].isNull())
			audioStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			audioStreamObject.duration = value["Duration"].asString();
		if(!value["Bitrate"].isNull())
			audioStreamObject.bitrate = value["Bitrate"].asString();
		if(!value["Frames"].isNull())
			audioStreamObject.frames = value["Frames"].asString();
		if(!value["Language"].isNull())
			audioStreamObject.language = value["Language"].asString();
		mediaMeta_.mediaStreams.audioStreams.push_back(audioStreamObject);
	}
	auto allSubtitleStreams = value["SubtitleStreams"]["SubtitleStream"];
	for (auto value : allSubtitleStreams)
	{
		MediaMeta::MediaStreams::SubtitleStream subtitleStreamObject;
		if(!value["Index"].isNull())
			subtitleStreamObject.index = std::stoi(value["Index"].asString());
		if(!value["Language"].isNull())
			subtitleStreamObject.language = value["Language"].asString();
		mediaMeta_.mediaStreams.subtitleStreams.push_back(subtitleStreamObject);
	}
	if(!value["MediaUri"].isNull())
		mediaUri_ = value["MediaUri"].asString();

}

std::string GetMediaMetaResult::getMediaUri()const
{
	return mediaUri_;
}

GetMediaMetaResult::MediaMeta GetMediaMetaResult::getMediaMeta()const
{
	return mediaMeta_;
}

