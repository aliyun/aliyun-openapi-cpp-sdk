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

#include <alibabacloud/live/model/DescribeLiveStreamMonitorListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamMonitorListResult::DescribeLiveStreamMonitorListResult() :
	ServiceResult()
{}

DescribeLiveStreamMonitorListResult::DescribeLiveStreamMonitorListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamMonitorListResult::~DescribeLiveStreamMonitorListResult()
{}

void DescribeLiveStreamMonitorListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveStreamMonitorListNode = value["LiveStreamMonitorList"]["LiveStreamMonitorInfo"];
	for (auto valueLiveStreamMonitorListLiveStreamMonitorInfo : allLiveStreamMonitorListNode)
	{
		LiveStreamMonitorInfo liveStreamMonitorListObject;
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["MonitorConfig"].isNull())
			liveStreamMonitorListObject.monitorConfig = valueLiveStreamMonitorListLiveStreamMonitorInfo["MonitorConfig"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["Status"].isNull())
			liveStreamMonitorListObject.status = std::stoi(valueLiveStreamMonitorListLiveStreamMonitorInfo["Status"].asString());
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["MonitorId"].isNull())
			liveStreamMonitorListObject.monitorId = valueLiveStreamMonitorListLiveStreamMonitorInfo["MonitorId"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["Domain"].isNull())
			liveStreamMonitorListObject.domain = valueLiveStreamMonitorListLiveStreamMonitorInfo["Domain"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["CallbackUrl"].isNull())
			liveStreamMonitorListObject.callbackUrl = valueLiveStreamMonitorListLiveStreamMonitorInfo["CallbackUrl"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["AudioFrom"].isNull())
			liveStreamMonitorListObject.audioFrom = std::stoi(valueLiveStreamMonitorListLiveStreamMonitorInfo["AudioFrom"].asString());
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["DingTalkWebHookUrl"].isNull())
			liveStreamMonitorListObject.dingTalkWebHookUrl = valueLiveStreamMonitorListLiveStreamMonitorInfo["DingTalkWebHookUrl"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["MonitorName"].isNull())
			liveStreamMonitorListObject.monitorName = valueLiveStreamMonitorListLiveStreamMonitorInfo["MonitorName"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["StopTime"].isNull())
			liveStreamMonitorListObject.stopTime = valueLiveStreamMonitorListLiveStreamMonitorInfo["StopTime"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["StartTime"].isNull())
			liveStreamMonitorListObject.startTime = valueLiveStreamMonitorListLiveStreamMonitorInfo["StartTime"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["OutputTemplate"].isNull())
			liveStreamMonitorListObject.outputTemplate = valueLiveStreamMonitorListLiveStreamMonitorInfo["OutputTemplate"].asString();
		if(!valueLiveStreamMonitorListLiveStreamMonitorInfo["Region"].isNull())
			liveStreamMonitorListObject.region = valueLiveStreamMonitorListLiveStreamMonitorInfo["Region"].asString();
		auto allInputListNode = valueLiveStreamMonitorListLiveStreamMonitorInfo["InputList"]["InputConfig"];
		for (auto valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig : allInputListNode)
		{
			LiveStreamMonitorInfo::InputConfig inputListObject;
			if(!valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["Index"].isNull())
				inputListObject.index = std::stoi(valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["Index"].asString());
			if(!valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["InputUrl"].isNull())
				inputListObject.inputUrl = valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["InputUrl"].asString();
			if(!valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["LayoutId"].isNull())
				inputListObject.layoutId = std::stoi(valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["LayoutId"].asString());
			if(!valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["StreamName"].isNull())
				inputListObject.streamName = valueLiveStreamMonitorListLiveStreamMonitorInfoInputListInputConfig["StreamName"].asString();
			auto layoutConfigNode = value["LayoutConfig"];
			if(!layoutConfigNode["FillMode"].isNull())
				inputListObject.layoutConfig.fillMode = layoutConfigNode["FillMode"].asString();
			if(!layoutConfigNode["PositionRefer"].isNull())
				inputListObject.layoutConfig.positionRefer = layoutConfigNode["PositionRefer"].asString();
				auto allPositionNormalized = layoutConfigNode["PositionNormalized"]["Position"];
				for (auto value : allPositionNormalized)
					inputListObject.layoutConfig.positionNormalized.push_back(value.asString());
				auto allSizeNormalized = layoutConfigNode["SizeNormalized"]["Size"];
				for (auto value : allSizeNormalized)
					inputListObject.layoutConfig.sizeNormalized.push_back(value.asString());
			auto playConfigNode = value["PlayConfig"];
			if(!playConfigNode["VolumeRate"].isNull())
				inputListObject.playConfig.volumeRate = std::stof(playConfigNode["VolumeRate"].asString());
			liveStreamMonitorListObject.inputList.push_back(inputListObject);
		}
		auto outputUrlsNode = value["OutputUrls"];
		if(!outputUrlsNode["FlvUrl"].isNull())
			liveStreamMonitorListObject.outputUrls.flvUrl = outputUrlsNode["FlvUrl"].asString();
		if(!outputUrlsNode["RtmpUrl"].isNull())
			liveStreamMonitorListObject.outputUrls.rtmpUrl = outputUrlsNode["RtmpUrl"].asString();
		liveStreamMonitorList_.push_back(liveStreamMonitorListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeLiveStreamMonitorListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeLiveStreamMonitorListResult::LiveStreamMonitorInfo> DescribeLiveStreamMonitorListResult::getLiveStreamMonitorList()const
{
	return liveStreamMonitorList_;
}

