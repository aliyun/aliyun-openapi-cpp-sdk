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

#include <alibabacloud/live/model/DescribeLiveAIStudioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveAIStudioResult::DescribeLiveAIStudioResult() :
	ServiceResult()
{}

DescribeLiveAIStudioResult::DescribeLiveAIStudioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveAIStudioResult::~DescribeLiveAIStudioResult()
{}

void DescribeLiveAIStudioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStudioConfigsNode = value["StudioConfigs"]["SubtitleConfig"];
	for (auto valueStudioConfigsSubtitleConfig : allStudioConfigsNode)
	{
		SubtitleConfig studioConfigsObject;
		if(!valueStudioConfigsSubtitleConfig["MediaType"].isNull())
			studioConfigsObject.mediaType = valueStudioConfigsSubtitleConfig["MediaType"].asString();
		if(!valueStudioConfigsSubtitleConfig["MediaLayout"].isNull())
			studioConfigsObject.mediaLayout = valueStudioConfigsSubtitleConfig["MediaLayout"].asString();
		if(!valueStudioConfigsSubtitleConfig["MediaResourceUrl"].isNull())
			studioConfigsObject.mediaResourceUrl = valueStudioConfigsSubtitleConfig["MediaResourceUrl"].asString();
		if(!valueStudioConfigsSubtitleConfig["MediaResourceId"].isNull())
			studioConfigsObject.mediaResourceId = valueStudioConfigsSubtitleConfig["MediaResourceId"].asString();
		if(!valueStudioConfigsSubtitleConfig["BackgroundType"].isNull())
			studioConfigsObject.backgroundType = valueStudioConfigsSubtitleConfig["BackgroundType"].asString();
		if(!valueStudioConfigsSubtitleConfig["BackgroundResourceUrl"].isNull())
			studioConfigsObject.backgroundResourceUrl = valueStudioConfigsSubtitleConfig["BackgroundResourceUrl"].asString();
		if(!valueStudioConfigsSubtitleConfig["BackgroundResourceId"].isNull())
			studioConfigsObject.backgroundResourceId = valueStudioConfigsSubtitleConfig["BackgroundResourceId"].asString();
		if(!valueStudioConfigsSubtitleConfig["Description"].isNull())
			studioConfigsObject.description = valueStudioConfigsSubtitleConfig["Description"].asString();
		if(!valueStudioConfigsSubtitleConfig["TemplateId"].isNull())
			studioConfigsObject.templateId = valueStudioConfigsSubtitleConfig["TemplateId"].asString();
		if(!valueStudioConfigsSubtitleConfig["TemplateName"].isNull())
			studioConfigsObject.templateName = valueStudioConfigsSubtitleConfig["TemplateName"].asString();
		if(!valueStudioConfigsSubtitleConfig["MattingLayout"].isNull())
			studioConfigsObject.mattingLayout = valueStudioConfigsSubtitleConfig["MattingLayout"].asString();
		if(!valueStudioConfigsSubtitleConfig["MattingType"].isNull())
			studioConfigsObject.mattingType = valueStudioConfigsSubtitleConfig["MattingType"].asString();
		if(!valueStudioConfigsSubtitleConfig["Height"].isNull())
			studioConfigsObject.height = valueStudioConfigsSubtitleConfig["Height"].asString();
		if(!valueStudioConfigsSubtitleConfig["Width"].isNull())
			studioConfigsObject.width = valueStudioConfigsSubtitleConfig["Width"].asString();
		auto allRuleIds = value["RuleIds"]["ruleId"];
		for (auto value : allRuleIds)
			studioConfigsObject.ruleIds.push_back(value.asString());
		studioConfigs_.push_back(studioConfigsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeLiveAIStudioResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveAIStudioResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLiveAIStudioResult::SubtitleConfig> DescribeLiveAIStudioResult::getStudioConfigs()const
{
	return studioConfigs_;
}

int DescribeLiveAIStudioResult::getTotal()const
{
	return total_;
}

