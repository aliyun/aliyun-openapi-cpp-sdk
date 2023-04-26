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

#include <alibabacloud/vod/model/GetMezzanineInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMezzanineInfoResult::GetMezzanineInfoResult() :
	ServiceResult()
{}

GetMezzanineInfoResult::GetMezzanineInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMezzanineInfoResult::~GetMezzanineInfoResult()
{}

void GetMezzanineInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mezzanineNode = value["Mezzanine"];
	if(!mezzanineNode["CreationTime"].isNull())
		mezzanine_.creationTime = mezzanineNode["CreationTime"].asString();
	if(!mezzanineNode["Status"].isNull())
		mezzanine_.status = mezzanineNode["Status"].asString();
	if(!mezzanineNode["FileURL"].isNull())
		mezzanine_.fileURL = mezzanineNode["FileURL"].asString();
	if(!mezzanineNode["VideoId"].isNull())
		mezzanine_.videoId = mezzanineNode["VideoId"].asString();
	if(!mezzanineNode["Height"].isNull())
		mezzanine_.height = std::stol(mezzanineNode["Height"].asString());
	if(!mezzanineNode["Bitrate"].isNull())
		mezzanine_.bitrate = mezzanineNode["Bitrate"].asString();
	if(!mezzanineNode["FileName"].isNull())
		mezzanine_.fileName = mezzanineNode["FileName"].asString();
	if(!mezzanineNode["OutputType"].isNull())
		mezzanine_.outputType = mezzanineNode["OutputType"].asString();
	if(!mezzanineNode["PreprocessStatus"].isNull())
		mezzanine_.preprocessStatus = mezzanineNode["PreprocessStatus"].asString();
	if(!mezzanineNode["Width"].isNull())
		mezzanine_.width = std::stol(mezzanineNode["Width"].asString());
	if(!mezzanineNode["Size"].isNull())
		mezzanine_.size = std::stol(mezzanineNode["Size"].asString());
	if(!mezzanineNode["CRC64"].isNull())
		mezzanine_.cRC64 = mezzanineNode["CRC64"].asString();
	if(!mezzanineNode["Duration"].isNull())
		mezzanine_.duration = mezzanineNode["Duration"].asString();
	if(!mezzanineNode["Fps"].isNull())
		mezzanine_.fps = mezzanineNode["Fps"].asString();
	if(!mezzanineNode["StorageClass"].isNull())
		mezzanine_.storageClass = mezzanineNode["StorageClass"].asString();
	if(!mezzanineNode["RestoreStatus"].isNull())
		mezzanine_.restoreStatus = mezzanineNode["RestoreStatus"].asString();
	if(!mezzanineNode["RestoreExpiration"].isNull())
		mezzanine_.restoreExpiration = mezzanineNode["RestoreExpiration"].asString();
	auto allAudioStreamListNode = mezzanineNode["AudioStreamList"]["AudioStream"];
	for (auto mezzanineNodeAudioStreamListAudioStream : allAudioStreamListNode)
	{
		Mezzanine::AudioStream audioStreamObject;
		if(!mezzanineNodeAudioStreamListAudioStream["Index"].isNull())
			audioStreamObject.index = mezzanineNodeAudioStreamListAudioStream["Index"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["Timebase"].isNull())
			audioStreamObject.timebase = mezzanineNodeAudioStreamListAudioStream["Timebase"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["SampleFmt"].isNull())
			audioStreamObject.sampleFmt = mezzanineNodeAudioStreamListAudioStream["SampleFmt"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["SampleRate"].isNull())
			audioStreamObject.sampleRate = mezzanineNodeAudioStreamListAudioStream["SampleRate"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["ChannelLayout"].isNull())
			audioStreamObject.channelLayout = mezzanineNodeAudioStreamListAudioStream["ChannelLayout"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["Lang"].isNull())
			audioStreamObject.lang = mezzanineNodeAudioStreamListAudioStream["Lang"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["CodecLongName"].isNull())
			audioStreamObject.codecLongName = mezzanineNodeAudioStreamListAudioStream["CodecLongName"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["Channels"].isNull())
			audioStreamObject.channels = mezzanineNodeAudioStreamListAudioStream["Channels"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["NumFrames"].isNull())
			audioStreamObject.numFrames = mezzanineNodeAudioStreamListAudioStream["NumFrames"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["Bitrate"].isNull())
			audioStreamObject.bitrate = mezzanineNodeAudioStreamListAudioStream["Bitrate"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["CodecTagString"].isNull())
			audioStreamObject.codecTagString = mezzanineNodeAudioStreamListAudioStream["CodecTagString"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["StartTime"].isNull())
			audioStreamObject.startTime = mezzanineNodeAudioStreamListAudioStream["StartTime"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["CodecName"].isNull())
			audioStreamObject.codecName = mezzanineNodeAudioStreamListAudioStream["CodecName"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["Duration"].isNull())
			audioStreamObject.duration = mezzanineNodeAudioStreamListAudioStream["Duration"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["CodecTag"].isNull())
			audioStreamObject.codecTag = mezzanineNodeAudioStreamListAudioStream["CodecTag"].asString();
		if(!mezzanineNodeAudioStreamListAudioStream["CodecTimeBase"].isNull())
			audioStreamObject.codecTimeBase = mezzanineNodeAudioStreamListAudioStream["CodecTimeBase"].asString();
		mezzanine_.audioStreamList.push_back(audioStreamObject);
	}
	auto allVideoStreamListNode = mezzanineNode["VideoStreamList"]["VideoStream"];
	for (auto mezzanineNodeVideoStreamListVideoStream : allVideoStreamListNode)
	{
		Mezzanine::VideoStream videoStreamObject;
		if(!mezzanineNodeVideoStreamListVideoStream["Timebase"].isNull())
			videoStreamObject.timebase = mezzanineNodeVideoStreamListVideoStream["Timebase"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Index"].isNull())
			videoStreamObject.index = mezzanineNodeVideoStreamListVideoStream["Index"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["AvgFPS"].isNull())
			videoStreamObject.avgFPS = mezzanineNodeVideoStreamListVideoStream["AvgFPS"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["PixFmt"].isNull())
			videoStreamObject.pixFmt = mezzanineNodeVideoStreamListVideoStream["PixFmt"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Lang"].isNull())
			videoStreamObject.lang = mezzanineNodeVideoStreamListVideoStream["Lang"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Sar"].isNull())
			videoStreamObject.sar = mezzanineNodeVideoStreamListVideoStream["Sar"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Height"].isNull())
			videoStreamObject.height = mezzanineNodeVideoStreamListVideoStream["Height"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["CodecLongName"].isNull())
			videoStreamObject.codecLongName = mezzanineNodeVideoStreamListVideoStream["CodecLongName"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["NumFrames"].isNull())
			videoStreamObject.numFrames = mezzanineNodeVideoStreamListVideoStream["NumFrames"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Bitrate"].isNull())
			videoStreamObject.bitrate = mezzanineNodeVideoStreamListVideoStream["Bitrate"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Rotate"].isNull())
			videoStreamObject.rotate = mezzanineNodeVideoStreamListVideoStream["Rotate"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["CodecTagString"].isNull())
			videoStreamObject.codecTagString = mezzanineNodeVideoStreamListVideoStream["CodecTagString"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["HasBFrames"].isNull())
			videoStreamObject.hasBFrames = mezzanineNodeVideoStreamListVideoStream["HasBFrames"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Profile"].isNull())
			videoStreamObject.profile = mezzanineNodeVideoStreamListVideoStream["Profile"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["StartTime"].isNull())
			videoStreamObject.startTime = mezzanineNodeVideoStreamListVideoStream["StartTime"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Dar"].isNull())
			videoStreamObject.dar = mezzanineNodeVideoStreamListVideoStream["Dar"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["CodecName"].isNull())
			videoStreamObject.codecName = mezzanineNodeVideoStreamListVideoStream["CodecName"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Width"].isNull())
			videoStreamObject.width = mezzanineNodeVideoStreamListVideoStream["Width"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Duration"].isNull())
			videoStreamObject.duration = mezzanineNodeVideoStreamListVideoStream["Duration"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Fps"].isNull())
			videoStreamObject.fps = mezzanineNodeVideoStreamListVideoStream["Fps"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["CodecTag"].isNull())
			videoStreamObject.codecTag = mezzanineNodeVideoStreamListVideoStream["CodecTag"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["CodecTimeBase"].isNull())
			videoStreamObject.codecTimeBase = mezzanineNodeVideoStreamListVideoStream["CodecTimeBase"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["Level"].isNull())
			videoStreamObject.level = mezzanineNodeVideoStreamListVideoStream["Level"].asString();
		if(!mezzanineNodeVideoStreamListVideoStream["HDRType"].isNull())
			videoStreamObject.hDRType = mezzanineNodeVideoStreamListVideoStream["HDRType"].asString();
		mezzanine_.videoStreamList.push_back(videoStreamObject);
	}

}

GetMezzanineInfoResult::Mezzanine GetMezzanineInfoResult::getMezzanine()const
{
	return mezzanine_;
}

