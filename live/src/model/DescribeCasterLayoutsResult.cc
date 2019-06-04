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

#include <alibabacloud/live/model/DescribeCasterLayoutsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterLayoutsResult::DescribeCasterLayoutsResult() :
	ServiceResult()
{}

DescribeCasterLayoutsResult::DescribeCasterLayoutsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterLayoutsResult::~DescribeCasterLayoutsResult()
{}

void DescribeCasterLayoutsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLayouts = value["Layouts"]["Layout"];
	for (auto value : allLayouts)
	{
		Layout layoutsObject;
		if(!value["LayoutId"].isNull())
			layoutsObject.layoutId = value["LayoutId"].asString();
		auto allVideoLayers = value["VideoLayers"]["VideoLayer"];
		for (auto value : allVideoLayers)
		{
			Layout::VideoLayer videoLayersObject;
			if(!value["FillMode"].isNull())
				videoLayersObject.fillMode = value["FillMode"].asString();
			if(!value["HeightNormalized"].isNull())
				videoLayersObject.heightNormalized = std::stof(value["HeightNormalized"].asString());
			if(!value["WidthNormalized"].isNull())
				videoLayersObject.widthNormalized = std::stof(value["WidthNormalized"].asString());
			if(!value["PositionRefer"].isNull())
				videoLayersObject.positionRefer = value["PositionRefer"].asString();
			if(!value["FixedDelayDuration"].isNull())
				videoLayersObject.fixedDelayDuration = std::stoi(value["FixedDelayDuration"].asString());
			auto allPositionNormalizeds = value["PositionNormalizeds"]["Position"];
			for (auto value : allPositionNormalizeds)
				videoLayersObject.positionNormalizeds.push_back(value.asString());
			layoutsObject.videoLayers.push_back(videoLayersObject);
		}
		auto allAudioLayers = value["AudioLayers"]["AudioLayer"];
		for (auto value : allAudioLayers)
		{
			Layout::AudioLayer audioLayersObject;
			if(!value["VolumeRate"].isNull())
				audioLayersObject.volumeRate = std::stof(value["VolumeRate"].asString());
			if(!value["ValidChannel"].isNull())
				audioLayersObject.validChannel = value["ValidChannel"].asString();
			if(!value["FixedDelayDuration"].isNull())
				audioLayersObject.fixedDelayDuration = std::stoi(value["FixedDelayDuration"].asString());
			layoutsObject.audioLayers.push_back(audioLayersObject);
		}
		auto allBlendList = value["BlendList"]["LocationId"];
		for (auto value : allBlendList)
			layoutsObject.blendList.push_back(value.asString());
		auto allMixList = value["MixList"]["LocationId"];
		for (auto value : allMixList)
			layoutsObject.mixList.push_back(value.asString());
		layouts_.push_back(layoutsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeCasterLayoutsResult::Layout> DescribeCasterLayoutsResult::getLayouts()const
{
	return layouts_;
}

int DescribeCasterLayoutsResult::getTotal()const
{
	return total_;
}

