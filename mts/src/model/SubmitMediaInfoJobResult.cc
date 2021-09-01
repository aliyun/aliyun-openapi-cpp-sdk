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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaInfoJobNode = value["MediaInfoJob"];
	if(!mediaInfoJobNode["CreationTime"].isNull())
		mediaInfoJob_.creationTime = mediaInfoJobNode["CreationTime"].asString();
	if(!mediaInfoJobNode["State"].isNull())
		mediaInfoJob_.state = mediaInfoJobNode["State"].asString();
	if(!mediaInfoJobNode["JobId"].isNull())
		mediaInfoJob_.jobId = mediaInfoJobNode["JobId"].asString();
	if(!mediaInfoJobNode["UserData"].isNull())
		mediaInfoJob_.userData = mediaInfoJobNode["UserData"].asString();
	if(!mediaInfoJobNode["Code"].isNull())
		mediaInfoJob_.code = mediaInfoJobNode["Code"].asString();
	if(!mediaInfoJobNode["Message"].isNull())
		mediaInfoJob_.message = mediaInfoJobNode["Message"].asString();
	if(!mediaInfoJobNode["PipelineId"].isNull())
		mediaInfoJob_.pipelineId = mediaInfoJobNode["PipelineId"].asString();
	if(!mediaInfoJobNode["Async"].isNull())
		mediaInfoJob_.async = mediaInfoJobNode["Async"].asString() == "true";
	auto inputNode = mediaInfoJobNode["Input"];
	if(!inputNode["Object"].isNull())
		mediaInfoJob_.input.object = inputNode["Object"].asString();
	if(!inputNode["Location"].isNull())
		mediaInfoJob_.input.location = inputNode["Location"].asString();
	if(!inputNode["Bucket"].isNull())
		mediaInfoJob_.input.bucket = inputNode["Bucket"].asString();
	auto mNSMessageResultNode = mediaInfoJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		mediaInfoJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		mediaInfoJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		mediaInfoJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
	auto propertiesNode = mediaInfoJobNode["Properties"];
	if(!propertiesNode["Width"].isNull())
		mediaInfoJob_.properties.width = propertiesNode["Width"].asString();
	if(!propertiesNode["Height"].isNull())
		mediaInfoJob_.properties.height = propertiesNode["Height"].asString();
	if(!propertiesNode["Duration"].isNull())
		mediaInfoJob_.properties.duration = propertiesNode["Duration"].asString();
	if(!propertiesNode["Fps"].isNull())
		mediaInfoJob_.properties.fps = propertiesNode["Fps"].asString();
	if(!propertiesNode["Bitrate"].isNull())
		mediaInfoJob_.properties.bitrate = propertiesNode["Bitrate"].asString();
	if(!propertiesNode["FileFormat"].isNull())
		mediaInfoJob_.properties.fileFormat = propertiesNode["FileFormat"].asString();
	if(!propertiesNode["FileSize"].isNull())
		mediaInfoJob_.properties.fileSize = propertiesNode["FileSize"].asString();
	auto streamsNode = propertiesNode["Streams"];
	auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
	for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
	{
		MediaInfoJob::Properties::Streams::VideoStream videoStreamObject;
		if(!streamsNodeVideoStreamListVideoStream["Sar"].isNull())
			videoStreamObject.sar = streamsNodeVideoStreamListVideoStream["Sar"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Height"].isNull())
			videoStreamObject.height = streamsNodeVideoStreamListVideoStream["Height"].asString();
		if(!streamsNodeVideoStreamListVideoStream["CodecTagString"].isNull())
			videoStreamObject.codecTagString = streamsNodeVideoStreamListVideoStream["CodecTagString"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Width"].isNull())
			videoStreamObject.width = streamsNodeVideoStreamListVideoStream["Width"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Index"].isNull())
			videoStreamObject.index = streamsNodeVideoStreamListVideoStream["Index"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Timebase"].isNull())
			videoStreamObject.timebase = streamsNodeVideoStreamListVideoStream["Timebase"].asString();
		if(!streamsNodeVideoStreamListVideoStream["AvgFPS"].isNull())
			videoStreamObject.avgFPS = streamsNodeVideoStreamListVideoStream["AvgFPS"].asString();
		if(!streamsNodeVideoStreamListVideoStream["PixFmt"].isNull())
			videoStreamObject.pixFmt = streamsNodeVideoStreamListVideoStream["PixFmt"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Lang"].isNull())
			videoStreamObject.lang = streamsNodeVideoStreamListVideoStream["Lang"].asString();
		if(!streamsNodeVideoStreamListVideoStream["CodecLongName"].isNull())
			videoStreamObject.codecLongName = streamsNodeVideoStreamListVideoStream["CodecLongName"].asString();
		if(!streamsNodeVideoStreamListVideoStream["NumFrames"].isNull())
			videoStreamObject.numFrames = streamsNodeVideoStreamListVideoStream["NumFrames"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Rotate"].isNull())
			videoStreamObject.rotate = streamsNodeVideoStreamListVideoStream["Rotate"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Bitrate"].isNull())
			videoStreamObject.bitrate = streamsNodeVideoStreamListVideoStream["Bitrate"].asString();
		if(!streamsNodeVideoStreamListVideoStream["HasBFrames"].isNull())
			videoStreamObject.hasBFrames = streamsNodeVideoStreamListVideoStream["HasBFrames"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Profile"].isNull())
			videoStreamObject.profile = streamsNodeVideoStreamListVideoStream["Profile"].asString();
		if(!streamsNodeVideoStreamListVideoStream["StartTime"].isNull())
			videoStreamObject.startTime = streamsNodeVideoStreamListVideoStream["StartTime"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Dar"].isNull())
			videoStreamObject.dar = streamsNodeVideoStreamListVideoStream["Dar"].asString();
		if(!streamsNodeVideoStreamListVideoStream["CodecName"].isNull())
			videoStreamObject.codecName = streamsNodeVideoStreamListVideoStream["CodecName"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Duration"].isNull())
			videoStreamObject.duration = streamsNodeVideoStreamListVideoStream["Duration"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Fps"].isNull())
			videoStreamObject.fps = streamsNodeVideoStreamListVideoStream["Fps"].asString();
		if(!streamsNodeVideoStreamListVideoStream["CodecTag"].isNull())
			videoStreamObject.codecTag = streamsNodeVideoStreamListVideoStream["CodecTag"].asString();
		if(!streamsNodeVideoStreamListVideoStream["CodecTimeBase"].isNull())
			videoStreamObject.codecTimeBase = streamsNodeVideoStreamListVideoStream["CodecTimeBase"].asString();
		if(!streamsNodeVideoStreamListVideoStream["Level"].isNull())
			videoStreamObject.level = streamsNodeVideoStreamListVideoStream["Level"].asString();
		if(!streamsNodeVideoStreamListVideoStream["ColorRange"].isNull())
			videoStreamObject.colorRange = streamsNodeVideoStreamListVideoStream["ColorRange"].asString();
		if(!streamsNodeVideoStreamListVideoStream["ColorTransfer"].isNull())
			videoStreamObject.colorTransfer = streamsNodeVideoStreamListVideoStream["ColorTransfer"].asString();
		if(!streamsNodeVideoStreamListVideoStream["ColorPrimaries"].isNull())
			videoStreamObject.colorPrimaries = streamsNodeVideoStreamListVideoStream["ColorPrimaries"].asString();
		auto networkCostNode = value["NetworkCost"];
		if(!networkCostNode["PreloadTime"].isNull())
			videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
		if(!networkCostNode["AvgBitrate"].isNull())
			videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
		if(!networkCostNode["CostBandwidth"].isNull())
			videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
		mediaInfoJob_.properties.streams.videoStreamList.push_back(videoStreamObject);
	}
	auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
	for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
	{
		MediaInfoJob::Properties::Streams::AudioStream audioStreamObject;
		if(!streamsNodeAudioStreamListAudioStream["Timebase"].isNull())
			audioStreamObject.timebase = streamsNodeAudioStreamListAudioStream["Timebase"].asString();
		if(!streamsNodeAudioStreamListAudioStream["Index"].isNull())
			audioStreamObject.index = streamsNodeAudioStreamListAudioStream["Index"].asString();
		if(!streamsNodeAudioStreamListAudioStream["SampleFmt"].isNull())
			audioStreamObject.sampleFmt = streamsNodeAudioStreamListAudioStream["SampleFmt"].asString();
		if(!streamsNodeAudioStreamListAudioStream["ChannelLayout"].isNull())
			audioStreamObject.channelLayout = streamsNodeAudioStreamListAudioStream["ChannelLayout"].asString();
		if(!streamsNodeAudioStreamListAudioStream["Lang"].isNull())
			audioStreamObject.lang = streamsNodeAudioStreamListAudioStream["Lang"].asString();
		if(!streamsNodeAudioStreamListAudioStream["Samplerate"].isNull())
			audioStreamObject.samplerate = streamsNodeAudioStreamListAudioStream["Samplerate"].asString();
		if(!streamsNodeAudioStreamListAudioStream["CodecLongName"].isNull())
			audioStreamObject.codecLongName = streamsNodeAudioStreamListAudioStream["CodecLongName"].asString();
		if(!streamsNodeAudioStreamListAudioStream["Channels"].isNull())
			audioStreamObject.channels = streamsNodeAudioStreamListAudioStream["Channels"].asString();
		if(!streamsNodeAudioStreamListAudioStream["NumFrames"].isNull())
			audioStreamObject.numFrames = streamsNodeAudioStreamListAudioStream["NumFrames"].asString();
		if(!streamsNodeAudioStreamListAudioStream["Bitrate"].isNull())
			audioStreamObject.bitrate = streamsNodeAudioStreamListAudioStream["Bitrate"].asString();
		if(!streamsNodeAudioStreamListAudioStream["CodecTagString"].isNull())
			audioStreamObject.codecTagString = streamsNodeAudioStreamListAudioStream["CodecTagString"].asString();
		if(!streamsNodeAudioStreamListAudioStream["StartTime"].isNull())
			audioStreamObject.startTime = streamsNodeAudioStreamListAudioStream["StartTime"].asString();
		if(!streamsNodeAudioStreamListAudioStream["CodecName"].isNull())
			audioStreamObject.codecName = streamsNodeAudioStreamListAudioStream["CodecName"].asString();
		if(!streamsNodeAudioStreamListAudioStream["Duration"].isNull())
			audioStreamObject.duration = streamsNodeAudioStreamListAudioStream["Duration"].asString();
		if(!streamsNodeAudioStreamListAudioStream["CodecTag"].isNull())
			audioStreamObject.codecTag = streamsNodeAudioStreamListAudioStream["CodecTag"].asString();
		if(!streamsNodeAudioStreamListAudioStream["CodecTimeBase"].isNull())
			audioStreamObject.codecTimeBase = streamsNodeAudioStreamListAudioStream["CodecTimeBase"].asString();
		mediaInfoJob_.properties.streams.audioStreamList.push_back(audioStreamObject);
	}
	auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
	for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
	{
		MediaInfoJob::Properties::Streams::SubtitleStream subtitleStreamObject;
		if(!streamsNodeSubtitleStreamListSubtitleStream["Timebase"].isNull())
			subtitleStreamObject.timebase = streamsNodeSubtitleStreamListSubtitleStream["Timebase"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
			subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["StartTime"].isNull())
			subtitleStreamObject.startTime = streamsNodeSubtitleStreamListSubtitleStream["StartTime"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["CodecName"].isNull())
			subtitleStreamObject.codecName = streamsNodeSubtitleStreamListSubtitleStream["CodecName"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
			subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["CodecLongName"].isNull())
			subtitleStreamObject.codecLongName = streamsNodeSubtitleStreamListSubtitleStream["CodecLongName"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["Duration"].isNull())
			subtitleStreamObject.duration = streamsNodeSubtitleStreamListSubtitleStream["Duration"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["CodecTag"].isNull())
			subtitleStreamObject.codecTag = streamsNodeSubtitleStreamListSubtitleStream["CodecTag"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["CodecTimeBase"].isNull())
			subtitleStreamObject.codecTimeBase = streamsNodeSubtitleStreamListSubtitleStream["CodecTimeBase"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["CodecTagString"].isNull())
			subtitleStreamObject.codecTagString = streamsNodeSubtitleStreamListSubtitleStream["CodecTagString"].asString();
		mediaInfoJob_.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
	}
	auto formatNode = propertiesNode["Format"];
	if(!formatNode["StartTime"].isNull())
		mediaInfoJob_.properties.format.startTime = formatNode["StartTime"].asString();
	if(!formatNode["NumPrograms"].isNull())
		mediaInfoJob_.properties.format.numPrograms = formatNode["NumPrograms"].asString();
	if(!formatNode["Size"].isNull())
		mediaInfoJob_.properties.format.size = formatNode["Size"].asString();
	if(!formatNode["NumStreams"].isNull())
		mediaInfoJob_.properties.format.numStreams = formatNode["NumStreams"].asString();
	if(!formatNode["FormatLongName"].isNull())
		mediaInfoJob_.properties.format.formatLongName = formatNode["FormatLongName"].asString();
	if(!formatNode["Duration"].isNull())
		mediaInfoJob_.properties.format.duration = formatNode["Duration"].asString();
	if(!formatNode["Bitrate"].isNull())
		mediaInfoJob_.properties.format.bitrate = formatNode["Bitrate"].asString();
	if(!formatNode["FormatName"].isNull())
		mediaInfoJob_.properties.format.formatName = formatNode["FormatName"].asString();

}

SubmitMediaInfoJobResult::MediaInfoJob SubmitMediaInfoJobResult::getMediaInfoJob()const
{
	return mediaInfoJob_;
}

