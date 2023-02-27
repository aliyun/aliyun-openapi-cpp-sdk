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

#include <alibabacloud/ice/model/SubmitSyncMediaInfoJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

SubmitSyncMediaInfoJobResult::SubmitSyncMediaInfoJobResult() :
	ServiceResult()
{}

SubmitSyncMediaInfoJobResult::SubmitSyncMediaInfoJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitSyncMediaInfoJobResult::~SubmitSyncMediaInfoJobResult()
{}

void SubmitSyncMediaInfoJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaInfoJobNode = value["MediaInfoJob"];
	if(!mediaInfoJobNode["Name"].isNull())
		mediaInfoJob_.name = mediaInfoJobNode["Name"].asString();
	if(!mediaInfoJobNode["TriggerSource"].isNull())
		mediaInfoJob_.triggerSource = mediaInfoJobNode["TriggerSource"].asString();
	if(!mediaInfoJobNode["JobId"].isNull())
		mediaInfoJob_.jobId = mediaInfoJobNode["JobId"].asString();
	if(!mediaInfoJobNode["Async"].isNull())
		mediaInfoJob_.async = mediaInfoJobNode["Async"].asString() == "true";
	if(!mediaInfoJobNode["UserData"].isNull())
		mediaInfoJob_.userData = mediaInfoJobNode["UserData"].asString();
	if(!mediaInfoJobNode["Status"].isNull())
		mediaInfoJob_.status = mediaInfoJobNode["Status"].asString();
	if(!mediaInfoJobNode["SubmitResultJson"].isNull())
		mediaInfoJob_.submitResultJson = mediaInfoJobNode["SubmitResultJson"].asString();
	if(!mediaInfoJobNode["SubmitTime"].isNull())
		mediaInfoJob_.submitTime = mediaInfoJobNode["SubmitTime"].asString();
	if(!mediaInfoJobNode["FinishTime"].isNull())
		mediaInfoJob_.finishTime = mediaInfoJobNode["FinishTime"].asString();
	if(!mediaInfoJobNode["RequestId"].isNull())
		mediaInfoJob_.requestId = mediaInfoJobNode["RequestId"].asString();
	auto inputNode = mediaInfoJobNode["Input"];
	if(!inputNode["Type"].isNull())
		mediaInfoJob_.input.type = inputNode["Type"].asString();
	if(!inputNode["Media"].isNull())
		mediaInfoJob_.input.media = inputNode["Media"].asString();
	auto scheduleConfigNode = mediaInfoJobNode["ScheduleConfig"];
	if(!scheduleConfigNode["PipelineId"].isNull())
		mediaInfoJob_.scheduleConfig.pipelineId = scheduleConfigNode["PipelineId"].asString();
	if(!scheduleConfigNode["Priority"].isNull())
		mediaInfoJob_.scheduleConfig.priority = std::stoi(scheduleConfigNode["Priority"].asString());
	auto mediaInfoPropertyNode = mediaInfoJobNode["MediaInfoProperty"];
	auto allAudioStreamInfoListNode = mediaInfoPropertyNode["AudioStreamInfoList"]["AudioStreamInfoListItem"];
	for (auto mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem : allAudioStreamInfoListNode)
	{
		MediaInfoJob::MediaInfoProperty::AudioStreamInfoListItem audioStreamInfoListItemObject;
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Index"].isNull())
			audioStreamInfoListItemObject.index = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Index"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecName"].isNull())
			audioStreamInfoListItemObject.codecName = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecName"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecLongName"].isNull())
			audioStreamInfoListItemObject.codecLongName = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecLongName"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTimeBase"].isNull())
			audioStreamInfoListItemObject.codecTimeBase = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTimeBase"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTagString"].isNull())
			audioStreamInfoListItemObject.codecTagString = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTagString"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTag"].isNull())
			audioStreamInfoListItemObject.codecTag = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTag"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["SampleFmt"].isNull())
			audioStreamInfoListItemObject.sampleFmt = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["SampleFmt"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["SampleRate"].isNull())
			audioStreamInfoListItemObject.sampleRate = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["SampleRate"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Channels"].isNull())
			audioStreamInfoListItemObject.channels = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Channels"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["ChannelLayout"].isNull())
			audioStreamInfoListItemObject.channelLayout = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["ChannelLayout"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Timebase"].isNull())
			audioStreamInfoListItemObject.timebase = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Timebase"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["StartTime"].isNull())
			audioStreamInfoListItemObject.startTime = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["StartTime"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Duration"].isNull())
			audioStreamInfoListItemObject.duration = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Duration"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Bitrate"].isNull())
			audioStreamInfoListItemObject.bitrate = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Bitrate"].asString();
		if(!mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Lang"].isNull())
			audioStreamInfoListItemObject.lang = mediaInfoPropertyNodeAudioStreamInfoListAudioStreamInfoListItem["Lang"].asString();
		mediaInfoJob_.mediaInfoProperty.audioStreamInfoList.push_back(audioStreamInfoListItemObject);
	}
	auto allVideoStreamInfoListNode = mediaInfoPropertyNode["VideoStreamInfoList"]["VideoStreamInfoListItem"];
	for (auto mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem : allVideoStreamInfoListNode)
	{
		MediaInfoJob::MediaInfoProperty::VideoStreamInfoListItem videoStreamInfoListItemObject;
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Index"].isNull())
			videoStreamInfoListItemObject.index = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Index"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_name"].isNull())
			videoStreamInfoListItemObject.codec_name = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_name"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_long_name"].isNull())
			videoStreamInfoListItemObject.codec_long_name = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_long_name"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Profile"].isNull())
			videoStreamInfoListItemObject.profile = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Profile"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_time_base"].isNull())
			videoStreamInfoListItemObject.codec_time_base = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_time_base"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag_string"].isNull())
			videoStreamInfoListItemObject.codec_tag_string = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag_string"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag"].isNull())
			videoStreamInfoListItemObject.codec_tag = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Width"].isNull())
			videoStreamInfoListItemObject.width = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Width"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Height"].isNull())
			videoStreamInfoListItemObject.height = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Height"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Has_b_frames"].isNull())
			videoStreamInfoListItemObject.has_b_frames = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Has_b_frames"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Sar"].isNull())
			videoStreamInfoListItemObject.sar = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Sar"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Dar"].isNull())
			videoStreamInfoListItemObject.dar = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Dar"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["PixFmt"].isNull())
			videoStreamInfoListItemObject.pixFmt = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["PixFmt"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Level"].isNull())
			videoStreamInfoListItemObject.level = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Level"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Fps"].isNull())
			videoStreamInfoListItemObject.fps = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Fps"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Avg_fps"].isNull())
			videoStreamInfoListItemObject.avg_fps = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Avg_fps"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Time_base"].isNull())
			videoStreamInfoListItemObject.time_base = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Time_base"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Start_time"].isNull())
			videoStreamInfoListItemObject.start_time = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Start_time"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Duration"].isNull())
			videoStreamInfoListItemObject.duration = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Duration"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Bit_rate"].isNull())
			videoStreamInfoListItemObject.bit_rate = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Bit_rate"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["NumFrames"].isNull())
			videoStreamInfoListItemObject.numFrames = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["NumFrames"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Lang"].isNull())
			videoStreamInfoListItemObject.lang = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Lang"].asString();
		if(!mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Rotate"].isNull())
			videoStreamInfoListItemObject.rotate = mediaInfoPropertyNodeVideoStreamInfoListVideoStreamInfoListItem["Rotate"].asString();
		mediaInfoJob_.mediaInfoProperty.videoStreamInfoList.push_back(videoStreamInfoListItemObject);
	}
	auto fileBasicInfoNode = mediaInfoPropertyNode["FileBasicInfo"];
	if(!fileBasicInfoNode["MediaId"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.mediaId = fileBasicInfoNode["MediaId"].asString();
	if(!fileBasicInfoNode["FileName"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.fileName = fileBasicInfoNode["FileName"].asString();
	if(!fileBasicInfoNode["FileStatus"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.fileStatus = fileBasicInfoNode["FileStatus"].asString();
	if(!fileBasicInfoNode["FileType"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.fileType = fileBasicInfoNode["FileType"].asString();
	if(!fileBasicInfoNode["FileSize"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.fileSize = fileBasicInfoNode["FileSize"].asString();
	if(!fileBasicInfoNode["FileUrl"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.fileUrl = fileBasicInfoNode["FileUrl"].asString();
	if(!fileBasicInfoNode["Region"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.region = fileBasicInfoNode["Region"].asString();
	if(!fileBasicInfoNode["FormatName"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.formatName = fileBasicInfoNode["FormatName"].asString();
	if(!fileBasicInfoNode["Duration"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.duration = fileBasicInfoNode["Duration"].asString();
	if(!fileBasicInfoNode["Bitrate"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.bitrate = fileBasicInfoNode["Bitrate"].asString();
	if(!fileBasicInfoNode["Width"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.width = fileBasicInfoNode["Width"].asString();
	if(!fileBasicInfoNode["Height"].isNull())
		mediaInfoJob_.mediaInfoProperty.fileBasicInfo.height = fileBasicInfoNode["Height"].asString();

}

SubmitSyncMediaInfoJobResult::MediaInfoJob SubmitSyncMediaInfoJobResult::getMediaInfoJob()const
{
	return mediaInfoJob_;
}

