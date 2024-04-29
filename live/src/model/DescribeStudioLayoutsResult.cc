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

#include <alibabacloud/live/model/DescribeStudioLayoutsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeStudioLayoutsResult::DescribeStudioLayoutsResult() :
	ServiceResult()
{}

DescribeStudioLayoutsResult::DescribeStudioLayoutsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStudioLayoutsResult::~DescribeStudioLayoutsResult()
{}

void DescribeStudioLayoutsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStudioLayoutsNode = value["StudioLayouts"]["StudioLayout"];
	for (auto valueStudioLayoutsStudioLayout : allStudioLayoutsNode)
	{
		StudioLayout studioLayoutsObject;
		if(!valueStudioLayoutsStudioLayout["LayoutId"].isNull())
			studioLayoutsObject.layoutId = valueStudioLayoutsStudioLayout["LayoutId"].asString();
		if(!valueStudioLayoutsStudioLayout["LayoutName"].isNull())
			studioLayoutsObject.layoutName = valueStudioLayoutsStudioLayout["LayoutName"].asString();
		if(!valueStudioLayoutsStudioLayout["LayoutType"].isNull())
			studioLayoutsObject.layoutType = valueStudioLayoutsStudioLayout["LayoutType"].asString();
		auto allLayerOrderConfigListNode = valueStudioLayoutsStudioLayout["LayerOrderConfigList"]["LayerOrderConfig"];
		for (auto valueStudioLayoutsStudioLayoutLayerOrderConfigListLayerOrderConfig : allLayerOrderConfigListNode)
		{
			StudioLayout::LayerOrderConfig layerOrderConfigListObject;
			if(!valueStudioLayoutsStudioLayoutLayerOrderConfigListLayerOrderConfig["Id"].isNull())
				layerOrderConfigListObject.id = valueStudioLayoutsStudioLayoutLayerOrderConfigListLayerOrderConfig["Id"].asString();
			if(!valueStudioLayoutsStudioLayoutLayerOrderConfigListLayerOrderConfig["Type"].isNull())
				layerOrderConfigListObject.type = valueStudioLayoutsStudioLayoutLayerOrderConfigListLayerOrderConfig["Type"].asString();
			studioLayoutsObject.layerOrderConfigList.push_back(layerOrderConfigListObject);
		}
		auto allMediaInputConfigListNode = valueStudioLayoutsStudioLayout["MediaInputConfigList"]["MediaInputConfig"];
		for (auto valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig : allMediaInputConfigListNode)
		{
			StudioLayout::MediaInputConfig mediaInputConfigListObject;
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["ChannelId"].isNull())
				mediaInputConfigListObject.channelId = valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["ChannelId"].asString();
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["FillMode"].isNull())
				mediaInputConfigListObject.fillMode = valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["FillMode"].asString();
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["HeightNormalized"].isNull())
				mediaInputConfigListObject.heightNormalized = std::stof(valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["HeightNormalized"].asString());
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["Id"].isNull())
				mediaInputConfigListObject.id = valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["Id"].asString();
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["ImageMaterialId"].isNull())
				mediaInputConfigListObject.imageMaterialId = valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["ImageMaterialId"].asString();
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["Index"].isNull())
				mediaInputConfigListObject.index = std::stoi(valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["Index"].asString());
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["PositionRefer"].isNull())
				mediaInputConfigListObject.positionRefer = valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["PositionRefer"].asString();
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["VideoResourceId"].isNull())
				mediaInputConfigListObject.videoResourceId = valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["VideoResourceId"].asString();
			if(!valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["WidthNormalized"].isNull())
				mediaInputConfigListObject.widthNormalized = std::stof(valueStudioLayoutsStudioLayoutMediaInputConfigListMediaInputConfig["WidthNormalized"].asString());
			auto allPositionNormalized = value["PositionNormalized"]["Position"];
			for (auto value : allPositionNormalized)
				mediaInputConfigListObject.positionNormalized.push_back(value.asString());
			studioLayoutsObject.mediaInputConfigList.push_back(mediaInputConfigListObject);
		}
		auto allScreenInputConfigListNode = valueStudioLayoutsStudioLayout["ScreenInputConfigList"]["ScreenInputConfig"];
		for (auto valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig : allScreenInputConfigListNode)
		{
			StudioLayout::ScreenInputConfig screenInputConfigListObject;
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["ChannelId"].isNull())
				screenInputConfigListObject.channelId = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["ChannelId"].asString();
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["Color"].isNull())
				screenInputConfigListObject.color = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["Color"].asString();
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["HeightNormalized"].isNull())
				screenInputConfigListObject.heightNormalized = std::stof(valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["HeightNormalized"].asString());
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["Id"].isNull())
				screenInputConfigListObject.id = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["Id"].asString();
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["Index"].isNull())
				screenInputConfigListObject.index = std::stoi(valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["Index"].asString());
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["OnlyAudio"].isNull())
				screenInputConfigListObject.onlyAudio = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["OnlyAudio"].asString() == "true";
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["PortraitType"].isNull())
				screenInputConfigListObject.portraitType = std::stoi(valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["PortraitType"].asString());
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["PositionX"].isNull())
				screenInputConfigListObject.positionX = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["PositionX"].asString();
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["PositionY"].isNull())
				screenInputConfigListObject.positionY = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["PositionY"].asString();
			if(!valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["VideoResourceId"].isNull())
				screenInputConfigListObject.videoResourceId = valueStudioLayoutsStudioLayoutScreenInputConfigListScreenInputConfig["VideoResourceId"].asString();
			auto audioConfigNode = value["AudioConfig"];
			if(!audioConfigNode["ValidChannel"].isNull())
				screenInputConfigListObject.audioConfig.validChannel = audioConfigNode["ValidChannel"].asString();
			if(!audioConfigNode["VolumeRate"].isNull())
				screenInputConfigListObject.audioConfig.volumeRate = std::stof(audioConfigNode["VolumeRate"].asString());
			studioLayoutsObject.screenInputConfigList.push_back(screenInputConfigListObject);
		}
		auto bgImageConfigNode = value["BgImageConfig"];
		if(!bgImageConfigNode["Id"].isNull())
			studioLayoutsObject.bgImageConfig.id = bgImageConfigNode["Id"].asString();
		if(!bgImageConfigNode["ImageUrl"].isNull())
			studioLayoutsObject.bgImageConfig.imageUrl = bgImageConfigNode["ImageUrl"].asString();
		if(!bgImageConfigNode["LocationId"].isNull())
			studioLayoutsObject.bgImageConfig.locationId = bgImageConfigNode["LocationId"].asString();
		if(!bgImageConfigNode["MaterialId"].isNull())
			studioLayoutsObject.bgImageConfig.materialId = bgImageConfigNode["MaterialId"].asString();
		auto commonConfigNode = value["CommonConfig"];
		if(!commonConfigNode["ChannelId"].isNull())
			studioLayoutsObject.commonConfig.channelId = commonConfigNode["ChannelId"].asString();
		if(!commonConfigNode["VideoResourceId"].isNull())
			studioLayoutsObject.commonConfig.videoResourceId = commonConfigNode["VideoResourceId"].asString();
		studioLayouts_.push_back(studioLayoutsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeStudioLayoutsResult::StudioLayout> DescribeStudioLayoutsResult::getStudioLayouts()const
{
	return studioLayouts_;
}

int DescribeStudioLayoutsResult::getTotal()const
{
	return total_;
}

