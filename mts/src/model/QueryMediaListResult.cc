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

#include <alibabacloud/mts/model/QueryMediaListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaListResult::QueryMediaListResult() :
	ServiceResult()
{}

QueryMediaListResult::QueryMediaListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaListResult::~QueryMediaListResult()
{}

void QueryMediaListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMediaList = value["MediaList"]["Media"];
	for (auto value : allMediaList)
	{
		Media mediaListObject;
		if(!value["MediaId"].isNull())
			mediaListObject.mediaId = value["MediaId"].asString();
		if(!value["Title"].isNull())
			mediaListObject.title = value["Title"].asString();
		if(!value["Description"].isNull())
			mediaListObject.description = value["Description"].asString();
		if(!value["CoverURL"].isNull())
			mediaListObject.coverURL = value["CoverURL"].asString();
		if(!value["CateId"].isNull())
			mediaListObject.cateId = std::stol(value["CateId"].asString());
		if(!value["Duration"].isNull())
			mediaListObject.duration = value["Duration"].asString();
		if(!value["Format"].isNull())
			mediaListObject.format = value["Format"].asString();
		if(!value["Size"].isNull())
			mediaListObject.size = value["Size"].asString();
		if(!value["Bitrate"].isNull())
			mediaListObject.bitrate = value["Bitrate"].asString();
		if(!value["Width"].isNull())
			mediaListObject.width = value["Width"].asString();
		if(!value["Height"].isNull())
			mediaListObject.height = value["Height"].asString();
		if(!value["Fps"].isNull())
			mediaListObject.fps = value["Fps"].asString();
		if(!value["PublishState"].isNull())
			mediaListObject.publishState = value["PublishState"].asString();
		if(!value["CensorState"].isNull())
			mediaListObject.censorState = value["CensorState"].asString();
		if(!value["CreationTime"].isNull())
			mediaListObject.creationTime = value["CreationTime"].asString();
		auto allPlayList = value["PlayList"]["Play"];
		for (auto value : allPlayList)
		{
			Media::Play playListObject;
			if(!value["ActivityName"].isNull())
				playListObject.activityName = value["ActivityName"].asString();
			if(!value["MediaWorkflowId"].isNull())
				playListObject.mediaWorkflowId = value["MediaWorkflowId"].asString();
			if(!value["MediaWorkflowName"].isNull())
				playListObject.mediaWorkflowName = value["MediaWorkflowName"].asString();
			if(!value["Duration"].isNull())
				playListObject.duration = value["Duration"].asString();
			if(!value["Format"].isNull())
				playListObject.format = value["Format"].asString();
			if(!value["Size"].isNull())
				playListObject.size = value["Size"].asString();
			if(!value["Bitrate"].isNull())
				playListObject.bitrate = value["Bitrate"].asString();
			if(!value["Width"].isNull())
				playListObject.width = value["Width"].asString();
			if(!value["Height"].isNull())
				playListObject.height = value["Height"].asString();
			if(!value["Fps"].isNull())
				playListObject.fps = value["Fps"].asString();
			if(!value["Encryption"].isNull())
				playListObject.encryption = value["Encryption"].asString();
			auto file1Node = value["File"];
			if(!file1Node["URL"].isNull())
				playListObject.file1.uRL = file1Node["URL"].asString();
			if(!file1Node["State"].isNull())
				playListObject.file1.state = file1Node["State"].asString();
			mediaListObject.playList.push_back(playListObject);
		}
		auto allSnapshotList = value["SnapshotList"]["Snapshot"];
		for (auto value : allSnapshotList)
		{
			Media::Snapshot snapshotListObject;
			if(!value["Type"].isNull())
				snapshotListObject.type = value["Type"].asString();
			if(!value["MediaWorkflowId"].isNull())
				snapshotListObject.mediaWorkflowId = value["MediaWorkflowId"].asString();
			if(!value["MediaWorkflowName"].isNull())
				snapshotListObject.mediaWorkflowName = value["MediaWorkflowName"].asString();
			if(!value["ActivityName"].isNull())
				snapshotListObject.activityName = value["ActivityName"].asString();
			if(!value["Count"].isNull())
				snapshotListObject.count = value["Count"].asString();
			auto file2Node = value["File"];
			if(!file2Node["URL"].isNull())
				snapshotListObject.file2.uRL = file2Node["URL"].asString();
			if(!file2Node["State"].isNull())
				snapshotListObject.file2.state = file2Node["State"].asString();
			mediaListObject.snapshotList.push_back(snapshotListObject);
		}
		auto allSummaryList = value["SummaryList"]["Summary"];
		for (auto value : allSummaryList)
		{
			Media::Summary summaryListObject;
			if(!value["Type"].isNull())
				summaryListObject.type = value["Type"].asString();
			if(!value["MediaWorkflowId"].isNull())
				summaryListObject.mediaWorkflowId = value["MediaWorkflowId"].asString();
			if(!value["MediaWorkflowName"].isNull())
				summaryListObject.mediaWorkflowName = value["MediaWorkflowName"].asString();
			if(!value["ActivityName"].isNull())
				summaryListObject.activityName = value["ActivityName"].asString();
			auto file3Node = value["File"];
			if(!file3Node["URL"].isNull())
				summaryListObject.file3.uRL = file3Node["URL"].asString();
			if(!file3Node["State"].isNull())
				summaryListObject.file3.state = file3Node["State"].asString();
			mediaListObject.summaryList.push_back(summaryListObject);
		}
		auto fileNode = value["File"];
		if(!fileNode["URL"].isNull())
			mediaListObject.file.uRL = fileNode["URL"].asString();
		if(!fileNode["State"].isNull())
			mediaListObject.file.state = fileNode["State"].asString();
		auto mediaInfoNode = value["MediaInfo"];
		auto streamsNode = mediaInfoNode["Streams"];
		auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
		for (auto value : allVideoStreamList)
		{
			Media::MediaInfo::Streams::VideoStream videoStreamObject;
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
			mediaListObject.mediaInfo.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
		for (auto value : allAudioStreamList)
		{
			Media::MediaInfo::Streams::AudioStream audioStreamObject;
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
			mediaListObject.mediaInfo.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
		for (auto value : allSubtitleStreamList)
		{
			Media::MediaInfo::Streams::SubtitleStream subtitleStreamObject;
			if(!value["Index"].isNull())
				subtitleStreamObject.index = value["Index"].asString();
			if(!value["Lang"].isNull())
				subtitleStreamObject.lang = value["Lang"].asString();
			mediaListObject.mediaInfo.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = mediaInfoNode["Format"];
		if(!formatNode["NumStreams"].isNull())
			mediaListObject.mediaInfo.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["NumPrograms"].isNull())
			mediaListObject.mediaInfo.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["FormatName"].isNull())
			mediaListObject.mediaInfo.format.formatName = formatNode["FormatName"].asString();
		if(!formatNode["FormatLongName"].isNull())
			mediaListObject.mediaInfo.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["StartTime"].isNull())
			mediaListObject.mediaInfo.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["Duration"].isNull())
			mediaListObject.mediaInfo.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Size"].isNull())
			mediaListObject.mediaInfo.format.size = formatNode["Size"].asString();
		if(!formatNode["Bitrate"].isNull())
			mediaListObject.mediaInfo.format.bitrate = formatNode["Bitrate"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
			mediaListObject.tags.push_back(value.asString());
		auto allRunIdList = value["RunIdList"]["RunId"];
		for (auto value : allRunIdList)
			mediaListObject.runIdList.push_back(value.asString());
		mediaList_.push_back(mediaListObject);
	}
	auto allNonExistMediaIds = value["NonExistMediaIds"]["MediaId"];
	for (const auto &item : allNonExistMediaIds)
		nonExistMediaIds_.push_back(item.asString());

}

std::vector<std::string> QueryMediaListResult::getNonExistMediaIds()const
{
	return nonExistMediaIds_;
}

std::vector<QueryMediaListResult::Media> QueryMediaListResult::getMediaList()const
{
	return mediaList_;
}

