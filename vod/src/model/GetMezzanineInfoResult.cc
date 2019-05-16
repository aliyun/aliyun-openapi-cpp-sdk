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
	auto mezzanineInGetMezzanineInfoNode = value["Mezzanine"];
	if(!mezzanineInGetMezzanineInfoNode["VideoId"].isNull())
		mezzanineInGetMezzanineInfo_.videoId = mezzanineInGetMezzanineInfoNode["VideoId"].asString();
	if(!mezzanineInGetMezzanineInfoNode["Bitrate"].isNull())
		mezzanineInGetMezzanineInfo_.bitrate = mezzanineInGetMezzanineInfoNode["Bitrate"].asString();
	if(!mezzanineInGetMezzanineInfoNode["CreationTime"].isNull())
		mezzanineInGetMezzanineInfo_.creationTime = mezzanineInGetMezzanineInfoNode["CreationTime"].asString();
	if(!mezzanineInGetMezzanineInfoNode["Duration"].isNull())
		mezzanineInGetMezzanineInfo_.duration = mezzanineInGetMezzanineInfoNode["Duration"].asString();
	if(!mezzanineInGetMezzanineInfoNode["Fps"].isNull())
		mezzanineInGetMezzanineInfo_.fps = mezzanineInGetMezzanineInfoNode["Fps"].asString();
	if(!mezzanineInGetMezzanineInfoNode["Height"].isNull())
		mezzanineInGetMezzanineInfo_.height = std::stol(mezzanineInGetMezzanineInfoNode["Height"].asString());
	if(!mezzanineInGetMezzanineInfoNode["Width"].isNull())
		mezzanineInGetMezzanineInfo_.width = std::stol(mezzanineInGetMezzanineInfoNode["Width"].asString());
	if(!mezzanineInGetMezzanineInfoNode["Size"].isNull())
		mezzanineInGetMezzanineInfo_.size = std::stol(mezzanineInGetMezzanineInfoNode["Size"].asString());
	if(!mezzanineInGetMezzanineInfoNode["Status"].isNull())
		mezzanineInGetMezzanineInfo_.status = mezzanineInGetMezzanineInfoNode["Status"].asString();
	if(!mezzanineInGetMezzanineInfoNode["FileURL"].isNull())
		mezzanineInGetMezzanineInfo_.fileURL = mezzanineInGetMezzanineInfoNode["FileURL"].asString();
	if(!mezzanineInGetMezzanineInfoNode["FileName"].isNull())
		mezzanineInGetMezzanineInfo_.fileName = mezzanineInGetMezzanineInfoNode["FileName"].asString();
	if(!mezzanineInGetMezzanineInfoNode["CRC64"].isNull())
		mezzanineInGetMezzanineInfo_.cRC64 = mezzanineInGetMezzanineInfoNode["CRC64"].asString();
	if(!mezzanineInGetMezzanineInfoNode["PreprocessStatus"].isNull())
		mezzanineInGetMezzanineInfo_.preprocessStatus = mezzanineInGetMezzanineInfoNode["PreprocessStatus"].asString();
	if(!mezzanineInGetMezzanineInfoNode["OutputType"].isNull())
		mezzanineInGetMezzanineInfo_.outputType = mezzanineInGetMezzanineInfoNode["OutputType"].asString();
	auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
	for (auto value : allAudioStreamList)
	{
		MezzanineInGetMezzanineInfo::AudioStream audioStreamObject;
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
		mezzanineInGetMezzanineInfo_.audioStreamList.push_back(audioStreamObject);
	}
	auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
	for (auto value : allVideoStreamList)
	{
		MezzanineInGetMezzanineInfo::VideoStream videoStreamObject;
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
		if(!value["Rotate"].isNull())
			videoStreamObject.rotate = value["Rotate"].asString();
		mezzanineInGetMezzanineInfo_.videoStreamList.push_back(videoStreamObject);
	}

}

GetMezzanineInfoResult::MezzanineInGetMezzanineInfo GetMezzanineInfoResult::getMezzanineInGetMezzanineInfo()const
{
	return mezzanineInGetMezzanineInfo_;
}

