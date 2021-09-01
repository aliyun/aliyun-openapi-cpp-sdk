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

#include <alibabacloud/mts/model/QueryMediaInfoJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaInfoJobListResult::QueryMediaInfoJobListResult() :
	ServiceResult()
{}

QueryMediaInfoJobListResult::QueryMediaInfoJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaInfoJobListResult::~QueryMediaInfoJobListResult()
{}

void QueryMediaInfoJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaInfoJobListNode = value["MediaInfoJobList"]["MediaInfoJob"];
	for (auto valueMediaInfoJobListMediaInfoJob : allMediaInfoJobListNode)
	{
		MediaInfoJob mediaInfoJobListObject;
		if(!valueMediaInfoJobListMediaInfoJob["CreationTime"].isNull())
			mediaInfoJobListObject.creationTime = valueMediaInfoJobListMediaInfoJob["CreationTime"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["State"].isNull())
			mediaInfoJobListObject.state = valueMediaInfoJobListMediaInfoJob["State"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["JobId"].isNull())
			mediaInfoJobListObject.jobId = valueMediaInfoJobListMediaInfoJob["JobId"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["UserData"].isNull())
			mediaInfoJobListObject.userData = valueMediaInfoJobListMediaInfoJob["UserData"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["Code"].isNull())
			mediaInfoJobListObject.code = valueMediaInfoJobListMediaInfoJob["Code"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["Message"].isNull())
			mediaInfoJobListObject.message = valueMediaInfoJobListMediaInfoJob["Message"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["PipelineId"].isNull())
			mediaInfoJobListObject.pipelineId = valueMediaInfoJobListMediaInfoJob["PipelineId"].asString();
		if(!valueMediaInfoJobListMediaInfoJob["Async"].isNull())
			mediaInfoJobListObject.async = valueMediaInfoJobListMediaInfoJob["Async"].asString() == "true";
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			mediaInfoJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			mediaInfoJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			mediaInfoJobListObject.input.bucket = inputNode["Bucket"].asString();
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			mediaInfoJobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			mediaInfoJobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			mediaInfoJobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		auto propertiesNode = value["Properties"];
		if(!propertiesNode["Width"].isNull())
			mediaInfoJobListObject.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			mediaInfoJobListObject.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Duration"].isNull())
			mediaInfoJobListObject.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			mediaInfoJobListObject.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			mediaInfoJobListObject.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			mediaInfoJobListObject.properties.fileFormat = propertiesNode["FileFormat"].asString();
		if(!propertiesNode["FileSize"].isNull())
			mediaInfoJobListObject.properties.fileSize = propertiesNode["FileSize"].asString();
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
			mediaInfoJobListObject.properties.streams.videoStreamList.push_back(videoStreamObject);
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
			mediaInfoJobListObject.properties.streams.audioStreamList.push_back(audioStreamObject);
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
			mediaInfoJobListObject.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["StartTime"].isNull())
			mediaInfoJobListObject.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["NumPrograms"].isNull())
			mediaInfoJobListObject.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["Size"].isNull())
			mediaInfoJobListObject.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["NumStreams"].isNull())
			mediaInfoJobListObject.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["FormatLongName"].isNull())
			mediaInfoJobListObject.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["Duration"].isNull())
			mediaInfoJobListObject.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Bitrate"].isNull())
			mediaInfoJobListObject.properties.format.bitrate = formatNode["Bitrate"].asString();
		if(!formatNode["FormatName"].isNull())
			mediaInfoJobListObject.properties.format.formatName = formatNode["FormatName"].asString();
		mediaInfoJobList_.push_back(mediaInfoJobListObject);
	}
	auto allNonExistMediaInfoJobIds = value["NonExistMediaInfoJobIds"]["String"];
	for (const auto &item : allNonExistMediaInfoJobIds)
		nonExistMediaInfoJobIds_.push_back(item.asString());

}

std::vector<std::string> QueryMediaInfoJobListResult::getNonExistMediaInfoJobIds()const
{
	return nonExistMediaInfoJobIds_;
}

std::vector<QueryMediaInfoJobListResult::MediaInfoJob> QueryMediaInfoJobListResult::getMediaInfoJobList()const
{
	return mediaInfoJobList_;
}

