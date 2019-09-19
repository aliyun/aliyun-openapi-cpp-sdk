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
		if(!valueMediaListMedia["MediaId"].isNull())
			mediaListObject.mediaId = valueMediaListMedia["MediaId"].asString();
		if(!valueMediaListMedia["Title"].isNull())
			mediaListObject.title = valueMediaListMedia["Title"].asString();
		if(!valueMediaListMedia["Description"].isNull())
			mediaListObject.description = valueMediaListMedia["Description"].asString();
		if(!valueMediaListMedia["CoverURL"].isNull())
			mediaListObject.coverURL = valueMediaListMedia["CoverURL"].asString();
		if(!valueMediaListMedia["CateId"].isNull())
			mediaListObject.cateId = std::stol(valueMediaListMedia["CateId"].asString());
		if(!valueMediaListMedia["Duration"].isNull())
			mediaListObject.duration = valueMediaListMedia["Duration"].asString();
		if(!valueMediaListMedia["Format"].isNull())
			mediaListObject.format = valueMediaListMedia["Format"].asString();
		if(!valueMediaListMedia["Size"].isNull())
			mediaListObject.size = valueMediaListMedia["Size"].asString();
		if(!valueMediaListMedia["Bitrate"].isNull())
			mediaListObject.bitrate = valueMediaListMedia["Bitrate"].asString();
		if(!valueMediaListMedia["Width"].isNull())
			mediaListObject.width = valueMediaListMedia["Width"].asString();
		if(!valueMediaListMedia["Height"].isNull())
			mediaListObject.height = valueMediaListMedia["Height"].asString();
		if(!valueMediaListMedia["Fps"].isNull())
			mediaListObject.fps = valueMediaListMedia["Fps"].asString();
		if(!valueMediaListMedia["PublishState"].isNull())
			mediaListObject.publishState = valueMediaListMedia["PublishState"].asString();
		if(!valueMediaListMedia["CensorState"].isNull())
			mediaListObject.censorState = valueMediaListMedia["CensorState"].asString();
		if(!valueMediaListMedia["CreationTime"].isNull())
			mediaListObject.creationTime = valueMediaListMedia["CreationTime"].asString();
		auto allPlayListNode = allMediaListNode["PlayList"]["Play"];
		for (auto allMediaListNodePlayListPlay : allPlayListNode)
		{
			Media::Play playListObject;
			if(!allMediaListNodePlayListPlay["ActivityName"].isNull())
				playListObject.activityName = allMediaListNodePlayListPlay["ActivityName"].asString();
			if(!allMediaListNodePlayListPlay["MediaWorkflowId"].isNull())
				playListObject.mediaWorkflowId = allMediaListNodePlayListPlay["MediaWorkflowId"].asString();
			if(!allMediaListNodePlayListPlay["MediaWorkflowName"].isNull())
				playListObject.mediaWorkflowName = allMediaListNodePlayListPlay["MediaWorkflowName"].asString();
			if(!allMediaListNodePlayListPlay["Duration"].isNull())
				playListObject.duration = allMediaListNodePlayListPlay["Duration"].asString();
			if(!allMediaListNodePlayListPlay["Format"].isNull())
				playListObject.format = allMediaListNodePlayListPlay["Format"].asString();
			if(!allMediaListNodePlayListPlay["Size"].isNull())
				playListObject.size = allMediaListNodePlayListPlay["Size"].asString();
			if(!allMediaListNodePlayListPlay["Bitrate"].isNull())
				playListObject.bitrate = allMediaListNodePlayListPlay["Bitrate"].asString();
			if(!allMediaListNodePlayListPlay["Width"].isNull())
				playListObject.width = allMediaListNodePlayListPlay["Width"].asString();
			if(!allMediaListNodePlayListPlay["Height"].isNull())
				playListObject.height = allMediaListNodePlayListPlay["Height"].asString();
			if(!allMediaListNodePlayListPlay["Fps"].isNull())
				playListObject.fps = allMediaListNodePlayListPlay["Fps"].asString();
			if(!allMediaListNodePlayListPlay["Encryption"].isNull())
				playListObject.encryption = allMediaListNodePlayListPlay["Encryption"].asString();
			auto file1Node = value["File"];
			if(!file1Node["URL"].isNull())
				playListObject.file1.uRL = file1Node["URL"].asString();
			if(!file1Node["State"].isNull())
				playListObject.file1.state = file1Node["State"].asString();
			mediaListObject.playList.push_back(playListObject);
		}
		auto allSnapshotListNode = allMediaListNode["SnapshotList"]["Snapshot"];
		for (auto allMediaListNodeSnapshotListSnapshot : allSnapshotListNode)
		{
			Media::Snapshot snapshotListObject;
			if(!allMediaListNodeSnapshotListSnapshot["Type"].isNull())
				snapshotListObject.type = allMediaListNodeSnapshotListSnapshot["Type"].asString();
			if(!allMediaListNodeSnapshotListSnapshot["MediaWorkflowId"].isNull())
				snapshotListObject.mediaWorkflowId = allMediaListNodeSnapshotListSnapshot["MediaWorkflowId"].asString();
			if(!allMediaListNodeSnapshotListSnapshot["MediaWorkflowName"].isNull())
				snapshotListObject.mediaWorkflowName = allMediaListNodeSnapshotListSnapshot["MediaWorkflowName"].asString();
			if(!allMediaListNodeSnapshotListSnapshot["ActivityName"].isNull())
				snapshotListObject.activityName = allMediaListNodeSnapshotListSnapshot["ActivityName"].asString();
			if(!allMediaListNodeSnapshotListSnapshot["Count"].isNull())
				snapshotListObject.count = allMediaListNodeSnapshotListSnapshot["Count"].asString();
			auto file2Node = value["File"];
			if(!file2Node["URL"].isNull())
				snapshotListObject.file2.uRL = file2Node["URL"].asString();
			if(!file2Node["State"].isNull())
				snapshotListObject.file2.state = file2Node["State"].asString();
			mediaListObject.snapshotList.push_back(snapshotListObject);
		}
		auto allSummaryListNode = allMediaListNode["SummaryList"]["Summary"];
		for (auto allMediaListNodeSummaryListSummary : allSummaryListNode)
		{
			Media::Summary summaryListObject;
			if(!allMediaListNodeSummaryListSummary["Type"].isNull())
				summaryListObject.type = allMediaListNodeSummaryListSummary["Type"].asString();
			if(!allMediaListNodeSummaryListSummary["MediaWorkflowId"].isNull())
				summaryListObject.mediaWorkflowId = allMediaListNodeSummaryListSummary["MediaWorkflowId"].asString();
			if(!allMediaListNodeSummaryListSummary["MediaWorkflowName"].isNull())
				summaryListObject.mediaWorkflowName = allMediaListNodeSummaryListSummary["MediaWorkflowName"].asString();
			if(!allMediaListNodeSummaryListSummary["ActivityName"].isNull())
				summaryListObject.activityName = allMediaListNodeSummaryListSummary["ActivityName"].asString();
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
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			Media::MediaInfo::Streams::VideoStream videoStreamObject;
			if(!streamsNodeVideoStreamListVideoStream["Index"].isNull())
				videoStreamObject.index = streamsNodeVideoStreamListVideoStream["Index"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecName"].isNull())
				videoStreamObject.codecName = streamsNodeVideoStreamListVideoStream["CodecName"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecLongName"].isNull())
				videoStreamObject.codecLongName = streamsNodeVideoStreamListVideoStream["CodecLongName"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Profile"].isNull())
				videoStreamObject.profile = streamsNodeVideoStreamListVideoStream["Profile"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTimeBase"].isNull())
				videoStreamObject.codecTimeBase = streamsNodeVideoStreamListVideoStream["CodecTimeBase"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTagString"].isNull())
				videoStreamObject.codecTagString = streamsNodeVideoStreamListVideoStream["CodecTagString"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTag"].isNull())
				videoStreamObject.codecTag = streamsNodeVideoStreamListVideoStream["CodecTag"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Width"].isNull())
				videoStreamObject.width = streamsNodeVideoStreamListVideoStream["Width"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Height"].isNull())
				videoStreamObject.height = streamsNodeVideoStreamListVideoStream["Height"].asString();
			if(!streamsNodeVideoStreamListVideoStream["HasBFrames"].isNull())
				videoStreamObject.hasBFrames = streamsNodeVideoStreamListVideoStream["HasBFrames"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Sar"].isNull())
				videoStreamObject.sar = streamsNodeVideoStreamListVideoStream["Sar"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Dar"].isNull())
				videoStreamObject.dar = streamsNodeVideoStreamListVideoStream["Dar"].asString();
			if(!streamsNodeVideoStreamListVideoStream["PixFmt"].isNull())
				videoStreamObject.pixFmt = streamsNodeVideoStreamListVideoStream["PixFmt"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Level"].isNull())
				videoStreamObject.level = streamsNodeVideoStreamListVideoStream["Level"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Fps"].isNull())
				videoStreamObject.fps = streamsNodeVideoStreamListVideoStream["Fps"].asString();
			if(!streamsNodeVideoStreamListVideoStream["AvgFPS"].isNull())
				videoStreamObject.avgFPS = streamsNodeVideoStreamListVideoStream["AvgFPS"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Timebase"].isNull())
				videoStreamObject.timebase = streamsNodeVideoStreamListVideoStream["Timebase"].asString();
			if(!streamsNodeVideoStreamListVideoStream["StartTime"].isNull())
				videoStreamObject.startTime = streamsNodeVideoStreamListVideoStream["StartTime"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Duration"].isNull())
				videoStreamObject.duration = streamsNodeVideoStreamListVideoStream["Duration"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Bitrate"].isNull())
				videoStreamObject.bitrate = streamsNodeVideoStreamListVideoStream["Bitrate"].asString();
			if(!streamsNodeVideoStreamListVideoStream["NumFrames"].isNull())
				videoStreamObject.numFrames = streamsNodeVideoStreamListVideoStream["NumFrames"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Lang"].isNull())
				videoStreamObject.lang = streamsNodeVideoStreamListVideoStream["Lang"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Rotate"].isNull())
				videoStreamObject.rotate = streamsNodeVideoStreamListVideoStream["Rotate"].asString();
			auto networkCostNode = value["NetworkCost"];
			if(!networkCostNode["PreloadTime"].isNull())
				videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
			if(!networkCostNode["CostBandwidth"].isNull())
				videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
			if(!networkCostNode["AvgBitrate"].isNull())
				videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
			mediaListObject.mediaInfo.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			Media::MediaInfo::Streams::AudioStream audioStreamObject;
			if(!streamsNodeAudioStreamListAudioStream["Index"].isNull())
				audioStreamObject.index = streamsNodeAudioStreamListAudioStream["Index"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecName"].isNull())
				audioStreamObject.codecName = streamsNodeAudioStreamListAudioStream["CodecName"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTimeBase"].isNull())
				audioStreamObject.codecTimeBase = streamsNodeAudioStreamListAudioStream["CodecTimeBase"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecLongName"].isNull())
				audioStreamObject.codecLongName = streamsNodeAudioStreamListAudioStream["CodecLongName"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTagString"].isNull())
				audioStreamObject.codecTagString = streamsNodeAudioStreamListAudioStream["CodecTagString"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTag"].isNull())
				audioStreamObject.codecTag = streamsNodeAudioStreamListAudioStream["CodecTag"].asString();
			if(!streamsNodeAudioStreamListAudioStream["SampleFmt"].isNull())
				audioStreamObject.sampleFmt = streamsNodeAudioStreamListAudioStream["SampleFmt"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Samplerate"].isNull())
				audioStreamObject.samplerate = streamsNodeAudioStreamListAudioStream["Samplerate"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Channels"].isNull())
				audioStreamObject.channels = streamsNodeAudioStreamListAudioStream["Channels"].asString();
			if(!streamsNodeAudioStreamListAudioStream["ChannelLayout"].isNull())
				audioStreamObject.channelLayout = streamsNodeAudioStreamListAudioStream["ChannelLayout"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Timebase"].isNull())
				audioStreamObject.timebase = streamsNodeAudioStreamListAudioStream["Timebase"].asString();
			if(!streamsNodeAudioStreamListAudioStream["StartTime"].isNull())
				audioStreamObject.startTime = streamsNodeAudioStreamListAudioStream["StartTime"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Duration"].isNull())
				audioStreamObject.duration = streamsNodeAudioStreamListAudioStream["Duration"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Bitrate"].isNull())
				audioStreamObject.bitrate = streamsNodeAudioStreamListAudioStream["Bitrate"].asString();
			if(!streamsNodeAudioStreamListAudioStream["NumFrames"].isNull())
				audioStreamObject.numFrames = streamsNodeAudioStreamListAudioStream["NumFrames"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Lang"].isNull())
				audioStreamObject.lang = streamsNodeAudioStreamListAudioStream["Lang"].asString();
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

