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

#include <alibabacloud/live/model/DescribeLiveStreamsOnlineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamsOnlineListResult::DescribeLiveStreamsOnlineListResult() :
	ServiceResult()
{}

DescribeLiveStreamsOnlineListResult::DescribeLiveStreamsOnlineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamsOnlineListResult::~DescribeLiveStreamsOnlineListResult()
{}

void DescribeLiveStreamsOnlineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnlineInfoNode = value["OnlineInfo"]["LiveStreamOnlineInfo"];
	for (auto valueOnlineInfoLiveStreamOnlineInfo : allOnlineInfoNode)
	{
		LiveStreamOnlineInfo onlineInfoObject;
		if(!valueOnlineInfoLiveStreamOnlineInfo["AudioDataRate"].isNull())
			onlineInfoObject.audioDataRate = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["AudioDataRate"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["FrameRate"].isNull())
			onlineInfoObject.frameRate = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["FrameRate"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishUrl"].isNull())
			onlineInfoObject.publishUrl = valueOnlineInfoLiveStreamOnlineInfo["PublishUrl"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["StreamName"].isNull())
			onlineInfoObject.streamName = valueOnlineInfoLiveStreamOnlineInfo["StreamName"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["AudioCodecId"].isNull())
			onlineInfoObject.audioCodecId = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["AudioCodecId"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["Height"].isNull())
			onlineInfoObject.height = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["Height"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["VideoDataRate"].isNull())
			onlineInfoObject.videoDataRate = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["VideoDataRate"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["DomainName"].isNull())
			onlineInfoObject.domainName = valueOnlineInfoLiveStreamOnlineInfo["DomainName"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["TranscodeId"].isNull())
			onlineInfoObject.transcodeId = valueOnlineInfoLiveStreamOnlineInfo["TranscodeId"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["TranscodeDrm"].isNull())
			onlineInfoObject.transcodeDrm = valueOnlineInfoLiveStreamOnlineInfo["TranscodeDrm"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishDomain"].isNull())
			onlineInfoObject.publishDomain = valueOnlineInfoLiveStreamOnlineInfo["PublishDomain"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishTime"].isNull())
			onlineInfoObject.publishTime = valueOnlineInfoLiveStreamOnlineInfo["PublishTime"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["AppName"].isNull())
			onlineInfoObject.appName = valueOnlineInfoLiveStreamOnlineInfo["AppName"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishType"].isNull())
			onlineInfoObject.publishType = valueOnlineInfoLiveStreamOnlineInfo["PublishType"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["VideoCodecId"].isNull())
			onlineInfoObject.videoCodecId = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["VideoCodecId"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["Transcoded"].isNull())
			onlineInfoObject.transcoded = valueOnlineInfoLiveStreamOnlineInfo["Transcoded"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["Width"].isNull())
			onlineInfoObject.width = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["Width"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["ClientIp"].isNull())
			onlineInfoObject.clientIp = valueOnlineInfoLiveStreamOnlineInfo["ClientIp"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["ServerIp"].isNull())
			onlineInfoObject.serverIp = valueOnlineInfoLiveStreamOnlineInfo["ServerIp"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["StreamUrlArgs"].isNull())
			onlineInfoObject.streamUrlArgs = valueOnlineInfoLiveStreamOnlineInfo["StreamUrlArgs"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["CurrAudioDataRate"].isNull())
			onlineInfoObject.currAudioDataRate = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["CurrAudioDataRate"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["CurrVideoDataRate"].isNull())
			onlineInfoObject.currVideoDataRate = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["CurrVideoDataRate"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["CurrWidth"].isNull())
			onlineInfoObject.currWidth = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["CurrWidth"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["CurrHeight"].isNull())
			onlineInfoObject.currHeight = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["CurrHeight"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["CurrFrameRate"].isNull())
			onlineInfoObject.currFrameRate = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["CurrFrameRate"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["CurrVideoCodecId"].isNull())
			onlineInfoObject.currVideoCodecId = std::stoi(valueOnlineInfoLiveStreamOnlineInfo["CurrVideoCodecId"].asString());
		if(!valueOnlineInfoLiveStreamOnlineInfo["PlayDomain"].isNull())
			onlineInfoObject.playDomain = valueOnlineInfoLiveStreamOnlineInfo["PlayDomain"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PushDomain"].isNull())
			onlineInfoObject.pushDomain = valueOnlineInfoLiveStreamOnlineInfo["PushDomain"].asString();
		onlineInfo_.push_back(onlineInfoObject);
	}
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int DescribeLiveStreamsOnlineListResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveStreamsOnlineListResult::getTotalPage()const
{
	return totalPage_;
}

int DescribeLiveStreamsOnlineListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveStreamsOnlineListResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeLiveStreamsOnlineListResult::LiveStreamOnlineInfo> DescribeLiveStreamsOnlineListResult::getOnlineInfo()const
{
	return onlineInfo_;
}

