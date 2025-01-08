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

#include <alibabacloud/vod/model/BatchGetMediaInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

BatchGetMediaInfosResult::BatchGetMediaInfosResult() :
	ServiceResult()
{}

BatchGetMediaInfosResult::BatchGetMediaInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetMediaInfosResult::~BatchGetMediaInfosResult()
{}

void BatchGetMediaInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaInfosNode = value["MediaInfos"]["MediaBasicInfo"];
	for (auto valueMediaInfosMediaBasicInfo : allMediaInfosNode)
	{
		MediaBasicInfo mediaInfosObject;
		if(!valueMediaInfosMediaBasicInfo["MediaId"].isNull())
			mediaInfosObject.mediaId = valueMediaInfosMediaBasicInfo["MediaId"].asString();
		auto allPlayInfoListNode = valueMediaInfosMediaBasicInfo["PlayInfoList"]["PlayInfo"];
		for (auto valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo : allPlayInfoListNode)
		{
			MediaBasicInfo::PlayInfo playInfoListObject;
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["CreationTime"].isNull())
				playInfoListObject.creationTime = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["CreationTime"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Status"].isNull())
				playInfoListObject.status = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Status"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Specification"].isNull())
				playInfoListObject.specification = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Specification"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Complexity"].isNull())
				playInfoListObject.complexity = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Complexity"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["NarrowBandType"].isNull())
				playInfoListObject.narrowBandType = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["NarrowBandType"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Height"].isNull())
				playInfoListObject.height = std::stol(valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Height"].asString());
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Bitrate"].isNull())
				playInfoListObject.bitrate = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Bitrate"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["ModificationTime"].isNull())
				playInfoListObject.modificationTime = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["ModificationTime"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["WatermarkId"].isNull())
				playInfoListObject.watermarkId = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["WatermarkId"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Encrypt"].isNull())
				playInfoListObject.encrypt = std::stol(valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Encrypt"].asString());
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Definition"].isNull())
				playInfoListObject.definition = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Definition"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Rand"].isNull())
				playInfoListObject.rand = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Rand"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["EncryptType"].isNull())
				playInfoListObject.encryptType = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["EncryptType"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["EncryptMode"].isNull())
				playInfoListObject.encryptMode = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["EncryptMode"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["PreprocessStatus"].isNull())
				playInfoListObject.preprocessStatus = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["PreprocessStatus"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["StreamType"].isNull())
				playInfoListObject.streamType = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["StreamType"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["JobId"].isNull())
				playInfoListObject.jobId = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["JobId"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Plaintext"].isNull())
				playInfoListObject.plaintext = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Plaintext"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Size"].isNull())
				playInfoListObject.size = std::stol(valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Size"].asString());
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Width"].isNull())
				playInfoListObject.width = std::stol(valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Width"].asString());
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Fps"].isNull())
				playInfoListObject.fps = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Fps"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Duration"].isNull())
				playInfoListObject.duration = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Duration"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["PlayURL"].isNull())
				playInfoListObject.playURL = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["PlayURL"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Format"].isNull())
				playInfoListObject.format = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["Format"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["HDRType"].isNull())
				playInfoListObject.hDRType = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["HDRType"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["BitDepth"].isNull())
				playInfoListObject.bitDepth = std::stoi(valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["BitDepth"].asString());
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["JobType"].isNull())
				playInfoListObject.jobType = std::stoi(valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["JobType"].asString());
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["JobExt"].isNull())
				playInfoListObject.jobExt = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["JobExt"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["CodecName"].isNull())
				playInfoListObject.codecName = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["CodecName"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["TemplateId"].isNull())
				playInfoListObject.templateId = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["TemplateId"].asString();
			if(!valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["TemplateGroupId"].isNull())
				playInfoListObject.templateGroupId = valueMediaInfosMediaBasicInfoPlayInfoListPlayInfo["TemplateGroupId"].asString();
			mediaInfosObject.playInfoList.push_back(playInfoListObject);
		}
		auto mediaInfoNode = value["MediaInfo"];
		if(!mediaInfoNode["StorageLocation"].isNull())
			mediaInfosObject.mediaInfo.storageLocation = mediaInfoNode["StorageLocation"].asString();
		if(!mediaInfoNode["CreationTime"].isNull())
			mediaInfosObject.mediaInfo.creationTime = mediaInfoNode["CreationTime"].asString();
		if(!mediaInfoNode["Status"].isNull())
			mediaInfosObject.mediaInfo.status = mediaInfoNode["Status"].asString();
		if(!mediaInfoNode["CateId"].isNull())
			mediaInfosObject.mediaInfo.cateId = std::stol(mediaInfoNode["CateId"].asString());
		if(!mediaInfoNode["MediaId"].isNull())
			mediaInfosObject.mediaInfo.mediaId = mediaInfoNode["MediaId"].asString();
		if(!mediaInfoNode["DownloadSwitch"].isNull())
			mediaInfosObject.mediaInfo.downloadSwitch = mediaInfoNode["DownloadSwitch"].asString();
		if(!mediaInfoNode["Tags"].isNull())
			mediaInfosObject.mediaInfo.tags = mediaInfoNode["Tags"].asString();
		if(!mediaInfoNode["ModificationTime"].isNull())
			mediaInfosObject.mediaInfo.modificationTime = mediaInfoNode["ModificationTime"].asString();
		if(!mediaInfoNode["RegionId"].isNull())
			mediaInfosObject.mediaInfo.regionId = mediaInfoNode["RegionId"].asString();
		if(!mediaInfoNode["CateName"].isNull())
			mediaInfosObject.mediaInfo.cateName = mediaInfoNode["CateName"].asString();
		if(!mediaInfoNode["Description"].isNull())
			mediaInfosObject.mediaInfo.description = mediaInfoNode["Description"].asString();
		if(!mediaInfoNode["PreprocessStatus"].isNull())
			mediaInfosObject.mediaInfo.preprocessStatus = mediaInfoNode["PreprocessStatus"].asString();
		if(!mediaInfoNode["AppId"].isNull())
			mediaInfosObject.mediaInfo.appId = mediaInfoNode["AppId"].asString();
		if(!mediaInfoNode["CoverURL"].isNull())
			mediaInfosObject.mediaInfo.coverURL = mediaInfoNode["CoverURL"].asString();
		if(!mediaInfoNode["TemplateGroupId"].isNull())
			mediaInfosObject.mediaInfo.templateGroupId = mediaInfoNode["TemplateGroupId"].asString();
		if(!mediaInfoNode["Title"].isNull())
			mediaInfosObject.mediaInfo.title = mediaInfoNode["Title"].asString();
		if(!mediaInfoNode["StorageClass"].isNull())
			mediaInfosObject.mediaInfo.storageClass = mediaInfoNode["StorageClass"].asString();
		if(!mediaInfoNode["RestoreStatus"].isNull())
			mediaInfosObject.mediaInfo.restoreStatus = mediaInfoNode["RestoreStatus"].asString();
		if(!mediaInfoNode["RestoreExpiration"].isNull())
			mediaInfosObject.mediaInfo.restoreExpiration = mediaInfoNode["RestoreExpiration"].asString();
		if(!mediaInfoNode["UserData"].isNull())
			mediaInfosObject.mediaInfo.userData = mediaInfoNode["UserData"].asString();
			auto allSnapshots = mediaInfoNode["Snapshots"]["Snapshot"];
			for (auto value : allSnapshots)
				mediaInfosObject.mediaInfo.snapshots.push_back(value.asString());
		auto mezzanineInfoNode = value["MezzanineInfo"];
		if(!mezzanineInfoNode["CreationTime"].isNull())
			mediaInfosObject.mezzanineInfo.creationTime = mezzanineInfoNode["CreationTime"].asString();
		if(!mezzanineInfoNode["Status"].isNull())
			mediaInfosObject.mezzanineInfo.status = mezzanineInfoNode["Status"].asString();
		if(!mezzanineInfoNode["FileURL"].isNull())
			mediaInfosObject.mezzanineInfo.fileURL = mezzanineInfoNode["FileURL"].asString();
		if(!mezzanineInfoNode["MediaId"].isNull())
			mediaInfosObject.mezzanineInfo.mediaId = mezzanineInfoNode["MediaId"].asString();
		if(!mezzanineInfoNode["Height"].isNull())
			mediaInfosObject.mezzanineInfo.height = std::stol(mezzanineInfoNode["Height"].asString());
		if(!mezzanineInfoNode["Bitrate"].isNull())
			mediaInfosObject.mezzanineInfo.bitrate = mezzanineInfoNode["Bitrate"].asString();
		if(!mezzanineInfoNode["FileName"].isNull())
			mediaInfosObject.mezzanineInfo.fileName = mezzanineInfoNode["FileName"].asString();
		if(!mezzanineInfoNode["Width"].isNull())
			mediaInfosObject.mezzanineInfo.width = std::stol(mezzanineInfoNode["Width"].asString());
		if(!mezzanineInfoNode["Size"].isNull())
			mediaInfosObject.mezzanineInfo.size = std::stol(mezzanineInfoNode["Size"].asString());
		if(!mezzanineInfoNode["CRC64"].isNull())
			mediaInfosObject.mezzanineInfo.cRC64 = mezzanineInfoNode["CRC64"].asString();
		if(!mezzanineInfoNode["Duration"].isNull())
			mediaInfosObject.mezzanineInfo.duration = mezzanineInfoNode["Duration"].asString();
		if(!mezzanineInfoNode["Fps"].isNull())
			mediaInfosObject.mezzanineInfo.fps = mezzanineInfoNode["Fps"].asString();
		auto allAudioStreamListNode = mezzanineInfoNode["AudioStreamList"]["AudioStream"];
		for (auto mezzanineInfoNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			MediaBasicInfo::MezzanineInfo::AudioStream audioStreamObject;
			if(!mezzanineInfoNodeAudioStreamListAudioStream["Index"].isNull())
				audioStreamObject.index = mezzanineInfoNodeAudioStreamListAudioStream["Index"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["Timebase"].isNull())
				audioStreamObject.timebase = mezzanineInfoNodeAudioStreamListAudioStream["Timebase"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["SampleFmt"].isNull())
				audioStreamObject.sampleFmt = mezzanineInfoNodeAudioStreamListAudioStream["SampleFmt"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["SampleRate"].isNull())
				audioStreamObject.sampleRate = mezzanineInfoNodeAudioStreamListAudioStream["SampleRate"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["ChannelLayout"].isNull())
				audioStreamObject.channelLayout = mezzanineInfoNodeAudioStreamListAudioStream["ChannelLayout"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["Lang"].isNull())
				audioStreamObject.lang = mezzanineInfoNodeAudioStreamListAudioStream["Lang"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["CodecLongName"].isNull())
				audioStreamObject.codecLongName = mezzanineInfoNodeAudioStreamListAudioStream["CodecLongName"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["Channels"].isNull())
				audioStreamObject.channels = mezzanineInfoNodeAudioStreamListAudioStream["Channels"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["NumFrames"].isNull())
				audioStreamObject.numFrames = mezzanineInfoNodeAudioStreamListAudioStream["NumFrames"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["Bitrate"].isNull())
				audioStreamObject.bitrate = mezzanineInfoNodeAudioStreamListAudioStream["Bitrate"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["CodecTagString"].isNull())
				audioStreamObject.codecTagString = mezzanineInfoNodeAudioStreamListAudioStream["CodecTagString"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["StartTime"].isNull())
				audioStreamObject.startTime = mezzanineInfoNodeAudioStreamListAudioStream["StartTime"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["CodecName"].isNull())
				audioStreamObject.codecName = mezzanineInfoNodeAudioStreamListAudioStream["CodecName"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["Duration"].isNull())
				audioStreamObject.duration = mezzanineInfoNodeAudioStreamListAudioStream["Duration"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["CodecTag"].isNull())
				audioStreamObject.codecTag = mezzanineInfoNodeAudioStreamListAudioStream["CodecTag"].asString();
			if(!mezzanineInfoNodeAudioStreamListAudioStream["CodecTimeBase"].isNull())
				audioStreamObject.codecTimeBase = mezzanineInfoNodeAudioStreamListAudioStream["CodecTimeBase"].asString();
			mediaInfosObject.mezzanineInfo.audioStreamList.push_back(audioStreamObject);
		}
		auto allVideoStreamListNode = mezzanineInfoNode["VideoStreamList"]["VideoStream"];
		for (auto mezzanineInfoNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			MediaBasicInfo::MezzanineInfo::VideoStream videoStreamObject;
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Timebase"].isNull())
				videoStreamObject.timebase = mezzanineInfoNodeVideoStreamListVideoStream["Timebase"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Index"].isNull())
				videoStreamObject.index = mezzanineInfoNodeVideoStreamListVideoStream["Index"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["AvgFPS"].isNull())
				videoStreamObject.avgFPS = mezzanineInfoNodeVideoStreamListVideoStream["AvgFPS"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["PixFmt"].isNull())
				videoStreamObject.pixFmt = mezzanineInfoNodeVideoStreamListVideoStream["PixFmt"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Lang"].isNull())
				videoStreamObject.lang = mezzanineInfoNodeVideoStreamListVideoStream["Lang"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Sar"].isNull())
				videoStreamObject.sar = mezzanineInfoNodeVideoStreamListVideoStream["Sar"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Height"].isNull())
				videoStreamObject.height = mezzanineInfoNodeVideoStreamListVideoStream["Height"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["CodecLongName"].isNull())
				videoStreamObject.codecLongName = mezzanineInfoNodeVideoStreamListVideoStream["CodecLongName"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["NumFrames"].isNull())
				videoStreamObject.numFrames = mezzanineInfoNodeVideoStreamListVideoStream["NumFrames"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Bitrate"].isNull())
				videoStreamObject.bitrate = mezzanineInfoNodeVideoStreamListVideoStream["Bitrate"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Rotate"].isNull())
				videoStreamObject.rotate = mezzanineInfoNodeVideoStreamListVideoStream["Rotate"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["CodecTagString"].isNull())
				videoStreamObject.codecTagString = mezzanineInfoNodeVideoStreamListVideoStream["CodecTagString"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["HasBFrames"].isNull())
				videoStreamObject.hasBFrames = mezzanineInfoNodeVideoStreamListVideoStream["HasBFrames"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Profile"].isNull())
				videoStreamObject.profile = mezzanineInfoNodeVideoStreamListVideoStream["Profile"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["StartTime"].isNull())
				videoStreamObject.startTime = mezzanineInfoNodeVideoStreamListVideoStream["StartTime"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Dar"].isNull())
				videoStreamObject.dar = mezzanineInfoNodeVideoStreamListVideoStream["Dar"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["CodecName"].isNull())
				videoStreamObject.codecName = mezzanineInfoNodeVideoStreamListVideoStream["CodecName"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Width"].isNull())
				videoStreamObject.width = mezzanineInfoNodeVideoStreamListVideoStream["Width"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Duration"].isNull())
				videoStreamObject.duration = mezzanineInfoNodeVideoStreamListVideoStream["Duration"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Fps"].isNull())
				videoStreamObject.fps = mezzanineInfoNodeVideoStreamListVideoStream["Fps"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["CodecTag"].isNull())
				videoStreamObject.codecTag = mezzanineInfoNodeVideoStreamListVideoStream["CodecTag"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["CodecTimeBase"].isNull())
				videoStreamObject.codecTimeBase = mezzanineInfoNodeVideoStreamListVideoStream["CodecTimeBase"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["Level"].isNull())
				videoStreamObject.level = mezzanineInfoNodeVideoStreamListVideoStream["Level"].asString();
			if(!mezzanineInfoNodeVideoStreamListVideoStream["HDRType"].isNull())
				videoStreamObject.hDRType = mezzanineInfoNodeVideoStreamListVideoStream["HDRType"].asString();
			mediaInfosObject.mezzanineInfo.videoStreamList.push_back(videoStreamObject);
		}
		mediaInfos_.push_back(mediaInfosObject);
	}
	auto allNonExistMediaIds = value["NonExistMediaIds"]["MediaId"];
	for (const auto &item : allNonExistMediaIds)
		nonExistMediaIds_.push_back(item.asString());
	auto allForbiddenMediaIds = value["ForbiddenMediaIds"]["MediaId"];
	for (const auto &item : allForbiddenMediaIds)
		forbiddenMediaIds_.push_back(item.asString());

}

std::vector<std::string> BatchGetMediaInfosResult::getNonExistMediaIds()const
{
	return nonExistMediaIds_;
}

std::vector<BatchGetMediaInfosResult::MediaBasicInfo> BatchGetMediaInfosResult::getMediaInfos()const
{
	return mediaInfos_;
}

std::vector<std::string> BatchGetMediaInfosResult::getForbiddenMediaIds()const
{
	return forbiddenMediaIds_;
}

