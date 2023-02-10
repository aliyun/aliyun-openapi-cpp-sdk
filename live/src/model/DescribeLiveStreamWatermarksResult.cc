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

#include <alibabacloud/live/model/DescribeLiveStreamWatermarksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamWatermarksResult::DescribeLiveStreamWatermarksResult() :
	ServiceResult()
{}

DescribeLiveStreamWatermarksResult::DescribeLiveStreamWatermarksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamWatermarksResult::~DescribeLiveStreamWatermarksResult()
{}

void DescribeLiveStreamWatermarksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWatermarkListNode = value["WatermarkList"]["Watermark"];
	for (auto valueWatermarkListWatermark : allWatermarkListNode)
	{
		Watermark watermarkListObject;
		if(!valueWatermarkListWatermark["Type"].isNull())
			watermarkListObject.type = std::stoi(valueWatermarkListWatermark["Type"].asString());
		if(!valueWatermarkListWatermark["XOffset"].isNull())
			watermarkListObject.xOffset = std::stof(valueWatermarkListWatermark["XOffset"].asString());
		if(!valueWatermarkListWatermark["RefWidth"].isNull())
			watermarkListObject.refWidth = std::stoi(valueWatermarkListWatermark["RefWidth"].asString());
		if(!valueWatermarkListWatermark["YOffset"].isNull())
			watermarkListObject.yOffset = std::stof(valueWatermarkListWatermark["YOffset"].asString());
		if(!valueWatermarkListWatermark["Height"].isNull())
			watermarkListObject.height = std::stoi(valueWatermarkListWatermark["Height"].asString());
		if(!valueWatermarkListWatermark["RefHeight"].isNull())
			watermarkListObject.refHeight = std::stoi(valueWatermarkListWatermark["RefHeight"].asString());
		if(!valueWatermarkListWatermark["PictureUrl"].isNull())
			watermarkListObject.pictureUrl = valueWatermarkListWatermark["PictureUrl"].asString();
		if(!valueWatermarkListWatermark["Transparency"].isNull())
			watermarkListObject.transparency = std::stoi(valueWatermarkListWatermark["Transparency"].asString());
		if(!valueWatermarkListWatermark["Description"].isNull())
			watermarkListObject.description = valueWatermarkListWatermark["Description"].asString();
		if(!valueWatermarkListWatermark["OffsetCorner"].isNull())
			watermarkListObject.offsetCorner = valueWatermarkListWatermark["OffsetCorner"].asString();
		if(!valueWatermarkListWatermark["RuleCount"].isNull())
			watermarkListObject.ruleCount = std::stoi(valueWatermarkListWatermark["RuleCount"].asString());
		if(!valueWatermarkListWatermark["Name"].isNull())
			watermarkListObject.name = valueWatermarkListWatermark["Name"].asString();
		if(!valueWatermarkListWatermark["TemplateId"].isNull())
			watermarkListObject.templateId = valueWatermarkListWatermark["TemplateId"].asString();
		watermarkList_.push_back(watermarkListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeLiveStreamWatermarksResult::Watermark> DescribeLiveStreamWatermarksResult::getWatermarkList()const
{
	return watermarkList_;
}

int DescribeLiveStreamWatermarksResult::getTotal()const
{
	return total_;
}

