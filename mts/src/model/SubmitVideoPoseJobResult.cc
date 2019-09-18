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
	if(!videoPoseJobNode["JobId"].isNull())
		videoPoseJob_.jobId = videoPoseJobNode["JobId"].asString();
	if(!videoPoseJobNode["PipelineId"].isNull())
		videoPoseJob_.pipelineId = videoPoseJobNode["PipelineId"].asString();
	if(!videoPoseJobNode["UserData"].isNull())
		videoPoseJob_.userData = videoPoseJobNode["UserData"].asString();
	if(!videoPoseJobNode["State"].isNull())
		videoPoseJob_.state = videoPoseJobNode["State"].asString();
	auto inputNode = videoPoseJobNode["Input"];
	if(!inputNode["Bucket"].isNull())
		videoPoseJob_.input.bucket = inputNode["Bucket"].asString();
	if(!inputNode["Location"].isNull())
		videoPoseJob_.input.location = inputNode["Location"].asString();
	if(!inputNode["Object"].isNull())
		videoPoseJob_.input.object = inputNode["Object"].asString();
	if(!inputNode["RoleArn"].isNull())
		videoPoseJob_.input.roleArn = inputNode["RoleArn"].asString();
	auto outputConfigNode = videoPoseJobNode["OutputConfig"];
	auto videoFileNode = outputConfigNode["VideoFile"];
	if(!videoFileNode["Bucket"].isNull())
		videoPoseJob_.outputConfig.videoFile.bucket = videoFileNode["Bucket"].asString();
	if(!videoFileNode["Location"].isNull())
		videoPoseJob_.outputConfig.videoFile.location = videoFileNode["Location"].asString();
	if(!videoFileNode["Object"].isNull())
		videoPoseJob_.outputConfig.videoFile.object = videoFileNode["Object"].asString();
	if(!videoFileNode["RoleArn"].isNull())
		videoPoseJob_.outputConfig.videoFile.roleArn = videoFileNode["RoleArn"].asString();
	auto dataFileNode = outputConfigNode["DataFile"];
	if(!dataFileNode["Bucket"].isNull())
		videoPoseJob_.outputConfig.dataFile.bucket = dataFileNode["Bucket"].asString();
	if(!dataFileNode["Location"].isNull())
		videoPoseJob_.outputConfig.dataFile.location = dataFileNode["Location"].asString();
	if(!dataFileNode["Object"].isNull())
		videoPoseJob_.outputConfig.dataFile.object = dataFileNode["Object"].asString();
	if(!dataFileNode["RoleArn"].isNull())
		videoPoseJob_.outputConfig.dataFile.roleArn = dataFileNode["RoleArn"].asString();
	auto propertiesNode = videoPoseJobNode["Properties"];
	if(!propertiesNode["Width"].isNull())
		videoPoseJob_.properties.width = propertiesNode["Width"].asString();
	if(!propertiesNode["Height"].isNull())
		videoPoseJob_.properties.height = propertiesNode["Height"].asString();
	if(!propertiesNode["Bitrate"].isNull())
		videoPoseJob_.properties.bitrate = propertiesNode["Bitrate"].asString();
	if(!propertiesNode["Duration"].isNull())
		videoPoseJob_.properties.duration = propertiesNode["Duration"].asString();
	if(!propertiesNode["Fps"].isNull())
		videoPoseJob_.properties.fps = propertiesNode["Fps"].asString();
	if(!propertiesNode["FileSize"].isNull())
		videoPoseJob_.properties.fileSize = propertiesNode["FileSize"].asString();
	if(!propertiesNode["FileFormat"].isNull())
		videoPoseJob_.properties.fileFormat = propertiesNode["FileFormat"].asString();
	auto streamsNode = propertiesNode["Streams"];
	auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
	for (auto value : allVideoStreamList)
	{
		VideoPoseJob::Properties::Streams::VideoStream videoStreamObject;
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
		videoPoseJob_.properties.streams.videoStreamList.push_back(videoStreamObject);
	}
	auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
	for (auto value : allAudioStreamList)
	{
		VideoPoseJob::Properties::Streams::AudioStream audioStreamObject;
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
		videoPoseJob_.properties.streams.audioStreamList.push_back(audioStreamObject);
	}
	auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
	for (auto value : allSubtitleStreamList)
	{
		VideoPoseJob::Properties::Streams::SubtitleStream subtitleStreamObject;
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
		videoPoseJob_.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
	}
	auto formatNode = propertiesNode["Format"];
	if(!formatNode["NumStreams"].isNull())
		videoPoseJob_.properties.format.numStreams = formatNode["NumStreams"].asString();
	if(!formatNode["NumPrograms"].isNull())
		videoPoseJob_.properties.format.numPrograms = formatNode["NumPrograms"].asString();
	if(!formatNode["FormatName"].isNull())
		videoPoseJob_.properties.format.formatName = formatNode["FormatName"].asString();
	if(!formatNode["FormatLongName"].isNull())
		videoPoseJob_.properties.format.formatLongName = formatNode["FormatLongName"].asString();
	if(!formatNode["StartTime"].isNull())
		videoPoseJob_.properties.format.startTime = formatNode["StartTime"].asString();
	if(!formatNode["Duration"].isNull())
		videoPoseJob_.properties.format.duration = formatNode["Duration"].asString();
	if(!formatNode["Size"].isNull())
		videoPoseJob_.properties.format.size = formatNode["Size"].asString();
	if(!formatNode["Bitrate"].isNull())
		videoPoseJob_.properties.format.bitrate = formatNode["Bitrate"].asString();
	auto mNSMessageResultNode = videoPoseJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		videoPoseJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		videoPoseJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		videoPoseJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();

}

SubmitVideoPoseJobResult::VideoPoseJob SubmitVideoPoseJobResult::getVideoPoseJob()const
{
	return videoPoseJob_;
}

