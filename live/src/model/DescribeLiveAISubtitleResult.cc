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

#include <alibabacloud/live/model/DescribeLiveAISubtitleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveAISubtitleResult::DescribeLiveAISubtitleResult() :
	ServiceResult()
{}

DescribeLiveAISubtitleResult::DescribeLiveAISubtitleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveAISubtitleResult::~DescribeLiveAISubtitleResult()
{}

void DescribeLiveAISubtitleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubtitleConfigsNode = value["SubtitleConfigs"]["SubtitleConfig"];
	for (auto valueSubtitleConfigsSubtitleConfig : allSubtitleConfigsNode)
	{
		SubtitleConfig subtitleConfigsObject;
		if(!valueSubtitleConfigsSubtitleConfig["DstLanguage"].isNull())
			subtitleConfigsObject.dstLanguage = valueSubtitleConfigsSubtitleConfig["DstLanguage"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["SrcLanguage"].isNull())
			subtitleConfigsObject.srcLanguage = valueSubtitleConfigsSubtitleConfig["SrcLanguage"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["FontColor"].isNull())
			subtitleConfigsObject.fontColor = valueSubtitleConfigsSubtitleConfig["FontColor"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["FontName"].isNull())
			subtitleConfigsObject.fontName = valueSubtitleConfigsSubtitleConfig["FontName"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["ShowSourceLan"].isNull())
			subtitleConfigsObject.showSourceLan = std::stoi(valueSubtitleConfigsSubtitleConfig["ShowSourceLan"].asString());
		if(!valueSubtitleConfigsSubtitleConfig["MaxLines"].isNull())
			subtitleConfigsObject.maxLines = std::stoi(valueSubtitleConfigsSubtitleConfig["MaxLines"].asString());
		if(!valueSubtitleConfigsSubtitleConfig["WordPerline"].isNull())
			subtitleConfigsObject.wordPerline = std::stoi(valueSubtitleConfigsSubtitleConfig["WordPerline"].asString());
		if(!valueSubtitleConfigsSubtitleConfig["BgColor"].isNull())
			subtitleConfigsObject.bgColor = valueSubtitleConfigsSubtitleConfig["BgColor"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["BgWidthNormalized"].isNull())
			subtitleConfigsObject.bgWidthNormalized = std::stof(valueSubtitleConfigsSubtitleConfig["BgWidthNormalized"].asString());
		if(!valueSubtitleConfigsSubtitleConfig["BorderWidthNormalized"].isNull())
			subtitleConfigsObject.borderWidthNormalized = std::stof(valueSubtitleConfigsSubtitleConfig["BorderWidthNormalized"].asString());
		if(!valueSubtitleConfigsSubtitleConfig["Width"].isNull())
			subtitleConfigsObject.width = valueSubtitleConfigsSubtitleConfig["Width"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["Height"].isNull())
			subtitleConfigsObject.height = valueSubtitleConfigsSubtitleConfig["Height"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["SubtitleName"].isNull())
			subtitleConfigsObject.subtitleName = valueSubtitleConfigsSubtitleConfig["SubtitleName"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["SubtitleId"].isNull())
			subtitleConfigsObject.subtitleId = valueSubtitleConfigsSubtitleConfig["SubtitleId"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["FontSizeNormalized"].isNull())
			subtitleConfigsObject.fontSizeNormalized = valueSubtitleConfigsSubtitleConfig["FontSizeNormalized"].asString();
		if(!valueSubtitleConfigsSubtitleConfig["Description"].isNull())
			subtitleConfigsObject.description = valueSubtitleConfigsSubtitleConfig["Description"].asString();
		auto allPositionNormalized = value["PositionNormalized"]["Position"];
		for (auto value : allPositionNormalized)
			subtitleConfigsObject.positionNormalized.push_back(value.asString());
		auto allRulesRefer = value["RulesRefer"]["RulesId"];
		for (auto value : allRulesRefer)
			subtitleConfigsObject.rulesRefer.push_back(value.asString());
		subtitleConfigs_.push_back(subtitleConfigsObject);
	}

}

std::vector<DescribeLiveAISubtitleResult::SubtitleConfig> DescribeLiveAISubtitleResult::getSubtitleConfigs()const
{
	return subtitleConfigs_;
}

