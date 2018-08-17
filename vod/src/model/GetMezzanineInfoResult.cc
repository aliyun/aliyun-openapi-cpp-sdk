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
	if(!mezzanineNode["VideoId"].isNull())
		mezzanine_.videoId = mezzanineNode["VideoId"].asString();
	if(!mezzanineNode["Bitrate"].isNull())
		mezzanine_.bitrate = mezzanineNode["Bitrate"].asString();
	if(!mezzanineNode["CreationTime"].isNull())
		mezzanine_.creationTime = mezzanineNode["CreationTime"].asString();
	if(!mezzanineNode["Duration"].isNull())
		mezzanine_.duration = mezzanineNode["Duration"].asString();
	if(!mezzanineNode["Fps"].isNull())
		mezzanine_.fps = mezzanineNode["Fps"].asString();
	if(!mezzanineNode["Height"].isNull())
		mezzanine_.height = std::stol(mezzanineNode["Height"].asString());
	if(!mezzanineNode["Width"].isNull())
		mezzanine_.width = std::stol(mezzanineNode["Width"].asString());
	if(!mezzanineNode["Size"].isNull())
		mezzanine_.size = std::stol(mezzanineNode["Size"].asString());
	if(!mezzanineNode["Status"].isNull())
		mezzanine_.status = mezzanineNode["Status"].asString();
	if(!mezzanineNode["FileURL"].isNull())
		mezzanine_.fileURL = mezzanineNode["FileURL"].asString();
	if(!mezzanineNode["FileName"].isNull())
		mezzanine_.fileName = mezzanineNode["FileName"].asString();
	if(!mezzanineNode["CRC64"].isNull())
		mezzanine_.cRC64 = mezzanineNode["CRC64"].asString();
	if(!mezzanineNode["PreprocessStatus"].isNull())
		mezzanine_.preprocessStatus = mezzanineNode["PreprocessStatus"].asString();
	if(!mezzanineNode["OutputType"].isNull())
		mezzanine_.outputType = mezzanineNode["OutputType"].asString();
	auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
	for (auto value : allAudioStreamList)
	{
		Mezzanine::AudioStream audioStreamObject;
		if(!value["Index"].isNull())
			audioStreamObject.index = value["Index"].asString();
		if(!value["CodecName"].isNull())
			audioStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecLongName"].isNull())
			audioStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["CodecTimeBase"].isNull())
			audioStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecTagString"].isNull())
			audioStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			audioStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["SampleFmt"].isNull())
			audioStreamObject.sampleFmt = value["SampleFmt"].asString();
		if(!value["SampleRate"].isNull())
			audioStreamObject.sampleRate = value["SampleRate"].asString();
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
		mezzanine_.audioStreamList.push_back(audioStreamObject);
	}
	auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
	for (auto value : allVideoStreamList)
	{
		Mezzanine::VideoStream videoStreamObject;
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
		if(!value["NumFrames"].isNull())
			videoStreamObject.numFrames = value["NumFrames"].asString();
		if(!value["Lang"].isNull())
			videoStreamObject.lang = value["Lang"].asString();
		mezzanine_.videoStreamList.push_back(videoStreamObject);
	}

}

GetMezzanineInfoResult::Mezzanine GetMezzanineInfoResult::getMezzanine()const
{
	return mezzanine_;
}

