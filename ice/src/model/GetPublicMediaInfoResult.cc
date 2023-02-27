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

#include <alibabacloud/ice/model/GetPublicMediaInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetPublicMediaInfoResult::GetPublicMediaInfoResult() :
	ServiceResult()
{}

GetPublicMediaInfoResult::GetPublicMediaInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPublicMediaInfoResult::~GetPublicMediaInfoResult()
{}

void GetPublicMediaInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaInfoNode = value["MediaInfo"];
	if(!mediaInfoNode["MediaId"].isNull())
		mediaInfo_.mediaId = mediaInfoNode["MediaId"].asString();
	auto allFileInfoListNode = mediaInfoNode["FileInfoList"]["FileInfo"];
	for (auto mediaInfoNodeFileInfoListFileInfo : allFileInfoListNode)
	{
		MediaInfo::FileInfo fileInfoObject;
		auto allAudioStreamInfoListNode = mediaInfoNodeFileInfoListFileInfo["AudioStreamInfoList"]["AudioStreamInfo"];
		for (auto mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo : allAudioStreamInfoListNode)
		{
			MediaInfo::FileInfo::AudioStreamInfo audioStreamInfoListObject;
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Index"].isNull())
				audioStreamInfoListObject.index = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Index"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecName"].isNull())
				audioStreamInfoListObject.codecName = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecName"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecLongName"].isNull())
				audioStreamInfoListObject.codecLongName = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecLongName"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecTimeBase"].isNull())
				audioStreamInfoListObject.codecTimeBase = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecTimeBase"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecTagString"].isNull())
				audioStreamInfoListObject.codecTagString = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecTagString"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecTag"].isNull())
				audioStreamInfoListObject.codecTag = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["CodecTag"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Profile"].isNull())
				audioStreamInfoListObject.profile = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Profile"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["SampleFmt"].isNull())
				audioStreamInfoListObject.sampleFmt = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["SampleFmt"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["SampleRate"].isNull())
				audioStreamInfoListObject.sampleRate = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["SampleRate"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Channels"].isNull())
				audioStreamInfoListObject.channels = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Channels"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["ChannelLayout"].isNull())
				audioStreamInfoListObject.channelLayout = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["ChannelLayout"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Timebase"].isNull())
				audioStreamInfoListObject.timebase = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Timebase"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["StartTime"].isNull())
				audioStreamInfoListObject.startTime = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["StartTime"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Duration"].isNull())
				audioStreamInfoListObject.duration = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Duration"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Bitrate"].isNull())
				audioStreamInfoListObject.bitrate = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Bitrate"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Fps"].isNull())
				audioStreamInfoListObject.fps = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Fps"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["NumFrames"].isNull())
				audioStreamInfoListObject.numFrames = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["NumFrames"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Lang"].isNull())
				audioStreamInfoListObject.lang = mediaInfoNodeFileInfoListFileInfoAudioStreamInfoListAudioStreamInfo["Lang"].asString();
			fileInfoObject.audioStreamInfoList.push_back(audioStreamInfoListObject);
		}
		auto allVideoStreamInfoListNode = mediaInfoNodeFileInfoListFileInfo["VideoStreamInfoList"]["VideoStreamInfo"];
		for (auto mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo : allVideoStreamInfoListNode)
		{
			MediaInfo::FileInfo::VideoStreamInfo videoStreamInfoListObject;
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Index"].isNull())
				videoStreamInfoListObject.index = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Index"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecName"].isNull())
				videoStreamInfoListObject.codecName = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecName"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecLongName"].isNull())
				videoStreamInfoListObject.codecLongName = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecLongName"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Profile"].isNull())
				videoStreamInfoListObject.profile = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Profile"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecTimeBase"].isNull())
				videoStreamInfoListObject.codecTimeBase = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecTimeBase"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecTagString"].isNull())
				videoStreamInfoListObject.codecTagString = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecTagString"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecTag"].isNull())
				videoStreamInfoListObject.codecTag = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["CodecTag"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Width"].isNull())
				videoStreamInfoListObject.width = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Width"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Height"].isNull())
				videoStreamInfoListObject.height = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Height"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["HasBFrames"].isNull())
				videoStreamInfoListObject.hasBFrames = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["HasBFrames"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Sar"].isNull())
				videoStreamInfoListObject.sar = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Sar"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Dar"].isNull())
				videoStreamInfoListObject.dar = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Dar"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["PixFmt"].isNull())
				videoStreamInfoListObject.pixFmt = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["PixFmt"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Level"].isNull())
				videoStreamInfoListObject.level = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Level"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Fps"].isNull())
				videoStreamInfoListObject.fps = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Fps"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["AvgFPS"].isNull())
				videoStreamInfoListObject.avgFPS = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["AvgFPS"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Timebase"].isNull())
				videoStreamInfoListObject.timebase = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Timebase"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["StartTime"].isNull())
				videoStreamInfoListObject.startTime = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["StartTime"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Duration"].isNull())
				videoStreamInfoListObject.duration = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Duration"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Bitrate"].isNull())
				videoStreamInfoListObject.bitrate = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Bitrate"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["NumFrames"].isNull())
				videoStreamInfoListObject.numFrames = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["NumFrames"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Lang"].isNull())
				videoStreamInfoListObject.lang = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Lang"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Rotate"].isNull())
				videoStreamInfoListObject.rotate = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Rotate"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Nb_frames"].isNull())
				videoStreamInfoListObject.nb_frames = mediaInfoNodeFileInfoListFileInfoVideoStreamInfoListVideoStreamInfo["Nb_frames"].asString();
			fileInfoObject.videoStreamInfoList.push_back(videoStreamInfoListObject);
		}
		auto allSubtitleStreamInfoListNode = mediaInfoNodeFileInfoListFileInfo["SubtitleStreamInfoList"]["SubtitleStreamInfo"];
		for (auto mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo : allSubtitleStreamInfoListNode)
		{
			MediaInfo::FileInfo::SubtitleStreamInfo subtitleStreamInfoListObject;
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Index"].isNull())
				subtitleStreamInfoListObject.index = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Index"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecName"].isNull())
				subtitleStreamInfoListObject.codecName = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecName"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecLongName"].isNull())
				subtitleStreamInfoListObject.codecLongName = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecLongName"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecTimeBase"].isNull())
				subtitleStreamInfoListObject.codecTimeBase = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecTimeBase"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecTagString"].isNull())
				subtitleStreamInfoListObject.codecTagString = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecTagString"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecTag"].isNull())
				subtitleStreamInfoListObject.codecTag = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["CodecTag"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Timebase"].isNull())
				subtitleStreamInfoListObject.timebase = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Timebase"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["StartTime"].isNull())
				subtitleStreamInfoListObject.startTime = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["StartTime"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Duration"].isNull())
				subtitleStreamInfoListObject.duration = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Duration"].asString();
			if(!mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Lang"].isNull())
				subtitleStreamInfoListObject.lang = mediaInfoNodeFileInfoListFileInfoSubtitleStreamInfoListSubtitleStreamInfo["Lang"].asString();
			fileInfoObject.subtitleStreamInfoList.push_back(subtitleStreamInfoListObject);
		}
		auto fileBasicInfoNode = value["FileBasicInfo"];
		if(!fileBasicInfoNode["FileName"].isNull())
			fileInfoObject.fileBasicInfo.fileName = fileBasicInfoNode["FileName"].asString();
		if(!fileBasicInfoNode["FileStatus"].isNull())
			fileInfoObject.fileBasicInfo.fileStatus = fileBasicInfoNode["FileStatus"].asString();
		if(!fileBasicInfoNode["FileType"].isNull())
			fileInfoObject.fileBasicInfo.fileType = fileBasicInfoNode["FileType"].asString();
		if(!fileBasicInfoNode["FileSize"].isNull())
			fileInfoObject.fileBasicInfo.fileSize = fileBasicInfoNode["FileSize"].asString();
		if(!fileBasicInfoNode["FileUrl"].isNull())
			fileInfoObject.fileBasicInfo.fileUrl = fileBasicInfoNode["FileUrl"].asString();
		if(!fileBasicInfoNode["Region"].isNull())
			fileInfoObject.fileBasicInfo.region = fileBasicInfoNode["Region"].asString();
		if(!fileBasicInfoNode["FormatName"].isNull())
			fileInfoObject.fileBasicInfo.formatName = fileBasicInfoNode["FormatName"].asString();
		if(!fileBasicInfoNode["Duration"].isNull())
			fileInfoObject.fileBasicInfo.duration = fileBasicInfoNode["Duration"].asString();
		if(!fileBasicInfoNode["Bitrate"].isNull())
			fileInfoObject.fileBasicInfo.bitrate = fileBasicInfoNode["Bitrate"].asString();
		if(!fileBasicInfoNode["Width"].isNull())
			fileInfoObject.fileBasicInfo.width = fileBasicInfoNode["Width"].asString();
		if(!fileBasicInfoNode["Height"].isNull())
			fileInfoObject.fileBasicInfo.height = fileBasicInfoNode["Height"].asString();
		mediaInfo_.fileInfoList.push_back(fileInfoObject);
	}
	auto mediaBasicInfoNode = mediaInfoNode["MediaBasicInfo"];
	if(!mediaBasicInfoNode["MediaId"].isNull())
		mediaInfo_.mediaBasicInfo.mediaId = mediaBasicInfoNode["MediaId"].asString();
	if(!mediaBasicInfoNode["MediaType"].isNull())
		mediaInfo_.mediaBasicInfo.mediaType = mediaBasicInfoNode["MediaType"].asString();
	if(!mediaBasicInfoNode["BusinessType"].isNull())
		mediaInfo_.mediaBasicInfo.businessType = mediaBasicInfoNode["BusinessType"].asString();
	if(!mediaBasicInfoNode["Source"].isNull())
		mediaInfo_.mediaBasicInfo.source = mediaBasicInfoNode["Source"].asString();
	if(!mediaBasicInfoNode["Title"].isNull())
		mediaInfo_.mediaBasicInfo.title = mediaBasicInfoNode["Title"].asString();
	if(!mediaBasicInfoNode["Description"].isNull())
		mediaInfo_.mediaBasicInfo.description = mediaBasicInfoNode["Description"].asString();
	if(!mediaBasicInfoNode["Category"].isNull())
		mediaInfo_.mediaBasicInfo.category = mediaBasicInfoNode["Category"].asString();
	if(!mediaBasicInfoNode["MediaTags"].isNull())
		mediaInfo_.mediaBasicInfo.mediaTags = mediaBasicInfoNode["MediaTags"].asString();
	if(!mediaBasicInfoNode["CoverURL"].isNull())
		mediaInfo_.mediaBasicInfo.coverURL = mediaBasicInfoNode["CoverURL"].asString();
	if(!mediaBasicInfoNode["UserData"].isNull())
		mediaInfo_.mediaBasicInfo.userData = mediaBasicInfoNode["UserData"].asString();
	if(!mediaBasicInfoNode["Snapshots"].isNull())
		mediaInfo_.mediaBasicInfo.snapshots = mediaBasicInfoNode["Snapshots"].asString();
	if(!mediaBasicInfoNode["Status"].isNull())
		mediaInfo_.mediaBasicInfo.status = mediaBasicInfoNode["Status"].asString();
	if(!mediaBasicInfoNode["TranscodeStatus"].isNull())
		mediaInfo_.mediaBasicInfo.transcodeStatus = mediaBasicInfoNode["TranscodeStatus"].asString();
	if(!mediaBasicInfoNode["CreateTime"].isNull())
		mediaInfo_.mediaBasicInfo.createTime = mediaBasicInfoNode["CreateTime"].asString();
	if(!mediaBasicInfoNode["ModifiedTime"].isNull())
		mediaInfo_.mediaBasicInfo.modifiedTime = mediaBasicInfoNode["ModifiedTime"].asString();
	if(!mediaBasicInfoNode["DeletedTime"].isNull())
		mediaInfo_.mediaBasicInfo.deletedTime = mediaBasicInfoNode["DeletedTime"].asString();
	if(!mediaBasicInfoNode["SpriteImages"].isNull())
		mediaInfo_.mediaBasicInfo.spriteImages = mediaBasicInfoNode["SpriteImages"].asString();
	auto dynamicMetaDataNode = mediaInfoNode["DynamicMetaData"];
	if(!dynamicMetaDataNode["Type"].isNull())
		mediaInfo_.dynamicMetaData.type = dynamicMetaDataNode["Type"].asString();
	if(!dynamicMetaDataNode["Data"].isNull())
		mediaInfo_.dynamicMetaData.data = dynamicMetaDataNode["Data"].asString();

}

GetPublicMediaInfoResult::MediaInfo GetPublicMediaInfoResult::getMediaInfo()const
{
	return mediaInfo_;
}

