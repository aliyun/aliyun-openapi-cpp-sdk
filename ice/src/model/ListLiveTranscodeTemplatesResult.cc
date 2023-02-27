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

#include <alibabacloud/ice/model/ListLiveTranscodeTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveTranscodeTemplatesResult::ListLiveTranscodeTemplatesResult() :
	ServiceResult()
{}

ListLiveTranscodeTemplatesResult::ListLiveTranscodeTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveTranscodeTemplatesResult::~ListLiveTranscodeTemplatesResult()
{}

void ListLiveTranscodeTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateContentListNode = value["TemplateContentList"]["templateContent"];
	for (auto valueTemplateContentListtemplateContent : allTemplateContentListNode)
	{
		TemplateContent templateContentListObject;
		if(!valueTemplateContentListtemplateContent["Name"].isNull())
			templateContentListObject.name = valueTemplateContentListtemplateContent["Name"].asString();
		if(!valueTemplateContentListtemplateContent["TemplateId"].isNull())
			templateContentListObject.templateId = valueTemplateContentListtemplateContent["TemplateId"].asString();
		if(!valueTemplateContentListtemplateContent["Type"].isNull())
			templateContentListObject.type = valueTemplateContentListtemplateContent["Type"].asString();
		if(!valueTemplateContentListtemplateContent["Category"].isNull())
			templateContentListObject.category = valueTemplateContentListtemplateContent["Category"].asString();
		if(!valueTemplateContentListtemplateContent["CreateTime"].isNull())
			templateContentListObject.createTime = valueTemplateContentListtemplateContent["CreateTime"].asString();
		auto templateConfigNode = value["TemplateConfig"];
		auto videoParamsNode = templateConfigNode["VideoParams"];
		if(!videoParamsNode["Codec"].isNull())
			templateContentListObject.templateConfig.videoParams.codec = videoParamsNode["Codec"].asString();
		if(!videoParamsNode["Height"].isNull())
			templateContentListObject.templateConfig.videoParams.height = videoParamsNode["Height"].asString();
		if(!videoParamsNode["Width"].isNull())
			templateContentListObject.templateConfig.videoParams.width = videoParamsNode["Width"].asString();
		if(!videoParamsNode["Fps"].isNull())
			templateContentListObject.templateConfig.videoParams.fps = videoParamsNode["Fps"].asString();
		if(!videoParamsNode["Bitrate"].isNull())
			templateContentListObject.templateConfig.videoParams.bitrate = videoParamsNode["Bitrate"].asString();
		if(!videoParamsNode["Gop"].isNull())
			templateContentListObject.templateConfig.videoParams.gop = videoParamsNode["Gop"].asString();
		if(!videoParamsNode["Profile"].isNull())
			templateContentListObject.templateConfig.videoParams.profile = videoParamsNode["Profile"].asString();
		auto audioParamsNode = templateConfigNode["AudioParams"];
		if(!audioParamsNode["Codec"].isNull())
			templateContentListObject.templateConfig.audioParams.codec = audioParamsNode["Codec"].asString();
		if(!audioParamsNode["Bitrate"].isNull())
			templateContentListObject.templateConfig.audioParams.bitrate = audioParamsNode["Bitrate"].asString();
		if(!audioParamsNode["Samplerate"].isNull())
			templateContentListObject.templateConfig.audioParams.samplerate = audioParamsNode["Samplerate"].asString();
		if(!audioParamsNode["Channels"].isNull())
			templateContentListObject.templateConfig.audioParams.channels = audioParamsNode["Channels"].asString();
		if(!audioParamsNode["Profile"].isNull())
			templateContentListObject.templateConfig.audioParams.profile = audioParamsNode["Profile"].asString();
		templateContentList_.push_back(templateContentListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListLiveTranscodeTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListLiveTranscodeTemplatesResult::TemplateContent> ListLiveTranscodeTemplatesResult::getTemplateContentList()const
{
	return templateContentList_;
}

