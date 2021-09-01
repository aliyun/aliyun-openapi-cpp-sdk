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
	auto allMediaListNode = value["MediaList"]["Media"];
	for (auto valueMediaListMedia : allMediaListNode)
	{
		Media mediaListObject;
		if(!valueMediaListMedia["CreationTime"].isNull())
			mediaListObject.creationTime = valueMediaListMedia["CreationTime"].asString();
		if(!valueMediaListMedia["CateId"].isNull())
			mediaListObject.cateId = std::stol(valueMediaListMedia["CateId"].asString());
		if(!valueMediaListMedia["Height"].isNull())
			mediaListObject.height = valueMediaListMedia["Height"].asString();
		if(!valueMediaListMedia["CensorState"].isNull())
			mediaListObject.censorState = valueMediaListMedia["CensorState"].asString();
		if(!valueMediaListMedia["Bitrate"].isNull())
			mediaListObject.bitrate = valueMediaListMedia["Bitrate"].asString();
		if(!valueMediaListMedia["MediaId"].isNull())
			mediaListObject.mediaId = valueMediaListMedia["MediaId"].asString();
		if(!valueMediaListMedia["PublishState"].isNull())
			mediaListObject.publishState = valueMediaListMedia["PublishState"].asString();
		if(!valueMediaListMedia["Description"].isNull())
			mediaListObject.description = valueMediaListMedia["Description"].asString();
		if(!valueMediaListMedia["Size"].isNull())
			mediaListObject.size = valueMediaListMedia["Size"].asString();
		if(!valueMediaListMedia["Width"].isNull())
			mediaListObject.width = valueMediaListMedia["Width"].asString();
		if(!valueMediaListMedia["CoverURL"].isNull())
			mediaListObject.coverURL = valueMediaListMedia["CoverURL"].asString();
		if(!valueMediaListMedia["Duration"].isNull())
			mediaListObject.duration = valueMediaListMedia["Duration"].asString();
		if(!valueMediaListMedia["Fps"].isNull())
			mediaListObject.fps = valueMediaListMedia["Fps"].asString();
		if(!valueMediaListMedia["Title"].isNull())
			mediaListObject.title = valueMediaListMedia["Title"].asString();
		if(!valueMediaListMedia["Format"].isNull())
			mediaListObject.format = valueMediaListMedia["Format"].asString();
		auto allPlayListNode = valueMediaListMedia["PlayList"]["Play"];
		for (auto valueMediaListMediaPlayListPlay : allPlayListNode)
		{
			Media::Play playListObject;
			if(!valueMediaListMediaPlayListPlay["Encryption"].isNull())
				playListObject.encryption = valueMediaListMediaPlayListPlay["Encryption"].asString();
			if(!valueMediaListMediaPlayListPlay["Height"].isNull())
				playListObject.height = valueMediaListMediaPlayListPlay["Height"].asString();
			if(!valueMediaListMediaPlayListPlay["Bitrate"].isNull())
				playListObject.bitrate = valueMediaListMediaPlayListPlay["Bitrate"].asString();
			if(!valueMediaListMediaPlayListPlay["MediaWorkflowId"].isNull())
				playListObject.mediaWorkflowId = valueMediaListMediaPlayListPlay["MediaWorkflowId"].asString();
			if(!valueMediaListMediaPlayListPlay["Width"].isNull())
				playListObject.width = valueMediaListMediaPlayListPlay["Width"].asString();
			if(!valueMediaListMediaPlayListPlay["Size"].isNull())
				playListObject.size = valueMediaListMediaPlayListPlay["Size"].asString();
			if(!valueMediaListMediaPlayListPlay["Fps"].isNull())
				playListObject.fps = valueMediaListMediaPlayListPlay["Fps"].asString();
			if(!valueMediaListMediaPlayListPlay["Duration"].isNull())
				playListObject.duration = valueMediaListMediaPlayListPlay["Duration"].asString();
			if(!valueMediaListMediaPlayListPlay["ActivityName"].isNull())
				playListObject.activityName = valueMediaListMediaPlayListPlay["ActivityName"].asString();
			if(!valueMediaListMediaPlayListPlay["Format"].isNull())
				playListObject.format = valueMediaListMediaPlayListPlay["Format"].asString();
			if(!valueMediaListMediaPlayListPlay["MediaWorkflowName"].isNull())
				playListObject.mediaWorkflowName = valueMediaListMediaPlayListPlay["MediaWorkflowName"].asString();
			auto file1Node = value["File"];
			if(!file1Node["State"].isNull())
				playListObject.file1.state = file1Node["State"].asString();
			if(!file1Node["URL"].isNull())
				playListObject.file1.uRL = file1Node["URL"].asString();
			mediaListObject.playList.push_back(playListObject);
		}
		auto allSummaryListNode = valueMediaListMedia["SummaryList"]["Summary"];
		for (auto valueMediaListMediaSummaryListSummary : allSummaryListNode)
		{
			Media::Summary summaryListObject;
			if(!valueMediaListMediaSummaryListSummary["Type"].isNull())
				summaryListObject.type = valueMediaListMediaSummaryListSummary["Type"].asString();
			if(!valueMediaListMediaSummaryListSummary["MediaWorkflowId"].isNull())
				summaryListObject.mediaWorkflowId = valueMediaListMediaSummaryListSummary["MediaWorkflowId"].asString();
			if(!valueMediaListMediaSummaryListSummary["ActivityName"].isNull())
				summaryListObject.activityName = valueMediaListMediaSummaryListSummary["ActivityName"].asString();
			if(!valueMediaListMediaSummaryListSummary["MediaWorkflowName"].isNull())
				summaryListObject.mediaWorkflowName = valueMediaListMediaSummaryListSummary["MediaWorkflowName"].asString();
			auto file2Node = value["File"];
			if(!file2Node["State"].isNull())
				summaryListObject.file2.state = file2Node["State"].asString();
			if(!file2Node["URL"].isNull())
				summaryListObject.file2.uRL = file2Node["URL"].asString();
			mediaListObject.summaryList.push_back(summaryListObject);
		}
		auto allSnapshotListNode = valueMediaListMedia["SnapshotList"]["Snapshot"];
		for (auto valueMediaListMediaSnapshotListSnapshot : allSnapshotListNode)
		{
			Media::Snapshot snapshotListObject;
			if(!valueMediaListMediaSnapshotListSnapshot["Type"].isNull())
				snapshotListObject.type = valueMediaListMediaSnapshotListSnapshot["Type"].asString();
			if(!valueMediaListMediaSnapshotListSnapshot["MediaWorkflowId"].isNull())
				snapshotListObject.mediaWorkflowId = valueMediaListMediaSnapshotListSnapshot["MediaWorkflowId"].asString();
			if(!valueMediaListMediaSnapshotListSnapshot["ActivityName"].isNull())
				snapshotListObject.activityName = valueMediaListMediaSnapshotListSnapshot["ActivityName"].asString();
			if(!valueMediaListMediaSnapshotListSnapshot["Count"].isNull())
				snapshotListObject.count = valueMediaListMediaSnapshotListSnapshot["Count"].asString();
			if(!valueMediaListMediaSnapshotListSnapshot["MediaWorkflowName"].isNull())
				snapshotListObject.mediaWorkflowName = valueMediaListMediaSnapshotListSnapshot["MediaWorkflowName"].asString();
			auto file3Node = value["File"];
			if(!file3Node["State"].isNull())
				snapshotListObject.file3.state = file3Node["State"].asString();
			if(!file3Node["URL"].isNull())
				snapshotListObject.file3.uRL = file3Node["URL"].asString();
			mediaListObject.snapshotList.push_back(snapshotListObject);
		}
		auto fileNode = value["File"];
		if(!fileNode["State"].isNull())
			mediaListObject.file.state = fileNode["State"].asString();
		if(!fileNode["URL"].isNull())
			mediaListObject.file.uRL = fileNode["URL"].asString();
		auto mediaInfoNode = value["MediaInfo"];
		auto streamsNode = mediaInfoNode["Streams"];
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			Media::MediaInfo::Streams::VideoStream videoStreamObject;
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
			mediaListObject.mediaInfo.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			Media::MediaInfo::Streams::AudioStream audioStreamObject;
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
			mediaListObject.mediaInfo.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
		for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
		{
			Media::MediaInfo::Streams::SubtitleStream subtitleStreamObject;
			if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
				subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
			if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
				subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
			mediaListObject.mediaInfo.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = mediaInfoNode["Format"];
		if(!formatNode["StartTime"].isNull())
			mediaListObject.mediaInfo.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["NumPrograms"].isNull())
			mediaListObject.mediaInfo.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["Size"].isNull())
			mediaListObject.mediaInfo.format.size = formatNode["Size"].asString();
		if(!formatNode["NumStreams"].isNull())
			mediaListObject.mediaInfo.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["FormatLongName"].isNull())
			mediaListObject.mediaInfo.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["Duration"].isNull())
			mediaListObject.mediaInfo.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Bitrate"].isNull())
			mediaListObject.mediaInfo.format.bitrate = formatNode["Bitrate"].asString();
		if(!formatNode["FormatName"].isNull())
			mediaListObject.mediaInfo.format.formatName = formatNode["FormatName"].asString();
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

