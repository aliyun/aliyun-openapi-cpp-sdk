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

#include <alibabacloud/mts/model/SubmitMediaInfoJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitMediaInfoJobResult::SubmitMediaInfoJobResult() :
	ServiceResult()
{}

SubmitMediaInfoJobResult::SubmitMediaInfoJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitMediaInfoJobResult::~SubmitMediaInfoJobResult()
{}

void SubmitMediaInfoJobResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto mediaInfoJobNode = value["MediaInfoJob"];
	if(!mediaInfoJobNode["JobId"].isNull())
		mediaInfoJob_.jobId = mediaInfoJobNode["JobId"].asString();
	if(!mediaInfoJobNode["UserData"].isNull())
		mediaInfoJob_.userData = mediaInfoJobNode["UserData"].asString();
	if(!mediaInfoJobNode["PipelineId"].isNull())
		mediaInfoJob_.pipelineId = mediaInfoJobNode["PipelineId"].asString();
	if(!mediaInfoJobNode["Async"].isNull())
		mediaInfoJob_.async = mediaInfoJobNode["Async"].asString() == "true";
	if(!mediaInfoJobNode["State"].isNull())
		mediaInfoJob_.state = mediaInfoJobNode["State"].asString();
	if(!mediaInfoJobNode["Code"].isNull())
		mediaInfoJob_.code = mediaInfoJobNode["Code"].asString();
	if(!mediaInfoJobNode["Message"].isNull())
		mediaInfoJob_.message = mediaInfoJobNode["Message"].asString();
	if(!mediaInfoJobNode["CreationTime"].isNull())
		mediaInfoJob_.creationTime = mediaInfoJobNode["CreationTime"].asString();
	auto inputNode = mediaInfoJobNode["Input"];
	if(!inputNode["Bucket"].isNull())
		mediaInfoJob_.input.bucket = inputNode["Bucket"].asString();
	if(!inputNode["Location"].isNull())
		mediaInfoJob_.input.location = inputNode["Location"].asString();
	if(!inputNode["Object"].isNull())
		mediaInfoJob_.input.object = inputNode["Object"].asString();
	auto propertiesNode = mediaInfoJobNode["Properties"];
	if(!propertiesNode["Width"].isNull())
		mediaInfoJob_.properties.width = propertiesNode["Width"].asString();
	if(!propertiesNode["Height"].isNull())
		mediaInfoJob_.properties.height = propertiesNode["Height"].asString();
	if(!propertiesNode["Bitrate"].isNull())
		mediaInfoJob_.properties.bitrate = propertiesNode["Bitrate"].asString();
	if(!propertiesNode["Duration"].isNull())
		mediaInfoJob_.properties.duration = propertiesNode["Duration"].asString();
	if(!propertiesNode["Fps"].isNull())
		mediaInfoJob_.properties.fps = propertiesNode["Fps"].asString();
	if(!propertiesNode["FileSize"].isNull())
		mediaInfoJob_.properties.fileSize = propertiesNode["FileSize"].asString();
	if(!propertiesNode["FileFormat"].isNull())
		mediaInfoJob_.properties.fileFormat = propertiesNode["FileFormat"].asString();
	auto streamsNode = propertiesNode["Streams"];
	auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
	for (auto value : allVideoStreamList)
	{
		MediaInfoJob::Properties::Streams::VideoStream videoStreamObject;
		if(!value["Index"].isNull())
			videoStreamObject.index = value["Index"].asString();
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
			videoStreamObject.width = value["Width"].asString();
		if(!value["Height"].isNull())
			videoStreamObject.height = value["Height"].asString();
		if(!value["HasBFrames"].isNull())
			videoStreamObject.hasBFrames = value["HasBFrames"].asString();
		if(!value["Sar"].isNull())
			videoStreamObject.sar = value["Sar"].asString();
		if(!value["Dar"].isNull())
			videoStreamObject.dar = value["Dar"].asString();
		if(!value["PixFmt"].isNull())
			videoStreamObject.pixFmt = value["PixFmt"].asString();
		if(!value["Level"].isNull())
			videoStreamObject.level = value["Level"].asString();
		if(!value["Fps"].isNull())
			videoStreamObject.fps = value["Fps"].asString();
		if(!value["AvgFPS"].isNull())
			videoStreamObject.avgFPS = value["AvgFPS"].asString();
		if(!value["Timebase"].isNull())
			videoStreamObject.timebase = value["Timebase"].asString();
		if(!value["StartTime"].isNull())
			videoStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			videoStreamObject.duration = value["Duration"].asString();
		if(!value["Bitrate"].isNull())
			videoStreamObject.bitrate = value["Bitrate"].asString();
		if(!value["NumFrames"].isNull())
			videoStreamObject.numFrames = value["NumFrames"].asString();
		if(!value["Lang"].isNull())
			videoStreamObject.lang = value["Lang"].asString();
		if(!value["Rotate"].isNull())
			videoStreamObject.rotate = value["Rotate"].asString();
		auto networkCostNode = value["NetworkCost"];
		if(!networkCostNode["PreloadTime"].isNull())
			videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
		if(!networkCostNode["CostBandwidth"].isNull())
			videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
		if(!networkCostNode["AvgBitrate"].isNull())
			videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
		mediaInfoJob_.properties.streams.videoStreamList.push_back(videoStreamObject);
	}
	auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
	for (auto value : allAudioStreamList)
	{
		MediaInfoJob::Properties::Streams::AudioStream audioStreamObject;
		if(!value["Index"].isNull())
			audioStreamObject.index = value["Index"].asString();
		if(!value["CodecName"].isNull())
			audioStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecTimeBase"].isNull())
			audioStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecLongName"].isNull())
			audioStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["CodecTagString"].isNull())
			audioStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			audioStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["SampleFmt"].isNull())
			audioStreamObject.sampleFmt = value["SampleFmt"].asString();
		if(!value["Samplerate"].isNull())
			audioStreamObject.samplerate = value["Samplerate"].asString();
		if(!value["Channels"].isNull())
			audioStreamObject.channels = value["Channels"].asString();
		if(!value["ChannelLayout"].isNull())
			audioStreamObject.channelLayout = value["ChannelLayout"].asString();
		if(!value["Timebase"].isNull())
			audioStreamObject.timebase = value["Timebase"].asString();
		if(!value["StartTime"].isNull())
			audioStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			audioStreamObject.duration = value["Duration"].asString();
		if(!value["Bitrate"].isNull())
			audioStreamObject.bitrate = value["Bitrate"].asString();
		if(!value["NumFrames"].isNull())
			audioStreamObject.numFrames = value["NumFrames"].asString();
		if(!value["Lang"].isNull())
			audioStreamObject.lang = value["Lang"].asString();
		mediaInfoJob_.properties.streams.audioStreamList.push_back(audioStreamObject);
	}
	auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
	for (auto value : allSubtitleStreamList)
	{
		MediaInfoJob::Properties::Streams::SubtitleStream subtitleStreamObject;
		if(!value["Index"].isNull())
			subtitleStreamObject.index = value["Index"].asString();
		if(!value["CodecName"].isNull())
			subtitleStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecTimeBase"].isNull())
			subtitleStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecLongName"].isNull())
			subtitleStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["CodecTagString"].isNull())
			subtitleStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			subtitleStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["Timebase"].isNull())
			subtitleStreamObject.timebase = value["Timebase"].asString();
		if(!value["StartTime"].isNull())
			subtitleStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			subtitleStreamObject.duration = value["Duration"].asString();
		if(!value["Lang"].isNull())
			subtitleStreamObject.lang = value["Lang"].asString();
		mediaInfoJob_.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
	}
	auto formatNode = propertiesNode["Format"];
	if(!formatNode["NumStreams"].isNull())
		mediaInfoJob_.properties.format.numStreams = formatNode["NumStreams"].asString();
	if(!formatNode["NumPrograms"].isNull())
		mediaInfoJob_.properties.format.numPrograms = formatNode["NumPrograms"].asString();
	if(!formatNode["FormatName"].isNull())
		mediaInfoJob_.properties.format.formatName = formatNode["FormatName"].asString();
	if(!formatNode["FormatLongName"].isNull())
		mediaInfoJob_.properties.format.formatLongName = formatNode["FormatLongName"].asString();
	if(!formatNode["StartTime"].isNull())
		mediaInfoJob_.properties.format.startTime = formatNode["StartTime"].asString();
	if(!formatNode["Duration"].isNull())
		mediaInfoJob_.properties.format.duration = formatNode["Duration"].asString();
	if(!formatNode["Size"].isNull())
		mediaInfoJob_.properties.format.size = formatNode["Size"].asString();
	if(!formatNode["Bitrate"].isNull())
		mediaInfoJob_.properties.format.bitrate = formatNode["Bitrate"].asString();
	auto mNSMessageResultNode = mediaInfoJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		mediaInfoJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		mediaInfoJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		mediaInfoJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();

}

SubmitMediaInfoJobResult::MediaInfoJob SubmitMediaInfoJobResult::getMediaInfoJob()const
{
	return mediaInfoJob_;
}

