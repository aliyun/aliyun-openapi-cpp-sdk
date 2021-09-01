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

#include <alibabacloud/mts/model/SubmitVideoPoseJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitVideoPoseJobResult::SubmitVideoPoseJobResult() :
	ServiceResult()
{}

SubmitVideoPoseJobResult::SubmitVideoPoseJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitVideoPoseJobResult::~SubmitVideoPoseJobResult()
{}

void SubmitVideoPoseJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto videoPoseJobNode = value["VideoPoseJob"];
	if(!videoPoseJobNode["State"].isNull())
		videoPoseJob_.state = videoPoseJobNode["State"].asString();
	if(!videoPoseJobNode["JobId"].isNull())
		videoPoseJob_.jobId = videoPoseJobNode["JobId"].asString();
	if(!videoPoseJobNode["UserData"].isNull())
		videoPoseJob_.userData = videoPoseJobNode["UserData"].asString();
	if(!videoPoseJobNode["PipelineId"].isNull())
		videoPoseJob_.pipelineId = videoPoseJobNode["PipelineId"].asString();
	auto outputConfigNode = videoPoseJobNode["OutputConfig"];
	auto dataFileNode = outputConfigNode["DataFile"];
	if(!dataFileNode["RoleArn"].isNull())
		videoPoseJob_.outputConfig.dataFile.roleArn = dataFileNode["RoleArn"].asString();
	if(!dataFileNode["Object"].isNull())
		videoPoseJob_.outputConfig.dataFile.object = dataFileNode["Object"].asString();
	if(!dataFileNode["Location"].isNull())
		videoPoseJob_.outputConfig.dataFile.location = dataFileNode["Location"].asString();
	if(!dataFileNode["Bucket"].isNull())
		videoPoseJob_.outputConfig.dataFile.bucket = dataFileNode["Bucket"].asString();
	auto videoFileNode = outputConfigNode["VideoFile"];
	if(!videoFileNode["RoleArn"].isNull())
		videoPoseJob_.outputConfig.videoFile.roleArn = videoFileNode["RoleArn"].asString();
	if(!videoFileNode["Object"].isNull())
		videoPoseJob_.outputConfig.videoFile.object = videoFileNode["Object"].asString();
	if(!videoFileNode["Location"].isNull())
		videoPoseJob_.outputConfig.videoFile.location = videoFileNode["Location"].asString();
	if(!videoFileNode["Bucket"].isNull())
		videoPoseJob_.outputConfig.videoFile.bucket = videoFileNode["Bucket"].asString();
	auto mNSMessageResultNode = videoPoseJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		videoPoseJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		videoPoseJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		videoPoseJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
	auto inputNode = videoPoseJobNode["Input"];
	if(!inputNode["RoleArn"].isNull())
		videoPoseJob_.input.roleArn = inputNode["RoleArn"].asString();
	if(!inputNode["Object"].isNull())
		videoPoseJob_.input.object = inputNode["Object"].asString();
	if(!inputNode["Location"].isNull())
		videoPoseJob_.input.location = inputNode["Location"].asString();
	if(!inputNode["Bucket"].isNull())
		videoPoseJob_.input.bucket = inputNode["Bucket"].asString();
	auto propertiesNode = videoPoseJobNode["Properties"];
	if(!propertiesNode["Width"].isNull())
		videoPoseJob_.properties.width = propertiesNode["Width"].asString();
	if(!propertiesNode["Height"].isNull())
		videoPoseJob_.properties.height = propertiesNode["Height"].asString();
	if(!propertiesNode["Duration"].isNull())
		videoPoseJob_.properties.duration = propertiesNode["Duration"].asString();
	if(!propertiesNode["Fps"].isNull())
		videoPoseJob_.properties.fps = propertiesNode["Fps"].asString();
	if(!propertiesNode["Bitrate"].isNull())
		videoPoseJob_.properties.bitrate = propertiesNode["Bitrate"].asString();
	if(!propertiesNode["FileFormat"].isNull())
		videoPoseJob_.properties.fileFormat = propertiesNode["FileFormat"].asString();
	if(!propertiesNode["FileSize"].isNull())
		videoPoseJob_.properties.fileSize = propertiesNode["FileSize"].asString();
	auto streamsNode = propertiesNode["Streams"];
	auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
	for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
	{
		VideoPoseJob::Properties::Streams::VideoStream videoStreamObject;
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
		auto networkCostNode = value["NetworkCost"];
		if(!networkCostNode["PreloadTime"].isNull())
			videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
		if(!networkCostNode["AvgBitrate"].isNull())
			videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
		if(!networkCostNode["CostBandwidth"].isNull())
			videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
		videoPoseJob_.properties.streams.videoStreamList.push_back(videoStreamObject);
	}
	auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
	for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
	{
		VideoPoseJob::Properties::Streams::AudioStream audioStreamObject;
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
		videoPoseJob_.properties.streams.audioStreamList.push_back(audioStreamObject);
	}
	auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
	for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
	{
		VideoPoseJob::Properties::Streams::SubtitleStream subtitleStreamObject;
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
		videoPoseJob_.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
	}
	auto formatNode = propertiesNode["Format"];
	if(!formatNode["StartTime"].isNull())
		videoPoseJob_.properties.format.startTime = formatNode["StartTime"].asString();
	if(!formatNode["NumPrograms"].isNull())
		videoPoseJob_.properties.format.numPrograms = formatNode["NumPrograms"].asString();
	if(!formatNode["Size"].isNull())
		videoPoseJob_.properties.format.size = formatNode["Size"].asString();
	if(!formatNode["NumStreams"].isNull())
		videoPoseJob_.properties.format.numStreams = formatNode["NumStreams"].asString();
	if(!formatNode["FormatLongName"].isNull())
		videoPoseJob_.properties.format.formatLongName = formatNode["FormatLongName"].asString();
	if(!formatNode["Duration"].isNull())
		videoPoseJob_.properties.format.duration = formatNode["Duration"].asString();
	if(!formatNode["Bitrate"].isNull())
		videoPoseJob_.properties.format.bitrate = formatNode["Bitrate"].asString();
	if(!formatNode["FormatName"].isNull())
		videoPoseJob_.properties.format.formatName = formatNode["FormatName"].asString();

}

SubmitVideoPoseJobResult::VideoPoseJob SubmitVideoPoseJobResult::getVideoPoseJob()const
{
	return videoPoseJob_;
}

